//---------------------------------------------------------------------------------
//--- HC Root menu ----------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCGroupRootMenu
{
	access = ReadAndWrite;
	contexsensitive = true;
	title = ;
	atomic = false;
	vocabulary = "";
	class Items
	{
		/// 1 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty1 // Empty space if nothing else is displayed
		{
			title = $STR_rscmenu.hpprscgrouprootmenu_items_empty1;
			shortcuts[] = {0};
			command = "";
			//show = "HCIsLeader * (1 - HCCursorOnIconEnemy) * ((1 - CursorOnEmptyVehicle) + IsWatchCommanded)";
			show = "HCIsLeader * (1 - HCCursorOnIconEnemy)";
			enable = "0";
			speechId = 0;
		};
		class EmptyBlank1: Empty1
		{
			title = "";
			show = "(1 - HCIsLeader)";
			enable = "0";
		};
/*
		class GetIn
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_GetIn0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "['GET IN',_target,_is3D,hcselected player] call BIS_HC_path_menu";
			};
			show = "HCIsLeader * CursorOnEmptyVehicle * (1 - IsWatchCommanded) * (1 - HCCursorOnIconEnemy)";
			enable = "HCNotEmpty";
			speechId = 0;
			cursorTexture = ProcTextTransparent;
		};
*/
		class Attack
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Attack0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_1};
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "['ATTACK',_pos,_is3D,hcselected player] call BIS_HC_path_menu";
				//expression = "BIS_temp = ['ATTACK',_pos,_is3D] spawn (bis_hc_mainscope getvariable 'GUI_CLICK_MENU'); BIS_temp = nil;";
			};
			show = "HCIsLeader * HCCursorOnIconEnemy";
			enable = "HCNotEmpty";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\icon_attack_ca.paa"; - should be defined in project specific config
			priority = 2;
		};

		/// 2 ///////////////////////////////////////////////////////////////////////////////////////////
		class EmptyBlank2: Empty1
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Move0;
			show = "(1 - HCIsLeader) + (HCIsLeader * (1 - CursorOnGround)) + (HCCursorOnIconSelectable)";
			enable = "0";
		};
		class Move
		{
			title = $STR_hc_menu_wpset;
			shortcuts[] = {0};
			//command = CMD_MOVE_AUTO;
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "['MOVE',_pos,_is3D,hcselected player,false] call BIS_HC_path_menu";
			};
			show = "HCIsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1 - HCCursorOnIconSelectable) * (1 - IsSelectedToAdd)";
			enable = "HCNotEmpty";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_tactical_ca.paa"; - should be defined in project specific config
			priority = 1;
		};
		class MoveAdd
		{
			title = $STR_hc_menu_wpadd;
			shortcuts[] = {0};
			//command = CMD_MOVE_AUTO;
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "['MOVE',_pos,_is3D,hcselected player,true] call BIS_HC_path_menu";
			};
			show = "HCIsLeader * CursorOnGround * (1 - IsWatchCommanded) * (1 - HCCursorOnIconSelectable) * IsSelectedToAdd";
			enable = "HCNotEmpty";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_tactical_ca.paa"; - should be defined in project specific config
			priority = 2;
		};
		class Watch
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Watch0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_2};
			command = CMD_WATCH_CTX;
			show = "HCIsLeader * CursorOnGround * IsWatchCommanded";
			enable = "HCNotEmpty";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_igui_scroll_ca.paa"; - should be defined in project specific config
			priority = 2;
		};

		/// 3 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty3: Empty1
		{
			title = $STR_hc_menu_moveempty;
			show = "(HCIsLeader)";
		};

		/// 4 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty4: Empty1
		{
			title = $STR_hc_menu_fireempty;
			show = "(HCIsLeader)";
		};

		class Separator
		{
			title = "";
			shortcuts[] = {0};
			command = CMD_SEPARATOR;
		};

		/// 5 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty5: Empty1
		{
			title = $STR_hc_menu_empty5;
			show = "(HCIsLeader)";
		};

		/// 6 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty6: Empty1
		{
			title = $STR_hc_menu_empty6;
			show = "(HCIsLeader)";
		};

		/// 7 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty7: Empty1
		{
			title = $STR_hc_menu_empty7;
			show = "HCIsLeader * (1 - HCCursorOnIconSelectable) * (1 - HCCursorOnIconSelectableSelected)";
		};
		class EmptyBlank7: Empty1
		{
			title = "";
			show = "(1 - HCIsLeader)";
		};
		class Select // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Selectset0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_9};
			command = CMD_HC_SELECT_AUTO;
			show = "HCIsLeader * HCCursorOnIconSelectable * (1 - IsSelectedToAdd)";
			enable = "1";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_select_unit_ca.paa"; - should be defined in project specific config
			priority = 2;
		};
		class SelectAdd // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Select0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_9};
			command = CMD_HC_SELECT_AUTO_ADD;
			show = "HCIsLeader * HCCursorOnIconSelectable * (1 - HCCursorOnIconSelectableSelected) * IsSelectedToAdd";
			enable = "1";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_select_unit_ca.paa"; - should be defined in project specific config
			priority = 2;
		};
		class Deselect // when pointing to unit
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Deselect0; // TODO: move to stringtable
			shortcuts[] = {0};
			//shortcuts[] = {DIK_9};
			command = CMD_HC_DESELECT_AUTO;
			show = "HCIsLeader * HCCursorOnIconSelectable * (HCCursorOnIconSelectableSelected) * IsSelectedToAdd";
			enable = "1";
			speechId = 0;
			cursorTexture = ProcTextTransparent; //"\A3\ui_f\data\cursor_select_unit_ca.paa"; - should be defined in project specific config
			priority = 2;
		};
		/// 8 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty8: Empty1
		{
			title = "";
			command = CMD_SEPARATOR;
			show = "1 - (HCIsLeader) * (1 - (HCIsLeader * (1 - HCCanSelectUnitFromBar) * (1 - HCCanDeselectUnitFromBar) * (1 - HCCanSelectTeamFromBar) * (1 - HCCanDeselectTeamFromBar)))";
		};
		class SelectUnitFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectUnitFromBar0; // TODO: move to stringtable
			shortcuts[] = {0, KEY_XBOX_Y};
			//shortcuts[] = {DIK_0, KEY_XBOX_Y};
			command = CMD_SELECT_UNIT_FROM_BAR;
			show = "IsXbox * HCCanSelectUnitFromBar";
			enable = "HCNotEmpty";
			speechId = 0;
			priority = 3;
		};

		class DeselectUnitFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_DeselectUnitFromBar0; // TODO: move to stringtable
			shortcuts[] = {0, KEY_XBOX_Y};
			//shortcuts[] = {DIK_0, KEY_XBOX_Y};
			command = CMD_DESELECT_UNIT_FROM_BAR;
			show = "IsXbox * HCCanDeselectUnitFromBar";
			enable = "HCNotEmpty";
			speechId = 0;
			priority = 3;
		};

		class SelectTeamFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_SelectTeamFromBar0; // TODO: move to stringtable
			shortcuts[] = {0, KEY_XBOX_Y};
			//shortcuts[] = {DIK_0, KEY_XBOX_Y};
			command = CMD_SELECT_TEAM_FROM_BAR;
			show = "IsXbox * HCCanSelectTeamFromBar";
			enable = "HCNotEmpty";
			speechId = 0;
			priority = 3;
		};

		class DeselectTeamFromBar
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_DeselectTeamFromBar0; // TODO: move to stringtable
			shortcuts[] = {0, KEY_XBOX_Y};
			//shortcuts[] = {DIK_0, KEY_XBOX_Y};
			command = CMD_DESELECT_TEAM_FROM_BAR;
			show = "IsXbox * HCCanDeselectTeamFromBar";
			enable = "HCNotEmpty";
			speechId = 0;
			priority = 3;
		};

		/// 9 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty9: Empty1
		{
			title = "";
			show = "1";
		};

		/// 10 ///////////////////////////////////////////////////////////////////////////////////////////
		class Empty10: Empty1
		{
			title = "";
			show = "1";
		};

		/// 11 ///////////////////////////////////////////////////////////////////////////////////////////

		class Reply
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Communication0; // TODO: move to stringtable
			shortcuts[] = {0};			
			menu = #User:BIS_MENU_GroupCommunication;
			show = "1";
			enable = "1";
			speechId = 0;
		};

	};
};


//---------------------------------------------------------------------------------
//--- HC Complex command ----------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCMainMenu
{
	access = 0;
	title = $STR_hc_hc;
	atomic = 0;
	vocabulary = "";
	class Items
	{
		class Move
		{
			title = $STR_MOVE;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			menu = RscHCMoveHigh;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class Target
		{
			title = $STR_WATCH_TARGET;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			menu = #USER:HC_Targets_0;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};		
		class Engage
		{
			title = $STR_WATCH;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			menu = RscHCWatchDir;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class Speed
		{
			title = $STR_HC_MENU_SPEED;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			menu = RscHCSpeedMode;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};		
		class Mission
		{
			title = $STR_HC_MENU_MISSION;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			menu = #USER:HC_Missions_0;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};

		class Action
		{
			title = $STR_ACTION;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			menu = #USER:HC_Custom_0;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};

		class CombatMode
		{
			title = $STR_COMBAT_MODE;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			menu = RscHCCombatMode;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class Formations
		{
			title = $STR_FORMATION;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			menu = RscHCFormations;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class Team
		{
			title = $STR_TEAM;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			menu = RscHCTeam;
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class Reply
		{
			title = $STR_REPLY;
			//title = $STR_HC_MENU_SITREP;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			menu = RscHCReply;
			speechId = 0;
/*
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'SITREP' call BIS_HC_path_menu";
			};
*/
		};
/*
		class UAV
		{
			title = $STR_A3_RscHCMainMenu_Items_UAV0;
			shortcuts[] = {};
			menu = RscHCUAV;
			show = "InUAVTerminal";
			enable = "HCNotEmpty";
			speechId = 0;
		};
 */
		class Back
		{
			title = "";
			shortcuts[] = {BACK};
			command = CMD_BACK;
			speechId = 0;
		};
	};
};


//---------------------------------------------------------------------------------
//--- HC Move ---------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCMoveHigh
{
	title = $STR_MOVE;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class Items
	{
		class NextWP
		{
			title = $STR_HC_MENU_NEXTWP;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'NEXTWP' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class CancelWP
		{
			title = $STR_HC_MENU_CANCELLASTWP;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'CANCELWP' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};
		class CancelAllWPs
		{
			title = $STR_HC_MENU_CANCELALLWP;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'CANCELALLWP' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
			speechId = 0;
		};

		class Back
		{
			title = "";
			shortcuts[] = {BACK};
			command = CMD_BACK;
			speechId = 0;
		};
	};
};


//---------------------------------------------------------------------------------
//--- HC Engage -------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWatchDir	
{
	title = $STR_WATCH;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class OpenFire
		{
			title = $STR_OPEN_FIRE;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'OPENFIRE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class HoldFire
		{
			title = $STR_HOLD_FIRE;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'HOLDFIRE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
	};
};


//---------------------------------------------------------------------------------
//--- HC Combat mode --------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCCombatMode	
{
	title = $STR_COMBAT_MODE;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Stealth
		{
			title = $STR_STEALTH;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'COMBAT_STEALTH' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Combat
		{
			title = $STR_COMBAT;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'COMBAT_DANGER' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Aware
		{
			title = $STR_AWARE;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'COMBAT_AWARE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Safe
		{
			title = $STR_SAFE;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'COMBAT_SAFE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
	};
};


//---------------------------------------------------------------------------------
//--- HC Speed mode ------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCSpeedMode	
{
	title = $STR_hc_menu_speed;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Limited
		{
			title = $STR_SPEED_LIMITED;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'SPEED_LIMITED' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Normal
		{
			title = $STR_SPEED_NORMAL;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'SPEED_NORMAL' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Full
		{
			title = $STR_SPEED_FULL;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'SPEED_FULL' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
	};
};


//---------------------------------------------------------------------------------
//--- HC Formations ---------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCFormations
{
	title = $STR_FORMATION;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Column
		{
			title = $STR_COLUMN;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'COLUMN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class ColumnStag
		{
			title = $STR_STAGGERED;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'STAG COLUMN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Wedge
		{
			title = $STR_WEDGE;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WEDGE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class EchelonL
		{
			title = $STR_ECHL;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'ECH LEFT' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class EchelonR
		{
			title = $STR_ECHR;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'ECH RIGHT' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Vee
		{
			title = $STR_VEE;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'VEE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Line
		{
			title = $STR_LINE;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'LINE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class ColumnCompact
		{
			title = $STR_FILE;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'FILE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};
		class Delta
		{
			title = $STR_DIAMOND;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'DIAMOND' call BIS_HC_path_menu";
			};
			show = "";
			enable = "HCNotEmpty";
		};

	};
};


//---------------------------------------------------------------------------------
//--- HC Team ---------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCTeam
{
	title = $STR_ASSIGN;
	vocabulary = "";
	class items
	{
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
};

class RscHCSelectTeam
{
	title = $STR_TEAM;
	vocabulary = "";
	class items
	{
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
};


//---------------------------------------------------------------------------------
//--- HC Reply --------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCReply
{
	title = $STR_REPLY;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class SITREP
		{
			title = $STR_HC_MENU_SITREP;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			show = "HCIsLeader";
			enable = "HCNotEmpty";
			speechId = 0;
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'SITREP' call BIS_HC_path_menu";
			};
		};
		class Communication
		{
			title = $STR_rscMenu.hppRscGroupRootMenu_Items_Communication0; // TODO: move to stringtable
			shortcuts[] = {DIK_8};			
			shortcutsAction = "CommandingMenu8";
			menu = #User:BIS_MENU_GroupCommunication;
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
};



//---------------------------------------------------------------------------------
//--- HC UAV ----------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCUAV
{
	title = $STR_A3_RscHCUAV0;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class Items
	{
		class UAVDriver
		{
			title = $STR_A3_RscHCUAV_Items_UAVDriver0;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				expression = "switchToUAV [hcselected player, 'DRIVER']";
			};
			show = "";
			enable = "HCNotEmpty * UAVHasDriver";
			speechId = 0;
		};
		class UAVGunner
		{
			title = $STR_A3_RscHCUAV_Items_UAVGunner0;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				expression = "switchToUAV [hcselected player, 'GUNNER']";
			};
			show = "";
			enable = "HCNotEmpty * UAVHasGunner";
			speechId = 0;
		};
		class UAVWatch
		{
			title = $STR_A3_RscHCUAV_Items_UAVWatch0;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				expression = "switchToUAV [hcselected player, 'WATCH']";
			};
			show = "";
			enable = "HCNotEmpty * UAVHasDriver";
			speechId = 0;
		};

		class Back
		{
			title = "";
			shortcuts[] = {BACK};
			command = CMD_BACK;
			speechId = 0;
		};
	};
};








//---------------------------------------------------------------------------------
//--- HC Waypoint Root menu -------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPRootMenu
{
	access = ReadAndWrite;
	title = ;
	atomic = false;
	vocabulary = "";
	class Items
	{
		class Type
		{
			title = $STR_DISP_ARCSENS_TYPE;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			menu = RscHCWPType;
			show = "";
			enable = "";
			speechId = 0;
		};
		class CombatMode
		{
			title = $STR_COMBAT_MODE;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			menu = RscHCWPCombatMode;
			show = "";
			enable = "";
			speechId = 0;
		};
		class Formations
		{
			title = $STR_FORMATION;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			menu = RscHCWPFormations;
			show = "";
			enable = "";
			speechId = 0;
		};
		class Speed
		{
			title = $STR_HC_MENU_SPEED;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			menu = RscHCWPSpeedMode;
			show = "";
			enable = "";
			speechId = 0;
		};
		class Wait
		{
			title = $STR_DISP_ARCWP_TIMEOUT;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			menu = RscHCWPWait;
			show = "";
			enable = "";
			speechId = 0;
		};
		class WaitUntil
		{
			title = $STR_HC_MENU_WAITUNTIL;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			menu = #USER:HCWPWaitUntil;
			show = "";
			enable = "";
			speechId = 0;
		};
		class WaitRadio
		{
			title = $STR_RADIO;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			menu = #USER:HCWPWaitRadio;
			show = "";
			enable = "";
			speechId = 0;
		};
		class Separator1
		{
			title = "";
			shortcuts[] = {0};
			command = CMD_SEPARATOR;
		};
		class CreateTask
		{
			title = $STR_HC_MENU_CREATETASK;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_CREATETASK' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
			speechId = 0;
		};
		class Separator2
		{
			title = "";
			shortcuts[] = {0};
			command = CMD_SEPARATOR;
		};
		class CancelWP
		{
			title = $STR_HC_MENU_CANCELWP;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_CANCELWP' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
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

//---------------------------------------------------------------------------------
//--- HC WP Type ------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPType
{
	title = $STR_DISP_ARCSENS_TYPE;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Move
		{
			title = $STR_AC_MOVE;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_MOVE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Cycle
		{
			title = $STR_AC_CYCLE;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_CYCLE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class SAD
		{
			title = $STR_AC_SEEKANDDESTROY;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_SAD' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Guard
		{
			title = $STR_AC_GUARD;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_GUARD' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Separator1
		{
			title = "";
			shortcuts[] = {0};
			command = CMD_SEPARATOR;
		};
		class Unload
		{
			title = $STR_AC_UNLOAD;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_UNLOAD' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Load
		{
			title = $STR_AC_LOAD;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_LOAD' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Separator2
		{
			title = "";
			shortcuts[] = {0};
			command = CMD_SEPARATOR;
		};
		class GetOut
		{
			title = $STR_AC_GETOUT;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_GETOUT' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class GetIn
		{
			title = $STR_AC_GETIN;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_TYPE_GETIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
	};
};

//---------------------------------------------------------------------------------
//--- HC WP Combat mode -----------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPCombatMode	
{
	title = $STR_COMBAT_MODE;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Stealth
		{
			title = $STR_STEALTH;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COMBAT_STEALTH' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Combat
		{
			title = $STR_COMBAT;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COMBAT_DANGER' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Aware
		{
			title = $STR_AWARE;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COMBAT_AWARE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Safe
		{
			title = $STR_SAFE;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COMBAT_SAFE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Unchanged
		{
			title = $STR_COMBAT_UNCHANGED;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COMBAT_UNCHANGED' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
	};
};

//---------------------------------------------------------------------------------
//--- HC WP Formations ------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPFormations
{
	title = $STR_FORMATION;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Column
		{
			title = $STR_COLUMN;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_COLUMN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class ColumnStag
		{
			title = $STR_STAGGERED;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_STAG COLUMN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Wedge
		{
			title = $STR_WEDGE;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WEDGE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class EchelonL
		{
			title = $STR_ECHL;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_ECH LEFT' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class EchelonR
		{
			title = $STR_ECHR;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_ECH RIGHT' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Vee
		{
			title = $STR_VEE;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_VEE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Line
		{
			title = $STR_LINE;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_LINE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class ColumnCompact
		{
			title = $STR_FILE;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_FILE' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Delta
		{
			title = $STR_DIAMOND;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_DIAMOND' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Unchanged
		{
			title = $STR_COMBAT_UNCHANGED;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_UNCHANGED' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
	};
};

//---------------------------------------------------------------------------------
//--- HC WP Speed mode ------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPSpeedMode	
{
	title = $STR_hc_menu_speed;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class Limited
		{
			title = $STR_SPEED_LIMITED;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_SPEED_LIMITED' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Normal
		{
			title = $STR_SPEED_NORMAL;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_SPEED_NORMAL' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Full
		{
			title = $STR_SPEED_FULL;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_SPEED_FULL' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class Unchanged
		{
			title = $STR_SPEED_UNCHANGED;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_SPEED_UNCHANGED' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
	};
};

//---------------------------------------------------------------------------------
//--- HC WP Wait ------------------------------------------------------------------
//---------------------------------------------------------------------------------
class RscHCWPWait
{
	title = $STR_DISP_ARCWP_TIMEOUT;
	access = 0;
	atomic = 0;
	vocabulary = "";
	class items
	{
		class NoWait
		{
			title = $STR_HC_MENU_NOWAIT;
			shortcuts[] = {DIK_1};
			shortcutsAction = "CommandingMenu1";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_NO' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 1min
		{
			title = $STR_hc_menu_wpwait1;
			shortcuts[] = {DIK_2};
			shortcutsAction = "CommandingMenu2";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_1MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 5min
		{
			title = $STR_hc_menu_wpwait5;
			shortcuts[] = {DIK_3};
			shortcutsAction = "CommandingMenu3";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_5MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 10min
		{
			title = $STR_hc_menu_wpwait10;
			shortcuts[] = {DIK_4};
			shortcutsAction = "CommandingMenu4";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_10MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 15min
		{
			title = $STR_hc_menu_wpwait15;
			shortcuts[] = {DIK_5};
			shortcutsAction = "CommandingMenu5";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_15MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 20min
		{
			title = $STR_hc_menu_wpwait20;
			shortcuts[] = {DIK_6};
			shortcutsAction = "CommandingMenu6";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_20MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 25min
		{
			title = $STR_hc_menu_wpwait25;
			shortcuts[] = {DIK_7};
			shortcutsAction = "CommandingMenu7";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_25MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 30min
		{
			title = $STR_hc_menu_wpwait30;
			shortcuts[] = {DIK_8};
			shortcutsAction = "CommandingMenu8";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_30MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 45min
		{
			title = $STR_hc_menu_wpwait45;
			shortcuts[] = {DIK_9};
			shortcutsAction = "CommandingMenu9";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_45MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
		class 60min
		{
			title = $STR_hc_menu_wpwait60;
			shortcuts[] = {DIK_0};
			shortcutsAction = "CommandingMenu0";
			command = CMD_EXECUTE;
			class Params
			{
				//expression = "'WP_WAIT_60MIN' call BIS_HC_path_menu";
			};
			show = "";
			enable = "";
		};
	};
};
