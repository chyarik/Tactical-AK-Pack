//Todo:
//Reimplement GPS, Notepad and Radio.

class RscDisplayEditDiaryRecord
{
  access = ReadAndWrite;
  idd = IDD_EDIT_DIARY_RECORD;
  movingEnable = true;

  class Controls
  {
    class RecordBackground: RscText	
    {
      colorBackground[] = Color_Background;
      x = 0.52; y = 0.155;
      w = 0.45; h = 0.34;
    };

  	class RecordTitle: RscTitle
  	{
  		style = ST_TITLE;
  		text = $STR_UI_RECORD_TITLE;
			x = 0.52; y = 0.165;
			w = 0.45;
  	};

    class Record: RscEdit
    {
      idc = IDC_EDIT_DIARY_RECORD;
      style = ST_MULTI;
      x = 0.53; y = 0.23;
      w = 0.43; h = 0.2;
      sizeEx = Size_Text_Small;
    };

    class B_OK: RscButton
    {
      idc = IDC_OK;
      x = 0.53; y = 0.435;
      w = 0.2; h = 0.05;
      text = $STR_DISP_OK;
      sizeEx = Size_Text_Small;
      default = true;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.76;
      text = $STR_DISP_CANCEL;
      default = false;
    };

    class Title: RscEdit
    {
      idc = IDC_EDIT_DIARY_TITLE;
      x = 0.53; y = 0.53;
      w = 0.43; h = 0.2;
      sizeEx = Size_Text_Small;
    };
  };
};

class RscDisplayDiary
{
  access = ReadAndWrite;
  //129.
  idd = IDD_DIARY; 
  movingEnable = true;

  onKeyDown = "if ((_this select 1) == 22) then {closeDialog 129; true} else {false}";

  class Controls
  {
  	class DiaryBackground: RscText
  	{
			x = 0.1; y = 0.025;
			w = 0.8; h = 0.95;
			colorBackground[] = Color_Background;
  	};

  	class DiaryTitle: RscTitle
  	{
  		style = ST_TITLE;
  		text = $STR_UI_DIARY_TITLE;
			x = 0.1; y = 0.035;
			w = 0.8;
  	};

    class DiaryPage: RscCombo
    {
      idc = IDC_DIARY_PAGE;
      x = 0.6; y = 0.1;
      w = 0.29; h = 0.05;
      sizeEx = Size_Text_Small;
    };

    class B_Add: RscButton
    {
      idc = IDC_DIARY_ADD;
      x = 0.6; y = 0.155;
      w = 0.29; h = 0.05;
      colorText[] = Color_Text_Default;
      text = $STR_UI_DIARY_ADDRECORD;
      sizeEx = Size_Text_Small;
    };

    class DiaryIndex: RscListBox
    {
      idc = IDC_DIARY_INDEX;
      x = 0.6; y = 0.21;
      w = 0.29; h = 0.7;
    };

    class B_Quit: B_Add
    {
    	idc = IDC_CANCEL;
    	y = 0.915;
    	text = $STR_UI_DIARY_QUIT;
			default = 1;
    };

    class Diary: RscHTML
    {
      idc = IDC_DIARY;
      x = 0.11; y = 0.1;
      w = 0.48; h = 0.865;
      colorBackground[] = Color_GrayLight;
      colorText[] = Color_Text_Default;
      class H1
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Default;
      };
      class P
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Small;
      };
    };
  };
};

//Main map display.
class RscDisplayMainMap
{
	access = ReadAndWrite;
	idd = IDD_MAIN_MAP;
	movingEnable = false;
	saveParams = false;

	class controlsBackground 	{
    	class Map: RscMapControl
    	{
    		moveOnEdges = true;
    		x = -0.088; y = -0.088;
    		w = 1.176; h = 1.176;
    
    		class Command
    		{
    			icon = ProcTextWhite;
    			color[] = {0, 0, 0, 1};
    			size = 18;
          // not used
		  importance = 1; 
          // not used
		  coefMin = 1; 
          // not used
		  coefMax = 1; 
    		};
    
    		class ActiveMarker
    		{
    			color[] = {0.3, 0.1, 0.9, 1};
    			size = 50;
    		};
    	};
  };
	class controls
	{
	};

	class objects
	{
		//The map watch.
		class Watch: RscObject
		{
			idc = IDC_MAP_WATCH;
			type = CT_OBJECT;
			model = "\core\watch\watch.p3d";
			selectionDate1 = "date1";
			selectionDate2 = "date2";
			selectionDay = "day";
			x = 0.7; xBack = 0.7;
			y = 0.12; yBack = 0.12;
			z = 0.22; zBack = 0.22;
			inBack = false;
			enableZoom = false;
      		direction[] = {0, 0, 1};
			up[] = {0, 1, 0};
			zoomDuration = 1;
			scale = 0.7;
	    	waitForLoad = false;

		      };

		//The map compass.
		class Compass: RscObject
		{
			idc = IDC_MAP_COMPASS;
			type = CT_OBJECT;
			model = "\core\compass\compass.p3d";
			selectionArrow = "arrow";
			x = 0.92; xBack = 0.92;
			y = 0.08; yBack = 0.08;
			z = 0.22; zBack = 0.22;
			inBack = False;
			enableZoom = false;
			direction[] = {1, 0, 0};
			up[] = {0, 1, 0};
			zoomDuration = 1;
			scale = 0.6;
	    waitForLoad = false;

	      };

		//The map GPS.
		class GPS: RscObject
		{
			idc = IDC_MAP_GPS;
			type = CT_OBJECT_CONTAINER;
			model = "\core\gps\gps.p3d";
			x = 0.3; xBack = 0.3;
			y = 0.08; yBack = 0.08;
			z = 0.22; zBack = 0.22;
			inBack = false;
			enableZoom = false;
			up[] = {0, 1, 0};
			direction[] = {0, 50, 1};
			zoomDuration = 1;
			scale = 1;
			waitForLoad = false;

	    class Areas
	    {
	    	#define Y_Factor_GPS_Display 0.660

	      class Display
	      {
	        selection = "display";
					class controls
					{
						class GPSSquare: RscText
						{
							style = ST_CENTER;
							idc = IDC_GPS;
							x = 0; y = 0 * Y_Factor_GPS_Display;
							w = 1; h = 1 * Y_Factor_GPS_Display;
							color[] = {0, 0, 0, 1};
							sizeEx = 1 * Y_Factor_GPS_Display;
							text = "";
						};
					};
				};
			};
		};

		//The map radio.
		class WalkieTalkie: RscObject
		{
			idc = IDC_MAP_WALKIE_TALKIE;
			type = CT_OBJECT_CONTAINER;
			model = "\core\radio\radio.p3d";
			position[] = {0.094, -0.043, 0.25};
			scale = 1.3;
			direction[] = {0, 1, 0};
			up[] = {0, 0, -1};
			positionBack[] = {0.280, -0.155, 0.625};
			inBack = true;
			enableZoom = true;
			zoomDuration = 0.5;

			class Areas
			{
				#define Y_Factor_WalkieTalkie_Papir 1.359

				class Papir
				{
					selection = "papir";
					class controls
					{
						class RscRadioText: RscActiveText
						{
							idc = -1;
							sizeEx = 0.12 * Y_Factor_WalkieTalkie_Papir;
							color[] = Color_Black;
							colorActive[] = Color_Gray;
							style = ST_LEFT;
							x = 0.05; y = 0.02 * Y_Factor_WalkieTalkie_Papir;
							w = 0.95; h = 0.08 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioAlpha: RscRadioText
						{
							idc = IDC_RADIO_ALPHA;
							y = 0.02 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioBravo: RscRadioText
						{
							idc = IDC_RADIO_BRAVO;
							y = 0.12 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioCharlie: RscRadioText
						{
							idc = IDC_RADIO_CHARLIE;
							y = 0.22 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioDelta: RscRadioText
						{
							idc = IDC_RADIO_DELTA;
							y = 0.32 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioEcho: RscRadioText
						{
							idc = IDC_RADIO_ECHO;
							y = 0.42 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioFoxtrot: RscRadioText
						{
							idc = IDC_RADIO_FOXTROT;
							y = 0.52 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioGolf: RscRadioText
						{
							idc = IDC_RADIO_GOLF;
							y = 0.62 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioHotel: RscRadioText
						{
							idc = IDC_RADIO_HOTEL;
							y = 0.72 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioIndia: RscRadioText
						{
							idc = IDC_RADIO_INDIA;
							y = 0.82 * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioJuliet: RscRadioText
						{
							idc = IDC_RADIO_JULIET;
							y = 0.92 * Y_Factor_WalkieTalkie_Papir;
						};
					};
				};
			};
		};

		//The map notepad.
		class Notepad: RscObject
		{
			idc = IDC_MAP_NOTEPAD;
			type = CT_OBJECT_CONTAINER;
			model = "\core\notepad\notepad.p3d";
			selectionPaper = "paper";
			position[] = {-0.08, 0, 0.32};
			scale = 1.2;
			positionBack[] = {-0.325, 0.197, 0.80};
			inBack = false;
			enableZoom = true;
			zoomDuration = 0.5;

			paper1 = ProcTextWhite;
			paper2 = ProcTextWhite;
			paper3 = ProcTextWhite;
			paper4 = ProcTextWhite;
			paper5 = ProcTextWhite;
			paper6 = ProcTextWhite;
			paper7 = ProcTextWhite;

			class Areas
			{
				#define Y_Factor_Notepad_Paper 2.082

				class Paper
				{
					selection = "paper";
					class controls
					{
						class Name: RscText
						{
							sizeEx = 0.04 * Y_Factor_Notepad_Paper;
							color[] = Color_Text_Default;
							idc = IDC_MAP_NAME;
							style = ST_CENTER;
							x = 0; y = 0 * Y_Factor_Notepad_Paper;
							w = 1; h = 0.05 * Y_Factor_Notepad_Paper;
						};

						class RscBookmarkText: RscActiveText
						{
							idc = -1;
							sizeEx = 0.04 * Y_Factor_Notepad_Paper;
							color[] = Color_Text_Default;
							colorActive[] = Color_WhiteDark;
							style = ST_CENTER;
							x = 0; y = 0.05 * Y_Factor_Notepad_Paper;
							w = 0.25; h = 0.05 * Y_Factor_Notepad_Paper;
						};

						class Bookmark1: RscBookmarkText
						{
							idc = IDC_MAP_PLAN;
							x = 0;
							text = $STR_MAP_PLAN;
						};

						class Bookmark2 : RscBookmarkText
						{
							idc = IDC_MAP_NOTES;
							x = 0.25;
							text = $STR_MAP_NOTES;
						};

						class Bookmark3: RscBookmarkText
						{
							idc = IDC_MAP_GROUP;
							x = 0.5;
							text = $STR_MAP_GROUP;
						};


						class Bookmark4: RscBookmarkText
						{
							idc = IDC_MAP_TEAM_SWITCH;
							x = 0.75;
							text = $STR_BRIEF_TEAM_SWITCH;
						};

						class Briefing: RscHTML
						{
							size = 1 * Y_Factor_Notepad_Paper;
							idc = IDC_BRIEFING;
							x = 0.02; y = 0.11 * Y_Factor_Notepad_Paper;
							w = 0.98; h = 0.89 * Y_Factor_Notepad_Paper;

							class H1: H1
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H2: H2
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H3: H3
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H4: H4
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H5: H5
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class H6: H6
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};

							class P: P
							{
								sizeEx = Size_Text_Default * Y_Factor_Notepad_Paper;
							};
						};
					};
				};
			};
		};
	};
};

//Main menu.
class RscDisplayMain: RscStandardDisplay
{
	idd = IDD_MAIN;

	#define MAIN_ACTIVETEXT_Y 0.2

	class controls
	{
		//Version number of the application.
		class Version: RscText
		{
		  idc = IDC_MAIN_VERSION;
		  style = ST_CENTER;
		  x = 0.2; 
		  y = 0.1;
		  w = 0.2;
		  sizeEx = Size_Text_Small;
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

    class ModList: RscStructuredText
    {
      idc = IDC_MAIN_MOD_LIST;
      style = ST_LEFT;
      x=0.75; y=0.4;
      w=0.24; h=0.5;
      size = SizeSmall;
      class Attributes
      {
        font = FontMAIN;
        color = "#ffffff";
        align = "right";
        shadow = false;
      };
    };

		//Current real date.
		class Date: Version
		{
		  idc = IDC_MAIN_DATE;
		  x = 0.6;
		};

		//Open the campaign selection screen.
		class B_Campaign: RscButton
		{
			idc = IDC_MAIN_GAME;
			x = 0.133; y = MAIN_ACTIVETEXT_Y;
			text = $STR_DISP_MAIN_XBOX_CAMPAIGN;
		};

		//Open the single mission screen.
		class B_SingleMission: B_Campaign
		{
			idc = IDC_MAIN_SINGLE;
			y = MAIN_ACTIVETEXT_Y + 0.1;
			text = $STR_DISP_MAIN_SINGLE;
			default = 1;
		};

		//Open the multiplayer browser.
		class B_MultiPlayer: B_Campaign
		{
			idc = IDC_MAIN_MULTIPLAYER;
			y = MAIN_ACTIVETEXT_Y + 0.2;
			text = $STR_DISP_MAIN_MULTI;
		};

		//Start the mission editor.
		class B_MissionEditor: B_Campaign
		{
			idc = IDC_MAIN_EDITOR;
			y = MAIN_ACTIVETEXT_Y + 0.3;
			text = $STR_DISP_MAIN_CUSTOM;
		};
		class B_SinglePlayer: B_Campaign
		{
			idc = IDC_MAIN_SINGLEPLAYER;
			y = MAIN_ACTIVETEXT_Y + 0.4;
			text = $STR_DISP_MAIN_SINGLE_PLAYER;
		};

		//Open the options menu.
		class B_Options: RscButton
		{
			idc = IDC_MAIN_OPTIONS;
			x = 0.566; y = MAIN_ACTIVETEXT_Y;
			text = $STR_DISP_MAIN_OPTIONS;
		};

		//Open the profile screen.
		class B_Player: B_Options
		{
			idc = IDC_MAIN_PLAYER;
			y = MAIN_ACTIVETEXT_Y + 0.1;
			text = $STR_DISP_ERROR;
		};

		//Start the credits
		class B_Credits: B_Options
		{
			idc = IDC_MAIN_CREDITS;
			y = MAIN_ACTIVETEXT_Y + 0.2;
			text = $STR_DISP_MAIN_CREDITS;
		};

    class B_Expansions: B_Options
    {
      idc = IDC_MAIN_MOD_LAUNCHER;
      y = MAIN_ACTIVETEXT_Y + 0.5;
      text = "Expansions"; //$STR_DISP_MAIN_EXPANSIONS;
    };

		//Exit the application
		class B_Quit: B_Options
		{
			idc = IDC_MAIN_QUIT;
			y = MAIN_ACTIVETEXT_Y + 0.3;
			text = $STR_DISP_MAIN_QUIT;
		};

    class ModIcons: RscControlsGroup
    {
      idc = IDC_MAIN_MOD_ICONS;
      x = SafeZoneX+0.03; y =  (SafeZoneH + SafeZoneY) - (0.113*SafeZoneH);
      w = 0.8; h = 0.2;

      class Controls
      {
        //Controls containing mod pictures are added by the program.
        //these icon specification is given by class IconPicture below
      };
    };
	};

  // specifies how the picture in the ModIcons control container should look like
  class IconPicture: RscPicture
  {
    x = 0; y = 0;
    //aspect ratio 3/4
	w = 0.07*SafeZoneH; h = 0.093*SafeZoneH;  
    spacing = 0.007;
    text = "";
  };

  class DlcIconPicture : IconPicture
  {
  };
  class DlcOwnedIconPicture : IconPicture
  {
  };
};

class RscDisplayCardA
{
  idd = IDD_CARDA_WIN;


#define MAIN_ACTIVETEXT_Y 0.2


  class controls
  {

    class testingList: RscListBox
    {
      idc = IDC_MY_FIRST_LISTBOX;
      x = 0.133; y = 0.05;
      w = 0.3;
    };

    //Open the single mission screen.
    class testingSlider: RscSlider
    {
      idc = IDC_MY_FIRST_SLIDER;
      x = 0.133; y = 0.7;
    };

    //Start the mission editor.
    class testingButton: RscButton
    {
      idc = IDC_MY_FIRST_BUTTON;
      x = 0.6; y = MAIN_ACTIVETEXT_Y + 0.2;
      text = "add text";
    };
    class B_Back: testingButton
    {
      idc = IDC_CANCEL;
      y = MAIN_ACTIVETEXT_Y + 0.4;
      text = $STR_DISP_BACK;
    };
    
    class kompas: RscCompass
    {
    
    };
  };
};

//Single mission selection screen.
class RscDisplaySingleMission: RscStandardDisplay
{
	idd = IDD_SINGLE_MISSION;
  none = ProcTextWhite;
  done = ProcTextWhite;
  locked = ProcTextWhite;
  package = ProcTextWhite;

	class controls
	{
	  class Title: RscTitle {text = $STR_DISP_SINGLE_TITLE;};

		//Lists all the available single missions and subfolders with more missions.
		class Missions: RscListBox
		{
			idc = IDC_SINGLE_MISSION;
	  	x = 0.067; y = 0.15;
			h = 0.65;
		};

		//Todo: make this control interactive to change pages.
		//HTML briefing screen is displayed in this field.
		class Overview: RscHTML
		{
			idc = IDC_SINGLE_OVERVIEW;
			x = 0.53; y = 0.15;
			w = 0.4; h = 0.65;
	  };

	  //Difficulty selection button.
	  class B_Difficulty: RscActiveText
	  {
	    idc = IDC_SINGLE_DIFF;
	    x = 0.03; y = 0.9;
	  };

	  //Cancel back to the main menu.
	  class B_Cancel: B_Difficulty
	  {
	    idc = IDC_CANCEL;
	    x = 0.21;
	    text = $STR_DISP_CANCEL;
	  };

	  //Restart mission button.
	  class B_Start: B_Difficulty
	  {
	    idc = IDC_SINGLE_LOAD;
	    x = 0.39;
	  };

	  //Continue from a save or start the mission.
	  class B_Continue: B_Difficulty
	  {
	    idc = IDC_OK;
	    x = 0.57;
	    w = 0.4;
	    default = 1;
	  };
	};
};

//Campaign selection screen.
class RscDisplayCampaignLoad: RscStandardDisplay
{
  idd = IDD_CAMPAIGN_LOAD;

  class controlsBackground
  {
    class TitleBackground: RscText
    {
      idc = 1080;
      x = -0.314286;
      y = -0.157143;
      w = 1.4;
      h = 0.0571429;
      colorBackground[] = {0.77, 0.51, 0.08, 0.8};
    };

    //Starts at the top of mission name to avoid thin line without background
    class PictureBackground: RscText
    {
      idc = 1081;
      x = 0.371429;
      y = 0.084;
      w = 0.88;
      h = 0.52;
      colorBackground[] = {0, 0, 0, 0.7};
    };

    //To avoid thin line without background between mission name and author
    class NameAndAuthorBackground: RscText
    {
      idc = 1082;
      x = 0.371429;
      y = -0.0942857;
      w = 0.88;
      h = 0.1;
      colorBackground[] = {0, 0, 0, 0.7};
    };

    class OverviewTextBackground: RscText
    {
      idc = 1083;
      x = 0.371429;
      y = 0.608;
      w = 0.88;
      h = 0.308;
      colorBackground[] = {0, 0, 0, 0.7};
    };
  };

  class controls
  {
    class Title: RscTitle
    {
      idc = 1000;
      colorBackground[] = {0, 0, 0, 0};
      style = ST_LEFT;
      text = $STR_A3_RSCDISPLAYMAIN_BUTTONCAMPAIGN;
      x = -0.314286;
      y = -0.157143;
      w = 0.681429;
      h = 0.0571429;
    };

    class PlayersName: Title
    {
      idc = 8434;
      style = ST_RIGHT;
      colorBackground[] = {0, 0, 0, 0};
      x = 0.371429;
      y = -0.157143;
      w = 0.942857;
      h = 0.0571429;
    };

    class BriefingName: RscText
    {
      idc = IDC_CAMPAIGN_NAME;
      shadow = 0;
      x = 0.371429;
      y = -0.0942857;
      w = 0.942857;
      h = 0.0685714;
    };

    class Author: RscText
    {
      idc = IDC_CAMPAIGN_AUTHOR;
      shadow = 0;
      x = 0.371429;
      y = -0.0257143;
      w = 0.942857;
      h = 0.0457143;
      colorText[] = {1, 1, 1, 0.5};
    };

    class OverviewGroup: RscControlsGroup
    {
      idc = 2300;
      x = 0.371429;
      y = 0.02;
      w = 0.942857;
      h = 0.628571;
      class VScrollbar: VScrollbar {width = 0;};
      class HScrollbar: HScrollbar {height = 0;};

      class controls
      {
        class OverviewPicture: RscPictureKeepAspect
        {
          idc = IDC_CAMPAIGN_PICTURE;
          text = "#(argb,8,8,3)color(0,0,0,0)";
          x = 0;
          y = 0;
          w = 0.9;
          h = 0.45;
        };

        class OverviewNoise: RscPicture
        {
          idc = 1201;
          text = "#(argb,8,8,3)color(0,0,0,0)";
          x = 0;
          y = 0;
          w = 0.66;
          h = 0.44;
        };

        class DLCStripe: RscPicture
        {
          idc = IDC_CAMPAIGN_DLCSTRIPE;
          colorText[] = {GUI_BCG_RGB, 1};
          text = "#(argb,8,8,3)color(0,0,0,0)";
          x = 0;
          y = 0;
          w = 0.66;
          h = 0.44;
        };

        class DLCIcon: RscPicture
        {
          idc = IDC_CAMPAIGN_DLCICON;
          text = "#(argb,8,8,3)color(1,1,1,1)";
          x = 0.6;
          y = 0;
          w = 0.06;
          h = 0.08;
        };
      };
    };

    class OverviewControlsGroup: RscControlsGroup
    {
      idc = 2301;
      x = 0.371429;
      y = 0.654286;
      w = 0.942857;
      h = 0.371429;
      class HScrollbar : HScrollbar {height = 0;};

      class controls
      {
        class OverviewText: RscStructuredText
        {
          idc = IDC_CAMPAIGN_DESCRIPTION;
          x = 0;
          y = 0;
          w = 0.645;
          h = 0.16;
        };

        class EstimatedDeployment: RscStructuredText
        {
          idc = IDC_CAMPAIGN_TEXT_ESTDEPLOY;
          text = $STR_A3_Campaign_Full_Dynamic;
          x = 0;
          y = 0.16;
          w = 0.645;
          h = 0.04;
        };

        class ReleaseDate: RscHTML
        {
          idc = IDC_CAMPAIGN_RELEASEDATE;
          x = 0;
          y = 0.2;
          w = 0.645;
          h = 0.048;
        };
      };
    };

    class SearchBackground: RscText
    {
      idc = 1005;
      colorBackground[] = {0, 0, 0, 0.7};
      x = -0.314286;
      y = -0.0942857;
      w = 0.681429;
      h = 0.0571429;
    };

    class Search: RscEdit
    {
      idc = 645; //Scripted IDC_SEARCH
      x = -0.314286;
      y = -0.0942857;
      w = 0.638571;
      h = 0.0571429;
    };

    class SearchButton: RscButton
    {
      idc = 646; //Scripted IDC_SEARCH_BUTTON
      x = 0.324286;
      y = -0.1;
      w = 0.0428571;
      h = 0.0571429;
    };

    class MissionsTree: RscTree
    {
      idc = IDC_CAMPAIGN_HISTORY;
      colorBackground[] = {0, 0, 0, 0.7};
      expandOnDoubleclick = true;
      idcSearch = IDC_SEARCH;
      x = -0.314286;
      y = -0.0371429;
      w = 0.681429;
      h = 1.13143;
    };

    class ValueDifficulty: RscStructuredText
    {
      idc = IDC_CAMPAIGN_DIFF;
      x = 0.371429;
      y = 1.03714;
      w = 0.942857;
      h = 0.0571429;
    };

    class ButtonCancel: RscShortcutButton
    {
      idc = IDC_CANCEL;
      shortcuts[] = {KEY_XBOX_B};
      text = $STR_DISP_BACK;
      x = -0.314286;
      y = 1.1;
      w = 0.267857;
      h = 0.0571429;
    };

    class ButtonGameOptions: RscShortcutButton
    {
      idc = IDC_OPTIONS_GAMEOPTIONS;
      text = $STR_DISP_OPTIONS_GAME_OPTIONS;
      x = -0.04;
      y = 1.1;
      w = 0.267857;
      h = 0.0571429;
    };

    class ButtonBuyDLC: RscShortcutButton
    {
      idc = IDC_CAMPAIGN_BUY_DLC;
      shortcuts[] = {INPUT_SHIFT_OFFSET + DIK_P};
      colorBackground[] = {0.0313725490196078, 0.7215686274509804, 0.9176470588235294, 1.0};
      text = $STR_A3_DLC_SCENARIO_PURCHASE_BUTTON;
      x = 1.04643;
      y = 1.1;
      w = 0.267857;
      h = 0.0571429;
      tooltip = $STR_A3_DLC_SCENARIO_PURCHASE_TOOLTIP;
    };

    class ButtonRevert: RscShortcutButton
    {
      idc = IDC_CAMPAIGN_REPLAY;
      shortcuts[] = {KEY_XBOX_X};
      text = $STR_CAMPAIGN_RESTART;
      x = 0.774286;
      y = 1.1;
      w = 0.267857;
      h = 0.0571429;
    };

    class ButtonOK: RscShortcutButton
    {
      idc = IDC_OK;
      shortcuts[] = {KEY_XBOX_A, DIK_RETURN, DIK_SPACE, DIK_NUMPADENTER};
      default = 1;
      text = $STR_DISP_CONTINUE;
      x = 1.04643;
      y = 1.1;
      w = 0.267857;
      h = 0.0571429;
    };

    class ButtonMPCampaign: ButtonOK
    {
      idc = 1020;
      text = $STR_SINGLE_OPEN;
      show = 0;
      onButtonClick = "";
      default = 0;
    };
  };
};

//Campaign reverting screen.
class RscDisplayRevert: RscStandardDisplay
{
	idd = IDD_REVERT;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_REVERT_TITLE;
			text = $STR_SURE;
		};

		class Question: RscText
		{
			idc = IDC_REVERT_QUESTION;
			x = 0.54; y = 0.35;
			w = 0.4; h = 0.5;
			text = $STR_DISP_REVERT_QUESTION;
			style = ST_CENTER;
		};
	};
};

//Main briefing screen (for single missions).
class RscDisplayGetReady: RscDisplayMainMap
{
	idd = IDD_INTEL_GETREADY;
  	showGearOnExit = false;

	class controlsBackground
	{
		class Background1: RscText
		{
			x = 0; y = 0;
			w = 0.5; h = 1;
			colorBackground[] = Color_Background;
		};

		class Background2: Background1
		{
			x = 0.5; y = 0;
			h = 0.05;
		};

		class Background3: Background2
		{
			y = 0.95;
		};

		class Background4: Background1
		{
			x = 0.95;
			w = 0.05;
		};
	};

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GETREADY_TITLE;
			x = 0;
			w = 0.5;
		};

		//Todo: Buttons don't respond.
		//Go to the gear screen.
		class B_Continue: RscActiveText
		{
			idc = IDC_OK;
			x = 0.1; y = 0.90;
			w = 0.15;
			text = $STR_DISP_CONTINUE;
			default = true;
		};

		//Cancel back to the single mission screen.
		class B_Cancel: B_Continue
		{
			idc = IDC_CANCEL;
			x = 0.25;
			text = $STR_DISP_CANCEL;
			default = false;
		};
	};
};

//Main gear screen.
class RscDisplayGear
{
	idd = IDD_GEAR;
	emptyGun = ProcTextWhite;
	emptySec = ProcTextWhite;
	emptyEq = ProcTextWhite;
	emptyMag = ProcTextWhite;
	emptyMag2 = ProcTextWhite;
	emptyHGun = ProcTextWhite;
	emptyHGunMag = ProcTextWhite;

	movingEnable = false;
	enableDisplay = true;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GEAR_UNIT;
			text = $STR_GEAR_TITLE;
		};


		// Pool of weapons and magazines.
		class Pool : RscListNBox
		{
			idc = IDC_GEAR_POOL;
			style = LB_TEXTURES;
			x = 0.05; y = 0.6;
			w = 0.4; h = 0.3;
			// make it readable
			color[] = Color_Black; 
      xcolumn1 = 0.1;
      xcolumn2 = 0.25;
      xcolumn3 = 0.85;

      colorPlayerItem[] = Color_Orange;
		};

    //Add item to soldier / remove from pool
    class B_Add: RscButton
    {
      idc = IDC_GEAR_ADD_ITEM;
      x = 0.0; y = 0.2;
      h = 0.1;
      w = 0.1;
      text = "";
    };

    //Rremove item from soldier / add to pool
    class B_Remove: B_Add
    {
      idc = IDC_GEAR_REMOVE_ITEM;
      x = 0.2; y = 0.2;
      text = "";
    };

		//Selected unit's skill level.
		class Skill: RscPicture
		{
			idc = IDC_GEAR_SKILL;
			x = 0.73; y = 0.20;
			w = 0.05; h = 0.05;
		};

		//Selected unit's vehicle.
		class Vehicle: RscPicture
		{
			idc = IDC_GEAR_VEHICLE;
			x = 0.8; y = 0.2;
			w = 0.06; h = 0.06;
		};

		//Selected unit's equipment.
		class Weapons: RscHtml
		{
			idc = IDC_GEAR_WEAPONS;
			x = 0.55; y = 0.18;
			w = 0.4; h = 0.6;
			align = "center";
			cycleLinks = false;
		};


		//Rearm soldier
		class B_Rearm: RscActiveText
		{
			idc = IDC_GEAR_REARM;
			x = 0.75; y = 0.9;
			w = 0.15;
			text = $STR_GEAR_REARM;
		};

    //open bag
    class B_OpenBag: RscActiveText
    {
      idc = IDC_GEAR_OPEN_BAG;
      x = 0.7; y = 0.9;
      w = 0.15;
      text = "OPEN";
    };

    //close bag
    class B_CloseBag: RscActiveText
    {
      idc = IDC_GEAR_CLOSE_BAG;
      x = 0.7; y = 0.9;
      w = 0.15;
      text = "CLOSE";
    };

		//Exit the gear screen.
		class B_Close: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.85; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CLOSE;
			default = 1;
		};
	};

  class Filters
  {
    class All
    {
      name = $STR_A3_RscDisplayGear_Filters_All0;
      mask = 8191;
      image = "";
    };
    class Primary
    {
      name = $STR_A3_RscDisplayGear_Filters_Primary0;
      mask = 257;
      image = "";
    };
    class Secondary
    {
      name = $STR_A3_RscDisplayGear_Filters_Secondary0;
      mask = 260;
      image = "";
    };
    class HandGun
    {
      name = $STR_A3_RscDisplayGear_Filters_HandGun0;
      mask = 8128;
      image = "";
    };
    class Items
    {
      name = $STR_A3_RscDisplayGear_Filters_Items0;
      mask = 1023;
      image = "";
    };
  };
};

//Todo: Verify this works.
//Switching the piece of equipment.
class RscDisplayGearWeapon: RscStandardDisplay
{
	idd = IDD_GEAR_SELECT;

	class controls
	{
		class Title: RscTitle
		{
			idc = IDC_GEAR_SELECT_TITLE;
		};

		//Available equipment.
		class Weapon: RscListBox
		{
			idc = IDC_GEAR_SELECT_LIST;
			style = LB_TEXTURES;
			x = 0.07; y = 0.2;
			w = 0.44; h = 0.6;
			rowHeight = 0.065;
		};

		//HTML overview of the selected piece of equipment.
		class Overview: RscHtml
		{
			idc = IDC_GEAR_SELECT_OVERVIEW;
			x = 0.523; y = 0.2;
			w = 0.422; h = 0.68;
			align = "center";
		};

		//Drop the piece of equipment.
		class B_Drop: RscActiveText
		{
			idc = IDC_GEAR_SELECT_DROP;
			x = 0.25; y = 0.9;
			w = 0.15;
			// maybe different string should be used
			text = $STR_TOOLTIP_DROP; 
			default = 1;
		};

		//Select the piece of equipment and exit.
		class B_OK: B_Drop
		{
			idc = IDC_OK;
			x = 0.85;
			text = $STR_DISP_OK;
			default = 1;
		};

		class B_CANCEL: B_Drop
		{
			idc = IDC_CANCEL;
			x = 0.9;
			text = $STR_DISP_CANCEL;
			default = 1;
		};

	};
};

class RscDisplayArtillery: RscStandardDisplay
{
  idd = -1;
  enableSimulation = true;
  movingEnable = false;

  class controls {};
}

class RscDisplayEmpty
{
	access = ReadAndWrite;
	movingEnable = false;

	class controls {};
};

//In-game mission screen.
class RscDisplayMission: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_MISSION;
};

//In-game intro screen.
class RscDisplayIntro: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_INTRO;
};

//In-game outro screen.
class RscDisplayOutro: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_OUTRO;
};

//In-game award screen.
class RscDisplayAward: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_AWARD;
};

//In-game campaign screen.
class RscDisplayCampaign: RscDisplayEmpty
{
	access = ReadAndWrite;
	idd = IDD_CAMPAIGN;
};

//Dead screen.
class RscDisplayMissionEnd: RscStandardDisplay
{
	idd = IDD_MISSION_END;

	#define MissionEnd_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_MISSION_KILLED;};

		//Quote of famous person.
		class Quotation: RscText
		{
			idc = IDC_ME_QUOTATION;
			style = ST_MULTI;
			lineSpacing = 1;
			x = 0.1; y = 0.7;
			w = 0.85; h = 0.2;
		};

		//Famous person.
		class Author: RscText
		{
			idc = IDC_ME_AUTHOR;
			style = ST_RIGHT;
			x = 0.45; y = 0.85;
			w = 0.4;
		};

		//Load a previous save.
		class B_Load: RscButton
		{
			idc = IDC_ME_LOAD;
			x = 0.35;
			y = MissionEnd_Y;
			text = $STR_DISP_ME_LOAD;
		};

		//Retry the mission from the last autosave.
		class B_Retry: B_Load
		{
			idc = IDC_ME_RETRY;
			y = MissionEnd_Y + 0.1;
			text = $STR_DISP_ME_RETRY;
			default = 1;
		};

		//Restart the mission.
		class B_Restart: B_Load
		{
		  idc = IDC_ME_RESTART;
		  y = MissionEnd_Y + 0.2;
		  text = $STR_XBOX_PLAY_AGAIN;
		};

		//Abort the mission.
		class B_Abort: B_Load
		{
			idc = IDC_CANCEL;
			y = MissionEnd_Y + 0.3;
			text = $STR_DISP_ME_ABORT;
		};

		// Team switch.
		class B_TeamSwitch: B_Load
		{
			idc = IDC_ME_TEAM_SWITCH;
			y = MissionEnd_Y + 0.4;
			text = $STR_DISP_ME_TEAM_SWITCH;
		};

		//Mission name and difficulty
		class MissionTitle: RscText
		{
			idc = IDC_INT_MISSIONNAME;
			x = 0.025 * safezoneW + safezoneX;
			y = 0.92 * safezoneH + safezoneY;
			w = 0.625 * safezoneW;
			h = 0.04 * safezoneH;
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

class RscDisplayTeamSwitch: RscStandardDisplay
{
  idd = IDD_TEAM_SWITCH;
  movingEnable = false;

  colorPlayer[] = Color_Text_Default;
  colorPlayerSelected[] = Color_Orange;

  class Controls
  {
    class Background : RscText
    {
      x = 0.60000;
      y = 0.00000;
      w = 0.40000;
      h = 0.40000;

      style = ST_HUD_BACKGROUND;
      colorBackground[] = {0.1, 0.1, 0.1, 1};
    };
    class Roles : RscListBox
    {
      idc = IDC_TEAM_SWITCH_ROLES;
      style = LB_TEXTURES;
      x = 0.61; y = 0.01;
      w = 0.39; h = 0.29;
    };
    class ButtonOK : RscButton
    {
      idc = IDC_OK;
      x = 0.61; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_OK;
      default = 1;
    };
    class ButtonCancel : RscButton
    {
      idc = IDC_CANCEL;
      x = 0.81; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_CANCEL;
    };
  };
};

//In-game pause screen.
class RscDisplayInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define Interrupt_Y 0.2

  class controls
  {
		class Title: RscTitle {text = $STR_DISP_INT_TITLE;};


		//Continue the mission.
		class B_Continue: RscButton
		{
			idc = IDC_CANCEL;
			x = 0.35;
			y = Interrupt_Y;
			h = 0.08;
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};

		//Manually save the mission.
		class B_Save: B_Continue
		{
			idc = IDC_INT_SAVE;
			y = Interrupt_Y + 0.08;
			text = $STR_DISP_INT_SAVE;
			default = 0;
		};

		//Load from the last manual save.
		class B_Load: B_Continue
		{
			idc = IDC_INT_LOAD;
			y = Interrupt_Y + 0.16;
			text = $STR_DISP_INT_LOAD;
			default = 0;
		};

		//Retry from the last autosave.
		class B_Retry: B_Continue
		{
			idc = IDC_INT_RETRY;
			y = Interrupt_Y + 0.24;
			text = $STR_DISP_INT_RETRY;
			default = 0;
		};

		//Open the options menu.
		class B_Options: B_Continue
		{
			idc = IDC_INT_OPTIONS;
			y = Interrupt_Y + 0.32;
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		//Abort the mission.
		class B_Abort: B_Continue
		{
			idc = IDC_INT_ABORT;
			y = Interrupt_Y + 0.56;
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};

    // Diary
    class B_Diary: RscButton
    {
      idc = IDC_INT_DIARY;
      x = 0.35;
      y = MP_Interrupt_Y + 0.70;
      h = 0.08;
      text = $STR_ACTION_DIARY;
      default = 0;
    };

    // Revert - open list of available saves
    class B_Revert: RscButton
    {
      idc = IDC_INT_REVERT;
      x = 0.35;
      y = MP_Interrupt_Y + 0.78;
      h = 0.08;
      text = $STR_DISP_REVERT;
      default = 0;
    };

    //Mission name and difficulty
    class MissionTitle: RscText
    {
      idc = IDC_INT_MISSIONNAME;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.92 * safezoneH + safezoneY;
      w = 0.625 * safezoneW;
      h = 0.04 * safezoneH;
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

class RscDisplayInterruptRevert: RscStandardDisplay
{
  idd = IDD_INTERRUPT_REVERT;
  movingEnable = false;

  class Controls
  {
    class Background : RscText
    {
      x = 0.60000;
      y = 0.00000;
      w = 0.40000;
      h = 0.40000;

      style = ST_HUD_BACKGROUND;
      colorBackground[] = {0.1, 0.1, 0.1, 1};
    };
    class RevertTypes : RscListBox
    {
      idc = IDC_INT_REVERT_TYPE;
      x = 0.61; y = 0.01;
      w = 0.39; h = 0.29;
    };
    class ButtonOK : RscButton
    {
      idc = IDC_OK;
      x = 0.61; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_OK;
      default = 1;
    };
    class ButtonCancel : RscButton
    {
      idc = IDC_CANCEL;
      x = 0.81; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_CANCEL;
    };

    //Mission name and difficulty
    class MissionTitle: RscText
    {
      idc = IDC_INT_MISSIONNAME;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.92 * safezoneH + safezoneY;
      w = 0.625 * safezoneW;
      h = 0.04 * safezoneH;
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

class RscDisplaySelectSave: RscStandardDisplay
{
  idd = IDD_SELECT_SAVE;
  movingEnable = false;

  class Controls
  {
    class Background : RscText
    {
      x = 0.60000;
      y = 0.00000;
      w = 0.40000;
      h = 0.40000;

      style = ST_HUD_BACKGROUND;
      colorBackground[] = {0.1, 0.1, 0.1, 1};
    };
    class SaveTypes : RscListBox
    {
      idc = IDC_SELECT_SAVE_SLOTS;
      x = 0.61; y = 0.01;
      w = 0.39; h = 0.29;
    };
    class ButtonOK : RscButton
    {
      idc = IDC_OK;
      x = 0.61; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_OK;
      default = 1;
    };
    class ButtonCancel : RscButton
    {
      idc = IDC_CANCEL;
      x = 0.81; y = 0.31;
      w = 0.19; h = 0.08;
      text = $STR_DISP_CANCEL;
    };

    //Mission name and difficulty
    class MissionTitle: RscText
    {
      idc = IDC_INT_MISSIONNAME;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.92 * safezoneH + safezoneY;
      w = 0.625 * safezoneW;
      h = 0.04 * safezoneH;
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

//In-game pause screen multiplayer.
class RscDisplayMPInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define MP_Interrupt_Y 0.2

  class controls
	{
		class Title: RscTitle
		{
			idc = IDC_INT_MISSION;
		};

		class B_Continue: RscButton
		{
			idc = IDC_CANCEL;
			x = 0.35; y = MP_Interrupt_Y;
			h = 0.08;
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};

		class B_Players: B_Continue
		{
			idc = IDC_INT_PLAYERS;
			y = MP_Interrupt_Y + 0.08;
			text = $STR_MPTABLE_PLAYERS;
			default = 0;
		};

    //Manually save the mission.
    class B_Save: B_Continue
    {
      idc = IDC_INT_SAVE;
      y = Interrupt_Y + 0.24;
      text = $STR_DISP_INT_SAVE;
      default = 0;
    };

    //Load from the last manual save.
    class B_Load: B_Continue
    {
      idc = IDC_INT_LOAD;
      y = Interrupt_Y + 0.32;
      text = $STR_DISP_INT_LOAD;
      default = 0;
    };

    //Retry from the last autosave.
    class B_Retry: B_Continue
    {
      idc = IDC_INT_RETRY;
      y = Interrupt_Y + 0.40;
      text = $STR_DISP_INT_RETRY;
      default = 0;
    };

    class B_Abort: B_Continue
		{
			idc = IDC_INT_ABORT;
			y = MP_Interrupt_Y + 0.56;
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};

    // Diary
    class B_Diary: RscButton
    {
      idc = IDC_INT_DIARY;
      x = 0.35;
      y = MP_Interrupt_Y + 0.70;
      h = 0.08;
      text = $STR_ACTION_DIARY;
      default = 0;
    };

    //Mission name and difficulty
    class MissionTitle: RscText
    {
      idc = IDC_INT_MISSIONNAME;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.92 * safezoneH + safezoneY;
      w = 0.625 * safezoneW;
      h = 0.04 * safezoneH;
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

//Debriefing screen.
class RscDisplayDebriefing: RscStandardDisplay
{
	idd = IDD_DEBRIEFING;
	statisticsLinks = false;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_DEBRIEFING;};

		class MissionTitle: RscText
		{
			x = 0.25; y = 0.05;
			w = 0.5; h = 0.05;
			idc = IDC_DEBRIEFING_TITLE;
		};

		class MissionResult: RscText
		{
			x = 0.25; y = 0.15;
			w = 0.5; h = 0.05;
			idc = IDC_DEBRIEFING_RESULT;
		};

		//Debriefing statistics.
		class DebriefingInfo: RscHTML
		{
			idc = IDC_DEBRIEFING_INFO;
			x = 0.25; y = 0.25;
			w = 0.5; h = 0.2;
		};

		//Debriefing statistics.
		class DebriefingText: RscHTML
		{
			idc = IDC_DEBRIEFING_DEBRIEFING;
			x = 0.25; y = 0.5;
			w = 0.5; h = 0.2;
		};

		//Debriefing statistics.
		class DebriefingObjectives: RscHTML
		{
			idc = IDC_DEBRIEFING_OBJECTIVES;
			x = 0.25; y = 0.75;
			w = 0.5; h = 0.2;
		};


		//Mission debriefing.
		class Right: RscHTML
		{
			idc = IDC_SINGLE_OVERVIEW;
			x = 0.75; y = 0.05;
			w = 0.4; h = 0.15;
		};

		class Left: RscHTML
		{
			idc = IDC_DEBRIEFING_STAT;
			x = 0.25; y = 0.18;
			w = 0.5; h = 0.1;
		};


		class PlayersTitle: RscText
		{
			idc = IDC_DEBRIEFING_PLAYERS_TITLE;
			x = 0.7; y = 0.7;
			w = 0.25;
			text = $STR_DISP_SRVSETUP_PLAYERS;
			style = ST_LEFT + ST_WITH_RECT;
		};

		//List of players in the server.
		class Players: RscListBox
		{
			idc = IDC_DEBRIEFING_PLAYERS;
			x = 0.7; y = 0.75;
			w = 0.25; h = 0.125;
		};

		//Restart the mission.
		class B_Restart: RscActiveText
		{
			idc = IDC_DEBRIEFING_RESTART;
			x = 0.65; y = 0.9;
			w = 0.15;
			text = $STR_DISP_DEBRIEFING_RESTART;
		};

		//Continue.
		class B_Continue: B_Restart
		{
			idc = IDC_CANCEL;
			x = 0.8;
			text = $STR_DISP_CONTINUE;
			default = 1;
		};
  };
};

//Dead screen.
class RscDisplayMissionFail: RscStandardDisplay
{
  idd = IDD_MISSION_END;
	statisticsLinks = false;

#define MissionEnd_Y 0.2

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_DEBRIEFING;};

    class MissionTitle: RscText
    {
      x = 0.25; y = 0.05;
      w = 0.5; h = 0.05;
      idc = IDC_DEBRIEFING_TITLE;
    };

    class MissionResult: RscText
    {
      x = 0.25; y = 0.15;
      w = 0.5; h = 0.05;
      idc = IDC_DEBRIEFING_RESULT;
    };

    //Debriefing statistics.
    class DebriefingInfo: RscHTML
    {
      idc = IDC_DEBRIEFING_INFO;
      x = 0.25; y = 0.25;
      w = 0.5; h = 0.2;
    };

    //Debriefing statistics.
    class DebriefingText: RscHTML
    {
      idc = IDC_DEBRIEFING_DEBRIEFING;
      x = 0.25; y = 0.5;
      w = 0.5; h = 0.2;
    };

    //Debriefing statistics.
    class DebriefingObjectives: RscHTML
    {
      idc = IDC_DEBRIEFING_OBJECTIVES;
      x = 0.25; y = 0.75;
      w = 0.5; h = 0.2;
    };


    //Mission debriefing.
    class Right: RscHTML
    {
      idc = IDC_SINGLE_OVERVIEW;
      x = 0.75; y = 0.05;
      w = 0.4; h = 0.15;
    };

    class Left: RscHTML
    {
      idc = IDC_DEBRIEFING_STAT;
      x = 0.25; y = 0.18;
      w = 0.5; h = 0.1;
    };


    class PlayersTitle: RscText
    {
      idc = IDC_DEBRIEFING_PLAYERS_TITLE;
      x = 0.7; y = 0.7;
      w = 0.25;
      text = $STR_DISP_SRVSETUP_PLAYERS;
      style = ST_LEFT + ST_WITH_RECT;
    };

    //List of players in the server.
    class Players: RscListBox
    {
      idc = IDC_DEBRIEFING_PLAYERS;
      x = 0.7; y = 0.75;
      w = 0.25; h = 0.125;
    };

    //Load a previous save.
    class B_Load: RscButton
    {
      idc = IDC_ME_LOAD;
      x = 0.35;
      y = MissionEnd_Y;
      text = $STR_DISP_ME_LOAD;
    };

    //Retry the mission from the last autosave.
    class B_Retry: RscButton
    {
      idc = IDC_ME_RETRY;
      y = MissionEnd_Y + 0.1;       
      x = 0.35;
      text = $STR_DISP_ME_RETRY;
      default = 1;
    };

    //Restart the mission.
    class B_Restart: RscButton
    {
      idc = IDC_ME_RESTART;
      y = MissionEnd_Y + 0.2;       
      x = 0.35;
      text = $STR_XBOX_PLAY_AGAIN;
    };

    //Abort the mission.
    class B_Abort: RscButton
    {
      idc = IDC_CANCEL;
      y = MissionEnd_Y + 0.3;       
      x = 0.35;
      text = $STR_DISP_ME_ABORT;
    };
  };
};

//User profile selection screen.
class RscDisplayLogin: RscStandardDisplay
{
	idd = IDD_LOGIN;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_LOGIN_TITLE;};

		class TextUser: RscText
		{
			x = 0.1; y = 0.15;
			w = 0.45;
			text = $STR_DISP_LOGIN_USER;
		};

		//Available profiles.
		class ValueUser: RscListBox
		{
			idc = IDC_LOGIN_USER_LIST;
			x = 0.1; y = 0.2;
			w = 0.45; h = 0.5;
			rows = 10;
		};

		//Create a new profile.
		class B_New: RscActiveText
		{
			idc = IDC_LOGIN_NEW_USER;
			x = 0.65; y = 0.2;
			w = 0.2;
			text = $STR_DISP_NEW;
		};

		//Edit the selected profile.
		class B_Edit: RscActiveText
		{
			idc = IDC_LOGIN_EDIT;
			x = 0.65; y = 0.25;
			w = 0.2;
			text = $STR_DISP_EDIT;
		};

		//Discard changes made while editing profile.
		class B_Discard: RscActiveText
		{
			idc = IDC_LOGIN_DISCARD;
			x = 0.851; y = 0.25;
			w = 0.2;
			text = "Discard";
		};

		//Delete the selected profile.
		class B_Delete: RscActiveText
		{
			idc = IDC_LOGIN_DELETE;
			x = 0.65; y = 0.3;
			w = 0.2;
			text = $STR_DISP_DELETE;
		};

		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.12;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the selected profile.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};

		class TextName: RscText
		{
			x = 0.025; y = 0.25;
			w = 0.45;
			text = $STR_DISP_NEW_USER_NAME;
		};

		//Profile name field.
		class ValueName: RscEdit
		{
			idc = IDC_LOGIN_NAME;
			x = 0.025; y = 0.3;
			w = 0.45; h = 0.06;
		};

		//Assigned user ID number.
		class ValueId: RscText
		{
			idc = IDC_LOGIN_ID;
			x = 0.025; y = 0.2;
			w = 0.45;
		};

		class TextFace: RscText
		{
			x = 0.525; y = 0.2;
			w = 0.45;
			text = $STR_DISP_NEW_USER_FACE;
		};

		//Available avatar faces.
		class ValueFace: RscListBox
		{
			idc = IDC_LOGIN_FACE;
			x = 0.525; y = 0.25;
			w = 0.45; h = 0.18;
			rows = 3;
		};

		class TextGlasses: RscText
		{
			x = 0.525; y = 0.45;
			w = 0.45;
			text = $STR_DISP_NEW_USER_GLASSES;
		};

		//Available avatar glasses.
		class ValueGlasses: RscListBox
		{
			idc = IDC_LOGIN_GLASSES;
			x = 0.525; y = 0.5;
			w = 0.45; h = 0.12;
			rows = 2;
		};

		class TextSpeaker: RscText
		{
			x = 0.525; y = 0.65;
			w = 0.45;
			text = $STR_DISP_NEW_USER_SPEAKER;
		};

		//Available avatar voices.
		class ValueSpeaker: RscListBox
		{
			idc = IDC_LOGIN_SPEAKER;
			x = 0.525; y = 0.7;
			w = 0.45; h = 0.12;
			rows = 2;
		};

		class TextPitch: RscText
		{
			x = 0.025; y = 0.5;
			w = 0.45;
			text = $STR_DISP_NEW_USER_PITCH;
		};

		//Avatar voice pitch.
		class ValuePitch: RscSlider
		{
			idc = IDC_LOGIN_PITCH;
			x = 0.025; y = 0.55;
			w = 0.45; h = 0.05;
		};

		class TextSquad: RscText
		{
			idc = IDC_LOGIN_SQUAD_TEXT;
			x = 0.025; y = 0.37;
			w = 0.45;
			text = $STR_DISP_NEW_USER_SQUAD;
		};

		//User's squad XML page.
		class ValueSquad: RscEdit
		{
			idc = IDC_LOGIN_SQUAD;
			x = 0.025; y = 0.42;
			w = 0.45; h = 0.06;
		};
	};
};

//Mods selection screen. (Mod Launcher, see https://wiki.bistudio.com/index.php/Arma_2_Armod)
class RscDisplayModLauncher: RscStandardDisplay
{
  idd = IDD_MOD_LAUNCHER;

  class controls
  {
    class Title: RscTitle
    {
      text = "Expansions"; //$STR_DISP_MOD_LAUNCHER_TITLE;
    };

    //Available mods.
    class ValueMods: RscListBox
    {
      idc = IDC_MOD_LAUNCHER_MODS;
      x = 0.1; y = 0.2;
      w = 0.45; h = 0.5;
      rows = 10;

      // icons      
      active = ProcTextGreen;
      enabled = ProcTextWhite;
      disabled = ProcTextRed;
    };

    //Selected mod's picture (if present)
    class ModPicture: RscPicture
    {
      idc = IDC_MOD_LAUNCHER_PICTURE;
      x = 0.6; y = 0.2;
      w = 0.15; h = 0.2;
    };

    //Move the current mod up
    class B_Up: RscActiveText
    {
      idc = IDC_MOD_LAUNCHER_UP;
      x = 0.65; y = 0.4;
      w = 0.2;
      text = "Up"; //$STR_MOD_LAUNCHER_UP;
    };

    //Move the current mod down
    class B_Down: RscActiveText
    {
      idc = IDC_MOD_LAUNCHER_DOWN;
      x = 0.65; y = 0.45;
      w = 0.2;
      text = "Down"; //$STR_MOD_LAUNCHER_DOWN;
    };

    //Disable/Enable the selected profile.
    class B_DisableEnable: RscActiveText
    {
      idc = IDC_MOD_LAUNCHER_DISABLE;
      x = 0.65; y = 0.50;
      w = 0.2;
      text = "Disable"; //$STR_MOD_LAUNCHER_DISABLE;
    };

    //Cancel back to the main menu.
    class B_Cancel: RscActiveText
    {
      idc = IDC_CANCEL;
      x = 0.45; y = 0.9;
      w = 0.12;
      text = $STR_DISP_CANCEL;
    };

    //Current selected Mod related action (or default)
    class B_ModAction: RscActiveText
    {
      idc = IDC_MOD_LAUNCHER_ACTION;
      x = 0.65; y = 0.9;
      w = 0.12;
      text = "Mod Info"; //$STR_MOD_LAUNCHER_ACTION;
    };

    //Confirm the selected profile.
    class B_OK: B_Cancel
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 0.85;
      default = 1;
    };
  };
};

//Main options screen.
class RscDisplayOptions
{
	idd = IDD_OPTIONS;

	movingEnable = true;
	enableDisplay = true;

	#define Display_Options_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_TITLE;};

		//Open the video options.
		class Video: RscButton
		{
			idc = IDC_OPTIONS_VIDEO;
			style = ST_CENTER;
			x = 0.35; y = Display_Options_Y;
			h = 0.05; w = 0.3;
			text = $STR_DISP_OPTIONS_VIDEO;
		};

		//Open the audio options.
		class Audio: Video
		{
			idc = IDC_OPTIONS_AUDIO;
			y = Display_Options_Y + 0.1;
			text = $STR_DISP_OPTIONS_AUDIO;
		};

		//Open the input options.
		class Configure: Video
		{
			idc = IDC_OPTIONS_CONFIGURE;
			y = Display_Options_Y + 0.2;
			text = $STR_DISP_OPTIONS_CONFIGURE;
		};

		//Open the difficulty options.
		class GameOptions: Video
		{
			idc = IDC_OPTIONS_GAMEOPTIONS;
			y = Display_Options_Y + 0.3;
			text = $STR_DISP_OPTIONS_GAME_OPTIONS;
		};

    //Watch the credits.
		class B_Credits: RscActiveText
		{
			idc = IDC_OPTIONS_CREDITS;
			x = 0.05; y = 0.9;
			w = 0.15;
			text = $STR_DISP_MAIN_CREDITS;
		};

		//Close the options screen.
		class B_Close: B_Credits
		{
			idc = IDC_CANCEL;
			x = 0.85;
			text = $STR_DISP_CLOSE;
			default = 1;
		};
	};
};

class RscDisplayOptionsInGame
{
	idd = IDD_OPTIONS;

	movingEnable = true;
	enableDisplay = true;

	#define Display_Options_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_TITLE;};

		//Open the video options.
		class Video: RscButton
		{
			idc = IDC_OPTIONS_VIDEO;
			style = ST_CENTER;
			x = 0.35; y = Display_Options_Y;
			h = 0.05;
			text = $STR_DISP_OPTIONS_VIDEO;
		};

		//Open the audio options.
		class Audio: Video
		{
			idc = IDC_OPTIONS_AUDIO;
			y = Display_Options_Y + 0.1;
			text = $STR_DISP_OPTIONS_AUDIO;
		};

		//Open the input options.
		class Configure: Video
		{
			idc = IDC_OPTIONS_CONFIGURE;
			y = Display_Options_Y + 0.2;
			text = $STR_DISP_OPTIONS_CONFIGURE;
		};

		//Open the difficulty options.
		class GameOptions: Video
		{
			idc = IDC_OPTIONS_GAMEOPTIONS;
			y = Display_Options_Y + 0.3;
			text = $STR_DISP_OPTIONS_GAME_OPTIONS;
		};

		//Watch the credits.
		class B_Credits: RscActiveText
		{
			idc = IDC_OPTIONS_CREDITS;
			x = 0.05; y = 0.9;
			w = 0.15;
			text = $STR_DISP_MAIN_CREDITS;
		};

		//Close the options screen.
		class B_Close: B_Credits
		{
			idc = IDC_CANCEL;
			x = 0.85;
			text = $STR_DISP_CLOSE;
			default = 1;
		};
	};
};

//Video options screen.
class RscDisplayOptionsVideo
{
	idd = IDD_OPTIONS_VIDEO;

	movingEnable = true;
	enableDisplay = true;

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_VIDEO;};

		__EXEC(_xInit = 0.019; _yInit = 0.135; _xSpacing = 0.195;)

    //Select the UI size
    class TextIGUISize: RscText
    {
      x = __EVAL(_xInit + (0 * _xSpacing));
      y = __EVAL(_yInit);
			w = 0.20;
      text = "IGUI size";
    };
    class ValueIGUISize: RscListBox
    {
      idc = IDC_OPTIONS_IGUISIZE;
      x = __EVAL(_xInit + (0 * _xSpacing));
      y = __EVAL(_yInit + 0.045);
      w = 0.185;
      h = 0.21;
    };

		//Select the screen resolution.
		class TextResolution: TextIGUISize
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			text = $STR_DISP_OPT_RESOLUTION;
		};
		class ValueResolution: ValueIGUISize
		{
			idc = IDC_OPTIONS_RESOLUTION;
			x = __EVAL(_xInit + (0 * _xSpacing));
		};

		//Select the aspect ratio.
		class TextAspectRatio: TextIGUISize
		{
			x = __EVAL(_xInit + (1 * _xSpacing));
			text = $STR_DISP_OPT_ASPECT_RATIO;
		};
		class ValueAspectRatio: ValueIGUISize
		{
			idc = IDC_ASPECT_RATIO;
			x = __EVAL(_xInit + (1 * _xSpacing));
		};

		//Select the screen refresh rate.
		class TextRefresh: TextIGUISize
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			text = $STR_DISP_OPT_REFRESH;
		};

		class ValueRefresh: ValueIGUISize
		{
			idc = IDC_OPTIONS_REFRESH;
			x = __EVAL(_xInit + (2 * _xSpacing));
			w = 0.145;
		};

		__EXEC(_xInit = 0.019; _yInit = 0.415; _xSpacing = 0.195; _ySpacing = 0.20)

		//Select the objects detail.
		class TextObjectsDetail: RscText
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = 0.185;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_OBJECTS_DETAIL;
		};
		class ValueObjectsDetail: RscListBox
		{
			idc = IDC_OBJECTS_DETAIL;
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			w = 0.185; h = 0.135;
			sizeEx = Size_Text_Small;
			rows = 5;
		};

		//Select the texture detail.
		class TextTextureDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing));
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_TEXTURE_DETAIL;
		};
		class ValueTextureDetail: ValueObjectsDetail
		{
			idc = IDC_TEXTURE_DETAIL;
			sizeEx = Size_Text_Small;
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
		};

		//Select the quality preference.
		class TextQualityPreference: TextObjectsDetail
		{
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing));
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_QUALITY_PREFERENCE;
		};
		class ValueQualityPreference: ValueObjectsDetail
		{
			idc = IDC_QUALITY_PREFERENCE;
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the shading detail.
		class TextShadingDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_SHADING_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueShadingDetail: ValueObjectsDetail
		{
			idc = IDC_SHADING_DETAIL;
			x = __EVAL(_xInit + (0 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the terrain detail.
		class TextTerrain: TextObjectsDetail
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_TERRAIN;
			sizeEx = Size_Text_Small;
		};
		class ValueTerrain: ValueObjectsDetail
		{
			idc = IDC_OPTIONS_TERRAIN;
			x = __EVAL(_xInit + (1 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the shadow detail.
		class TextShadowDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_SHADOW_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueShadowDetail: ValueObjectsDetail
		{
			idc = IDC_SHADOW_DETAIL;
			x = __EVAL(_xInit + (2 * _xSpacing)); y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the  HDR Quality .
		class TextHDRDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			text = $STR_DISP_OPT_HDR_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueHDRDetail: ValueObjectsDetail
		{
			idc = IDC_HDR_DETAIL;
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the Anisotropic Filtering Quality.
		class TextAnisotropicDetail: TextObjectsDetail
		{
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_ANISO_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueAnisotropicDetail: ValueObjectsDetail
		{
			idc = IDC_ANISO_DETAIL;
			x = __EVAL(_xInit + (3 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

    //Enable / Disable the VSYNC
    class TextVsync: TextObjectsDetail
    {
      x = __EVAL(_xInit + (3 * _xSpacing));
      y = __EVAL(_yInit + (2 * _ySpacing));
      text = "Vsync";
      sizeEx = Size_Text_Small;
    };
    class ValueVsync: ValueObjectsDetail
    {
      idc = IDC_VSYNC_VALUE;
      x = __EVAL(_xInit + (3 * _xSpacing));
      y = __EVAL(_yInit + (2 * _ySpacing) + 0.045);
      sizeEx = Size_Text_Small;
    };

		//Select the Reflections Quality.
		class TextPostprocessEffects: TextObjectsDetail
		{
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing));
			text = $STR_DISP_OPT_POSTPROCESS_EFFECTS;
			sizeEx = Size_Text_Small;
		};
		class ValuePostprocessEffects: ValueObjectsDetail
		{
			idc = IDC_POSTPROCESS_EFFECTS;
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};

		//Select the Antialiasing Quality.
		class TextAntialiasing: TextObjectsDetail
		{
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing));
			text = $STR_DISP_OPT_FSAA_DETAIL;
			sizeEx = Size_Text_Small;
		};
		class ValueAntialiasing: ValueObjectsDetail
		{
			idc = IDC_FSAA_DETAIL;
			x = __EVAL(_xInit + (4 * _xSpacing));
			y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
			sizeEx = Size_Text_Small;
		};
    /*
    //Select the PPAA Quality.
    class TextPPAADetail: TextObjectsDetail
    {
      x = __EVAL(_xInit + (5 * _xSpacing));
      y = __EVAL(_yInit + (0 * _ySpacing));
      text = "PPAA";
      sizeEx = Size_Text_Small;
    };
    class ValuePPAADetail: ValueObjectsDetail
    {
      idc = IDC_PPAA_DETAIL;
      x = __EVAL(_xInit + (5 * _xSpacing));
      y = __EVAL(_yInit + (0 * _ySpacing) + 0.045);
      sizeEx = Size_Text_Small;
    };

    //Select the AToC Quality.
    class TextAToCDetail: TextObjectsDetail
    {
      x = __EVAL(_xInit + (5 * _xSpacing));
      y = __EVAL(_yInit + (1 * _ySpacing));
      text = "AToC";
      sizeEx = Size_Text_Small;
    };
    class ValueAToCDetail: ValueObjectsDetail
    {
      idc = IDC_ATOC_DETAIL;
      x = __EVAL(_xInit + (5 * _xSpacing));
      y = __EVAL(_yInit + (1 * _ySpacing) + 0.045);
      sizeEx = Size_Text_Small;
    };
    */

    class TextPIPDetail: TextObjectsDetail
    {
      x = 0.05;
      y = 0.15;
      text = $STR_DISP_OPT_PIP;
      sizeEx = Size_Text_Small;
    };

    class ValuePIPDetail: RscListBox
    {
      idc = IDC_OPTIONS_PIP_VALUE;
      x = 0.35;
      y = 0.15;
      sizeEx = Size_Text_Small;
      w = 0.185; h = 0.135;
      rows = 2;
    };

    class ValueFXAADetail: RscListBox
    {
      idc = IDC_OPTIONS_FXAA_VALUE;
      x = 0.35;
      y = 0.15;
      sizeEx = Size_Text_Small;
      w = 0.185; h = 0.135;
      rows = 2;
    };

    class TextSWDetail: TextObjectsDetail
    {
      x = 0.55;
      y = 0.15;
      text = $STR_DISP_OPT_CLOUDS;
      sizeEx = Size_Text_Small;
    };

    class ValueSWDetail: RscListBox
    {
      idc = IDC_OPTIONS_SW_VALUE;
      x = 0.75;
      y = 0.15;
      sizeEx = Size_Text_Small;
      w = 0.185; h = 0.135;
      rows = 2;
    };

		#define Display_Options_Video_YSpacing 0.03

		//Enable or disable object w-buffer.
		class TextWBuffer: RscTextSmall
		{
			x = __EVAL(_xInit + (0 * _xSpacing));
			y = __EVAL(_yInit + (2 * _ySpacing));
			w = 0.3;
			text = $STR_DISP_OPT_WBUFFER;
		};
		class ValueWBuffer: RscActiveText
		{
			idc = IDC_OPTIONS_WBUFFER;
			x = __EVAL(_xInit + (0 * _xSpacing)) + 0.16;
			y = __EVAL(_yInit + (2 * _ySpacing));
			w = 0.15; h = 0.03;
			sizeEx = Size_Text_Small;
		};

		class TextBrightness: RscText
		{
			x = 0.56; y = 0.135;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_BRIGHT;
		};
		//The current brightness value.
		class ValueBrightness: RscText
		{
			idc = IDC_OPTIONS_BRIGHT_VALUE;
			x = 0.86; y = 0.135;
			w = 0.10;
			sizeEx = Size_Text_Small;
		};
		//Change the brightness.
		class SliderBrightness: RscSlider
		{
			idc = IDC_OPTIONS_BRIGHT_SLIDER;
			x = 0.56; y = 0.19;
			w = 0.415;
		};

		class TextGamma: RscText
		{
			x = 0.56; y = 0.225;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_GAMMA;
		};
		//The current gamma level.
		class ValueGamma: RscText
		{
			idc = IDC_OPTIONS_GAMMA_VALUE;
			x = 0.86; y = 0.225;
			w = 0.1;
			sizeEx = Size_Text_Small;
		};
		//Change the gamma level.
		class SliderGamma: RscSlider
		{
			idc = IDC_OPTIONS_GAMMA_SLIDER;
			x = 0.56; y = 0.28;
			w = 0.415;
		};

		class TextVisibility: RscText
		{
			x = 0.56; y = 0.315;
			w = 0.3;
			sizeEx = Size_Text_Small;
			text = $STR_DISP_OPT_VISIBILITY;
		};
		//The current viewing distance.
		class ValueVisibility: RscText
		{
			idc = IDC_OPTIONS_VISIBILITY_VALUE;
			x = 0.86; y = 0.315;
			w = 0.1;
			sizeEx = Size_Text_Small;
		};
		//Change the viewing distance.
		class SliderVisibility: RscSlider
		{
			idc = IDC_OPTIONS_VISIBILITY_SLIDER;
			x = 0.56; y = 0.37;
			w = 0.415;
		};

    class TextShadowVisibility: RscText
    {
      idc = IDC_OPTIONS_SHADOW_VISIBILIT_TEXT;
      x = 0.05; y = 0.05;
      w = 0.3;
      sizeEx = Size_Text_Small;
      text = $STR_DISP_OPT_SHADOW_DIST;
    };
    //The current viewing distance.
    class ValueShadowVisibility: RscText
    {
      idc = IDC_OPTIONS_SHADOW_VISIBILITY_VALUE;
      x = 0.4; y = 0.05;
      w = 0.1;
      sizeEx = Size_Text_Small;
    };
    //Change the viewing distance.
    class SliderShadowVisibility: RscSlider
    {
      idc = IDC_OPTIONS_SHADOW_VISIBILITY_SLIDER;
      x = 0.55; y = 0.05;
      w = 0.415;
    };

		//Cancel back to the main options screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.13;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the video options.
		class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};

    //Restore all setting to their default.
    class B_Default: RscActiveText
    {
      idc = IDC_OPTIONS_VIDEO_DEFAULT;
      x = 0.05; y = 0.9;
      w = 0.15;
      text = $STR_DISP_DEFAULT;
    };
  };
};

//Audio options screen.
class RscDisplayOptionsAudio
{
	idd = IDD_OPTIONS_AUDIO;

	movingEnable = true;
	enableDisplay = true;

	#define Display_Options_Audio_Y 0.6
  #define Display_Options_Audio_YSpacing 0.09

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_OPTIONS_AUDIO;};

		class TextEffects: RscText
		{
			x = 0.35; y = 0.2;
			w = 0.3;
			text = $STR_DISP_OPT_EFFECTS;
		};

		//The current volume for sound effects.
		class ValueEffects: RscText
		{
			idc = IDC_OPTIONS_EFFECTS_VALUE;
			x = 0.5; y = 0.2;
		};

		//Change the volume for sound effects.
		class SliderEffects: RscSlider
		{
			idc = IDC_OPTIONS_EFFECTS_SLIDER;
			x = 0.2; y = 0.25;
			w = 0.6;
		};

		class TextVoices: RscText
		{
			x = 0.35; y = 0.3;
			w = 0.3;
			text = $STR_DISP_OPT_VOICES;
		};

		//The current volume for voices.
		class ValueVoices: RscText
		{
			idc = IDC_OPTIONS_VOICES_VALUE;
			x = 0.5; y = 0.3;
		};

		//Change the volume for voices.
		class SliderVoices: RscSlider
		{
			idc = IDC_OPTIONS_VOICES_SLIDER;
			x = 0.2; y = 0.35;
			w = 0.6;
		};

    //The current volume for voices.
    class ValueVON: RscText
    {
      idc = IDC_OPTIONS_VON_VALUE;
      x = 0.5; y = 0.7;
    };

    //Change the volume for voices.
    class SliderVON: RscSlider
    {
      idc = IDC_OPTIONS_VON_SLIDER;
      x = 0.2; y = 0.75;
      w = 0.6;
    };


    //The current volume for voices.
    class ValueSamplesCount: RscText
    {
      idc = IDC_OPTIONS_SAMPLES_VALUE;
      x = 0.5; y = 0.7;
    };

    //Change the volume for voices.
    class SliderSamplesCount: RscSlider
    {
      idc = IDC_OPTIONS_SAMPLES_SLIDER;
      x = 0.2; y = 0.85;
      w = 0.6;
    };

		class TextMusic: RscText
		{
			x = 0.35; y = 0.4;
			w = 0.3;
			text = $STR_DISP_OPT_MUSIC;
		};

		//The current volume for music.
		class ValueMusic: RscText
		{
			idc = IDC_OPTIONS_MUSIC_VALUE;
			x = 0.5; y = 0.4;
		};

		//Change the volume for music.
		class SliderMusic: RscSlider
		{
			idc = IDC_OPTIONS_MUSIC_SLIDER;
			x = 0.2; y = 0.45;
			w = 0.6;
		};

    class TextMicSensitivity: RscText
    {
      x = 0.159803; y = (0.420549 + 3*0.069854);
      text = "Mic. sens.:";
    };

    // microphone sensitivity
    class SliderMicSensitivity: RscSlider
    {
      idc = IDC_OPTIONS_MIC_SENS_SLIDER;
      x = 0.2; y = (0.420549 + 3*0.069854); 
      w = 0.4;
    };

    // auto adjust mic. sensitivity
    class AutoAdjustMicSensitivity: RscActiveText
    {
      idc = IDC_OPTIONS_MIC_ADJUST;
      x = 0.3; y = 0.7;
      w = 0.6;
      text = "Auto adjust";
    };

		class TextHWAcc: RscText
		{
			x = 0.22; y = Display_Options_Audio_Y;
			w = 0.40;
			text = $STR_DISP_OPT_HWACC;
		};

		//Enable or disable hardware accelerated audio.
		class ValueHWAcc: RscListBox
		{
			idc = IDC_OPTIONS_HWACC;
			x = 0.62; y = Display_Options_Audio_Y;
			w = 0.15;
			h = 0.08;
		};

		class TextEAX: TextHWAcc
		{
	    y = Display_Options_Audio_Y + (1 * Display_Options_Audio_YSpacing);
			text = $STR_DISP_OPT_EAX;
		};

		//Enable or disable EAX sound.
		class ValueEAX: ValueHWAcc
		{
			idc = IDC_OPTIONS_EAX;
	    y = Display_Options_Audio_Y + (1 * Display_Options_Audio_YSpacing);
		};

    class TextPlayerVoice: TextHWAcc
    {
      y = Display_Options_Audio_Y + (2 * Display_Options_Audio_YSpacing);
      text = $STR_DISP_OPT_PLAYER_VOICE;
    };

    //Enable or disable player voice-over in dialogs.
    class ValuePlayerVoice: ValueHWAcc
    {
      // IDC_OPTIONS_PLAYER_VOICE;
	  idc = IDC_OPTIONS_SINGLE_VOICE;
      y = Display_Options_Audio_Y + (2 * Display_Options_Audio_YSpacing);
    };

		//Cancel back to the main options screen.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.6; y = 0.9;
			w = 0.15;
			text = $STR_DISP_CANCEL;
		};

		//Confirm the audio options and exit.
	  class B_OK: B_Cancel
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
			x = 0.85;
			default = 1;
		};

    //Restore all setting to their default.
    class B_Default: RscActiveText
    {
      idc = IDC_OPTIONS_AUDIO_DEFAULT;
      x = 0.05; y = 0.9;
      w = 0.15;
      text = $STR_DISP_DEFAULT;
    };
	};
};

class RscDisplayMicSensitivityOptions
{
  idd = IDD_OPTIONS_AUDIO_ADJUST_MIC;

  movingEnable = true;
  enableDisplay = true;

  class controls
  {
    class Title: RscTitle {text = "Microphone sensitivity adjustment";};

    class B_Start: RscActiveText
    {
      idc = IDC_OPTIONS_MIC_START_ADJUST;
      x = 0.1; y = 0.15;
      w = 0.15;
      text = "Start";
    };

    class TextProgress: RscText
    {
      x = 0.25; y = 0.15;
      w = 0.3;
      text = "Done:";
    };

    class TextProgressVal: RscText
    {
      x = 0.30; y = 0.15;
      w = 0.3;
      text = " 0%";
      idc = IDC_OPTIONS_MIC_PROGRESS;
    };

    //Cancel back to the main options screen.
    class B_Cancel: RscActiveText
    {
      idc = IDC_CANCEL;
      x = 0.1; y = 0.2;
      w = 0.15;
      text = $STR_DISP_CANCEL;
    };

    //Confirm the audio options and exit.
    class B_OK: B_Cancel
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 0.2; y = 0.2;
      default = 1;
    };
  };
};

//Difficulty options screen.
class RscDisplayGameOptions
{
  idd = IDD_GAMEOPTIONS;

  movingEnable = true;
  enableDisplay = true;

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_OPTIONS_GAME_OPTIONS;};

    class TextSubtitles: RscText
    {
      x = 0.025; y = 0.2;
      w = 0.95 * 0.6;
      text = $STR_OPT_SUBTITLES;	
    };

    class RadioSubtitles: TextSubtitles
    {
      y = 0.3;
      text = $STR_OPT_RADIO_SUBTITLES;	
    };

    class TextGore: TextSubtitles
    {
      idc = IDC_OPTIONS_BLOOD_TEXT;
      y = 0.4;
      text = $STR_DISP_OPT_BLOOD;
    };

    //Select the screen resolution.
    class TextLanguage: TextSubtitles
    {
      y = 0.5;
      text = $STR_DISP_OPT_LANGUAGE;
    };

    //Setting of the floating zone
    class TextFloatingZone: RscText
    {
      x = 0.6;
      y = 0.6;
      w = 0.15;
      text = $STR_DISP_CONF_FLOATING_ZONE;
    };

    //Enable or disable hardware accelerated audio.
    class Subtitles: RscListBox
    {
      idc = IDC_OPTIONS_SUBTITLES;
      x = 0.6;
      y = 0.2;
      w = 0.15;
      h = 0.08;
    };

    class Radio: Subtitles
    {
      idc = IDC_OPTIONS_RADIO;
      x = 0.6;
      y = 0.3;
      w = 0.15;
      h = 0.08;
    };

		class ValueBlood: Subtitles
		{
			idc = IDC_OPTIONS_BLOOD;
			x =  0.6;
		  y = 0.4;
      h = 0.12;
		};

    class ValueLanguage: Subtitles
    {
      idc = IDC_OPTIONS_LANGUAGE;
      x =  0.6;
      y = 0.5;
      h = 0.12;
    };

    //Change the setting of the floating zone
    //(area within you can move cursor without rotating view)
    class ValueFloatingZone: RscSlider
    {
      idc = IDC_CONFIG_FLOATING_ZONE;
      x = 0.6;
      y = 0.6;
      w = 0.35;
      h = 0.03;
    };

    //Setting of the head bob (user reduction of the effect)
    class TextHeadBob: RscText
    {
      x = 0.6;
      y = 0.7;
      w = 0.15;
      text = $STR_DISP_OPT_HEADBOB;
    };
    class ValueHeadBob: RscSlider
    {
      idc = IDC_OPTIONS_HEADBOB;
      x = 0.6;
      y = 0.7;
      w = 0.35;
      h = 0.03;
    };

    //opens difficulty settings
    class B_Difficulty: RscActiveText
    {
      idc = IDC_OPTIONS_DIFFICULTY;
      x = 0.025;
      y = 0.6;
      w = 0.15;
      text = $STR_DISP_OPTIONS_DIFFICULTY;	
    };

    //Confirm the difficulty options and exit.
    class B_OK: B_Difficulty
    {
      idc = IDC_OK;
      x = 0.85;
      y = 0.9;
      text = $STR_DISP_OK;
      default = 1;
    };

    //Cancel back to the main options screen.
    class B_Cancel: B_Difficulty
    {
      idc = IDC_CANCEL;
      x = 0.6;
      y = 0.9;
      text = $STR_DISP_CANCEL;
    };
  };
};


class RscListBoxKeys : RscListBox
{
  //red
  collisionColor[] = {1, 0, 0, 1}; 
  collisionColorFirstKey[] = {0, 0.7, 0.9, 1}; // azur
  disabledKeyColor[] = Color_Gray;
  mainCollumW = 0.4;
  secndCollumW = 0.6;
};


class RscDisplayControlSchemes
{
  idd = IDD_CONTROLS_SCHEME;
  movingEnable = true;

  class controls
  {
    class Title: RscTitle
    {
      text = $STR_DISP_OPTIONS_SCHEME;
      x = 0.31;
      y = 0.25;
      w = 0.37;
      h = 0.04;
    };
    class ControlsSchemes: RscListbox
    {
      idc = IDC_CONFIG_DEFAULTCONTROLS_LIST;
      rows = 10;
      x = 0.31;
      y = 0.3;
      w = 0.37;
      h = 0.4;
      colorBackground[] = {0,0,0,1};
    };
    class ButtonOK: RscButton
    {
      idc = IDC_OK;
      x = 0.5;
      y = 0.7;
      w = 0.18;
      h = 0.04;
      text = $STR_DISP_OK;
      default = 1;
    };
    class ButtonCancel: ButtonOK
    {
      idc = IDC_CANCEL;
      x = 0.31;
      y = 0.7;
      w = 0.18;
      h = 0.04;
      text = $STR_DISP_CANCEL;
      default = false;
    };
  };
};

//Input options screen.
class RscDisplayConfigure
{
  idd = IDD_CONFIGURE;

  movingEnable = true;
  enableDisplay = true;

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_OPTIONS_CONFIGURE;};

    class TextName: RscText
    {
      x = 0.025;
      y = 0.2;
      w = 0.95 * 0.95 * 0.4;
      text = $STR_DISP_CONF_NAME;
    };

    class TextKeys: RscText
    {
      x = 0.025 + 0.95 * 0.95 * 0.4;
      y = 0.2;
      w = 0.95 * 0.95 * 0.6;
      text = $STR_DISP_CONF_KEYS;
    };

    class ControlsPageText: RscText
    {
      x = 0.01;
      y = 0.15;
      w = 0.1;
      h = 0.04;
      text = $STR_DISP_CONF_SHOW;
    };

    //Combo to specify the controls page
    class ControlsPage: RscCombo
    {
      idc = IDC_CONFIG_CONTROLS_PAGE;
      x = 0.12;
      y = 0.15;
      w = 0.29;
      h = 0.04;
    };

    //List of the keyboard, mouse and joystick controls.
    class ValueKeys: RscListBoxKeys
    {
      idc = IDC_CONFIG_KEYS;
      x = 0.025;
      y = 0.25;
      w = 0.95;
      h = 0.4;
      rowHeight = 0.03;
      rows = 0.4 / 0.03;
    };

    class TextReserved: RscText
    {
      x = 0.01;
      y = 0.667;
      w = 0.95;
      text = $STR_DISP_CONF_RES;
    };

    class TextMouseSens: RscText
    {
      x = 0.01;
      y = 0.70;
      w = 0.6;
      h = 0.15;
      text = $STR_DISP_CONF_SENS;
    };

    //The current mouse sensitivity on the X axis.
    class TextXAxis: RscText
    {
      x = 0.05;
      y = 0.785;
      w = 0.15;
      text = $STR_DISP_CONF_XAXIS;
    };

    //The current mouse sensitivity on the X axis.
    class TextMouseSmoothing: RscText
    {
      x = 0.05;
      y = 0.875;
      w = 0.15;
      text = "Smoothing:";
    };

    //Change the mouse sensitivity on the X axis.
    class ValueXAxis: RscSlider
    {
      idc = IDC_CONFIG_XAXIS;
      x = 0.21;
      y = 0.8;
      w = 0.35;
      h = 0.03;
    };

    //The current mouse sensitivity on the Y axis.
    class TextYAxis: RscText
    {
      x = 0.05;
      y = 0.83;
      w = 0.15;
      text = $STR_DISP_CONF_YAXIS;
    };

    //Change the mouse sensitivity on the Y axis.
    class ValueYAxis: RscSlider
    {
      idc = IDC_CONFIG_YAXIS;
      x = 0.21;
      y = 0.85;
      w = 0.35;
      h = 0.03;
    };

    //Change the mouse sensitivity on the Y axis.
    class ValueMouseSmoothing: RscSlider
    {
      idc = IDC_CONFIG_MOUSE_FILTERING;
      x = 0.21;
      y = 0.89;
      w = 0.35;
      h = 0.03;
    };

    //Enable or disable a reversed Y axis.
    class ValueYReversed: RscListBox
    {
      idc = IDC_CONFIG_YREVERSED;
      x = 0.62;
      y = 0.79;
      w = 0.35;
      h = 0.08;
    };

    class TextButtons: RscText
    {
      x = 0.05;
      y = 0.92;
      w = 0.3;
      text = $STR_DISP_CONF_MOUSE_BUTTON;
    };

    //ToDo: Verify this button works.
    //Enable or disable reversed mouse buttons.
    class ValueButtons: RscActiveText
    {
      idc = IDC_CONFIG_BUTTONS;
      x = 0.5;
      y = 0.92;
      w = 0.075;
      style = ST_CENTER;
    };

    //Configure joysticks
    class ValueJoystick: RscActiveText
    {
      idc = IDC_CONFIG_JOYSTICK;
      x = 0.6;
      y = 0.98;
      w = 0.35;
      text = "Controllers"; //text is now static!
      style = ST_CENTER;
    };

    //Restore the settings to their default.
    class B_Default: RscActiveText
    {
      idc = IDC_CONFIG_DEFAULT;
      x = 0.16;
      y = 0.98;
      w = 0.15;
      text = $STR_DISP_DEFAULT;
    };

    //Confirm the input options and exit.
    class B_OK: B_Default
    {
      idc = IDC_OK;
      x = 0.86;
      text = $STR_DISP_OK;
      default = 1;
    };

    //Cancel back to the main options screen.
    class B_Cancel: B_Default
    {
      idc = IDC_CANCEL;
      x = 0;
      text = $STR_DISP_CANCEL;
    };
  };
};

// Configure single Input action
class RscDisplayConfigureAction
{
  idd = IDD_CONFIGURE_ACTION;

  access = ReadAndWrite;
  movingEnable = false;
  enableSimulation = false;
  enableDisplay = false;

  class ControlsBackground
  {
    class Background: RscText
    {
      x = 0.2; y = 0.2;
      w = 0.6; h = 0.7;
      colorBackground[] = Color_Background;
    };
  };

  class Controls
  {
    class Title: RscTitle//RscText
    {
      idc = IDC_CONFIGURE_ACTION_TITLE;
      style = ST_CENTER;
      x = 0.2;
      y = 0.2;
      w = 0.6;
      text = $STR_DISP_CONFACT_TITLE;
    };
    class TextHelp: RscText
    {
      x = 0.2; y = 0.65;
      w = 0.95;
      text = $STR_DISP_CONF_HELP;
    };
    class TextReserved: RscText
    {
      x = 0.2; y = 0.86;
      w = 0.95;
      text = $STR_DISP_CONF_RES;
    };

    class ValueCurrentKeys : RscListBoxKeys
    {
      idc = IDC_CONFIGURE_ACTION_KEYS;
      x = 0.2; y = 0.25;
      w = 0.25; h = 0.4;
      rowHeight = 0.03;
      rows = 0.4 / 0.03;
      canDrag = true;
    };
    class ValueSpecialKeys: RscListBox
    {
      idc = IDC_CONFIGURE_ACTION_SPECIAL;
      x = 0.55; y = 0.25;
      w = 0.25; h = 0.4;
      rowHeight = 0.03;
      rows = 0.4 / 0.03;
      canDrag = true;
      colorSelect[] = Color_Black;
      colorSelect2[] = Color_Black;
      colorSelectBackground[] = Color_Background;
      colorSelectBackground2[] = Color_Background;
    };
    class RscConfActionButton: RscButton
    {
      w = 0.1; h = 0.05;
      font = FontMAIN;
      sizeEx = Size_Text_Small;
    };
    class B_Delete: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_DELETE;
      x = 0.2; y = 0.7;
      text = $STR_DISP_DELETE;
    };
    class B_Default: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_DEFAULT;
      x = 0.325; y = 0.7;
      text = $STR_DISP_DEFAULT;
    };
    class B_Clear: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_CLEAR;
      x = 0.450; y = 0.7;
      text = $STR_DISP_CONFACT_UNDO;
    };
    class B_Cancel: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_CANCEL;
      x = 0.575; y = 0.7;
      text = $STR_DISP_CANCEL,;
    };
    class B_Prev: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_PREV;
      x = 0.2; y = 0.77;
      text = $STR_USRACT_MENU_DOWN;
    };
    class B_Next: RscConfActionButton
    {
      idc = IDC_CONFIGURE_ACTION_NEXT;
      x = 0.325; y = 0.77;
      text = $STR_USRACT_MENU_UP;
    };
    //Confirm the input options and exit.
    class B_OK : RscConfActionButton
    {
      idc = IDC_OK;
      x = 0.700; y = 0.7;
      text = $STR_DISP_OK;
      default = 1;
    };
  };
};

// Configure all connected joysticks
class RscDisplayConfigureControllers
{
  idd = IDD_CONFIGURE_JOYSTICKS;

  movingEnable = true;
  enableDisplay = true;

  class controls
  {
    class Title: RscTitle {text = "Configure controllers";};

    class RscConfJoysticksButton: RscButton
    {
      w = 0.2; h = 0.05;
      font = FontMAIN;
      sizeEx = Size_Text_Small;
    };
    class RscControllersListBox : RscListBox
    {
      disabledCtrlColor[] = Color_Gray;
    };

    //List of the connected joysticks
    class TextControllerList: RscText
    {
      x = 0.3; y = 0.2;
      w = 0.35;
      text = "Customizable controllers";
    };
    class ControllerList: RscControllersListBox
    {
      idc = IDC_CONTROLLER_LIST;
      x = 0.3; y = 0.25;
      w = 0.35; h = 0.3;
      rowHeight = 0.05;
      rows = 0.7 / 0.05;
    };
    //List of the connected joysticks
    class TextXInputList: RscText
    {
      x = 0.3; y = 0.55;
      w = 0.35;
      text = "Controllers with scheme";
    };
    class XInputList: RscControllersListBox
    {
      idc = IDC_CONTROLLER_XINPUT_LIST;
      x = 0.3; y = 0.60;
      w = 0.35; h = 0.2;
      rowHeight = 0.05;
      rows = 0.7 / 0.05;
    };
    // buttons
    class EnableDisable: RscConfJoysticksButton
    {
      idc = IDC_CONTROLLER_ENABLE;
      x = 0.7; y = 0.4;
      text = "Enable";
    };
    class Customize: RscConfJoysticksButton
    {
      idc = IDC_CONTROLLER_CUSTOMIZE;
      x = 0.7; y = 0.5;
      text = "Customize";
    };
    class Refresh : RscConfJoysticksButton
    {
      idc = IDC_CONTROLLER_REFRESH;
      x = 0.7; y = 0.6;
      text = "Refresh";
    };
    class B_OK: RscConfJoysticksButton
    {
      idc = IDC_OK;
      x = 0.7; y = 0.7;
      text = $STR_DISP_OK;
      default = 1;
    };
  };
};

class RscDisplayCustomizeController
{
  idd = IDD_CUSTOMIZE_CONTROLLER;

  class Controls
  {
    class T_Background: RscText
    {
      colorBackground[] = Color_Background;
      x = 0.02; y = 0.08;
      w = 0.71; h = 0.41;
    };

    class T_Title: RscTitle
    {
      idc = IDC_CUSTOMIZE_CTRL_TITLE;
      style = ST_TITLE;
      x = 0.02; y = 0.09;
      w = 0.71;
    };

    class G_ControlsGroup: RscControlsGroup
    {
      idc = IDC_CUSTOMIZE_CTRL_SENSITIVITIES;
      x = 0.02; y = 0.15;
      w = 0.81; h = 0.24;

      class Controls
      {
        //Controls are added by the program.
      };
    };

    class B_OK: RscButton
    {
      idc = IDC_OK;
      x = 0.37; y = 0.42;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };

    class B_Unmap: B_OK
    {
      idc = IDC_CUSTOMIZE_CTRL_UNMAP;
      x = 0.09;
      text = $STR_OPT_CONTROLLERS_UNMAP;
      default = 0;
    };

    class B_Default: B_OK
    {
      idc = IDC_CUSTOMIZE_CTRL_DEFAULT;
      x = 0.23;
      text = $STR_DISP_DEFAULT_CURVE;
      default = 0;
    };

    class B_Default_Bind: B_OK
    {
      idc = IDC_CUSTOMIZE_CTRL_DEFAULT_BINDING;
      x = 0.23;
      y = 0.5;
      text = $STR_DISP_DEFAULT_MAP;
      default = 0;
    };

    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.51;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
    class B_Advanced: B_OK
    {
      idc = IDC_CUSTOMIZE_CTRL_ADVANCED;
      x = 0.61;
      text = "$STR_DISP_SHOW";
      default = 0;
    };
  };

  class Title: RscText
  {
    x = 0.06; y = 0;
    w = 0.12; h = 0.025;
    sizeEx = 0.025;
    text = "";
  };

  axisActiveIcon = ProcTextRed;
  class ActiveAxis: RscPicture
  {
    idc = IDC_CUSTOMIZE_CTRL_ACTIVE_AXIS_ICON;
    x = 0.02; y = 0;
    w = 0.025; h = 0.025;
    text = ProcTextRed;
  };

  class Slider: RscXSliderH
  {
    x = 0.18; y = 0;
    w = 0.40; h = 0.025;
    vspacing = 0.015;
  };

  class DeadZoneSlider: RscXSliderH
  {
    type = CT_XSLIDER;
    style = SL_HORZ	+ SL_TEXTURES;
    x = 0.60; y = 0;
    w = 0.13; h = 0.045;
    vspacing = 0.05;
  };

  class Steepness : RscListBox
  {
    x = 0.75; y = 0;
    w = 0.12; h = 0.045;
    vspacing = 0.05;
    values[] = {"1.0", "1.2", "1.5", "1.9", "2.4", "3.0"};
  };

  class AxisValue: RscText
  {
    x = 0.89; y = 0;
    w = 0.1; h = 0.045;
    vspacing = 0.05;
  };
};

// Choose the joystick scheme for (selected) joystick
class RscDisplayJoystickSchemes
{
  idd = IDD_JOYSTICK_SCHEMES;

  movingEnable = true;
  enableDisplay = true;

  class controls
  {
    class T_Title: RscTitle
    {
      idc = IDC_JOY_SCHEMES_TITLE;
      style = ST_TITLE;
      x = 0.02; y = 0.09;
      w = 0.71;
      text = "Map controller: %s";
    };

    class RscJoysticksSchemeButton: RscButton
    {
      w = 0.2; h = 0.05;
      font = FontMAIN;
      sizeEx = Size_Text_Small;
    };

    //List of joystick schemes
    class TextJoySchemesList: RscText
    {
      x = 0.3; y = 0.2;
      w = 0.35;
      text = "Joystick schemes";
    };
    class SchemesList: RscListBox
    {
      idc = IDC_JOY_SCHEMES_LIST;
      x = 0.3; y = 0.25;
      w = 0.35; h = 0.3;
      rowHeight = 0.05;
      rows = 0.7 / 0.05;
    };

    // buttons
    class B_MapScheme: RscJoysticksSchemeButton
    {
      idc = IDC_JOY_SCHEMES_MAP;
      x = 0.7; y = 0.4;
      text = "Map";
    };
    class B_Cancel: RscJoysticksSchemeButton
    {
      idc = IDC_CANCEL;
      x = 0.7; y = 0.5;
      text = $STR_DISP_CANCEL;
      default = 1;
    };
  };
};

//The main menu credits screen.
class RscDisplayCredits: RscStandardDisplay
{
	idd = IDD_CREDITS;

	class controls
	{
		class Text1: RscText
		{
			idc = 50001; 
			x = 0; y = 0.4;
			w = 1;
			style = ST_CENTER;
			text = $STR_CREDIT_FP2ENGINE;
		};

		class Text2: Text1
		{
			idc = 50002; 
			y = 0.45;
			sizeEx = Size_Text_Small;
			text = $STR_CREDIT_COPYRIGHT;
		};

		class Text3: Text1
		{
			idc = 50003; 
			y = 0.48;
			sizeEx = Size_Text_Small;
			text = $STR_CREDIT_RIGHTS;
		};

		//Cancel back to the main menu.
		class B_Cancel: RscActiveText
		{
			idc = IDC_CANCEL;
			x = 0.4; y = 0.9;
			w = 0.2;
			text = $STR_DISP_CANCEL;
		};
	};
};

//Field Manual
class RscDisplayFieldManual: RscStandardDisplay
{
  idd = IDD_FIELD_MANUAL;

  class controlsBackground
  {
    class TitleBackground: RscText
    {
      idc = -1;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.04 * safezoneH + safezoneY;
      w = 0.35 * safezoneW;
      h = 0.04 * safezoneH;
      colorBackground[] = {0,0,0,0.8};
    };

    class HintContentBackground: RscText
    {
      idc = -1;
      x = 0.4875 * safezoneW + safezoneX;
      y = 0.124 * safezoneH + safezoneY;
      w = 0.408333 * safezoneW;
      h = 0.792 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };
  };

  class controls
  {
    class ButtonCancel: RscShortcutButton
    {
      idc = IDC_CANCEL;
      shortcuts[] = {KEY_XBOX_B};
      text = $STR_DISP_BACK;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.92 * safezoneH + safezoneY;
      w = 0.15625 * safezoneW;
      h = 0.04 * safezoneH;
    };

    class ListBoxTopic: RscListbox
    {
      idc = 1500;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.124 * safezoneH + safezoneY;
      w = 0.205 * safezoneW;
      h = 0.792 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };

    class ListBoxItem: RscListbox
    {
      idc = 1501;
      x = 0.2325 * safezoneW + safezoneX;
      y = 0.124 * safezoneH + safezoneY;
      w = 0.25 * safezoneW;
      h = 0.792 * safezoneH;
      colorBackground[] = {0,0,0,0.7};
    };

    class DescriptionControlsGroup: RscControlsGroup
    {
      idc = 2300;
      x = 0.495 * safezoneW + safezoneX;
      y = 0.324 * safezoneH + safezoneY;
      w = 0.48 * safezoneW;
      h = 0.584 * safezoneH;

      class controls
      {
        class HintDescription: RscStructuredText
        {
          idc = 1100;
          size = Size_Text_Small;
          x = 0 * safezoneW;
          y = 0 * safezoneH;
          w = 0.47 * safezoneW;
          h = 0.584 * safezoneH;
        };
      };
    };

    class Title: RscTitle
    {
      idc = 1000;
      text = $STR_A3_RscDisplayFieldManual_Title;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.04 * safezoneH + safezoneY;
      w = 0.35 * safezoneW;
      h = 0.04 * safezoneH;
    };

    class PlayersName: Title
    {
      idc = 8434;
      style = ST_RIGHT;
      x = 0.375 * safezoneW + safezoneX;
      y = 0.04 * safezoneH + safezoneY;
      w = 0.6 * safezoneW;
      h = 0.04 * safezoneH;
    };

    class TextTopics: RscText
    {
      idc = 1002;
      text = $STR_A3_RscDisplayFieldManual_TextTopics;
      x = 0.025 * safezoneW + safezoneX;
      y = 0.084 * safezoneH + safezoneY;
      w = 0.205 * safezoneW;
      h = 0.04 * safezoneH;
      colorBackground[] = {0,0,0,1};
    };

    class TextHints: RscText
    {
      idc = 1003;
      text = $STR_A3_RscDisplayFieldManual_TextHints;
      x = 0.2325 * safezoneW + safezoneX;
      y = 0.084 * safezoneH + safezoneY;
      w = 0.25 * safezoneW;
      h = 0.04 * safezoneH;
      colorBackground[] = {0,0,0,1};
    };

    class TextHintContent: RscText
    {
      idc = 1004;
      text = $STR_A3_RscDisplayFieldManual_TextHintContent;
      x = 0.485 * safezoneW + safezoneX;
      y = 0.084 * safezoneH + safezoneY;
      w = 0.49 * safezoneW;
      h = 0.04 * safezoneH;
      colorBackground[] = {0,0,0,1};
    };

    class Picture: RscPicture
    {
      idc = 1200;
      text = "#(argb,8,8,3)color(1,1,1,0.1)";
      x = 0.4975 * safezoneW + safezoneX;
      y = 0.144 * safezoneH + safezoneY;
      w = 0.1 * safezoneW;
      h = 0.16 * safezoneH;
    };

    class HintTitle: RscStructuredText
    {
      idc = 1101;
      size = Size_Text_Small;
      x = 0.61 * safezoneW + safezoneX;
      y = 0.144 * safezoneH + safezoneY;
      w = 0.365 * safezoneW;
      h = 0.16 * safezoneH;
    };
  };
};
