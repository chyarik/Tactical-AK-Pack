#include "basicdefines_A3.hpp"
#include "CfgPatches.hpp"

class CfgVehicles
{
	class Ship;
	class Ship_F: Ship
	{
		class ViewPilot;
		class AnimationSources;
		class Eventhandlers;
	};
	class Test_Boat_01_base_F: Ship_F
	{
		displayName	= "Test Boat";  /// displayed in Editor
		model		= "\Samples_f\Test_Boat_01\Test_Boat_01";/// simple path to model
		picture		= "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon in command bar
		Icon		= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map
		cost		= 20000; /// how likely is the enemy going to target this vehicle
		accuracy	= 0.50; /// knowledge required to recognize this type of target

		class HitPoints /// define the sturdiness of the ship
		{
			class HitEngine {armor = 1.2;	material = 60; name = "engine";		visual = ""; 		passThrough = 1; radius = 0.1;}; /// radius causes bigger damage but on a more precise hit
			class HitEngine1: HitEngine	{armor=0.2; material=-1; visual="";			passThrough=1; explosionSHielding=2; name="engine1"; convexComponent="engine1";};
			class HitEngine2: HitEngine1	{armor=0.2; material=-1; visual="";			passThrough=1; explosionSHielding=2; name="engine2"; convexComponent="engine2";};
			class HitHull 	{armor = 1; 	material = 50; name = "karoserie"; 	visual = "zbytek"; 	passThrough = 1; explosionShielding = 1;};
		};

		leftEngineEffect = "LEngEffectsSmall"; 	/// Particle effect class for engine particles
		rightEngineEffect = "REngEffectsSmall";

		simulation					= "shipx";  /// all ships should have this simulation
		maxSpeed					= 80;		/// top speed of the vehicle
		overSpeedBrakeCoef			= 0.8;		/// how much does the vehicle itself brake in case it goes faster than maxSpeed
		enginePower					= 235;		/// power of engine in kW
		engineShiftY				= 0.1;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
		waterLeakiness				= 1.0;		/// amount of litres per second that leaks into ship if under water, destroyed or turned upside down
		turnCoef 					= 0.25; 	/// how well is the ship able to turn
		thrustDelay 				= 2;		/// initial delay to cause lesser slip when on 1st gear - thrust goes from zero to full in this time
		waterLinearDampingCoefY 	= 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
		waterLinearDampingCoefX 	= 2.0;		/// affects sliding of the ship in turns
		waterAngularDampingCoef 	= 1.2;		/// increase this for smoother movement, but beware too high values
		waterResistanceCoef 		= 0.015;	/// how much does water slow the ship down
		rudderForceCoef				= 0.100000;	/// increase this to gain more turning on lower speeds
		rudderForceCoefAtMaxSpeed	= 0.003000;	/// increase this to gain more turning on higher speeds
		idleRpm = 200;							/// revolutions per minute at which the engine idles
		redRpm = 1200;							/// maximum revolutions per minute of the engine

		class complexGearbox
		{
			GearboxRatios[]    = {
				"R1",-0.782,
				"N",0,
				"D1",2.0,
				"D2",1.85,
				"D3",1.75
			};
			TransmissionRatios[] = {"High",1.0}; // Optional: defines transmission ratios (for example, High and Low range as commonly found in offroad vehicles)
			gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
			moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
			driveString        = "D"; // string to display in the HUD for forward gears.
			neutralString      = "N"; // string to display in the HUD for neutral gear.
			reverseString      = "R"; // string to display in the HUD for reverse gears.
		};

		brakeDistance	 = 3; /// how many internal waypoints should the AI plan braking in advance

		driverAction			 = driver_mid01; 	/// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		driverLeftHandAnimName 	 = "drivingWheel";  /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivingWheel";	/// according to what bone in model of car does hand move
		cargoAction[]			 = {passenger_low01};/// the same of all the crew
		cargoIsCoDriver[]		 = {false};			/// there is no special co-driver entry point on the boat
		ejectDeadDriver 		 = false;			/// use this if you don't have proper dead pose for the driver, it will eject him from boat if he dies
		transportSoldier		 = 2;				/// number of cargo except driver
		class TransportItems	/// some first aid kits in trunk according to safety regulations
		{
			item_xx(FirstAidKit,6);
		};

		armor = 10;						/// just some protection against missiles, collisions and explosions
		damageResistance = 0.00882;		/// for AI if it is worth to be shoot at

		class Turrets {};				/// this vehicle doesn't have any turret, we need to make the class empty

		#include "sounds.hpp"			/// sounds are included from separate file to not clutter the rest of file

		class Reflectors {};			/// there are no reflectors on this boat, check Test_Car_01 for some examples
		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = {
				"A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext.rvmat", 			/// material mapped in model
				"A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_destruct.rvmat"	/// changes to this one once damage of the part reaches 1
			};
		};

		extCameraPosition[]		 = {0,1.0,-8.0};			/// provides offset of external camera in {side, height, to front} format
		leftFastWaterEffect 	 = "LFastWaterEffects";		/// defines what class of water effect is going to be used while sailing fast
		rightFastWaterEffect 	 = "RFastWaterEffects";		/// defines what class of water effect is going to be used while sailing fast
		waterEffectSpeed 		 = 5;						/// limit of displaying the standard water effect
		engineEffectSpeed 		 = 5;						/// limit of displaying the engine effect
		waterFastEffectSpeed 	 = 28;						/// limit where the standard water effect changes to the fast sailing one
		class Eventhandlers: Eventhandlers	/// specific event handlers to handle variants - by default are all shown, event handlers hide them
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], nil] call bis_fnc_initVehicle;};"; // Run the VhC function to be sure to set the animation sources and textures accordingly to the properties animationList and textureList
			killed = "if (local (_this select 0)) then {[(_this select 0), nil, [], false] call bis_fnc_initVehicle;};"; // Run the VhC to set the animation sources but not the texture source "nil"
		};
		hiddenSelections[] 			 = {"camo", "camo2"}; 	/// we want to allow changing of colours, this defines on what selection are the textures used
		hiddenSelectionsTextures[]	 =
		{ /// and here are the textures, in the same order as the hidden selections
			"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_co.paa",
			"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_co.paa"
		};

		class AnimationSources: AnimationSources	/// hides all the proxies and beacons, to be sure
		{
			class Proxy	/// name of animation source in model.cfg
			{
				source		 = "user"; 	/// what is the animation source based on, this time it is user input
				animPeriod	 = 1;		/// how long does it take to switch from 0 to 1 (or vice versa) if used by script
				initPhase	 = 0;		/// what is the value of animation source to start with
			};

			class Beacons
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};

			class hidePolice
			{
				displayName = "Hide police light bar";
				source = "user";
				initPhase = 1;
				author = $STR_A3_Bohemia_Interactive;
			};
			class HideRescueSigns
			{
				displayName = "Hide rescue signs"; // name of the animation / element (displayed in the Virtual Garage)
				author = $STR_A3_Bohemia_Interactive; // Author of the animation source or proxy
				source = "user";
				initPhase = 1;
				forceAnimatePhase = 0; // if forceAnimatePhase is equal to the phase of this animation sources, every sources from forceAnimate will be changed with their given phase
				forceAnimate[] = {"HidePoliceSigns", 1};  // animationSource1, phase, animationSource2, phase... No probabilities here, only true or false
				onPhaseChanged = "if ((_this select 1) == 1) then {/* run if the phase is 1 */} else {/* run if the phase is 0 */};";// The following code is called by BIS_fnc_initVehicle each time the phase is changed
				// Note animation sources cannot impact the mass with sea vehicles, this is just as example
				mass = 0; // If the phase is 1, the given mass will be added, otherwise, it will be subtracted

			};
			class HidePoliceSigns
			{
				displayName = "Hide police signs";
				source = "user";
				initPhase = 1;
				author = $STR_A3_Bohemia_Interactive;
				forceAnimatePhase = 0;
				forceAnimate[] = {"HideRescueSigns", 1};
			};
		};

		// Please, have a look at the car sample for details about the textureSources
		class textureSources
		{
			class civilian
			{
				Displayname="Civil";
				author=$STR_A3_Bohemia_Interactive;
				textures[]=
				{
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_co.paa",
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class rescue: civilian
			{
				Displayname="Rescue";
				textures[]=
				{
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_rescue_co.paa",
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_rescue_co.paa"
				};
			};
			class police: civilian
			{
				Displayname="Police";
				textures[]=
				{
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_police_co.paa",
					"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_police_co.paa"
				};
			};
		};
	};

	class C_Test_Boat_01_F: Test_Boat_01_base_F
	{
		scope			 = public; 					/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator	 = 2;						// scope 2 means it's available in Zeus mode (0 means hidden)
		displayName		 = "My civilian test boat"; /// how does the vehicle show itself in editor
		side			 = 3;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			 = CIV_F;					/// defines the faction inside of the side
		crew			 = "Test_Soldier_F";		/// lets use the sample soldier we have as default captain of the boat
		textureList[]= {"civilian",1};
		animationList[]=
		{
			"HidePoliceSigns", 1,
			"HideRescueSigns", 1,
			"HidePolice", 1
		};
	};

	class C_Test_Boat_01_rescue_F: Test_Boat_01_base_F
	{
		scope			 = public;					/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator	 = 2;						// scope 2 means it's available in Zeus mode (0 means hidden)
		displayName		 = "My rescue test boat"; 	/// how does the vehicle show itself in editor
		side			 = 3;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			 = CIV_F;					/// defines the faction inside of the side
		crew			 = "Test_Soldier_F";		/// lets use the sample soldier we have as default captain of the boat

		class AnimationSources: AnimationSources	/// hides all the beacons, shows the proxies
		{
			class Proxy: Proxy 			/// needs to be inherited from the base to keep the values
			{
				initPhase	 = 1;		/// overrides just the value, rest stays as it is
			};
		};

		/// and the changes of textures to rescue ones
		textureList[]= {"rescue",1};
		animationList[]=
		{
			"HidePoliceSigns", 1,
			"HideRescueSigns", 0,
			"HidePolice", 1
		};
		hiddenSelectionsTextures[]	 = {"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_rescue_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_rescue_co.paa"}; // Must be kept as fail-safe in case of issue with the function

	};

	class C_Test_Boat_01_police_F: Test_Boat_01_base_F
	{
		scope			 = public;					/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator	 = 2;						// scope 2 means it's available in Zeus mode (0 means hidden)
		displayName		 = "My police test boat"; 	/// how does the vehicle show itself in editor
		side			 = 3;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			 = CIV_F;					/// defines the faction inside of the side
		crew			 = "Test_Soldier_F";		/// lets use the sample soldier we have as default captain of the boat

		/** It is technically possible to have side, faction and crew defined in base class, but it may cause some issues with identification of targets. */

		class AnimationSources: AnimationSources	/// hides all the beacons, shows the proxies
		{
			class Proxy: Proxy 			/// needs to be inherited from the base to keep the values
			{
				initPhase	 = 1;		/// overrides just the value, rest stays as it is
			};
		};

		class UserActions /// Adding possibility for user to switch the beacons on/off
		{
			class beacons_start
			{
				userActionID 		 = 50;								/// just some unique number
				displayName 		 = $STR_A3_CfgVehicles_beacons_on;	/// what is displayed in the action menu
				displayNameDefault 	 = $STR_A3_CfgVehicles_beacons_on;	/// what is displayed in middle of screen
				position			 = "mph_axis";						/// at what memory point of the ship is the used as center of the radius
				priority 			 = 1.5;								/// sorting of action menu
				radius				 = 1.8;								/// radius around position where the action is avaliable
				animPeriod			 = 2;								/// how long does the animation source take to go from 0 to 1
				onlyForPlayer		 = false;							/// it is usable even by AI
				condition			 = "this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this = = player"; /// at what condition is the action displayed
				statement			 = "this animate [""BeaconsStart"",1];"; /// and what happens when the action is used
			};

			class beacons_stop: beacons_start
			{
				userActionID 		 = 51;
				displayName 		 = $STR_A3_CfgVehicles_beacons_off;
				displayNameDefault 	 = $STR_A3_CfgVehicles_beacons_off;
				condition			 = "this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
				statement			 = "this animate [""BeaconsStart"",0];";
			};
		};
		textureList[]= {"police",1};
		animationList[]=
		{
			"HidePoliceSigns", 0,
			"HideRescueSigns", 1,
			"HidePolice", 0
		};
		/// and the changes of textures to police ones
		hiddenSelectionsTextures[]	 = {"\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_ext_police_co.paa", "\a3\boat_f_gamma\Boat_Civil_01\data\boat_civil_01_int_police_co.paa"};
	};
};
