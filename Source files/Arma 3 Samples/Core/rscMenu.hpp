class RscGroupRootMenu
{
	access = ReadAndWrite;
	title = ;
	atomic = false;
	vocabulary = "";
	contexsensitive = true;
	class Items
	{
/*
		delete Empty1;
		delete EmptyBlank1;
		delete Surpress;
		delete GetIn;
		delete GetInCurrent;
		delete GetOut;
		delete Attack;
		delete Heal;
		delete FirstAid;
		delete CancelTarget;
		delete Copy;
*/

		/// 1 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty1 // Empty space if nothing else is displayed
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty1;
			shortcuts[] = {0};
			command = "";
			show = "(IsLeader * (1 - IsAlone)) * ((IsLeader * (1 - CursorOnVehicleCanGetIn) * ((1 - PlayerVehicleCanGetIn) + (1 - NotEmptySoldiers)) * (1 - CursorOnEnemy) * (1-EnemyTargeted) * (1 - SelectedArtillery) * (1 - NotEmptyInVehicle) * (1 - IsWatchCommanded) * (1 - SomeSelectedHaveTarget) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)) + (IsLeader * CursorOnGround * SomeSelectedHaveTarget) + (1 - IsLeader))";
			enable = "0";
			speechId = 0;
		};
		class EmptyBlank1 // Empty space if nothing else is displayed
		{
			title = "";
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = "";
			show = "(1 - IsLeader) * IsAlone * (1 - CursorOnGround)";//"(1 - IsLeader) * ((1 - CursorOnVehicleCanGetIn) * (1 - CursorOnEnemy) * (1 - SelectedArtillery) * (1 - NotEmptyInVehicle) * (1 - IsWatchCommanded) * (1 - SomeSelectedHaveTarget) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair))) + ((1 - IsLeader) * IsAlone * (1 - CursorOnGround) ))";
			enable = "0";
			speechId = 0;
		};
		class Surpress
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Suppress; 
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = "CMD_SUPPRESS";
			show = "IsLeader * (IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class GetIn
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_GetIn0; 
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_GETIN_AUTO;
			show = "IsLeader * ((NotEmptySoldiers) * (CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
    class UseContainerMagazine
    {
      title = $STR_ACTION_ACTIVATE_MINE;
      shortcuts[] = { 0 };
      //shortcuts[] = {DIK_1};
      command = CMD_USE_CONTAINER_MAGAZINE;
      show = "IsLeader * ((NotEmptySoldiers) * (CursorOnUsableContainerMagazine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
      enable = "NotEmpty";
      speechId = 0;
    };
    class ActivateMine
    {
      title = $STR_ACTION_ACTIVATE_MINE;
      shortcuts[] = { 0 };
      //shortcuts[] = {DIK_1};
      command = CMD_ACTIVATE_MINE;
      show = "IsLeader * ((NotEmptySoldiers) * (CursorOnInactiveMine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
      enable = "NotEmpty";
      speechId = 0;
    };
		class DisableMine
		{
		  title = $STR_A3_RscGroupRootMenu_Items_DisableMine0; 
		  shortcuts[] = {0};
		  //shortcuts[] = {DIK_1};
		  command = CMD_DISABLE_MINE;
		  show = "IsLeader * ((NotEmptySoldiers) * (CursorOnActiveMine) * (SelectedCanDisableMine) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
		  enable = "NotEmpty";
		  speechId = 0;
		};
		class GetInCurrent
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_GetIn1; 
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_GETIN_AUTO;
			show = "IsLeader * ((NotEmptySoldiers) * (PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
 			speechId = 0;
		};
		class GetOut
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_GetOut0; 
			shortcuts[] = {0};
			command = CMD_GETOUT;
			show = "IsLeader * ((1 - NotEmptySoldiers) + (NotEmptyInVehicle)) * ((1 - NotEmptySoldiers) + ((1 - CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn))) * (NotEmptySoldiers + NotEmptyInVehicle) * (1 - CursorOnEnemy) * (1 - SelectedArtillery) * (1 - IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Attack
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Attack0; //o TODO: move to stringtable
			shortcuts[] = {0};
			command = CMD_ATTACK_AUTO;
			show = "IsLeader * CursorOnEnemy*(1-CursorOnEnemyTargeted)*(1-CursorOnEnemyEngaged) * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Engage
		{
			title = $STR_engage_now;
			shortcuts[] = {0};
			command = CMD_ENGAGE_AUTO;
			show = "IsLeader * CursorOnEnemyTargeted * EnemyTargeted * (1-EnemyEngaged) * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Fire
		{
			title = $STR_fire; // $STR_state_fire seems to be the same as $STR_fire
			shortcuts[] = {0};
			command = CMD_FIRE_AUTO;
			show = "IsLeader * CursorOnEnemyEngaged * EnemyEngaged * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};

/*		class FireAtPosition
		{
			title = $STR_fire_at_position; 
			shortcuts[] = {0};
			command = CMD_FIRE_AT_POSITION_AUTO;
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded)";
			enable = "NotEmpty";
			speechId = 0;
		};*/
		class FireArtilery
		{
			title = $STR_A3_RscGroupRootMenu_Items_FireArtilery0; //TODO: move to stringtable
			shortcuts[] = {0};
			menu = #ARTILLERY;
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded)";
			enable = "NotEmpty";
			class Params
			{
				artillerySavePos = true;
				itemsCmd = CMD_NOTHING;
				itemSubmenu = "RscBurst";
				itemCursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
			};
			cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
			speechId = 0;
		};
		class FireArtileryAgain
		{
			title = $STR_A3_RscGroupRootMenu_Items_FireArtileryAgain0; //o TODO: move to stringtable
			shortcuts[] = {0};
			command = CMD_FIRE_AT_POSITION_AMMO;
			show = "IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded) * NoEmptyLastArtilleryAmmo";
			enable = "NotEmpty";
			speechId = 0;
			cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
			class Params
			{
				itemsCmd = CMD_NOTHING;
				artillerySavePos = true;
			};
		};

		class Heal
		{
			title = $STR_A3_RscGroupRootMenu_Items_Heal0; 
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_HEAL;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedHeal * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class HealSelf
		{
			title = $STR_A3_RscGroupRootMenu_Items_HealSelf0;
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_HEAL_SELF;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedHealSelf * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class PatchSoldier
		{
			title = $STR_A3_RscGroupRootMenu_Items_PatchSoldier0; 
			shortcuts[] = {0};
			command = CMD_HEALBLEEDING;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnHealBleeding * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Carry
		{
			title = "Carry"; 
			shortcuts[] = {0};
			command = CMD_CARRY;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnCarry * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class DropCarried
		{
			title = "Drop Carried"; 
			shortcuts[] = {0};
			command = CMD_DROP_CARRIED;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnDropCarried * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
    class PutIn
    {
      title = "Load in Vehicle";
      shortcuts[] = {0};
      //shortcuts[] = {DIK_1};
      command = CMD_PUTIN;
      show = "IsLeader * ((NotEmptySoldiers) * (CursorOnPutInVehicle) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
      enable = "NotEmpty";
      speechId = 0;
    };
    class UnLoadFrom
    {
      title = "Unload from Vehicle";
        shortcuts[] = {0};
      //shortcuts[] = {DIK_1};
      command = CMD_UNLOADFROM;
      show = "IsLeader * ((NotEmptySoldiers) * (CursorOnUnloadFromVehicle) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
      enable = "NotEmpty";
      speechId = 0;
    };
		class RepairVehicle
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_repair_vehiclel0; 
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_REPAIR_VEHICLE;
			show = "IsLeader * ((NotEmptySoldiers) * CursorOnNeedRepair * (1 - IsWatchCommanded))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class CancelTarget
		{
			title = $STR_watch_auto; 
			shortcuts[] = {0};
			command = CMD_NOTARGET;
			show = "IsLeader * (1 - CursorOnGround) * SomeSelectedHaveTarget * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Copy //--- Subordinates only
		{
			title = $STR_REPLY_COPY;
			shortcuts[] = {0};
			command = CMD_REPLY_COPY;
			show = "(1 - IsLeader) * (1 - IsAlone)";
			enable = "CanAnswer";
		};

		class OpenParachute
		{
			title = $STR_A3_RscGroupRootMenu_Items_OpenParachute0; 
			shortcuts[] = {0};
			command = CMD_OPENPARACHUTE;
			show = "IsLeader * CursorOnOpenParachute * (1 - IsWatchCommanded)" ;
			enable = "NotEmpty";
			speechId = 0;
		};


/*
		class MarkPos //--- Alone only
		{
			title = $STR_A3_RscGroupRootMenu_Items_MarkPos0;
			shortcuts[] = {0};
			command = CMD_EXECUTE;
			class Params
			{
				expression = "if (!isnil 'BIS_3dmarker') then {terminate BIS_3dmarker}; BIS_3dmarker = _pos execvm 'marker.sqf'";
			};
			show = "IsSelectedToAdd * CursorOnGround * (1 - IsWatchCommanded)";
			enable = "1";
			speechId = 0;
			cursorTexture = "\A3\ui\data\icon_attack_ca.paa";
		};
*/


		/// 2 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty2: Empty1
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Move0;
			show = "IsLeader * (1 - CursorOnGround) * (IsWatchCommanded)";
		};

		class EmptyBlank2: Empty1
		{
			title = "";
			show = "IsAlone";
		};
		class Move
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Move0; 
			shortcuts[] = {0};
			command = CMD_MOVE_AUTO;
			show = "IsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1-(IsRopeEmpty * CursorOnHookable))";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Watch
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Watch0; 
			shortcuts[] = {0};
			command = CMD_WATCH_CTX;
			show = "IsLeader * CursorOnGround * IsWatchCommanded";
			enable = "NotEmpty";
			speechId = 0;
		};
		class NextWP
		{
			title = $STR_NEXT_WAYPOINT;
			shortcuts[] = {0};
			command = CMD_NEXT_WAYPOINT;
			//show = "IsLeader + VehicleCommander";
			show = "IsLeader * (1 - CursorOnGround) * (1 - IsWatchCommanded)";
			enable = "NotEmpty + CommandsToPilot";
			speechId = 0;
		};

		class HookCargo
		{
			title = $STR_RSCMENU.HPPRSCGROUPROOTMENU_ITEMS_HOOKCARGO0;
			shortcuts[] = {0};
			command = CMD_HOOK_CARGO;
			show = "IsLeader * IsHelicopterPilotSelected * IsRopeEmpty * CursorOnHookable";
			enable = "NotEmpty";
			speechId = 0;
		};

    class VehicleInVehicleGetIn
    {
      title = $STR_A3_ACTION_LOAD_VEHICLE;
      shortcuts[] = { 0 };
      command = CMD_VIV_GETIN;
      show = "IsLeader * CanTransportTargetVehicle * IsDriverSelected";
      enable = "NotEmpty";
      speechId = 0;
    };

    class VehicleInVehicleGetOut
    {
      title = $STR_A3_ACTION_DROP_VEHICLE;
      shortcuts[] = { 0 };
      command = CMD_VIV_GETOUT;
      show = "IsLeader * (IsLoadedInsideVehicle + HasSomeVehicleInside) * (1 - IsLandContact) * IsDriverSelected";
      enable = "NotEmpty";
      speechId = 0;
    };

    class VehicleInVehicleUnload
    {
      title = $STR_A3_ACTION_UNLOAD_VEHICLE;
      shortcuts[] = { 0 };
      command = CMD_VIV_UNLOAD;
      show = "IsLeader * CursorOnGround * (IsLoadedInsideVehicle + HasSomeVehicleInside) * IsDriverSelected";
      enable = "NotEmpty";
      speechId = 0;
    };

		//Hook player's vehicle if cursor is not on hookable object
		class HookCargoCurrent
		{
			title = $STR_RSCMENU.HPPRSCGROUPROOTMENU_ITEMS_HOOKCARGO0;
			shortcuts[] = {0};
			command = CMD_HOOK_CARGO;
			show = "IsLeader * IsHelicopterPilotSelected * IsRopeEmpty * PlayerVehicleIsHookable * (1-CursorOnHookable)";
			enable = "NotEmpty";
			speechId = 0;
		};

		class Repeat //--- Subordinates only
		{
			title = $STR_REPLY_REPEAT;
			shortcuts[] = {0};
			command = CMD_REPLY_REPEAT;
			show = "(1 - IsLeader) * (1 - IsAlone)";
			enable = "CanAnswer";
		};

		/// 3 ///////////////////////////////////////////////////////////////////////////////////////////
		class EmptyBlank3: Empty1
		{
			title = "";
			show = "IsAlone";
		};
		class UnhookCargo
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_UnhookCargo0;
			shortcuts[] = {0};
			command = CMD_UNHOOK_CARGO;
			show = "IsLeader * CursorOnGround * IsHelicopterPilotSelected * (1 - IsRopeEmpty)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Regroup
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Regroup0; 
			shortcuts[] = {0};
			command = CMD_JOIN;
			show = "IsLeader * NotEmptySubgroups * (NotEmptySoldiers + NotEmptyInVehicle)";
			enable = "1";
			speechId = 0;
		};
		class Stop
		{
			title = $STR_STOP; 
			shortcuts[] = {0};
			command = CMD_STOP;
			show = "IsLeader * (1 - NotEmptySubgroups) * (NotEmptySoldiers + NotEmptyInVehicle)";
			enable = "1";
			speechId = 0;
		};
		class FormationDiamond
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_FormationDiamond0; 
			shortcuts[] = {0};
			command = CMD_FORM_DIAMOND;
			show = "IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * FormationLine";
			enable = "1";
			speechId = 0;
		};
		class FormationLine
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_FormationLine0; 
			shortcuts[] = {0};
			command = CMD_FORM_LINE;
			show = "IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * (1 - FormationLine)";
			enable = "1";
			speechId = 0;
		};
		class Done //--- Subordinates only
		{
			title = $STR_REPLY_DONE;
			shortcuts[] = {0};
			command = CMD_REPLY_DONE;
			show = "(1 - IsLeader) * (1 - IsAlone)";
			enable = "CanAnswer";
		};

		/// 4 ///////////////////////////////////////////////////////////////////////////////////////////

		class EmptyBlank4: Empty1
		{
			title = "";
			show = "IsAlone";
		};
		class OpenFire
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_OpenFire0; 
			shortcuts[] = {0, KEY_XBOX_X, KEY_XBOX_X};
			command = CMD_OPEN_FIRE;
			show = "IsLeader * SomeSelectedHoldingFire";
			enable = "NotEmpty";
			speechId = 0;
		};
		class HoldFire
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_HoldFire0; 
			shortcuts[] = {0, KEY_XBOX_X};
			command = CMD_HOLD_FIRE;
			show = "IsLeader * (1 - SomeSelectedHoldingFire)";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Fail //--- Subordinates only
		{
			title = $STR_REPLY_FAIL;
			shortcuts[] = {0};
			command = CMD_REPLY_FAIL;
			show = "(1 - IsLeader) * (1 - IsAlone)";
			enable = "CanAnswer";
		};

		class Separator
		{
			title = "";
			shortcuts[] = {0};
			//command = CMD_SEPARATOR;
			show = "(1 - IsAlone)";
			enable = "0";
		};

		/// 5 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty5: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty5;
			show = " (IsLeader * (1 - CursorOnGroupMember))";
		};
		class EmptyBlank5: Empty1
		{
			title = "";
			show = "IsAlone";
		};

		class JoinAuto // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_JoinAuto0; 
			shortcuts[] = {0};
			command = CMD_JOIN_AUTO;
			show = "IsLeader * CursorOnGroupMember * (CursorOnNotEmptySubgroups)";
			enable = "1";
			speechId = 0;
		};
		class StopAuto // when pointing to unit
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_stopauto0; 
			shortcuts[] = {0};
			command = CMD_STOP_AUTO;
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnNotEmptySubgroups)";
			enable = "1";
			speechId = 0;
		};
		class OneLess //--- Subordinates only
		{
			title = $STR_REPLY_ONE_LESS;
			shortcuts[] = {0};
			command = CMD_REPLY_ONE_LESS;
			show = "(1 - IsLeader) * (1 - IsAlone)";
		};

		/// 6 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty6: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty6;
			show = "(IsLeader * (1 - CursorOnGroupMember))";
		};
		class EmptyBlank6: Empty1
		{
			title = "";
			show = "IsAlone";
		};

		class OpenFireAuto // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_OpenFireAuto0; 
			shortcuts[] = {0};
			command = CMD_OPEN_FIRE_AUTO;
			show = "IsLeader * CursorOnGroupMember * CursorOnHoldingFire";
			enable = "1";
			speechId = 0;
		};
		class HoldFireAuto // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_HoldFireAuto0; 
			shortcuts[] = {0};
			command = CMD_HOLD_FIRE_AUTO;
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnHoldingFire)";
			enable = "1";
			speechId = 0;
		};
		class WhereAreYou //--- Subordinates only
		{
			title = $STR_REPLY_WHERE_ARE_YOU;
			shortcuts[] = {0};
			command = CMD_REPLY_WHERE_ARE_YOU;
			show = "(1 - IsLeader) * (1 - IsAlone)";
		};

		/// 7 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty7: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty7;
			show = "(IsLeader * (1 - CursorOnGroupMember) * (1 - CursorOnGroupMemberSelected))";
		};
		class EmptyBlank7: Empty1
		{
			title = "";
			show = "IsAlone";
		};
		class Select // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectSet0;
			shortcuts[] = {0};
			command = CMD_SELECT_AUTO;
			show = "IsLeader * CursorOnGroupMember * (1 - IsSelectedToAdd)";
			enable = "1";
			speechId = 0;
		};
		class SelectAdd // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Select0;
			shortcuts[] = {0};
			command = CMD_SELECT_AUTO_ADD;
			show = "IsLeader * CursorOnGroupMember * (1 - CursorOnGroupMemberSelected) * IsSelectedToAdd";
			enable = "1";
			speechId = 0;
		};
		class Deselect // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Deselect0;
			shortcuts[] = {0};
			command = CMD_DESELECT_AUTO;
			show = "IsLeader * (CursorOnGroupMemberSelected) * IsSelectedToAdd";
			enable = "1";
			speechId = 0;
		};
		class UserRadio //--- Subordinates only
		{
			title = $STR_RADIO_CUSTOM;
			shortcuts[] = {0};
			menu = #CUSTOM_RADIO;
			show = "(1 - IsLeader) * (1 - IsAlone)";
		};

		/// 8 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty9: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty9;
			show = "(IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
		};
		class EmptyBlank9: Empty1
		{
			title = "";
			//command = CMD_SEPARATOR;
			show = "(1 - IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
			enable = "0";
		};
		class SelectUnitFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectUnitFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_SELECT_UNIT_FROM_BAR;
			show = "IsXbox * CanSelectUnitFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};
		class DeselectUnitFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_DeselectUnitFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_DESELECT_UNIT_FROM_BAR;
			show = "IsXbox * CanDeselectUnitFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};
		class SelectVehicleFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectVehicleFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_SELECT_VEHICLE_FROM_BAR;
			show = "IsXbox * CanSelectVehicleFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};
		class DeselectVehicleFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_DeselectVehicleFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_DESELECT_VEHICLE_FROM_BAR;
			show = "IsXbox * CanDeselectVehicleFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};
		class SelectTeamFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectTeamFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_SELECT_TEAM_FROM_BAR;
			show = "IsXbox * CanSelectTeamFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};
		class DeselectTeamFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_DeselectTeamFromBar0; 
			shortcuts[] = {0, KEY_XBOX_Y};
			command = CMD_DESELECT_TEAM_FROM_BAR;
			show = "IsXbox * CanDeselectTeamFromBar";
			enable = "NotEmpty";
			speechId = 0;
		};

		/// 9 ///////////////////////////////////////////////////////////////////////////////////////////
/*
		class Empty8: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty8;
			show = "(isTeamSwitch) * ((IsAlone * (1 - PlayableLeader)) + (IsLeader * (1 - PlayableSelected)) + (IsAlone))";
		};
*/
		class EmptyBlank8: Empty1
		{
			title = "";
			//show = "(1 - isTeamSwitch) * ((IsAlone * (1 - PlayableLeader)) + (IsLeader * (1 - PlayableSelected)) + (IsAlone))";
			show = "IsAlone";
		};
		class SwitchToLeader
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SwitchToLeader0; 
			shortcuts[] = {0};
			command = CMD_SWITCH_TO_LEADER;
			show = "(1 - IsLeader) * (1 - IsAlone) * PlayableLeader";
			enable = "1";
			speechId = 0;
		};
		class SwitchToSelected
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SwitchToSelected0; 
			shortcuts[] = {0};
			command = CMD_SWITCH_TO_SELECTED;
			show = "IsLeader * PlayableSelected";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Team
		{
			title = $STR_TEAM;
			shortcuts[] = {0};
			menu = RscTeam;
			show = "IsLeader * (1 - PlayableSelected)";
			speechId = 0;
		};

		/// 10 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty10: Empty1
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty0;
			show = "(1 - FuelLow) * (1 - AmmoLow) * (1 - Injured)";
		};

		class Injured
		{
			title = $STR_REPLY_INJURED;
			shortcuts[] = {0};
			command = CMD_REPLY_INJURED;
			show = "Injured";
		};
		class AmmoLow
		{
			title = $STR_REPLY_AMMO_LOW;
			shortcuts[] = {0};
			command = CMD_REPLY_AMMO_LOW;
			show = "AmmoLow * (1 - Injured)";
		};
		class FuelLow
		{
			title = $STR_REPLY_FUEL_LOW;
			shortcuts[] = {0};
			command = CMD_REPLY_FUEL_LOW;
			show = "FuelLow * (1 - AmmoLow) * (1 - Injured)";
		};


		/// 11 ///////////////////////////////////////////////////////////////////////////////////////////
		class Communication
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Communication0; 
			shortcuts[] = {0};			
			menu = #User:BIS_MENU_GroupCommunication;
			show = "1";
			enable = "1";
			speechId = 0;
		};
	};
};

class RscMainMenu
{
	access = ReadAndWrite;
	title = $STR_COMMAND;
	atomic = false;
	vocabulary = "";
	class Items
	{
		class Move
		{
			title = $STR_MOVE;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			menu = RscMoveHigh;
			show = "IsLeader + VehicleCommander";
			enable = "NotEmpty + CommandsToPilot";
			speechId = 0;
		};
		class Target
		{
			title = $STR_WATCH_TARGET;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			menu = #WATCH;
			show = "IsLeader + VehicleCommander";
			enable = "NotEmpty + CommandsToGunner";
			speechId = 0;
		};		
		class Engage
		{
			title = $STR_WATCH;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			menu = RscWatchDir;
			show = "IsLeader + VehicleCommander";
			enable = "NotEmpty + CommandsToGunner";
			speechId = 0;
		};		
		class GetIn
		{
			title = $STR_GETIN;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			menu = #GET_IN;
			show = "IsLeader";
			enable = "NotEmpty";
			speechId = 0;
		};
		class Status
		{
			title = $STR_STATUS;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			menu = RscStatus;
			speechId = 0;
		};
		class Action
		{
			title = $STR_ACTION;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			menu = #ACTION;
			show = "IsLeader";
			enable = "AreActions";
			speechId = 0;
		};
		class CombatMode
		{
			title = $STR_COMBAT_MODE;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			menu = RscCombatMode;
			show = "(IsLeader + VehicleCommander)*(1-CursorOnSwimmingCommands)";
			enable = "NotEmpty + CommandsToGunner";
			speechId = 0;
		};
		class Formations
		{
			title = $STR_FORMATION;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			menu = RscFormations;
			show = "IsLeader";
			speechId = 0;
		};
		class Team
		{
			title = $STR_TEAM;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			menu = RscTeam;
			show = "IsLeader";
			speechId = 0;
		};
		class Reply
		{
			title = $STR_REPLY;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			menu = RscReply;
			speechId = 0;
		};
		class Back
		{
			title = "";
			shortcuts[] = {DIK_BACK};
			  shortcutsAction = "NavigateMenu";
			command = CMD_BACK;
			speechId = 0;
		};
	};
};

class RscSubmenu
{
	access = ReadAndWrite;
	atomic=false;
	class Separator
	{
		title = "";
		shortcuts[] = { 0};
		command = CMD_SEPARATOR;
	};
	class SeparatorUnderWater
	{
		title = "";
		shortcuts[] = { 0};
		command = CMD_SEPARATOR;
		show = "CursorOnSwimmingCommands" ;
	};
	class Back
	{
		title = "";
		shortcuts[] = {DIK_BACK};
			shortcutsAction = "NavigateMenu";
		command = CMD_BACK;
		speechId = 0;
	};
};

class RscMoveHigh: RscSubmenu
{
	title = $STR_MOVE;
	vocabulary = "";
	items[] =
	{
		Join, Separator, 
		Advance,StayBack,
		FlankLeft,
		FlankRight,Separator,
		//Other,
		Stop,SeparatorUnderWater,Ascend,AscendRelative,KeepDepthLeader,Descend,DescendRelative,Expect,Hide,Separator, NextWP,
		Back
	};
	class Join
	{
		title = $STR_FOLLOW_ME;
		shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
		command = CMD_JOIN;
		show = "IsLeader + VehicleCommander";
		enable = "NotEmpty + CommandsToPilot";
		speechId = 0;
	};
	class Advance
	{
		title = $STR_ADVANCE;
		shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
		command = CMD_ADVANCE;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class StayBack
	{
		title = $STR_STAY_BACK;
		shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
		command = CMD_STAY_BACK;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class FlankLeft
	{
		title = $STR_FLANK_LEFT;
		shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
		command = CMD_FLANK_LEFT;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class FlankRight
	{
		title = $STR_FLANK_RIGHT;
		shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
		command = CMD_FLANK_RIGHT;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Stop
	{
		title = $STR_STOP;
		shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
		command = CMD_STOP;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class Ascend
	{
		title = $STR_A3_RscMoveHigh_Ascend0; 
		shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
		command = CMD_KEEP_DEPTH_ABOVESURFACE;
		show = "IsLeader * CursorOnSwimmingCommands" ;
		enable = "NotEmpty";
		speechId = 0;
	};

  class AscendRelative
  {
    title = $STR_A3_RscMoveHigh_AscendRelative0; 
    shortcuts[] = {0};
    command = CMD_KEEP_DEPTH_RELATIVE_UP;
    show = "IsLeader * CursorOnSwimmingCommands * IsOutsideLeaderVehicle" ;
    enable = "NotEmpty";
    speechId = 0;
  };

  class KeepDepthLeader
  {
    title = $STR_A3_RscMoveHigh_KeepDepthLeader0; 
    shortcuts[] = {0};
    command = CMD_KEEP_DEPTH_LEADER;
    show = "IsLeader * CursorOnSwimmingCommands * IsOutsideLeaderVehicle" ;
    enable = "NotEmpty";
    speechId = 0;
  };

	class Descend
	{
		title = $STR_A3_RscMoveHigh_Descend0; 
		shortcuts[] = {0};
		command = CMD_KEEP_DEPTH_BOTTOM;
		show = "IsLeader * CursorOnSwimmingCommands" ;
		enable = "NotEmpty";
		speechId = 0;
	};

  class DescendRelative
  {
    title = $STR_A3_RscMoveHigh_DescendRelative0; 
    shortcuts[] = {0};
    command = CMD_KEEP_DEPTH_RELATIVE_DOWN;
    show = "IsLeader * CursorOnSwimmingCommands  * IsOutsideLeaderVehicle" ;
    enable = "NotEmpty";
    speechId = 0;
  };
	
	class Expect
	{
		title = $STR_EXPECT;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_EXPECT;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		enable = "NotEmpty";
	};
	class Hide
	{
		title = $STR_HIDE;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		command = CMD_HIDE;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		enable = "NotEmpty";
	};
	class NextWP
	{
		title = $STR_NEXT_WAYPOINT;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		command = CMD_NEXT_WAYPOINT;
		show = "IsLeader + VehicleCommander";
		enable = "NotEmpty + CommandsToPilot";
		speechId = 0;
	};
	/*	class Other
	{
	title = $STR_MOVE_OTHER;
	shortcuts[] = {DIK_0};
	shortcutsAction = "CommandingMenu0";
	menu = RscMoveDir;
	show = "IsLeader";
	enable = "NotEmpty";
	};*/
};

class RscMoveDir: RscSubmenu
{
	atomic = true;
	title = $STR_MOVE_DIR;
	vocabulary = "";
	items[] = {N,NE,E,SE,S,SW,W,NW,Back};
	class N
	{
		title = $STR_MOVE_N;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		menu = RscMoveDist;
		class Params
		{
			dir = 0;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class NE
	{
		title = $STR_MOVE_NE;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		menu = RscMoveDist;
		class Params
		{
			dir = 45;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class E
	{
		title = $STR_MOVE_E;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		menu = RscMoveDist;
		class Params
		{
			dir = 90;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class SE
	{
		title = $STR_MOVE_SE;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		menu = RscMoveDist;
		class Params
		{
			dir = 135;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class S
	{
		title = $STR_MOVE_S;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		menu = RscMoveDist;
		class Params
		{
			dir = 180;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class SW
	{
		title = $STR_MOVE_SW;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		menu = RscMoveDist;
		class Params
		{
			dir = 225;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class W
	{
		title = $STR_MOVE_W;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		menu = RscMoveDist;
		class Params
		{
			dir = 270;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class NW
	{
		title = $STR_MOVE_NW;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		menu = RscMoveDist;
		class Params
		{
			dir = 315;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
};


class RscReply: RscSubmenu
{
	title = $STR_REPLY_MENU;
	vocabulary = "";
	items[] =
	{
		Done,Fail,
		FireReady,FireNotReady,
		Repeat,Copy,
		Separator,Communication,
		UserRadio,Radio,
		Back
	};
	class Done
	{
		title = $STR_REPLY_DONE;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_REPLY_DONE;
		enable = "CanAnswer";
	};
	class Fail
	{
		title = $STR_REPLY_FAIL;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_REPLY_FAIL;
		enable = "CanAnswer";
	};

	class FireReady
	{
		title = $STR_REPLY_FIREREADY;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_REPLY_FIREREADY;
	};
	class FireNotReady
	{
		title = $STR_REPLY_FIRENOTREADY;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_REPLY_FIRENOTREADY;
	};

	class Repeat
	{
		title = $STR_REPLY_REPEAT;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_REPLY_REPEAT;
		enable = "CanAnswer";
	};
	class Copy
	{
		title = $STR_REPLY_COPY;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_REPLY_COPY;
		enable = "CanAnswer";
	};

	class Separator
	{
		title = "";
		shortcuts[] = { 0};
		command = CMD_SEPARATOR;
	};

	class Communication
	{
		title = $STR_rscMenu.hppRscGroupRootMenu_Items_Communication0; 
		shortcuts[] = {DIK_8};			
		shortcutsAction = "CommandingMenu8";
		menu = #User:BIS_MENU_GroupCommunication;
		show = "1";
		enable = "1";
		speechId = 0;
	};

	class UserRadio
	{
		title = $STR_RADIO_CUSTOM;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		menu = #CUSTOM_RADIO;
	};
	class Radio
	{
		title = $STR_RADIO;
		shortcuts[] = {DIK_0};
		shortcutsAction = "CommandingMenu0";
		menu = RscRadio;
		enable = "HasRadio";
	};
};

class RscCallSupport: RscSubmenu
{
	title = $STR_SUPPORT_MENU;
	vocabulary = "";
	items[] =
	{
		Medic,Ambulance,Repair,Rearm,Refuel,
		Done,
		Back
	};

	class Medic
	{
		title = $STR_SUPPORT_MEDIC;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_SUPPORT_MEDIC;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
	class Ambulance
	{
		//$STR_SUPPORT_MEDIC;
		title = $STR_A3_RscCallSupport_Ambulance0;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_SUPPORT_AMBULANCE;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
	class Repair
	{
		title = $STR_SUPPORT_REPAIR;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_SUPPORT_REPAIR;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
	class Rearm
	{
		title = $STR_SUPPORT_REARM;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_SUPPORT_REARM;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
	class Refuel
	{
		title = $STR_SUPPORT_REFUEL;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_SUPPORT_REFUEL;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
	class Done
	{
		title = $STR_SUPPORT_DONE;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_SUPPORT_DONE;
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		speechId = 0;
	};
};

class RscStatus: RscSubmenu
{
	title = $STR_MENU_STATUS;
	vocabulary = "";
	items[] =
	{
		Support,
		FuelLow,AmmoLow,
		Injured,
		WhereAreYou, Report,
		UnderFire,OneLess,IsDown,OutOfFAKs,
		Back
	};


	class Support
	{
		title = $STR_CALL_SUPPORT;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		menu = RscCallSupport;
		show = "1-CursorOnSwimmingCommands";
		//show = "IsLeader";
	};
	class FuelLow
	{
		title = $STR_REPLY_FUEL_LOW;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_REPLY_FUEL_LOW;
	};
	class AmmoLow
	{
		title = $STR_REPLY_AMMO_LOW;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_REPLY_AMMO_LOW;
	};
	class Injured
	{
		title = $STR_REPLY_INJURED;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_REPLY_INJURED;
	};

	class WhereAreYou
	{
		title = $STR_REPLY_WHERE_ARE_YOU;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_REPLY_WHERE_ARE_YOU;
		show = "1 - IsLeader";
	};
	class Report
	{
		title = $STR_REPORT;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_REPORT;
		show = "IsLeader";
		enable = "NotEmpty";
	};

	class UnderFire
	{
		title = $STR_REPLY_UNDER_FIRE;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_REPLY_UNDER_FIRE;
	};

	class OneLess
	{
		title = $STR_REPLY_ONE_LESS;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_REPLY_ONE_LESS;
	};
	class IsDown
	{
		title = $STR_REPLY_KILLED;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		command = CMD_REPLY_KILLED;
		enable = "NotEmpty";
	};
	class OutOfFAKs
	{
		title = $STR_A3_RscStatus_OutOfFAKs0;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		command = CMD_REPLY_OUT_OF_FAKs;
		show = "CursorOnOutOfFak";
	};
};

class RscWatchDir: RscSubmenu
{
	title = $STR_WATCH;
	vocabulary = "";
	items[] =
	{
		OpenFire,HoldFire,Fire,
		Separator,
		Engage,EngageAtWill,Disengage,
		Separator,
		LookAround,WatchDir,
		Separator,
		Suppress,
		Back
	};

	class OpenFire
	{
		title = $STR_OPEN_FIRE;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_OPEN_FIRE;
		show = "IsLeader + VehicleCommander";
		enable = "NotEmpty + CommandsToGunner";
	};
	class HoldFire
	{
		title = $STR_HOLD_FIRE;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_HOLD_FIRE;
		show = "IsLeader + VehicleCommander";
		enable = "NotEmpty + CommandsToGunner";
	};
	class Fire
	{
		title = $STR_FIRE;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_FIRE;
		show = "IsLeader";
		enable = "NotEmpty";
	};

	class Engage
	{
		title = $STR_ENGAGE_NOW;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_ENGAGE;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class EngageAtWill
	{
		title = $STR_ENGAGE_AT_WILL;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_LOOSE_FORM;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Disengage
	{
		title = $STR_DISENGAGE;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_KEEP_FORM;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Auto
	{
		title = $STR_WATCH_AUTO;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_WATCH_AUTO;
		show = "IsLeader";
		enable = "NotEmpty";
	};

	class LookAround
	{
		title = $STR_LOOK_AROUND;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_WATCH_AROUND;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class WatchDir
	{
		title = $STR_WATCH_DIR;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		menu = RscWatchMoreDir;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};

	class Suppress
	{
		title = $STR_rscMenu.hppRscGroupRootMenu_Items_Suppress; 
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		command = "CMD_SUPPRESS";
		show = "IsLeader * (1-CursorOnSwimmingCommands)";
		enable = "NotEmpty";
		speechId = 0;
};
};

class RscWatchMoreDir: RscSubmenu
{
	title = $STR_WATCH_DIR;
	atomic=true;
	vocabulary = "";
	items[] = {N,NE,E,SE,S,SW,W,NW,Back};
	class N
	{
		title = $STR_MOVE_N;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 0;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class NE
	{
		title = $STR_MOVE_NE;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 45;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class E
	{
		title = $STR_MOVE_E;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 90;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class SE
	{
		title = $STR_MOVE_SE;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 135;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class S
	{
		title = $STR_MOVE_S;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 180;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class SW
	{
		title = $STR_MOVE_SW;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 225;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class W
	{
		title = $STR_MOVE_W;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 270;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class NW
	{
		title = $STR_MOVE_NW;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		command = CMD_WATCH_DIR;
		class Params
		{
			dir = 315;
		};
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
}

class RscMoveDist: RscSubmenu
{
	title = $STR_MOVE_DIST;
	vocabulary = "";
	items[] = {D50,D100,D200,D500,D1000,D2000,Back};
	class D50
	{
		title = $STR_MOVE_50;
		shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
		command = CMD_MOVE;
		class Params
		{
			dist = 50;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class D100
	{
		title = $STR_MOVE_100;
		shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
		command = CMD_MOVE;
		class Params
		{
			dist = 100;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class D200
	{
		title = $STR_MOVE_200;
		shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
		command = CMD_MOVE;
		class Params
		{
			dist = 200;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class D500
	{
		title = $STR_MOVE_500;
		shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
		command = CMD_MOVE;
		class Params
		{
			dist = 500;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class D1000
	{
		title = $STR_MOVE_1000;
		shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
		command = CMD_MOVE;
		class Params
		{
			dist = 1000;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class D2000
	{
		title = $STR_MOVE_2000;
		shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
		command = CMD_MOVE;
		class Params
		{
			dist = 2000;
		};
		show = "IsLeader";
		enable = "NotEmpty";
	};
};

class RscFormations: RscSubmenu
{
	title = $STR_FORMATION;
	vocabulary = "";
	items[] = {Column,Staggered,Wedge,EchL,EchR,Vee,Line,File,Diamond, Back};
	
	class Column
	{
		title = $STR_COLUMN;
		shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
		command = CMD_FORM_COLUMN;
		show = "IsLeader";
		speechId = 0;
	};
	class Staggered
	{
		title = $STR_STAGGERED;
		shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
		command = CMD_FORM_STAGCOL;
		show = "IsLeader";
	};
	class Wedge
	{
		title = $STR_WEDGE;
		shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
		command = CMD_FORM_WEDGE;
		show = "IsLeader";
		speechId = 0;
	};
	class EchL
	{
		title = $STR_ECHL;
		shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
		command = CMD_FORM_ECHLEFT;
		show = "IsLeader";
		speechId = 0;
	};
	class EchR
	{
		title = $STR_ECHR;
		shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
		command = CMD_FORM_ECHRIGHT;
		show = "IsLeader";
		speechId = 0;
	};
	class Vee
	{
		title = $STR_VEE;
		shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
		command = CMD_FORM_VEE;
		show = "IsLeader";
	};
	class Line
	{
		title = $STR_LINE;
		shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
		command = CMD_FORM_LINE;
		show = "IsLeader";
		speechId = 0;
	};
	class File
	{
		title = $STR_FILE;
		shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
		command = CMD_FORM_FILE;
		show = "IsLeader";
		speechId = 0;
	};
	class Diamond
	{
		title = $STR_DIAMOND;
		shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
		command = CMD_FORM_DIAMOND;
		show = "IsLeader";
		speechId = 0;
	};


};

class RscCombatMode: RscSubmenu
{
	title = $STR_COMBAT_MODE;
	vocabulary = "";
	items[] =
	{
		//OpenFire, HoldFire, Fire, Separator, EngageAtWill, Disengage,
		Stealth,Combat,Aware,Safe,
		Separator,PosUp,PosCrouch,PosDown,PosAuto,Back
	};
	/*	class OpenFire
	{
	title = $STR_OPEN_FIRE;
	shortcuts[] = {DIK_1};
	shortcutsAction = "CommandingMenu1";
	command = CMD_OPEN_FIRE;
	show = "IsLeader + VehicleCommander";
	enable = "NotEmpty + CommandsToGunner";
	speechId = 0;
	};
	class HoldFire
	{
	title = $STR_HOLD_FIRE;
	shortcuts[] = {DIK_2};
	shortcutsAction = "CommandingMenu2";
	command = CMD_HOLD_FIRE;
	show = "IsLeader + VehicleCommander";
	enable = "NotEmpty + CommandsToGunner";
	speechId = 0;
	};
	class Fire
	{
	title = $STR_FIRE;
	shortcuts[] = {DIK_3};
	shortcutsAction = "CommandingMenu3";
	command = CMD_FIRE;
	show = "IsLeader";
	enable = "NotEmpty";
	speechId = 0;
	};

	class EngageAtWill
	{
	title = $STR_ENGAGE_AT_WILL;
	shortcuts[] = {DIK_4};
	shortcutsAction = "CommandingMenu4";
	command = CMD_LOOSE_FORM;
	show = "IsLeader";
	enable = "NotEmpty";
	speechId = 0;
	};
	class Disengage
	{
	title = $STR_DISENGAGE;
	shortcuts[] = {DIK_5};
	shortcutsAction = "CommandingMenu5";
	command = CMD_KEEP_FORM;
	show = "IsLeader";
	enable = "NotEmpty";
	speechId = 0;
	};*/

	class Stealth
	{
		title = $STR_STEALTH;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_STEALTH;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Combat
	{
		title = $STR_COMBAT;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_COMBAT;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Aware
	{
		title = $STR_AWARE;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_AWARE;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class Safe
	{
		title = $STR_SAFE;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_SAFE;
		show = "IsLeader";
		enable = "NotEmpty";
	};
	class PosUp
	{
		title = $STR_POS_UP;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_POS_UP;
		show = "IsLeader*(1-CursorOnSwimmingCommands)";
		enable = "NotEmptySoldiers";
		speechId = 0;
	};
	class PosCrouch
	{
		title = $STR_POS_CROUCH;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_POS_MIDDLE;
		show = "IsLeader*(1-CursorOnSwimmingCommands)";
		enable = "NotEmptySoldiers";
		speechId = 0;
	};
	class PosDown
	{
		title = $STR_POS_DOWN;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		command = CMD_POS_DOWN;
		show = "IsLeader*(1-CursorOnSwimmingCommands)";
		enable = "NotEmptySoldiers";
		speechId = 0;
	};
	class PosAuto
	{
		title = $STR_POS_AUTO;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		command = CMD_POS_AUTO;
		show = "IsLeader*(1-CursorOnSwimmingCommands)";
		enable = "NotEmptySoldiers";
		speechId = 0;
	};
};

class RscBurst:	RscSubmenu
{
	title = $STR_A3_RscBurst0;
	vocabulary = "";
	contexsensitive = true;
	items[] = {Item1, Item2, Item3, Item4};
	class Item1
	{
		title = $STR_A3_RscBurst_Item10;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_FIRE_AT_POSITION_AMMO;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		class Params
		{
			artilleryBurst = 1;
		};
	};
	class Item2
	{
		title = "Burst 2";
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_FIRE_AT_POSITION_AMMO;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		class Params
		{
			artilleryBurst = 2;
		};
	};
	class Item3
	{
		title = "Burst 3";
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_FIRE_AT_POSITION_AMMO;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		class Params
		{
			artilleryBurst = 3;
		};
	};
	class Item4
	{
		title = "Burst 4";
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_FIRE_AT_POSITION_AMMO;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
		cursorTexture = "#(argb,8,8,3)color(0,0,0,0)";
		class Params
		{
			artilleryBurst = 4;
		};
	};
};

class RscTeam: RscSubmenu
{
	title = $STR_ASSIGN;
	vocabulary = "";
	items[] =
	{
		AssignRed,AssignGreen,AssignBlue,AssignYellow,AssignMain,
		Separator,SelectTeam,
		Back
	};
 class AssignRed
	{
		title = $STR_ASSIGN_RED;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_ASSIGN_RED;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class AssignGreen
	{
		title = $STR_ASSIGN_GREEN;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_ASSIGN_GREEN;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class AssignBlue
	{
		title = $STR_ASSIGN_BLUE;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_ASSIGN_BLUE;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class AssignYellow
	{
		title = $STR_ASSIGN_YELLOW;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_ASSIGN_YELLOW;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};
	class AssignMain
	{
		title = $STR_ASSIGN_MAIN;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_ASSIGN_MAIN;
		show = "IsLeader";
		enable = "NotEmpty";
		speechId = 0;
	};	
	class SelectTeam
	{
		title = $STR_TEAM;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		menu = RscSelectTeam;
		show = "IsLeader";
	};
};

class RscSelectTeam: RscSubmenu
{
	title = $STR_TEAM;
	vocabulary = "";
	items[] = {TeamRed,TeamGreen,TeamBlue,TeamYellow,TeamMain,Back};
	class TeamRed
	{
		title = $STR_TEAM_RED;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_TEAM_RED;
		show = "IsLeader";
		enable = "NotEmptyRedTeam";
	};
	class TeamGreen
	{
		title = $STR_TEAM_GREEN;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_TEAM_GREEN;
		show = "IsLeader";
		enable = "NotEmptyGreenTeam";
	};
	class TeamBlue
	{
		title = $STR_TEAM_BLUE;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_TEAM_BLUE;
		show = "IsLeader";
		enable = "NotEmptyBlueTeam";
	};
	class TeamYellow
	{
		title = $STR_TEAM_YELLOW;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_TEAM_YELLOW;
		show = "IsLeader";
		enable = "NotEmptyYellowTeam";
	};
	class TeamMain
	{
		title = $STR_TEAM_MAIN;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_TEAM_MAIN;
		show = "IsLeader";
		enable = "NotEmptyMainTeam";
	}; 
};

class RscRadio: RscSubmenu
{
	title = $STR_RADIO;
	vocabulary = "";
	items[] ={Alpha, Bravo, Charlie, Delta, Echo, Foxtrot, Golf, Hotel, India, Juliet, Back};
	class Alpha
	{
		title = $STR_RADIO_ALPHA;
		shortcuts[] = {DIK_1};
		shortcutsAction = "CommandingMenu1";
		command = CMD_RADIO_ALPHA;
		speechId = 0;
	};
	class Bravo
	{
		title = $STR_RADIO_BRAVO;
		shortcuts[] = {DIK_2};
		shortcutsAction = "CommandingMenu2";
		command = CMD_RADIO_BRAVO;
		speechId = 0;
	};
	class Charlie
	{
		title = $STR_RADIO_CHARLIE;
		shortcuts[] = {DIK_3};
		shortcutsAction = "CommandingMenu3";
		command = CMD_RADIO_CHARLIE;
		speechId = 0;
	};
	class Delta
	{
		title = $STR_RADIO_DELTA;
		shortcuts[] = {DIK_4};
		shortcutsAction = "CommandingMenu4";
		command = CMD_RADIO_DELTA;
		speechId = 0;
	};
	class Echo
	{
		title = $STR_RADIO_ECHO;
		shortcuts[] = {DIK_5};
		shortcutsAction = "CommandingMenu5";
		command = CMD_RADIO_ECHO;
		speechId = 0;
	};
	class Foxtrot
	{
		title = $STR_RADIO_FOXTROT;
		shortcuts[] = {DIK_6};
		shortcutsAction = "CommandingMenu6";
		command = CMD_RADIO_FOXTROT;
		speechId = 0;
	};
	class Golf
	{
		title = $STR_RADIO_GOLF;
		shortcuts[] = {DIK_7};
		shortcutsAction = "CommandingMenu7";
		command = CMD_RADIO_GOLF;
		speechId = 0;
	};
	class Hotel
	{
		title = $STR_RADIO_HOTEL;
		shortcuts[] = {DIK_8};
		shortcutsAction = "CommandingMenu8";
		command = CMD_RADIO_HOTEL;
		speechId = 0;
	};
	class India
	{
		title = $STR_RADIO_INDIA;
		shortcuts[] = {DIK_9};
		shortcutsAction = "CommandingMenu9";
		command = CMD_RADIO_INDIA;
		speechId = 0;
	};
	class Juliet
	{
		title = $STR_RADIO_JULIET;
		shortcuts[] = {DIK_0};
		shortcutsAction = "CommandingMenu0";
		command = CMD_RADIO_JULIET;
		speechId = 0;
	};
};


class RscMenuBasicLevel
{
	//used on Xbox only
	access = ReadAndWrite;
	title = $STR_COMMAND;
	atomic=false;
	vocabulary = "";
	items[] =
	{	};
};
