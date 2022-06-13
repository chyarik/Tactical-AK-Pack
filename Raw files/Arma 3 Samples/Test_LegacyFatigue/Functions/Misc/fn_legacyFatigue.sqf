/*
	Author: Josef Zemanek

	Description:
	Legacy Fatigue Mod main function

	Parameter(s):
		_this: OBJECT - unit to apply fatigue to

	Returns:
	NOTHING
*/

// --- variables init

_defaultStamina = getNumber (configFile >> "CfgMovesFatigue" >> "staminaDuration");
_runCD = getNumber (configFile >> "CfgMovesFatigue" >> "staminaCooldown");
_exhaustionEnd = 10e10;

// --- init EH from config is not executed upon respawn, need to run it manually

if (isServer) then {
	if !(_this getVariable ["BIS_fatMod_EHAdded", FALSE]) then {
		_this setVariable ["BIS_fatMod_EHAdded", TRUE];
		_this addMPEventHandler ["MPRespawn", {(_this select 0) remoteExec ["Samples_fnc_legacyFatigue"]}];
	};
};

sleep 1;

while {TRUE} do {
	waitUntil {(local _this && vehicle _this == _this) || isNull _this || !alive _this};
	if (isNull _this || !alive _this) exitWith {};
	_this enableAimPrecision FALSE;
	_addedDrain = 0;
	while {local _this && alive _this && !isNull _this && vehicle _this == _this} do {
		_maxStamina = _defaultStamina - (_defaultStamina * load _this);
		_noSprintLim = _maxStamina / 2;		// --- sprint treshold
		_noRunLim = 0;				// --- run treshold
		_tmout = 0.5;
		if !(isPlayer _this) then {_tmout = 5 + random 5};	// --- longer timeout for AIs (performance tweak)

		// --- disable run / sprint based on stamina level

		if (getStamina _this <= _noRunLim) then {
			if !(isForcedWalk _this) then {
				_this forceWalk TRUE;
				_exhaustionEnd = time + _runCD;
				setStaminaScheme "Exhausted";
			};
		} else {
			if (isForcedWalk _this && time > _exhaustionEnd) then {
				_this forceWalk FALSE;
				setStaminaScheme "FastDrain";
			};
			if (getStamina _this <= _noSprintLim) then {
				if (isSprintAllowed _this) then {
					_this allowSprint FALSE;
					setStaminaScheme "FastDrain";
				};
			} else {
				if !(isSprintAllowed _this) then {
					_this allowSprint TRUE;
					setStaminaScheme "Default";
				};
			};
			if (getStamina _this > _noSprintLim) then {
			_this forceWalk FALSE;
			_this allowSprint TRUE;
			setStaminaScheme "Default";
			};
		};

		_prevPos = getPosASL _this;
		_prevStamina = (getStamina _this) - _addedDrain;
		if (_this getVariable ["BIS_fatigueSlowDrain", FALSE]) then {
			sleep _tmout;
		} else {
			waitUntil {!(_this getVariable ["BIS_fatigueSlowDrain", FALSE])};
		};
		sleep _tmout;
		if (!alive _this || isNull _this) exitWith {};
		_curPos = getPosASL _this;
		_curStamina = getStamina _this;
		_prevASL = _prevPos select 2;
		_staminaDiff = _prevStamina - _curStamina;
		if (_prevStamina <= 0) then {_staminaDiff = 0};

		// --- calculate & apply extended stamina drain based on terrain gradient

		if (_prevPos distance _curPos > 0.25) then {
			_curASL = _curPos select 2;
			_diffZ = _prevASL - _curASL;
			_grad = tan (_diffZ atan2 ([_prevPos, _curPos] call BIS_fnc_distance2D));
			if (_grad > -0.3 && _grad < 0.5 ) then {
				_addedDrain = abs (_staminaDiff * _grad);		// --- impact of terrain gradient below sprinting threshold
			} else {
				_addedDrain = abs (_staminaDiff * _grad * 2);	// --- impact of terrain gradient above sprinting threshold
			};
			if (isPlayer _this) then {
				_this setVariable ["BIS_fatigueSlowDrain", TRUE];
				_slowDrainScr = [_this, _addedDrain, _tmout] spawn {
					_unit = _this select 0;
					_drain = _this select 1;
					_tmout = ((_this select 2) * 0.9);
					_steps = 5;
					for [{_i = 0}, {_i < _drain}, {_i = _i + (_drain / _steps)}] do {
						_drainNow = (_drain / _steps);
						player setStamina ((getStamina player) - _drainNow);
						sleep (_tmout / _steps);
					};
				};
				_this setVariable ["BIS_fatigueSlowDrain", FALSE];
			} else {
				_this setStamina (_curStamina - _addedDrain);
			};
		};

		// --- slow down animations based on stamina level

		_animSpeedCoef = 0.6 + (0.4 * (_curStamina / _maxStamina));
		_maxSlowdown = getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> animationState player >> "relSpeedMin");
		if (_maxSlowdown > 0 && _maxSlowdown > _animSpeedCoef) then {_animSpeedCoef = _maxSlowdown};	// --- respect maximum slowdown of a given animation defined in config
		_this setAnimSpeedCoef _animSpeedCoef;

		// --- weapon sway

		_staminaPerc = _curStamina / _maxStamina;
		_stanceAimPrecision = getAnimAimPrecision player;
		_this setCustomAimCoef (5 - (_staminaPerc * 5) + _stanceAimPrecision);
	};
	if !(alive _this) exitWith {};
};