//Todo:
//Add back normal island select screen.

//Island selection screen. Shown when accessing the mission editor.
class RscDisplaySelectIsland: RscStandardDisplay
{
	idd = IDD_SELECT_ISLAND;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_SELECT_ISLAND;};

		//The available islands.
		class Islands: RscListBox
		{
			idc = IDC_SELECT_ISLAND;
			x = 0.025; y = 0.2;
			w = 0.95; h = 0.6;
			rows = 8;
		};
		
		//This used to be a button to start the prototype new editor. This editor now replaces the old one.
		class B_Editor: RscActiveText
		{
			idc = IDC_SELECT_ISLAND_EDITOR_OLD;
			x = 0.01; y = 0.9;
			w = 0.3;
			text = "Old-style editor";
		};


		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.59; y = 0.9;
			w = 0.25;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the selected island and start the new editor.
		class B_OK: B_Cancel
		{
			//idc = IDC_OK; This would launch the old editor.
			idc = IDC_SELECT_ISLAND_EDITOR;
			x = 0.84;
			w = 0.15;
			text = $STR_DISP_OK;
			default = 1;
		};
	};
};


//Island selection screen. Shown when accessing the mission editor.
class RscDisplaySelectIslandNew: RscStandardDisplay
{
  idd = IDD_SELECT_ISLAND_NEW;

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_SELECT_ISLAND;};

    //The available islands.
    class Islands: RscListBox
    {
      idc = IDC_SELECT_ISLAND;
      x = 0.025; y = 0.2;
      w = 0.95; h = 0.6;
      rows = 8;
    };

    //This used to be a button to start the prototype new editor. This editor now replaces the old one.
    class B_Editor: RscActiveText
    {
      idc = IDC_SELECT_ISLAND_EDITOR_OLD;
      x = 0.01; y = 0.9;
      w = 0.3;
      text = "Old-style editor";
    };


    //Cancel back to the main menu.
    class B_Cancel: RscActiveText
    {
      idc = IDC_CANCEL;
      x = 0.59; y = 0.9;
      w = 0.25;
      text = $STR_DISP_CANCEL;
    };

    //Confirm the selected island and start the new editor.
    class B_OK: B_Cancel
    {
      //idc = IDC_OK; This would launch the old editor.
      idc = IDC_SELECT_ISLAND_EDITOR;
      x = 0.84;
      w = 0.15;
      text = $STR_DISP_OK;
      default = 1;
    };
  };
};

//Advanced island selection screen.
class RscDisplayCustomArcade: RscStandardDisplay
{
	idd = IDD_CUSTOM_ARCADE;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_MAIN_DESIGN;};

		//Tree interface for available islands and missions.
		class Game: RscTree
		{
			idc = IDC_CUST_GAME;
			x = 0.24; y = 0.22;
			w = 0.52;	h = 0.56;
			style = TR_AUTOCOLLAPSE;
		};

		//Edit the selected mission.
		class B_Edit: RscShortcutButton
		{
			idc = IDC_CUST_EDIT;
			x = 0.22; y = 0.9;
	    w = 0.16; h = 0.05;
			text = $STR_DISP_ERROR;
		};

		//Delete the selected mission.
		class B_Delete: RscButton
		{
			idc = IDC_CUST_DELETE;
      x = 0.36; y = 0.9;
      w = 0.16; h = 0.05;
			text = $STR_DISP_DELETE;
		};

		//Play the selected mission.
		class B_Play: B_Delete
		{
			idc = IDC_CUST_PLAY;
			x = 0.52;
			text = $STR_DISP_CUST_PLAY;
			default = 1;
		};

		//Cancel back to the main menu.
		class B_Cancel: B_Delete
		{
			idc = IDC_CANCEL;
			x = 0.66;
			text = $STR_DISP_CANCEL;
		};
	};
};

//Mission editor main screen.
class RscDisplayArcadeMap: RscMap
{
	movingEnable = false;
	idd = IDD_ARCADE_MAP;

  textureClear = ProcTextWhite;
  textureCloudly = ProcTextWhite;
  textureOvercast = ProcTextWhite;
  textureRainy = ProcTextWhite;
  textureStormy = ProcTextWhite;

  defaultSide = TWest;

	class controls: controls
	{
		//The map display.
		class Map: Map {};

		class Background1: RscText
		{
			x = 0.83; y = 0;
			w = 0.17; h = 1;
			colorBackground[] = Color_Background;
		};

    class MissionName: RscText
    {
      x = 0.0; y = 0.0;
      w = 0.55;
      text = "";
      idc = IDC_ARCMAP_MISSION_NAME;
    };

		//List of editing modes.
		class ToolboxMode: RscToolbox
		{
			idc = IDC_ARCMAP_MODE;
			x = 0.84; y = 0.11;
			w = 0.15; h = 0.2;

			strings[] =
			{
				$STR_DISP_ARCMAP_UNITS,
				$STR_DISP_ARCMAP_GROUPS,
				$STR_DISP_ARCMAP_SENSORS,
				$STR_DISP_ARCMAP_WAYPOINTS,
				$STR_DISP_ARCMAP_SYNCHRONIZE,
				$STR_DISP_ARCMAP_MARKERS,
				$STR_DISP_ARCMAP_MODULE
			};

			rows = 7;
			columns = 1;
		};

		//Open the Intel screen.
		class B_Intel: RscActiveText
		{
			idc = IDC_ARCMAP_INTEL;
			x = 0.83; y = 0.06;
      w = 0.17;
      style = ST_CENTER;
			text = $STR_DISP_ARCMAP_INTEL; 
		};

		//Load a saved mission.
		class B_Load: RscButton
		{
			idc = IDC_ARCMAP_LOAD;
			x = 0.84; y = 0.32;
	    w = 0.15; h = 0.035;
	    sizeEx = Size_Text_Small;
			text = $STR_DISP_ARCMAP_LOAD;
		};

		//Merge two missions.
		class B_Merge: B_Load
		{
			idc = IDC_ARCMAP_MERGE;
			y = 0.38;
			text = $STR_DISP_ARCMAP_MERGE;
		};

		//Save the mission.
		class B_Save: B_Load
		{
			idc = IDC_ARCMAP_SAVE;
			y = 0.44;
			text = $STR_DISP_ARCMAP_SAVE;
		};

		//Clear the mission.
		class B_Clear: B_Load
		{
			idc = IDC_ARCMAP_CLEAR;
			y = 0.5;
			text = $STR_DISP_ARCMAP_CLEAR;
		};

		//Change the mission section that is being edited.
		class Section: RscCombo
		{
			idc = IDC_ARCMAP_SECTION;
			x = 0.84; y = 0.56;
			w = 0.15; h = 0.03;
			wholeHeight = 0.12;
			sizeEx = Size_Text_Small;
		};

		//Enable or disable object ID numbers.
		class B_Ids: B_Load
		{
			idc = IDC_ARCMAP_IDS;
			y = 0.62;
			text = $STR_DISP_ERROR;
		};

		//Enable or disable terrain textures.
		class B_Textures: B_Load
		{
			idc = IDC_ARCMAP_TEXTURES;
			y = 0.68;
			text = $STR_DISP_ERROR;
		};

		//Preview the mission.
		class B_Preview: B_Load
		{
			idc = IDC_ARCMAP_PREVIEW;
			y = 0.755;
			text = $STR_DISP_ARCMAP_PREVIEW;
			default = 1;
		};

		//Continue previewing the mission.
		class B_Continue: B_Load
		{
			idc = IDC_ARCMAP_CONTINUE;
			y = 0.815;
			text = $STR_DISP_ARCMAP_CONTINUE;
		};

		//Cancel back to the main menu.
		class B_Cancel: B_Load
		{
			idc = IDC_CANCEL;
			y = 0.875;
			text = $STR_DISP_ARCMAP_EXIT;
		};

		//Indication of modded game
		class TrafficLight: RscActiveText
		{
			idc = IDC_INT_TRAFFIC_LIGHT;
			x = 0.95 * safezoneW + safezoneX;
			y = 0.92 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
			style = ST_PICTURE;
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			text = ProcTextWhite;
		};
	};
};

//Mission editor Unit pop-up screen.
class RscDisplayArcadeUnit
{
	DISPLAY(IDD_ARCADE_UNIT, 0.15, 0.02, 0.6, 0.95)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCUNIT_TITLE)

			BEGIN_BOX

			STATIC_TEXT(TextSide, $STR_DISP_ARCUNIT_SIDE, -1, 0, 0.25)
			//Unit's side.
			COMBO(ValueSide, IDC_ARCUNIT_SIDE, 0.25, 0.25)
			NEXT_LINE		
      
		  STATIC_TEXT(TextFaction, $STR_DISP_ARCUNIT_FACTION, -1, 0, 0.25)
		  //Unit's side.
		  COMBO(ValueFaction, IDC_ARCUNIT_FACTION, 0.25, 0.25)
		  STATIC_TEXT(TextRank, $STR_DISP_ARCUNIT_RANK, -1, 0.5, 0.25)
			//Unit's rank.
			COMBO(ValueRank, IDC_ARCUNIT_RANK, 0.75, 0.25)
			NEXT_LINE

		  STATIC_TEXT(TextClass, $STR_DISP_ARCUNIT_CLASS, -1, 0, 0.25)
		  //Unit's class.
		  COMBO(ValueClass, IDC_ARCUNIT_CLASS, 0.25, 0.25)
			STATIC_TEXT(TextVehicle, $STR_DISP_ARCUNIT_VEHICLE, -1, 0.5, 0.25)
			//Unit's type.
			COMBO(ValueVehicle, IDC_ARCUNIT_VEHICLE, 0.75, 0.25)
			NEXT_LINE


		  STATIC_TEXT(TextControl, $STR_DISP_ARCUNIT_CTRL, -1, 0, 0.25)
		  //Unit is controlled by?
		  COMBO(ValueControl, IDC_ARCUNIT_CTRL, 0.25, 0.25)
			STATIC_TEXT(TextSpecial, $STR_DISP_ARCUNIT_SPECIAL, -1, 0.5, 0.25)
			//Unit's special properties.
			COMBO(ValueSpecial, IDC_ARCUNIT_SPECIAL, 0.75, 0.25)
			NEXT_LINE

		  STATIC_TEXT(TextAge, $STR_DISP_ARCUNIT_AGE, -1, 0, 0.25)
		  //Unit's info age.
		  COMBO(ValueAge, IDC_ARCUNIT_AGE, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCUNIT_TEXT, -1, 0.5, 0.25)
			//Unit's name.
			EDIT(ValueText, IDC_ARCUNIT_TEXT, 0.75, 0.25)
			NEXT_LINE

		  STATIC_TEXT(TextLock, $STR_DISP_ARCUNIT_LOCK, -1, 0, 0.25)
		  //Unit is locked?
		  COMBO(ValueLock, IDC_ARCUNIT_LOCK, 0.25, 0.25)
			STATIC_TEXT(TextSkill, $STR_DISP_ARCUNIT_SKILL, -1, 0.5, 0.25)
			//Unit's skill level.
			SLIDER(ValueSkill, IDC_ARCUNIT_SKILL, 0.75, 0.25)

			END_BOX

			BEGIN_BOX

			STATIC_TEXT(TextInit, $STR_DISP_ARCUNIT_INIT, -1, 0, 0.25)
			//Unit's initialization scripting commands.
			EDIT_SCRIPT(ValueInit, IDC_ARCUNIT_INIT, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCUNIT_DESC, -1, 0, 0.25)
			//Unit's description.
			EDIT(ValueDescription, IDC_ARCUNIT_DESC, 0.25, 0.75)

			END_BOX

			NEXT_LINE

			BEGIN_BOX

			//Change the unit's azimuth.
			class Azimut: RscPicture
			{
				idc = IDC_ARCUNIT_AZIMUT_PICTURE;
				text = ProcTextWhite;
				x = 0.5525; y = __EVAL(box_y - 0.04);
				w = 0.2; h = 0.26;
				colorText[] = {0.08, 0.08, 0.12, 1};
			};

			class TextAzimut: RscText
			{
				x = 0.605; y = __EVAL(box_y + 0.05);
				w = 0.15;
				sizeEx = Size_Text_Small;
				text = $STR_DISP_ARCUNIT_AZIMUT;
			};

			//Unit's current azimuth.
			class ValueAzimut: RscEdit
			{
				idc = IDC_ARCUNIT_AZIMUT;
				x = 0.63; y = __EVAL(box_y + 0.1);
				w = 0.05; h = 0.03;
				sizeEx = Size_Text_Small;
			};

			STATIC_TEXT(TextHealth, $STR_DISP_ARCUNIT_HEALTH, -1, 0, 0.25)
			//Unit's health level.
			SLIDER(ValueHealth, IDC_ARCUNIT_HEALTH, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextFuel, $STR_DISP_ARCUNIT_FUEL, -1, 0, 0.25)
			//Unit's fuel level.
			SLIDER(ValueFuel, IDC_ARCUNIT_FUEL, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextAmmo, $STR_DISP_ARCUNIT_AMMO, -1, 0, 0.25)
			//Unit's ammo level.
			SLIDER(ValueAmmo, IDC_ARCUNIT_AMMO, 0.25, 0.4)

		END_BOX

		NEXT_LINE

		BEGIN_BOX

			STATIC_TEXT(TextPresence, $STR_DISP_ARCUNIT_PRESENCE, -1, 0, 0.5)
			//Unit's probability of presence.
			SLIDER(ValuePresence, IDC_ARCUNIT_PRESENCE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPresenceCondition, $STR_DISP_ARCUNIT_PRESENCE_COND, -1, 0, 0.5)
			//Unit's condition of presence.
			EDIT_SCRIPT(ValuePresenceCondition, IDC_ARCUNIT_PRESENCE_COND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCUNIT_PLACE, -1, 0, 0.5)
			//Unit's placement radius.
			EDIT(ValuePlacement, IDC_ARCUNIT_PLACE, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm the unit settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Unit pop-up screen.
class RscDisplayArcadeModules
{
  DISPLAY(IDD_ARCADE_MODULES, 0.15, 0.02, 0.6, 0.95)

  class controls
  {
    BACKGROUND(Background)
      TITLE(Title, "", IDC_ARCUNIT_TITLE)

      BEGIN_BOX

      //DO NOT DELETE, is hidden by engine, but still required 
      //Unit's side.
      COMBO(ValueSide, IDC_ARCUNIT_SIDE, 0.25, 0.25)
      NEXT_LINE		
      //DO NOT DELETE

      //Unit's side.
      COMBO(ValueFaction, IDC_ARCUNIT_FACTION, 0.25, 0.25)

      //DO NOT DELETE, is hidden by engine, but still required 
      //Unit's class.
      COMBO(ValueClass, IDC_ARCUNIT_CLASS, 0.25, 0.25)
      //DO NOT DELETE

      STATIC_TEXT(TextVehicle, $STR_DISP_ARCUNIT_VEHICLE, -1, 0.5, 0.25)
      //Unit's type.
      COMBO(ValueVehicle, IDC_ARCUNIT_VEHICLE, 0.75, 0.25)
      NEXT_LINE

      STATIC_TEXT(TextText, $STR_DISP_ARCUNIT_TEXT, -1, 0.5, 0.25)
      //Unit's name.
      EDIT(ValueText, IDC_ARCUNIT_TEXT, 0.75, 0.25)
      NEXT_LINE


      END_BOX

      BEGIN_BOX

      STATIC_TEXT(TextInit, $STR_DISP_ARCUNIT_INIT, -1, 0, 0.25)
      //Unit's initialization scripting commands.
      EDIT_SCRIPT(ValueInit, IDC_ARCUNIT_INIT, 0.25, 0.75)
      NEXT_LINE

      STATIC_TEXT(TextDescription, $STR_DISP_ARCUNIT_DESC, -1, 0, 0.25)
      //Unit's description.
      EDIT(ValueDescription, IDC_ARCUNIT_DESC, 0.25, 0.75)

      END_BOX

      NEXT_LINE

      NEXT_LINE

      BEGIN_BOX

      STATIC_TEXT(TextPresence, $STR_DISP_ARCUNIT_PRESENCE, -1, 0, 0.5)
      //Unit's probability of presence.
      SLIDER(ValuePresence, IDC_ARCUNIT_PRESENCE, 0.5, 0.5)
      NEXT_LINE

      STATIC_TEXT(TextPresenceCondition, $STR_DISP_ARCUNIT_PRESENCE_COND, -1, 0, 0.5)
      //Unit's condition of presence.
      EDIT_SCRIPT(ValuePresenceCondition, IDC_ARCUNIT_PRESENCE_COND, 0.5, 0.5)
      NEXT_LINE


      END_BOX

      //Confirm the unit settings and exit.
      DEFAULT_BUTTON_OK(1)
      //Cancel back to the mission editor.
      BUTTON_CANCEL(0)
  };
};

//Mission editor Group pop-up screen.
class RscDisplayArcadeGroup
{
	DISPLAY(IDD_ARCADE_GROUP, 0.2, 0.30, 0.6, 0.41)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCGRP_TITLE, -1)

		BEGIN_BOX

			//Change the group's azimuth.
			class Azimut: RscPicture
			{
				idc = IDC_ARCGRP_AZIMUT_PICTURE;
				text = ProcTextWhite;
				x = 0.5725; y = __EVAL(box_y - 0.04);
				w = 0.2; h = 0.26;
				colorText[] = {0.08, 0.08, 0.12, 1};
			};

			class TextAzimut: RscText
			{
				x = 0.625; y = __EVAL(box_y + 0.05);
				w = 0.15;
				sizeEx = Size_Text_Small;
				text = $STR_DISP_ARCUNIT_AZIMUT;
			};

			//Group's current azimuth.
			class ValueAzimut: RscEdit
			{
				idc = IDC_ARCGRP_AZIMUT;
				x = 0.65; y = __EVAL(box_y + 0.1);
				w = 0.05; h = 0.03;
				sizeEx = Size_Text_Small;
			};

			STATIC_TEXT(TextSide, $STR_DISP_ARCGRP_SIDE, -1, 0, 0.25)
			//Group's side.
			COMBO(ValueSide, IDC_ARCGRP_SIDE, 0.25, 0.4)
			NEXT_LINE

      STATIC_TEXT(TextFaction, $STR_DISP_ARCGRP_FACTION, -1, 0, 0.25)
      //Group's faction.
      COMBO(ValueFaction, IDC_ARCGRP_FACTION, 0.25, 0.4)
      NEXT_LINE

      STATIC_TEXT(TextType, $STR_DISP_ARCGRP_TYPE, -1, 0, 0.25)
			//Group's type.
			COMBO(ValueType, IDC_ARCGRP_TYPE, 0.25, 0.4)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_ARCGRP_NAME, -1, 0, 0.25)
			//Group's name.
			COMBO(ValueName, IDC_ARCGRP_NAME, 0.25, 0.4)
			NEXT_LINE

			NEXT_LINE

		END_BOX

		//Confirm the group settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Waypoint pop-up screen.
class RscDisplayArcadeWaypoint
{
	DISPLAY(IDD_ARCADE_WAYPOINT, 0.2, 0.05, 0.56, 0.91)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCWP_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextType, $STR_DISP_ARCWP_TYPE, -1, 0, 0.5)
			//Waypoint's type.
			COMBO(ValueType, IDC_ARCWP_TYPE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSequence, $STR_DISP_ARCWP_SEQ, -1, 0, 0.5)
			//Sequence of waypoints for the attached unit.
			COMBO(ValueSequence, IDC_ARCWP_SEQ, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCWP_DESC, -1, 0, 0.5)
			//Waypoint's description.
			EDIT(ValueDescription, IDC_ARCWP_DESC, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextCombatMode, $STR_DISP_ARCWP_SEMAPHORE, -1, 0, 0.5)
			//Waypoint's combat mode.
			COMBO(ValueCombatMode, IDC_ARCWP_SEMAPHORE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextFormation, $STR_DISP_ARCWP_FORM, -1, 0, 0.5)
			//Waypoint's formation.
			COMBO(ValueFormation, IDC_ARCWP_FORM, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSpeed, $STR_DISP_ARCWP_SPEED, -1, 0, 0.5)
			//Waypoint's movement speed.
			COMBO(ValueSpeed, IDC_ARCWP_SPEED, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextCombat, $STR_DISP_ARCWP_COMBAT, -1, 0, 0.5)
			//Waypoint's rules of engagement.
			COMBO(ValueCombat, IDC_ARCWP_COMBAT, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCWP_PLACE, -1, 0, 0.5)
			//Waypoint's placement radius.
			EDIT(ValuePlacement, IDC_ARCWP_PLACE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPrecision, $STR_DISP_ARCWP_PREC, -1, 0, 0.5)
			//Waypoint's completition radius.
			EDIT(ValuePrecision, IDC_ARCWP_PREC, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextHousePos, $STR_DISP_ARCWP_HOUSEPOS, IDC_ARCWP_HOUSEPOSTEXT, 0, 0.5)
			//Waypoint's relative house position.
			COMBO(ValueHousePos, IDC_ARCWP_HOUSEPOS, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTimeout, $STR_DISP_ARCWP_TIMEOUT, -1, 0, 0.25)
			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCWP_TIMEOUT_MIN, -1, 0.25, 0.125)
			//Waypoint's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCWP_TIMEOUT_MIN, 0.375, 0.125)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCWP_TIMEOUT_MAX, -1, 0.5, 0.125)
			//Waypoint's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCWP_TIMEOUT_MAX, 0.625, 0.125)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCWP_TIMEOUT_MID, -1, 0.75, 0.125)
			//Waypoint's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCWP_TIMEOUT_MID, 0.875, 0.125)
			NEXT_LINE

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCWP_EXPCOND, -1, 0, 0.25)
			//Waypoint's condition.
			EDIT(ValueExpCond, IDC_ARCWP_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCWP_EXPACTIV, -1, 0, 0.25)
			//Waypoint's scripting command execution upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCWP_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			//Waypoint's showing mode.
			class Show: RscToolbox
			{
				idc = IDC_ARCWP_SHOW;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.06;

				strings[] =
				{
					$STR_DISP_ARCWP_SHOW_NEVER,
					$STR_DISP_ARCWP_SHOW_EASY,
					$STR_DISP_ARCWP_SHOW_ALWAYS
				};

				rows = 1;
				columns = 3;
			};
			NEXT_LINE

			STATIC_TEXT(TextExpScript, $STR_DISP_ARCWP_SCRIPT, -1, 0, 0.25)
			//Waypoint's executed script upon activation.
			EDIT(ValueExpScript, IDC_ARCWP_SCRIPT, 0.25, 0.75)

		END_BOX

		//Access this waypoint's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCWP_EFFECTS, IDC_ARCWP_EFFECTS, "", 0.2, 0, 0)
		//Confirm the waypoint settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Marker pop-up screen.
class RscDisplayArcadeMarker
{
	DISPLAY(IDD_ARCADE_MARKER, 0.2, 0.2, 0.6, 0.5)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, "", IDC_ARCMARK_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_ARCMARK_NAME, -1, 0, 0.5)
			//Marker's name.
			EDIT(ValueName, IDC_ARCMARK_NAME, 0.5, 0.5)
			NEXT_LINE

			//Marker's type.
			class Marker: RscToolbox
			{
				idc = IDC_ARCMARK_MARKER;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.04;

				strings[] =
				{
					$STR_DISP_ARCMARK_ICON,
					$STR_DISP_ARCMARK_RECT,
					$STR_DISP_ARCMARK_ELLIPSE,
				};

				rows = 1;
				columns = 3;
			};
			NEXT_LINE

			STATIC_TEXT(TextColorName, $STR_DISP_ARCMARK_COLOR, -1, 0, 0.5)
			//Marker's color.
			COMBO(ValueColorName, IDC_ARCMARK_COLOR, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextType, "", IDC_ARCMARK_TYPE_TEXT, 0, 0.5)
			//Marker's icon type.
			COMBO(ValueIcon, IDC_ARCMARK_TYPE, 0.5, 0.5)
			//Marker's fill type.
			COMBO(ValueFill, IDC_ARCMARK_FILL, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextA, $STR_DISP_ARCMARK_A, -1, 0, 0.167)
			//Marker's width.
			EDIT(ValueA, IDC_ARCMARK_A, 0.167, 0.167)
			STATIC_TEXT(TextB, $STR_DISP_ARCMARK_B, -1, 0.334, 0.167)
			//Marker's height.
			EDIT(ValueB, IDC_ARCMARK_B, 0.501, 0.167)
			STATIC_TEXT(TextAngle, $STR_DISP_ARCMARK_ANGLE, -1, 0.668, 0.167)
			//Marker's angle.
			EDIT(ValueAngle, IDC_ARCMARK_ANGLE, 0.835, 0.167)
			NEXT_LINE

			STATIC_TEXT(TextText, $STR_DISP_ARCMARK_TEXT, -1, 0, 0.5)
			//Marker's text.
			EDIT(ValueText, IDC_ARCMARK_TEXT, 0.5, 0.5)

		END_BOX

		//Confirm market settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Trigger pop-up screen.
class RscDisplayArcadeSensor
{
	DISPLAY(IDD_ARCADE_SENSOR, 0.2, 0.05, 0.56, 0.91)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCSENS_TITLE, IDC_ARCSENS_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextA, $STR_DISP_ARCSENS_A, -1, 0, 0.25)
			//Trigger's width.
			EDIT(ValueA, IDC_ARCSENS_A, 0.25, 0.25)
			STATIC_TEXT(TextB, $STR_DISP_ARCSENS_B, -1, 0.5, 0.25)
			//Trigger's height.
			EDIT(ValueB, IDC_ARCSENS_B, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextAngle, $STR_DISP_ARCSENS_ANGLE, -1, 0, 0.25)
			//Trigger's angle.
			EDIT(ValueAngle, IDC_ARCSENS_ANGLE, 0.25, 0.25)
			NEXT_LINE

			//Trigger's shape.
			class Rectangular: RscToolbox
			{
				idc = IDC_ARCSENS_RECT;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_ELLIPSE,
					$STR_DISP_ARCSENS_RECT
				};

				rows = 1;
				columns = 2;
			};

			//Is the trigger repeating?
			class Repeating: RscToolbox
			{
				idc = IDC_ARCSENS_REPEATING;
				x = LINE_X(0.5); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_ONCE,
					$STR_DISP_ARCSENS_REPEAT
				};

				rows = 1;
				columns = 2;
			};
			NEXT_LINE

			STATIC_TEXT(TextType, $STR_DISP_ARCSENS_TYPE, -1, 0, 0.25)
			//Trigger's type.
			COMBO(ValueType, IDC_ARCSENS_TYPE, 0.25, 0.25)
			STATIC_TEXT(TextActivation, $STR_DISP_ARCSENS_ACTIV, -1, 0.5, 0.25)
			//The trigger is activated by?
			COMBO(ValueActivation, IDC_ARCSENS_ACTIV, 0.75, 0.25)

		END_BOX

		BEGIN_BOX

			//The trigger detects the presence of?
			class Presence: RscToolbox
			{
				idc = IDC_ARCSENS_PRESENCE;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.06;

				strings[] =
				{
					$STR_DISP_ARCSENS_PRESYES,
					$STR_DISP_ARCSENS_PRESNO,
					$STR_DISP_ARCSENS_DETWEST,
					$STR_DISP_ARCSENS_DETEAST,
					$STR_DISP_ARCSENS_DETGUERRILA,
					$STR_DISP_ARCSENS_DETCIVILIAN
				};

				rows = 2;
				columns = 3;
			};
			NEXT_LINE
			NEXT_LINE

			//Does the trigger have timeout or countdown?
			class Interruptable: RscToolbox
			{
				idc = IDC_ARCSENS_INTERRUPT;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(0.5); h = 0.03;

				strings[] =
				{
					$STR_DISP_ARCSENS_COUNTDOWN,
					$STR_DISP_ARCSENS_TIMEOUT
				};

				rows = 1;
				columns = 2;
			};

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCSENS_TIMEOUT_MIN, -1, 0, 0.167)
			//Trigger's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCSENS_TIMEOUT_MIN, 0.167, 0.167)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCSENS_TIMEOUT_MAX, -1, 0.334, 0.167)
			//Trigger's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCSENS_TIMEOUT_MAX, 0.501, 0.167)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCSENS_TIMEOUT_MID, -1, 0.668, 0.167)
			//Trigger's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCSENS_TIMEOUT_MID, 0.835, 0.167)

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_ARCSENS_NAME, -1, 0, 0.25)
			//Trigger's name.
			EDIT(ValueName, IDC_ARCSENS_NAME, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCSENS_TEXT, -1, 0.5, 0.25)
			//Trigger's text.
			EDIT(ValueText, IDC_ARCSENS_TEXT, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCSENS_EXPCOND, -1, 0, 0.25)
			//Trigger's activation condition.
			EDIT_SCRIPT(ValueExpCond, IDC_ARCSENS_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCSENS_EXPACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCSENS_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpDesactiv, $STR_DISP_ARCSENS_EXPDESACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon deactivation.
			EDIT_SCRIPT(ValueExpDesactiv, IDC_ARCSENS_EXPDESACTIV, 0.25, 0.75)

		END_BOX

		//Access the trigger's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCSENS_EFFECTS, IDC_ARCSENS_EFFECTS, "", 0.2, 0, 0)
		//Confirm trigger settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Effects pop-up screen.
class RscDisplayArcadeEffects
{
	DISPLAY(IDD_ARCADE_EFFECTS, 0.2, 0.05, 0.6, 0.85)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_ARCEFF_TITLE, -1)

		BEGIN_BOX

			//Activated script.
			EDIT_SCRIPT(Condition, IDC_ARCEFF_CONDITION, 0, 1)
			NEXT_LINE

			STATIC_TEXT(TextSound, $STR_DISP_ARCEFF_SOUND_ANON, -1, 0, 0.5)
			//Anonymous sound source.
			COMBO(ValueSound, IDC_ARCEFF_SOUND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextVoice, $STR_DISP_ARCEFF_VOICE, -1, 0, 0.5)
			//Voice sound source.
			COMBO(ValueVoice, IDC_ARCEFF_VOICE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundEnv, $STR_DISP_ARCEFF_SOUND_ENV, -1, 0, 0.5)
			//Environmental sound source.
			COMBO(ValueSoundEnv, IDC_ARCEFF_SOUND_ENV, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundDet, $STR_DISP_ARCEFF_SOUND_DET, -1, 0, 0.5)
			//Trigger sound source.
			COMBO(ValueSoundDet, IDC_ARCEFF_SOUND_DET, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextMusic, $STR_DISP_ARCEFF_TRACK, -1, 0, 0.5)
			//Music track.
			COMBO(ValueMusic, IDC_ARCEFF_MUSIC, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleType, $STR_DISP_ARCEFF_TITTYPE, -1, 0, 0.5)
			//Type of resource title.
			COMBO(ValueTitleType, IDC_ARCEFF_TITTYPE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleEffect, $STR_DISP_ARCEFF_TITEFF, -1, 0, 0.5)
			//Type of title effect.
			COMBO(ValueTitleEffect, IDC_ARCEFF_TITEFF, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitle, $STR_DISP_ARCEFF_TITTEXT, IDC_ARCEFF_TEXT_TITTEXT, 0, 0.25)
			//Text for title text.
			EDIT(ValueTitleText, IDC_ARCEFF_TITTEXT, 0.25, 0.75)
			//Type for title resource.
			COMBO(ValueTitleRes, IDC_ARCEFF_TITRES, 0.5, 0.5)
			//Type for title object.
			COMBO(ValueTitleObj, IDC_ARCEFF_TITOBJ, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm effect settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the previous screen.
		BUTTON_CANCEL(0)
	};
};

//Mission editor saving pop-up screen.
class RscDisplayTemplateSave
{
	DISPLAY( IDD_TEMPLATE_SAVE, 0.28, 0.2, 0.46, 0.33)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_TEMPL_SAVE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.5)
			//Mission name.
			EDIT(ValueName, IDC_TEMPL_NAME, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextMode, $STR_DISP_TEMPL_MODE, -1, 0, 0.5)
			//Export type.
			COMBO(ValueMode, IDC_TEMPL_MODE, 0.5, 0.5)

		END_BOX

		//Confirm and save.
		DEFAULT_BUTTON_OK(1)
		//Cancel save.
		BUTTON_CANCEL(0)
	};
};

class RscDisplayPublishMission
{
  DISPLAY( IDD_PUBLISH_MISSION, 0.28, 0.2, 0.46, 0.33)
  TITLE(Title, STR_MISSION_PUBLISH_TEXT, -1)

  class controls
  {
    BACKGROUND(Background)

    BEGIN_BOX

      STATIC_TEXT(TextName, $STR_MISSION_TITLE_TEXT, -1, 0, 0.5)
      //Mission name.
      EDIT(ValueName, IDC_STEAM_TITLE, 0.5, 0.5)

    END_BOX
    
    BUTTON(ButtonOK, $STR_DISP_OK, IDC_BUTTON_PUBLISH, "", 0.2, XVAL, 1)
    BUTTON_CANCEL(0)
  };
};

// Display for setting tags when publishing mission on Steam.
class RscDisplayPublishMissionSelectTags
{
  idd = IDD_PUBLISH_MISSION_TAGS;

  class controls
  {
    class Title: RscTitle
    {
      style = ST_LEFT;
      text = $STR_DISP_TAGS_TITLE;
      x = 0.2;
      y = 0.2;
      w = 0.6;
      h = 0.04;
    };
    class TextUnused: RscText
    {
      style = ST_CENTER;
      text = $STR_DISP_TAGS_UNUSED;
      x = 0.2;
      y = 0.25;
      w = 0.26;
      h = 0.04;
      colorBackground[] = {0,0,0,1};
    };
    class TextUsed: RscText
    {
      style = ST_CENTER;
      text = $STR_DISP_TAGS_USED;
      x = 0.527;
      y = 0.252;
      w = 0.266;
      h = 0.04;
      colorBackground[] = {0,0,0,1};
    };
    class ButtonAdd: RscActiveText
    {
      idc = IDC_STEAM_TAGS_ADD;
      text = ">>";
      x = 0.47;
      y = 0.42;
      w = 0.045;
      h = 0.06;
    };
    class ButtonRemove: RscActiveText
    {
      idc = IDC_STEAM_TAGS_REMOVE;
      text = "<<";
      x = 0.47;
      y = 0.52;
      w = 0.045;
      h = 0.06;
    };
    class ListUnusedTags: RscListbox
    {
      idc = IDC_STEAM_TAGS_AVAILABLE;
      x = 0.2;
      y = 0.3;
      w = 0.26;
      h = 0.44;
    };
    class ListUsedTags: RscListbox
    {
      idc = IDC_STEAM_TAGS_SELECTED;
      x = 0.52;
      y = 0.3;
      w = 0.26;
      h = 0.44;
    };
    class ButtonOK: RscShortcutButton
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 0.612;
      y = 0.76;
      w = 0.18;
      h = 0.04;
    };
    class ButtonCancel : ButtonOK
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      x = 0.19;
      y = 0.76;
      w = 0.18;
      h = 0.04;
    };
  };
}; 


//Mission editor loading pop-up screen.
class RscDisplayTemplateLoad
{
	DISPLAY(IDD_TEMPLATE_LOAD, 0.28, 0.20, 0.46, 0.31)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_TEMPL_LOAD, IDC_TEMPL_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextIsland, $STR_DISP_TEMPL_ISLAND, -1, 0, 0.5)
			//Select mission's map.
			COMBO(ValueIsland, IDC_TEMPL_ISLAND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.5)
			//Select mission's name.
			COMBO(ValueName, IDC_TEMPL_NAME, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm and load.
		DEFAULT_BUTTON_OK(1)
		//Cancel load.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Intel pop-up screen.
class RscDisplayIntel
{
	DISPLAY(IDD_INTEL, 0.2, 0.02, 0.64, 0.96)

	class controls
	{
		BACKGROUND(Background)
		TITLE(Title, $STR_DISP_INTEL_TITLE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextBriefingName, $STR_DISP_INTEL_NAME, -1, 0, 0.25)
			//Mission's name in the briefing screens.
			EDIT(ValueBriefingName, IDC_INTEL_BRIEFING_NAME, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextBriefingDescription, $STR_DISP_INTEL_DESC, -1, 0, 0.25)
			//Mission's description.
			EDIT(ValueBriefingDescription, IDC_INTEL_BRIEFING_DESC, 0.25, 0.75)
			NEXT_LINE
			NEXT_LINE

			STATIC_TEXT(TextDate, $STR_DISP_INTEL_DATE, -1, 0, 0.125)

			//Month.
			COMBO(ValueMonth, IDC_INTEL_MONTH, 0.125, 0.125)
			//Day.
			COMBO(ValueDay, IDC_INTEL_DAY, 0.25, 0.125)
			class ValueYear: ValueDay
			{
				idc = IDC_INTEL_YEAR;
				//reason, why we can not use macro
				from = 1980;
				to = 2020;
				x = LINE_X(0.375);
			};
						
			STATIC_TEXT(TextTime, $STR_DISP_INTEL_TIME, -1, 0.625, 0.125)
			//Hour.
			COMBO(ValueHour, IDC_INTEL_HOUR, 0.75, 0.125)
			//Minute.
			COMBO(ValueMinute, IDC_INTEL_MINUTE, 0.875, 0.125)
			NEXT_LINE

			//Current weather conditions.
			SLIDER(ValueWeather, IDC_INTEL_WEATHER, 0, 1)
			NEXT_LINE

			//Current fog conditions.
			SLIDER(ValueFog, IDC_INTEL_FOG, 0, 0.75)
			NEXT_LINE

      //Current wind conditions.
      SLIDER(ValueWind, IDC_INTEL_WIND, 0, 0.75)
      NEXT_LINE

			//Forecasted weather conditions.
			SLIDER(ValueWeatherForecast, IDC_INTEL_WEATHER_FORECAST, 0, 1)
			NEXT_LINE

			//Forecasted fog conditions.
			SLIDER(ValueFogForecast, IDC_INTEL_FOG_FORECAST, 0, 1)
			NEXT_LINE

      //Forecasted wind conditions.
      SLIDER(ValueWindForecast, IDC_INTEL_WIND_FORECAST, 0, 1)
      NEXT_LINE

			//Resistance stance to other sides.
			class ValueResistance: RscToolbox
			{
				idc = IDC_INTEL_RESISTANCE;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = 0.04;

				strings[] =
				{
					$STR_DISP_INTEL_NONE_FRIENDLY,
					$STR_DISP_INTEL_WEST_FRIENDLY,
					$STR_DISP_INTEL_EAST_FRIENDLY,
					$STR_DISP_INTEL_BOTH_FRIENDLY
				};

				rows = 1;
				columns = 4;
			};

		END_BOX

		//Confirm intel settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};
