//#include "commonDefs.hpp" not needed since that one is already included in config.cpp
#include "userActionGroups.hpp"
#include "resincl.hpp" // shortcuts in CfgDiary

// Product dependent options:
TrackIR_Developer_ID = 0; // Application specific
TrackIR_Developer_AppKeyHigh = 0;
TrackIR_Developer_AppKeyLow = 0;

overviewLockedMission = "dtaext\lockedmission";
overviewMyMissions = "dtaext\mymissions";
overviewNewMission = "dtaext\newmission";

uiScaleFactor = 4;    // how fast scaling goes [pixel] - used to compute grid size based on resolution and UI scale
uiScaleMaxGrids = 60; // base # of grids on screen - used to compute grid size based on resolution and UI scale

IGUIForcedScale = -1.0; // Forced IGUI scale, overrides user profile setting. If set to negative value, scale is not forced.

fontPlate = FontMAIN;
fontHelicopterHUD = FontMAIN;
fontClanName = FontMAIN;

class CfgEditCamera
{
	// speed multipliers for camera movement
	speedFwdBack = 1.0;
	speedLeftRight = 1.0;
	speedUpDown = 1.0;
	speedRotate = 1.0;
	speedElevation = 1.0;
	speedTurboMultiplier = 4.0;

	// object selected icon
	iconSelect = "";
	iconSelectColor[] = {1, 1, 0, 1};

	// size of object selected icon
	iconSelectSizeX = 0.75;
	iconSelectSizeY = 1;
};

class CfgWrapperUI
{
	access = ReadAndWrite;

	class Colors
	{
		color1[] = {Gray1, 1.0};
		color2[] = {Gray2, 1.0};
		color3[] = {Gray3, 1.0};
		color4[] = {Gray4, 1.0};
		color5[] = {Gray5, 1.0};
	};

	class Background
	{
		alpha = 0.75;
		texture = ProcTextWhite;
	};

	class TitleBar
	{
		alpha = 0.3;
		texture = ProcTextWhite;
	};

	class GroupBox
	{
		alpha = 0.2;
	};

	class GroupBox2
	{
		alpha = 0.5;
		texture = ProcTextWhite;
	};

	class Button
	{
		color1[] = {Gray1, 0.3};
		color2[] = {Gray2, 0.3};
		color3[] = {Gray3, 0.3};
		color4[] = {Gray4, 0.3};
		color5[] = {Gray5, 0.3};
	};

  class ListBox
  {
    line = ProcTextWhite;
    thumb = ProcTextWhite;
    arrowEmpty = ProcTextWhite;
    arrowFull = ProcTextWhite;
    border = ProcTextWhite;
    boxLeft = ProcTextWhite;
    boxRight = ProcTextWhite;
    boxHorz = ProcTextWhite;
  };

  class Slider
  {
    arrowEmpty = ProcTextWhite;
    arrowFull = ProcTextWhite;
    border = ProcTextWhite;
    thumb = ProcTextWhite;
  };

	class Cursors
	{
		class Arrow
		{
			texture = "\core\arrow_gs.paa";
			width = 16;
			height = 16;
			hotspotX = 0;
			hotspotY = 0;
			color[] = {White, 1};
      shadow = 0;
		};

		class Debug: Arrow
		{
		  // debugging color the same as arrow, but a distinct color
			color[] = {1.0,1.0,0.7, 1};
      shadow = 0;
		};

		class Track
		{
			texture = ProcTextCursor;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Red, 1};
      shadow = 0;
		};

		class Move
		{
			texture = ProcTextCursor;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Green, 1};
      shadow = 0;
		};

		class Scroll
		{
			texture = ProcTextCursor;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Yellow, 1};
      shadow = 0;
		};

    class Rotate
    {
      texture = ProcTextCursor;
      width = 24;
      height = 24;
      hotspotX = 0.5;
      hotspotY = 0.5;
      color[] = {Blue, 1};
      shadow = 0;
    };

    class Track3D
    {
      texture = ProcTextCursor;
      width = 24;
      height = 24;
      hotspotX = 0.5;
      hotspotY = 0.5;
      color[] = {Red, 1};
      shadow = 0;
    };

    class Move3D
    {
      texture = ProcTextCursor;
      width = 24;
      height = 24;
      hotspotX = 0.5;
      hotspotY = 0.5;
      color[] = {Green, 1};
      shadow = 0;
    };

    class Rotate3D
    {
      texture = ProcTextCursor;
      width = 24;
      height = 24;
      hotspotX = 0.5;
      hotspotY = 0.5;
      color[] = {Blue, 1};
      shadow = 0;
    };

    class Raise3D
    {
      texture = ProcTextCursor;
      width = 24;
      height = 24;
      hotspotX = 0.5;
      hotspotY = 0.5;
      color[] = {0, 0.8, 1, 1};
      shadow = 0;
    };

		class Wait
		{
			texture = ProcTextCursor;
			width = 24;
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			color[] = {Blue, 1};
      shadow = 0;
		};
	};
};

/// Description of HUD elements
class CfgInGameUI
{
	access = ReadAndWrite;

  /// HUD background texture
	imageCornerElement = ProcTextWhite;
  /// modified HUD controlling
	xboxStyle = true;
  /// HUD background color
	colorBackground[] = {0.2, 0.15, 0.1, 0.8};
  // not used
	colorBackgroundCommand[] = {Black, 0.3};
  // not used
	colorBackgroundHelp[] = {0.2, 0.15, 0.1, 0.8};
  /// HUD basic text color
	colorText[] = {White, 1};
  /// menu without focus transparency
  unfocusMenuAlpha = 0.65;
  shadow = 0;
  /// Sound used for mine detection
	class MineDetectionSound
	{
		knownMineDetectedSound[] = {"", db-10, 1};
		mineDetectorSound[] = {"", db-10, 1};
	};

  /// Textures (or colors) for weapon mode pictures
  class CfgWeaponModeTextures
  {
    default = "#(argb,8,8,3)color(0,0,0,0)";
  };

	/// VBS only
  class PlayerColors
	{
		class ColNone
		{
			texture = ProcTextClear;
			text = "None";
		};
		class ColWhite
		{
			texture = ProcTextWhite;
			text = "White";
		};
		class ColRed
		{
			texture = ProcTextRed;
			text = "Red";
		};
		class ColOrange
		{
			texture = ProcTextOrange;
			text = "Orange";
		};
		class ColYellow
		{
			texture = ProcTextYellow;
			text = "Yellow";
		};
		class ColGreen
		{
			texture = ProcTextGreen;
			text = "Green";
		};
		class ColAqua
		{
			texture = ProcTextAqua;
			text = "Aqua";
		};
		class ColBlue
		{
			texture = ProcTextBlue;
			text = "Blue";
		};
		class ColPurple
		{
			texture = ProcTextPurple;
			text = "Purple";
		};
		class ColGrey
		{
			texture = ProcTextGray;
			text = "Grey";
		};
		class ColBlack
		{
			texture = ProcTextBlack;
			text = "Black";
		};
	};

  /// used as a base for TacticalDisplay only
	class SideColors
	{
		colorFriendly[] = {Green, 1};
		colorEnemy[] = {Red, 1};
		colorNeutral[] = {White, 1};
		colorCivilian[] = {White, 1};
		colorUnknown[] = {Yellow, 1};
	};

  /// additional parameters for the CT_MAP and CT_MAP_MAIN controls
	class IslandMap
	{
		colorFriendly[] = {0, 0.5, 0, 1};
		colorEnemy[] = {0.5, 0, 0, 1};
		colorNeutral[] = {0.5, 0.5, 0.5, 1};
		colorCivilian[] = {0, 0, 1, 1};
		colorUnknown[] = {0.5, 0.5, 0, 1};
		colorExplosive[] = {1.0, 0.0, 0, 1};

		shadow = 0;

		iconPlayer = ProcTextWhite;
		iconCheckpoint = ProcTextWhite;
		iconCamera = ProcTextWhite;
		iconSelect = ProcTextWhite;
		iconSensor = ProcTextWhite;

		sizeLeader = 24;
		size = 20;
		sizePlayer = 16;
    sizeTacticalPingMarker = 16;

		colorNonPlayable[] = {0.25, 0.25, 0.25, 1};
		colorMe[] = {Red, 1};
		colorPlayable[] = {0.7, 0, 0.7, 1};
		colorSelect[] = {Green, 0.5};
		colorCamera[] = {Blue, 1};
		colorSensor[] = {Blue, 1};

		colorDragging[] = {White, 1};

		colorInactive[] = {1,1,1, 0.6};

		colorExposureEnemy[] = {1.0, 0.2, 0.2, 0.5};
		colorExposureUnknown[] = {0.8, 0.8, 0.2, 0.5};
		colorCheckpoints[] = {0.2, 0.2, 0.2, 1.0};
		colorMissions[] = {0.5, 0.5, 0.0, 0.5};
		colorActiveMission[] = {0.0, 0.0, 0.0, 1.0};

    lockedWaypoint = ProcTextRed;

		colorPath[] = {0, 1, 1, 1.0};
		colorPathDone[] = {0, 1, 0, 0.8};
		texturePath = ProcTextWhite;
		texturePathDone = ProcTextWhite;
		sizePath = 10;
		sizePathDone = 2;

		colorInfoMove[] = {1.0, 1.0, 1.0, 1.0};

		colorGroups[] = {0.0, 0.5, 0.5, 0.5};
		colorActiveGroup[] = {0.0, 1.0, 1.0, 1.0};

		colorSync[] = {0.0, 0.0, 1.0, 1.0};

		colorDetectorSync[] = {0,1,0,1};

		colorLabelBackground[] = {0.0, 0.0, 0.0, 1.0};

		cursorLineWidth = 3;

    scaleMin = 0.001;
    scaleMax = 1;
    scaleDefault = 0.16;

    assault = ProcTextWhite;
    assaultNoLOS = ProcTextWhite;
    assaultColor[] = { Black, 1 };
    assaultNoLOSColor[] = { Black, 0.5 };
	};

  /// Layout of MP statistics table
	class MPTable
	{
		// Table position in multiplayer game
		x = 0.037;
		y = 0.1;
		w = 0.926;
		h = 0.8;

		color[] = {0.7, 0.7, 0.7, 1};
		colorCaptionBg[] = {0.1,0.15,0.15,1};
		colorTitleBg[] = {0.1,0.15,0.15,1};
		colorBg[] = {0.1,0.15,0.1,0.8};
		colorBgAlt[] = {0.1,0.15,0.1,0.9};
		colorSelected[] = {0.7, 0.7, 0.7, 0.4};

		colorWest[] = {0.7, 0.95, 0.7, 1};
		colorEast[] = {0.95, 0.7, 0.7, 1};
		colorCiv[] = {0.8, 0.8, 0.8, 1};
		colorRes[] = {0.7, 0.7, 0.95, 1};

		font = FontMAIN;
		size = SizeNormal;
		shadow = 0;

    captionSpace = 0; // Space between caption and title bar

    class Columns
    {
      class Order
      {
        width = 0.049; // Relative width of the column (total table width is 1.0)
        space = 0;     // Relative space between this and the next column (total table width is 1.0)
       	colorBg[] = {0.1,0.27,0.1,0.8};
      };

      class Player
      {
        width = 0.27;
        space = 0;
        colorBg[] = {0.1,0.23,0.1,0.8};
      };

      class KillsInfantry
      {
        width = 0.11;
        space = 0;
        picture =ProcTextWhite;
      };

      class KillsSoft
      {
        width = 0.10;
        space = 0;
        picture =ProcTextWhite;
      };

      class KillsArmor
      {
        width = 0.11;
        space = 0;
        picture = ProcTextWhite;
      };

      class KillsAir
      {
        width = 0.10;
        space = 0;
        picture = ProcTextWhite;
      };

      class Killed
      {
        width = 0.10;
        space = 0;
        picture =ProcTextWhite;
      };

      class KillsTotal
      {
        width = 0.10;
        space = 0;
        picture =ProcTextWhite;
      };
    };

    /// Layout of MP respawn screen
    class RespawnMessage
    {
      x = 0.05;
      y = 0.05;
      font = FontMAIN;
      size = SizeMedium;
      color[] = {0.6, 0.8, 0.5, 1};
      xBg = -0.1;
      yBg = -0.1;
      wBg = 1.20;
      hBg = 0.23;
      colorBg[] = {0, 0, 0, 0.70};
      shadow = 0;
    };
	};

  /// Tank picture (orientation of vehicle and turrets, damage)
	class TankDirection
	{
		left = 0.035;
		top = 0.16;
		width = 0.18;
		height = 0.26;

		color[] = {White, 1};
		colorHalfDammage[] = {Yellow, 1};
		colorFullDammage[] = {Red, 1};
		imageTower = ProcTextWhite;
		imageTurret = ProcTextBlack;
		imageGun = ProcTextGray;
		imageObsTurret = ProcTextRed;
		imageEngine = ProcTextGreen;
		imageHull = ProcTextBlue;
		imageLTrack = ProcTextOrange;
		imageRTrack = ProcTextBlack;
		imageMoveStop = ProcTextGray;
		imageMoveBack = ProcTextRed;
		imageMoveForward = ProcTextGreen;
		imageMoveFast = ProcTextBlue;
		imageMoveLeft = ProcTextOrange;
		imageMoveRight = ProcTextBlack;
		imageMoveAuto = ProcTextOrange;
		shadow = 0;
	};

  class HelicopterHUD
  {
    shadow = 0;
    font = FontNormal;
    SizeExNormal = 0.035;
    SizeExSmall = 0.02;
    attitudeElemmentsSize = 0.1;
    attitudeFOV = 1.04719;

    analogueSpeedAngleOffset = 2.094395;
    analogueAltitudeAngleOffset = 2.094395;

    analogueSpeedAngleRange = 5.934119456;
    analogueAltitudeAngleRange = 5.934119456;
    HUDLimitsColor[] = {Green, 1};

    color[] = {Green, 1};
    windDirection = ProcTextGreen;
    stabilityVector  = ProcTextGreen;
    stabilityGrid  = ProcTextGreen;
    axis = ProcTextGreen;
    indicator = ProcTextGreen;
    horizonAxes = ProcTextGreen;
    horizonVector = ProcTextGreen;
    horizonAircraft = ProcTextGreen;

    statusOff[] = {White, 1};
    statusOn[] = {Green, 1};
    statusDamaged[] = {Yellow, 1};
    statusDestroyed[] = {Red, 1};
    statusEnabled[] = {Green, 1};
  };

  class FLIRModeNames
  {
    FLIRModeName[] = {"WHOT","BHOT","HOT","HOT","RBHOT","BRHOT"};
  };

  /// Commanding menu title
	class Capture
	{
		colorBackground[] = {Black, 0.93};
		colorText[] = {Yellow, 1};
    // not used
		colorLine[] = {White, 1};
		shadow = 0;
	};

  /// Units bar - vehicle / person picture
	class Picture
	{
		color[] = {White, 1};
		colorProblems[] = {Red, 1};
    // not used
		imageBusy = ProcTextWhite;
    // not used
		imageWaiting = ProcTextWhite;
    // not used
		imageCommand = ProcTextWhite;
    shadow = 0;
	};

  /// Unit info - properties of status bars (health, armor, fuel)
 	class Bar
	{
    // not used
		imageBar = ProcTextWhite;
    // not used
		colorBackground[] = {0.1, 0.4, 0.1, 0.7};
		colorGreen[] = {Green, 1.0};
		colorYellow[] = {Yellow, 1.0};
		colorRed[] = {Red, 0.9};
		colorBlinkOn[] = {ShineRed, 1};
		colorBlinkOff[] = {Red, 0.9};
    // not used
		height = 0.01;
		shadow = 0;
	};

  // not used
	class Messages
	{
		color1[] = {Yellow, 0.9};
		color2[] = {Green, 0.9};
		color3[] = {White, 0.9};
		shadow = 0;
  };

  /// Tactical display (radar) properties
	class TacticalDisplay: SideColors
	{
		left = 0.0;
		top = 0.042;
		width = 1.0;
		height = 0.1;
		colorCamera[] = {0.4, 0.4, 0.4, 0.4};
		targetTexture = ProcTextWhite;
		targetAirTexture = ProcTextWhite;
    targetLaserTexture = ProcTextWhite;
    targetNVTexture = ProcTextWhite;
		shadow = 0;
		class Cursor
		{
			width = 0.015;
			height = 0.02;
			color[] = {White, 1};
			shadow = 0;
		};
	};

  /// Tactical display (radar) properties
  class Radar
  {
    left = 0.1;
    top = 0.1;
    width = 0.3;
    height = 0.3;

    radarAirBackgroundTexture = ProcTextGreen;
    radarTankBackgroundTexture = ProcTextYellow;
    radarCompassOnlyBackgroundTexture = ProcTextWhite;

    radarIncommingMissile = ProcTextRed;
    radarAirDangerSector = ProcTextBlue;
    radarLockDangerColor[] = {Yellow, 0.75};
    radarIncommingDangerColor[] = {Red, 0.75};

    radarVehicleTarget = ProcTextGreen;
    radarTargetingEnemy = ProcTextYellow;

    radarFOV = ProcTextOrange;
    radarFOVPlayer[] = {Green, 0.75};
    radarFOVCrew[] = {White, 0.75};
    radarColor[] = {White, 0.75};

    // Waypoint or Task
    radarWaypoint = ProcTextEmpty;
    radarWaypointColor[] = { 1, 0, 1, 1 };
      // Custom Waypoint
    radarCustomWaypoint = ProcTextEmpty;
    radarCustomWaypointColor[] = { 0, 1, 1, 1 };
    // Target assigned by leader}}
    radarAssault = ProcTextEmpty;
    radarAssaultColor[] = { 1, 0, 0, 1 };
    // Border arrow
    radarOut = ProcTextEmpty;

    shadow = 0;
  };

  /// Squad radar properties
  class SquadRadar
  {
    // Position and size of squad radar.
    x = 0.1;
    y = 0.1;
    w = 0;
    h = 0;

    // Position and size of squad radar first list of units.
    xList1 = 0.1;
    yList1 = 0.1;
    wList1 = 0;
    hList1 = 0;

    // Position and size of squad radar second list of units.
    xList2 = 0.1;
    yList2 = 0.1;
    wList2 = 0;
    hList2 = 0;

    // Color used to modify texture of squad radar.
    colorBackground[] = {White, 0.0};
    // Background texture for squad radar
    backgroundTexture = ProcTextWhite;
    // Background texture for squad radar when player has compass or GPS
    compassBackgroundTexture = ProcTextWhite;

    // Arrays of limits. Size of arrays has to be same.
    // Texture limits should fit texture used for background squad radar.
    // Distance limits are in meters.
    limitsDist[] = {15, 30, 50};
    // Texture limits are in range 0-1.
    textureDist[] = {0.27, 0.54, 0.9};

    // Size of icon for any unit drawn in squad radar.
    iconSize = 0.015;
    // Alpha of icon in squad radar. Range 0-1.
    iconAlpha = 0.0;
    // Desaturation of icon in squad radar. Range 0-1.
    iconDesaturation = 0.0;

    // Color of icon or arrow for active task shown in squad radar.
    taskIconColor[] = {Yellow, 0.0};
    // Width of arrow used in squad radar outside of radar maximum distance.
    taskArrowWidth = 0.01;
    // Height of arrow used in squad radar outside of radar maximum distance.
    taskArrowHeight = 0.01;
    // Icon used for active task when inside radar distance.
    taskIconNear = ProcTextWhite;
    // Size of icon used for active task.
    taskIconSize = 0.01;

    // Icon used for units not in your group.
    otherUnitsIcon = ProcTextWhite;
    // Color used for friendly units not in your group.
    friendlyUnitColor[] = {White, 0.0};
    // Color used for enemy units.
    enemyUnitColor[] = {Red, 0.0};

    // Icon used for units in your group which are unconscious.
    unconsciousUnitIcon = ProcTextWhite;
    // Minimal alpha value used during unconscious unit icon pulsing.
    unconsciousUnitMinAlpha = 0.2;
    // Time interval of one pulse of unconscious unit icon.
    unconsciousUnitTimePeriod = 4.0;

    // Number of rows in squad units list.
    numberOfRows = 6;
    // By how much units is scrolled in squad units list.
    scrollNumber = 6;
    // Height of text used in squad units list.
    textHeight = 0.4;
    // Font used for squad units list.
    font = FontMAIN;

    // Shadow used for squad radar parts.
    shadow = 0;
  };

    /// Simple Progress Message (when not implemented via resuorce) properties
	class ProgressFont
	{
		font = FontMAIN;
		size = SizeNormal;
		shadow = 0;
	};

  /// Font for debugging info (FPS etc.)
  class DebugFont
  {
    //!!Don't change without programmer permission (needs special font)!!
    font = FontDEBUG;
    size = 0.02;
  };

  /// Font for Xbox list of cheats
  class CheatXFont
  {
    font = FontDEBUG;
    size = SizeList;
  };

  /// FADE message font
  class FadeFont
  {
    font = FontDEBUG;
    size = SizeList;
    shadow = 0;
  };

  /// Font for drag & drop texts in UI
  class DragAndDropFont
  {
    font = FontMAIN;
    size = SizeSmall;
    colorEnabled[] = {White, 0.75};
    colorDisabled[] = {Red, 0.75};
    hideCursor = false;
    shadow = 0;
  };

  /// Font for UI tooltips
  class TooltipFont
  {
    font = FontMAIN;
    size = SizeSmall;
    shadow = 0;
  };

  /// Properties of HUD compass element
	class Compass
	{
		left = 0.0;
		top = 0.0;
		width = 1.0;
		height = 0.04;
		color[] = {White, 1};
    colorBackground[] = {White, 1};
		dirColor[] = {White, 1};
		turretDirColor[] = {Yellow, 1};
		texture0 = ProcTextWhite;
		texture90 = ProcTextWhite;
		texture180 = ProcTextWhite;
		texture270 = ProcTextWhite;
		shadow = 0;
	};

  /// Properties of commanding menu
	class Menu
	{
		hide = HTNone;
		align = 1; // ST_RIGHT
		x = 0.98; // right border of the menu
		widthMin = 0.2; // limit of the width
		widthMax = 0.3; // limit of the width

		top = 0.02;
		height = 0.5;

		left2 = 0.28;
		top2 =	0.02;
		width2 = 0.25;
		height2 = 0.5;

		colorChecked[] = {Yellow, 1};
		colorEnabled[] = {White, 1};
		colorDisabled[] = {0.4, 0.4, 0.4, 1};
		colorSelected[] = {0.39, 0.68, 0.44, 0.6};
		colorSelectedText[] = {White, 1};
		hideTime = 60;
		font = FontMAIN;
		size = SizeSmall;
		shadow = 0;

		quickMenuDelay = 0.0;
	};

  /// not used - replaced by RscInGameUI resources
	class GameInfo
	{
		left = 0.78;
		top =	0.9;
		width = 0.2;
		height = 0.08;
	};

  /// Additional properties for unit info HUD element (basic layout defined in RscInGameUI)
	class PlayerInfo
	{
		// not used
		colorTime[] = {White, 1};
		// not used
		left = 0.02;
		// used for hint position only
		top =	0.02;
		// not used
		width = 0.2;
		// not used
		height = 0.28;

		// not used
		class UnitPicture
		{
			width = 0.15;
			height = 0.16;
		};

		// not used
		class Sign
		{
			height = 0.03;
			widthSector = 0.04;
			widthGroup = 0.02;
			widthUnit = 0.02;
    };

		// not used
		class Side
		{
			height = 0.072;
			width = 0.06;
		};

		// not used
		class HealthBar
		{
			width =	0.12;
      stallWarning = 0.2;
		};

		// not used
		class ArmorBar
		{
			width =	0.12;
		};

		// not used
		class FuelBar
		{
			width =	0.12;
		};

		// not used
		class ExperienceBar
		{
			width =	0.12;
			color[] = {White, 1};
		};

		dimmStartTime = 5;
		dimmEndTime = 10;
	};

  /// Hint properties
	class Hint
	{
		dimmStartTime = 30;
		dimmEndTime = 35;
		sound[] = {"", db-10, 1};
	};

  /// Hint properties
	class TaskHint
	{
		dimmStartTime = 0.3; //age when alpha reaches 1
		dimShowTime = 4.7; //age when alpha stars dropping
		dimmEndTime = 5; //age when alpha reaches 0
	};

  /// Received chat sound
	class Chat
	{
		sound[] = {"", db-10, 1};
	};

  /// Actions menu properties
	class Actions
	{
		font = FontMAIN;
		size = SizeSmall;
		right = 1.0;
		bottom = 0.81;
		rows = 4;
		//Scroll arrow configuration
		arrowWidth = 0.0225;
		arrowHeight = 0.03;
		iconArrowUp = ProcTextWhite;
		iconArrowDown = ProcTextWhite;
		colorBackground[] = {0.2, 0.15, 0.1, 0.8};
		colorBackgroundSelected[] = {0, 0, 0, 0};
		colorText[] = {0.8, 0.8, 0.8, 1};
		colorSelect[] = {0.2, 0.8, 0.2, 1};
		background = ProcTextBlack;
		underlineSelected = true;
		shadow = 0;
	};

  /// Default action properties
  class DefaultAction
  {
    showHint = true;
    showNext = true;
    showLine = true;
    font = FontMAIN;
    size = SizeNormal;
    fontNext = FontMAIN;
    sizeNext = SizeSmall;
    // position of default action
    offsetX = 0;
    offsetY = 0;
    // 0 ... fixed position on screen, 1 ... attached to cursor
	relativeToCursor = 1;
    // default action hotspot (which point of default action is referenced)
    hotspotX = 0.0;
    hotspotY = 0.0;
    colorText[] = {1,1,1,1};
    background = ProcTextClear;
    shadow = 0;

    textTipFade = 1; //Time it takes to fade in the tooltip (Scalar - seconds)
    textTipDelay = 1.5; //Time between showing default action and fading in the tooltip (Scalar - seconds)
  };

  /// Units bar properties
	class GroupInfo
	{
		left = 0.02;
		top =	0.90;
		width = 0.96;
		height = 0.08;
		colorIDNone[] = {Black, 1};
		colorIDNormal[] = {White, 1};
		colorIDSelected[] = {Green, 1};
		colorIDSelecting[] = {White, 1};
		colorIDPlayer[] = {Yellow, 1};

		class Semaphore
		{
			imageSemaphore = ProcTextWhite;
			width = 0.0075;
			height = 0.01;
			colorHoldFire[] = {Red, 1};
		};

		imageDefaultWeapons = ProcTextWhite;
		imageNoWeapons = ProcTextWhite;
        imageCommander = ProcTextGreen;
        imageDriver = ProcTextRed;
        imageGunner = ProcTextBlue;
        imageCargo = ProcTextClear;
        imagePrevPage = ProcTextRed;
        imageNextPage = ProcTextRed;
		fontUnitID = FontMAIN;
		sizeUnitID = SizeSmall;
		fontCommand = FontMAIN;
		sizeCommand = SizeSmall;
		dimm = 0.3;
	};
 class CommandBar
 {
   //position of commanding bar with unit icons
   left = 0;
   top = 0.8;
   //i think this is redundant
   width = 0.1;
   height = 0.1;
   //spacing between elements of units
   elementSpacing = 0.05;
   //element
   dimm = 0.3;
   //images of specific weapon stats of soldiers, reused from the old GroupInfo config class
   imageDefaultWeapons = ProcTextWhite;
   imageNoWeapons = ProcTextWhite;

   //images of vehicle roles, reused from the old GroupInfo config class
	imageCommander = ProcTextGreen;
	imageDriver = ProcTextRed;
	imageGunner = ProcTextBlue;
	imageCargo = ProcTextClear;

	colorRedTeam[] = {0.5,0,0,0.5};
	colorBlueTeam[] = {0,0.5,0,0.5};
	colorGreenTeam[] = {0,0,0.5,0.5};
	colorYellowTeam[] = {0.5,0.5,0,0.5};
	colorWhiteTeam[] = {1,1,1,0.5};
	colorText[] = {1,1,1,1};

	colorIDNone[] = {Black, 1};
	colorIDNormal[] = {White, 1};
	colorIDSelected[] = {Green, 1};
  colorIDSelecting[] = {White, 1};
	colorIDPlayer[] = {Yellow, 1};

   class prevPage
   {
     x = 0;
     y = 0;
     w = 0.028;
     h = 0.04;
     color[] = {1,1,1,1};
     texture = ProcTextWhite;
     shadow = 0;
   };
   class nextPage
   {
     x = 0;
     y = 0;
     w = 0.028;
     h = 0.04;
     color[] = {1,1,1,1};
     texture = ProcTextWhite;
     shadow = 0;
   };
   //configuration of
   class UnitInfo
   {
     w = 0.976;
     h = 0.105;
     font = Zeppelin32;

     class GroupIcon
     {//HC group marker
       x = 0.016;
       y = 0.012;
       w = 0.05733;
       h = 0.07623;
            shadow = 0;
     };
     class UnitBackground
     {
       x = 0;
       y = 0;
       w = 0.028;
       h = 0.04;
       textureNormal = ProcTextWhite;
       textureSelected = ProcTextWhite;
       texturePlayer = ProcTextWhite;
       textureFocus = ProcTextWhite;
            shadow = 0;
     };
     class UnitFocus
     {
       x = 0;
       y = 0;
       w = 0.028;
       h = 0.04;
       texture = ProcTextWhite;
            shadow = 0;
     };
     class UnitIcon
     {
       x = 0;
       y = 0;
       w = 0.028;
       h = 0.04;
       color[] = {1,1,1,1};
       colorPlayer[] = {1,1,1,1};
       colorNoAmmo[] = {0.8,0.4,0.5,1};
       colorWounded[] = {0.8,0,0,1};
       colorNoFuel[] = {0.8,0.7,0,1};
       colorWoundedFade[] = {0,0,0,1};
       colorFocus[] = {0,0,0,1};
       colorSelected[] = {0,0,0,1};
       colorNormal[] = {0,0,0,1};

       colorDamaged[] = {1.0,0.0,0.0,1};
            shadow = 0;
     };
     class UnitVehicleStatus
     {
       x = 0;
       y = 0;
       w = 0.028;
       h = 0.04;
	   texture = ProcTextBlack;
     };
     class Semaphore
     {//hold fire
       x = 0;
       y = 0;
       w = 0.04;
       h = 0.03;
       color[] = {0.8,0,0,1};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class CommandBackground
     { //commmands - ready, wait, move
       x = 0;
       y = 0;
       w = 0.04;
       h = 0.03;
       color[] = {1.0,1.0,1.0,1};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class HoldFire
     {
       x = 0;
       y = 0;
       w = 0.028;
       h = 0.04;
       color[] = {1,1,1,1};
       texture = ProcTextWhite;
            shadow = 0;
     };

     class OrderBackground
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {1,1,1,1};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class OrderText
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       colorText[] = {1,1,1,1};
       font = FontMAIN;
       SizeEx = 0.05;
            shadow = 0;
     };
     class VehicleBackground
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {1,1,1,1};
       texture = ProcTextWhite;
            shadow = 0;
     };

     class VehicleText
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       colorText[] = {1,1,1,1};
       font = FontMAIN;
       SizeEx = 0.05;
            shadow = 0;
     };
     class UnitSpecialRole
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {1,1,1,1};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class UnitRole
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {1,1,1,1};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class UnitNumberBackground
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {0.5,0.5,0.5,0.5};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class UnitNumberText
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;

       font = FontMAIN;
       SizeEx = 0.05;
       text = "";
            shadow = 0;
     };
     class CommandText
     {//not yet
       x = 0.045;
       y = 0;
       w = 0.091;
       h = 0.033;
       color[] = {1.0,1.0,1.0,1};
       font = FontMAIN;
       SizeEx = 0.05;
            shadow = 0;
     };

     class VehicleNumberText
     {
       x = 0.045;
       y = 0;
       w = 0.091;
       h = 0.033;
       color[] = {1.0,1.0,1.0,1};
       font = FontMAIN;
       SizeEx = 0.05;
            shadow = 0;
     };

     class VehicleNumberBackground
     {
       x = 0.1;
       y = 0.1;
       w = 0.04;
       h = 0.03;
       color[] = {0.5,0.5,0.5,0.5};
       texture = ProcTextWhite;
            shadow = 0;
     };
     class CombatMode
     {
       x = 0.017;
       y = 0.064;
       w = 0.03;
       h = 0.03;

       textureMCareless = ProcTextWhite;
       textureMSafe = ProcTextGreen;
       textureMAware = ProcTextYellow;
       textureMCombat = ProcTextRed;
       textureMStealth= ProcTextBlack;

       shadow = 0;
     };


     //----------------COMMANDBAR------------------
     class VehicleStatus
     {
       x = 0.0;
       y = 0.0;
       w = 0.0;
       h = 0.0;
       color[] = {0.5,0.5,0.5,0.5};
       shadow = 0;
     };


     class UnitCombatMode
     {
       x = 0.017;
       y = 0.064;
       w = 0.03;
       h = 0.03;

       textureMCareless = ProcTextWhite;
       textureMSafe = ProcTextGreen;
       textureMAware = ProcTextYellow;
       textureMCombat = ProcTextRed;
       textureMStealth= ProcTextBlack;
       texture= ProcTextBlack;
       textureBlue= ProcTextBlue;
       textureWhite= ProcTextWhite;
       textureYellow= ProcTextYellow;
       textureRed= ProcTextRed;
       textureGreen= ProcTextGreen;


       colorBlue[] = {0.0,0.0,0.0,0.0};
       colorGreen[] = {0.0,0.0,0.0,0.0};
       colorWhite[] = {0.0,0.0,0.0,0.0};
       colorYellow[] = {0.0,0.0,0.0,0.0};
       colorRed[] = {0.0,0.0,0.0,0.0};

       shadow = 0;
		 class UnitCombatMode
		 {
		   textureBlue= ProcTextBlue;
		   textureWhite= ProcTextWhite;
		   textureYellow= ProcTextYellow;
		   textureRed= ProcTextRed;
		   textureGreen= ProcTextGreen;
		 };
     };
     class UnitNameBackground
     {
       x = 0.017;
       y = 0.064;
       w = 0.03;
       h = 0.03;

       textureNormal = ProcTextWhite;
       texturePlayer = ProcTextGreen;
       textureSelected = ProcTextYellow;
       textureFocus = ProcTextRed;


       colorBlue[] = {0.0,0.0,0.0,0.0};
       colorGreen[] = {0.0,0.0,0.0,0.0};
       colorWhite[] = {0.0,0.0,0.0,0.0};
       colorYellow[] = {0.0,0.0,0.0,0.0};
       colorRed[] = {0.0,0.0,0.0,0.0};

       shadow = 0;
     };
     class UnitName
     {
       x = 0.017;
       y = 0.064;
       w = 0.03;
       h = 0.03;
       colorText[] = {0.0,0.0,0.0,0.0};
       font = FontMAIN;
       SizeEx = 0.05;
       shadow = 0;
     };
     class UnitBehavior
     {
       x = 0.017;
       y = 0.064;
       w = 0.03;
       h = 0.03;

       textureMCareless = ProcTextWhite;
       textureMSafe = ProcTextGreen;
       textureMAware = ProcTextYellow;
       textureMCombat = ProcTextRed;
       textureMStealth= ProcTextBlack;


       colorCareless[] = {0.0,0.0,0.0,0.0};
       colorSafe[] = {0.0,0.0,0.0,0.0};
       colorAware[] = {0.0,0.0,0.0,0.0};
       colorCombat[] = {0.0,0.0,0.0,0.0};
       colorStealth[] = {0.0,0.0,0.0,0.0};

       shadow = 0;
     };
     class VehicleRole
     {
       x = 0.0;
       y = 0.0;
       w = 0.0;
       h = 0.0;
       color[] = {0.5,0.5,0.5,0.5};

       shadow = 0;
     };
     class VehicleIcon
     {
       x = 0.0;
       y = 0.0;
       w = 0.0;
       h = 0.0;
       color[] = {0.5,0.5,0.5,0.5};

       shadow = 0;
     };
     class UnitRank
     {
       x = 0.0;
       y = 0.0;
       w = 0.0;
       h = 0.0;
       color[] = {0.5,0.5,0.5,0.5};

       shadow = 0;
     };
     class UnitStatus
     {
       x = 0.0;
       y = 0.0;
       w = 0.0;
       h = 0.0;
       color[] = {0.5,0.5,0.5,0.5};
       shadow = 0;
	   texture = ProcTextBlack;
     };

     //Next parameters will follow (WORK IN PROGRESS)

   };
 };

  /// Connection lost message properties
	class ConnectionLost
	{
		left = 0.0;
		top =	0.45;
		width = 1.0;
		height = 0.10;
		font = FontMAIN;
		size = SizeSmall;
		color[] = {1.0, 0.5, 0.25, 1.0};
  shadow = 0;
	};

  /// HUD mouse cursor properties
	class Cursor
	{
		aim = ProcTextWhite;
		weapon = ProcTextWhite;
    freelook = ProcTextWhite;

		outArrow = ProcTextWhite;

		select_target = ProcTextWhite;
    known_target = ProcTextWhite;
		lock_target = ProcTextWhite;
		gunner_lock = ProcTextWhite;

		me = ProcTextWhite;
		meColor[] = {White, 0.65};
		dimmMe = 0.0;
		dimmMeStartTime = 5;
		dimmMeEndTime = 10;
		dimmCmdStartTime = 5;
		dimmCmdEndTime = 10;

    // Group indicator icon
    select = ProcTextWhite;

    // If set to non-empty path, the group indicator is changed to this icon when a friendly unit dies.
    selectDead = "";
    selectDeadDimStartTime = 5.0; // Time after death (in seconds) when the icon above dead friendly starts to fade away.
    selectDeadDimEndTime = 5.5;   // Time after death (in seconds) when the icon above dead friendly disappears completely.

		selectColor[] = {Green, 0.65};
		leader = ProcTextWhite;
		leaderColor[] = {Green, 0.65};
		mission = ProcTextWhite;
		missionFade = 0.3;
		missionColor1[] = {Yellow, 0.5};
		missionColor2[] = {Yellow, 1.0};

		textOffsetDefault = -0.044;  // offsets for text near cursor
		textOffsetFormation = -0.05; // vals < 0 => text above cursor
		textOffsetCustom = -0.05;
		textOffsetWaypoint = -0.05;

		customMark = ProcTextOrange;
		customMarkColor[] = {White, 1.0};
		formationMark = ProcTextPurple;
		waypointMark = ProcTextAqua;
		waypointColor[] = { White, 1.0 };
		blinkingPeriod = 2.0;
		unitUnconscious = ProcTextRed;
		unitBleeding = ProcTextRed;
		iconBoardOut = ProcTextWhite;
		selectOver = ProcTextWhite;
		unitUnconsciousColor[] = {Red, 0.65};
		iconComplex = ProcTextWhite;
		iconCursorSupport = ProcTextTransparent;
		iconRepairVehicle = ProcTextYellow;
    iconTakeBackpack = ProcTextYellow;
    iconAssemble = ProcTextYellow;
    iconDisassemble = ProcTextYellow;
    freeLookActionColor[] = {Red, 1.0};
    freeLookActionColorSelected[] = {Green, 1.0};
    freeLookActionColorAvailable[] = {Blue, 1.0};
    explosive = ProcTextRed;
    explosiveColor[] = {Red, 1};

		shadow = 0;
		infoTextShadow = 0;

		font = FontMAIN;
		size = SizeSmall;

		tactical = ProcTextWhite;
		move = ProcTextWhite;
		selected = ProcTextWhite;
		attack = ProcTextWhite;
		getIn = ProcTextWhite;
		watch = ProcTextWhite;

		color[] = {White, 1};
		colorBackground[] = {Black, 0.65};
		colorLocked[] = {Red, 1};
		dimm = 0.15;

		assault = ProcTextWhite;
    assaultNoLOS = ProcTextWhite;
		iconBoardIn = ProcTextWhite;
		iconMove = ProcTextWhite;
		iconJoin = ProcTextWhite;
		iconRepairAt = ProcTextWhite;
		iconHealAt = ProcTextTransparent;
		iconRearmAt = ProcTextWhite;
		iconRefuelAt = ProcTextWhite;
		iconSupport = ProcTextTransparent;
		iconInFormation = ProcTextTransparent;
		board = ProcTextTransparent;

		assaultColor[] = {Black, 1};
    assaultNoLOSColor[] = { Black, 0.5 };
		boardColor[] = {Black, 1};
		iconMoveColor[] = {Black, 1};
		iconJoinColor[] = {Black, 1};
		iconHealAtColor[] = {Black, 1};
		iconRepairAtColor[] = {Black, 1};
		iconRearmAtColor[] = {Black, 1};
		iconRefuelAtColor[] = {Black, 1};
		iconSupportColor[] = {Black, 1};
		iconInFormationColor[] = {Black, 1};

		// not used
    class Sign
		{
			height = 0.015;
			widthSector = 0.02;
			widthGroup = 0.01;
			widthUnit = 0.01;
		};

		activeWidth = 0.1875;
		activeHeight = 0.25;
		activeMinimum = 0.07;
		activeMaximum = 0.12;
		enemyActiveColor[] = {Red, 0.5};

		// min scale of throw cursor
		throwCursorMinScale = 1;
		// max scale of throw cursor
		throwCursorMaxScale = 2;
		// fading speed to normal state
		throwCursorFadeSpeed = 4;

    class Targeting //Indication of target marked by a weapon system
    {
      class MarkedTarget //basic marked target
      {
        scale = 1.0;
        texture = ProcTextWhite;
        color[] = { 0.95, 0.05, 0.25, 0.25 };

        textureLockable = ProcTextWhite;
        colorLockable[] = { 0.95, 0.95, 0.95, 0.75 };

        textureFriendly = ProcTextWhite;
        colorFriendly[] = { 0.95, 0.95, 0.95, 0.75 };

        shadow = 0;
      };

      class MarkedTargetNoLos : MarkedTarget // disappeared target
      {
        texture = ProcTextWhite;
        color[] = { 0.55, 0.55, 0.55, 0.15 };
        colorLockable[] = { 0.95, 0.95, 0.95, 0.15 };
        colorFriendly[] = { 0.95, 0.95, 0.95, 0.15 };
      };


      class Seeker  //for guided weapons - starts snapping to markedTarget when within ammo's launch acceptability region
      {
        texture = ProcTextWhite;
        color[] = { 0.55, 0.35, 0.95, 0.5 };
        scale = 1.0;
        shadow = 0;
      };

      class SeekerLocked : Seeker //for guided weapons - when successfully locked
      {
        texture = ProcTextWhite;
        color[] = { 0.15, 0.55, 0.15, 0.5 };
      };

      class SeekerNoLOS : Seeker //for guided weapons - no line of sight
      {
        texture = ProcTextWhite;
        color[] = { 0.15, 0.55, 0.15, 0.5 };
      };

      class ImpactPoint : Seeker  //icon where to shoot - a dotted line is drawn between impactPoint and markedTarget
      {
        texture = ProcTextWhite;
        color[] = { 0.55, 0.55, 0.55, 0.5 };
      };

      class ImpactPointNoLOS : ImpactPoint  //icon where to shoot - a dotted line is drawn between impactPoint and markedTarget
      {
        color[] = { 0.55, 0.0, 0.0, 0.5 };
      };

      class HitPrediction : Seeker  //icon where to shoot - a dotted line is drawn between impactPoint and markedTarget
      {
        color[] = { 0.55, 0.0, 0.0, 0.5 };
      };

      class HitConfirm : Seeker  //icon where to shoot - a dotted line is drawn between impactPoint and markedTarget
      {
        color[] = { 0.0, 0.55, 0.0, 0.5 };
      };

      class KnownTarget : Seeker  // known targets
      {
        texture = ProcTextWhite;
        color[] = { 0.05, 0.05, 0.55, 0.5 };
      };

      class LaserTarget : KnownTarget  // known laser targets
      {
        texture = ProcTextWhite;
        color[] = { 0.05, 0.05, 0.55, 0.5 };
      };
    };

    class AssignedTarget
    {
      class Icon  //Map icon
      {
        size = 0.022;
        texture = ProcTextWhite;
        color[] = { 0.8, 0, 0, 1 };
        shadow = 0;

        textureNoLoS = ProcTextWhite;
        colorNoLoS[] = { 0.8, 0, 0, 0.5 };
        shadowNoLoS = 0;
        timeNoLoS = 15; //how long a lost target is kept and displayed
      };

      class Icon3D : Icon
      {
        scale = 1.0;
        texture = ProcTextWhite;
        color[] = { 0.8, 0, 0, 1 };
        shadow = 0;

        textureNoLoS = ProcTextWhite;
        colorNoLoS[] = { 0.8, 0, 0, 0.5 };
        shadowNoLoS = 0;
        timeNoLoS = 15; //how long a lost target is kept and displayed

        //distance to target
        font = GUI_FONT_NORMAL;
        sizeEx = IGUI_TEXT_SIZE_MEDIUM;
      };
    };

    class CrewAimIndicator
    {
      class Commander //commander's aim. dir. icon
      {
        scale = 1.0;
        texture = ProcTextWhite;
        color[] = { 0.8, 0.5, 0, 1 };
        shadow = 0;
      };
      class Gunner : Commander //gunner's aim. dir. icon
      {
        texture = ProcTextWhite;
        color[] = { 0.8, 0.5, 0, 1 };
      };
      class GunnerReady : Commander //displayed when waiting for a command to fire && while being aimed or locked at a target
      {
        texture = ProcTextWhite;
        color[] = { 0.0, 0.5, 0, 1 };
      };
      class GunnerAuto : Commander  //icon when the gunner fires the weapon autonomously
      {
        texture = ProcTextWhite;
        color[] = { 0.8, 0.5, 1, 1 };
      };
    };
	};

  /// Peripheral vision properties
	class PeripheralVision
	{
	  cueTexture = ProcTextWhite;
	  bloodTexture = ProcTextWhite;
	  bloodColor[] = {0.8, 0.1, 0.15,1};
	  cueColor[] = {1, 1, 1, 0.7};
	  cueEnemyColor[] = {1, 0.3, 0.3, 1};
	  cueFriendlyColor[] = {0.5, 1, 0.5, 0.7};
	  shadow = 0;
	};

  class HitZones
  {
    colorEmpty[] = {1, 1, 1, 0.1}; // Color of the empty space when no hitzone is displayed
  };

  class CfgStaminaBar
  {
    textureEncumbranceBar = ProcTextGray;
    textureStaminaBar = ProcTextWhite;
    textureArrowLeft = ProcTextTransparent;
    textureArrowRight = ProcTextTransparent;
    textureIconTerrain = ProcTextWhite;
    textureIconInjury  = ProcTextRed;
    warningRate = -0.9;
  };
};

class cfgGroupIcons
{
  class hc_selectable
  {
    name=$STR_A3_cfgGroupIcons_hc_selectable0;
    icon=ProcTextWhite;
    size = 48;
    side=1;
    color[] = {0,0,1,1};
      shadow = 0;
  };
  class hc_selected
  {
    name=$STR_A3_cfgGroupIcons_hc_selected0;
    icon=ProcTextWhite;
    size = 48;
    side=1;
    color[] = {0,0,1,1};
  shadow = 0;
  };
  class hc_selectedEnemy
  {
    name=$STR_A3_cfgGroupIcons_hc_selectedEnemy0;
    icon=ProcTextWhite;
    size = 48;
    side=1;
    color[] = {0,0,1,1};
	shadow = 0;
  };

  class waypoint
  {
    name=$STR_A3_cfgGroupIcons_waypoint0;
    icon=ProcTextWhite;
    size = 48;
    side=1;
    color[] = {0,0,1,1};
      shadow = 0;
  };

  maxHCDistanceAlphaEnd =  1500;
  maxHCDistanceAlphaStart = 1000;
  HC3DGroupAlpha = 0.4;
};

class CfgTaskTypes
{
  class Default
  {
    icon = ProcTextWhite; // \A3\UI_F_MP_Mark\Data\Tasks\Types\Default_ca.paa;
  };
};

class CfgSimpleTasks
{
  class TaskOverview
  {
    // Fade out times for task markers
    dimmStartTime = 0;
    dimmEndTime = 0.3;
  };
  // parent class for other task related configs
  class Icon
  {
    //text colors
    colorText[] = {White, 1};
    colorTextAssigned[] = {Yellow, 1};
    colorTextCustom[] = {Blue, 1};

    //icon colors
    colorIcon[] = {White, 1};
    colorIconAssigned[] = {Yellow, 1};
    colorIconCustom[] = {Blue, 1};

    //background colors
    colorBackground[] = {Black, 0.5};
    colorBackgroundAssigned[] = {Black, 0.5};
    colorBackgroundCustom[] = {Black, 0.5};

    //icon dimensions - width, height is computed as scaled width to form square
    sizeBackground = 0.022; // width of whole marker size [screen%]
    sizeIcon = 0.016;       // width of task icon inside the marker [screen%]
  };

  // used ingame to draw task marker in 3D
  class Icon3D : Icon
  {
    //distance indicator
    font = FontMAIN;
    sizeEx = SizeNormal;

    textureBackground = ProcTextWhite;    // marker background texture

    // marker placement
    iconOffset = -0.004;                  // do not center task icon on background by height but offset it a little from the top (still centered by width)
    yOffsetExact = 0.2;                   // vertical offset above object
    yOffsetNonExact = 0;                  // vertical offset above object

    //shadow type settings
    shadowForeground = 2;
    shadowBackground = 0;
    shadowText = 2;

    //screen clutter countermeasure
    maxVisible = 0; //displays max. of N closest 3D markers at the same time, the extra markers should fade, assigned always visible

    // distance related changes to marker for specified ranges
    // each class here is assumed to be like this
    class DistanceClose
    {
      range[] = { 0, 300 }; // {min,max} range to show marker with this setting. -1 = infinity [m]. Assigned task is always set at distance 0 for purpose of selecting distance class
      scale = 1;            // scale multiplier for icon [%]
      alphaMultiplier = 1;  // fading multiplier for icon [%]
      showDistance = 1;     // switch to show distance text over icon [T/F]
      textOffset = 0;       // where is distance text drawn -1 [screen%]
    };

    class DistanceMid
    {
      range[] = { 300, 1000 };
      scale = 0.75;
      alphaMultiplier = 0.80;
      showDistance = 1;
      textOffset = 0;
    };

    class DistanceLong
    {
      range[] = { 1000, 20000 };
      scale = 0.5;
      alphaMultiplier = 0.6;
      showDistance = 0;
      textOffset = 0;
    };
    // tasks outside of range of any distance class won't be drawn
  };

  // for map task marker: gray BG, inverted area (alpha=0 if not selected, on selection it takes color of the FG icon), FG icon (on selection it takes color of the BG)
  class Icon2D : Icon
  {
    //text colors
    colorText[] = {White, 1};
    colorTextAssigned[] = {Yellow, 1};
    colorTextCustom[] = {Blue, 1};

    //icon colors
    colorIcon[] = {White, 1};
    colorIconAssigned[] = {Yellow, 1};
    colorIconCustom[] = {Blue, 1};

    //background colors
    colorBackground[] = {Black, 0.5};
    colorBackgroundAssigned[] = {Black, 0.5};
    colorBackgroundCustom[] = {Black, 0.5};


    mouseoverZoom = 1.5;				//how much is task marker enlarged on mouse over
    selectedAlpha = 1;				//alpha lvl of each component of the selected task marker
    sizeInverted = 0.029;				//width of area with inverted color of task marker

    sizeBackground = 0.033;
    sizeIcon = 0.027;
  };

  // for map task tooltip
  class Tooltip : Icon
  {
    // texts for task tooltip
    textAssigned    = "Assigned";
    textUnAssigned  = "Unassigned";
    textClkAssign   = "Click to assign";
    textClkUnAssign = "Click to unassign";

    selectedAlpha = 1;	 			//alpha lvl of the tooltip BG
    //width auto-adjusts according to the 'Title' length between those 2 values
    widthMin = 0.24;
    widthMax = 0.48;

    //task name
    class Title
    {
      font = GUI_FONT_NORMAL;
      sizeEx = GUI_TEXT_SIZE_SMALL * 1.2;
      left = GUI_TEXT_SIZE_SMALL / 2;		//left indent from its box tooltip
      top = GUI_TEXT_SIZE_SMALL * 0.03;	//top indent from its box tooltip
    };
    //task state or on mouse click action
    class SubTitle
    {
      font = GUI_FONT_THIN;
      sizeEx = GUI_TEXT_SIZE_SMALL * 0.9;
      left = GUI_TEXT_SIZE_SMALL / 2;
      top = GUI_TEXT_SIZE_SMALL * 1.05; 	//should be under the title text
    };
    //task custom data (CD) set by script X position will change if window got stretched by long text
    class CustomText
    {
      font = GUI_FONT_THIN;
      sizeEx = GUI_TEXT_SIZE_SMALL * 0.9;

      right = GUI_TEXT_SIZE_SMALL * 0.9; // position of the end of the CD text
      top = GUI_TEXT_SIZE_SMALL * 1.05;
    };
    class CustomIcon
    {
      sizeEx = GUI_TEXT_SIZE_SMALL * 0.6;

      right = GUI_TEXT_SIZE_SMALL * 0.8; // position of the left side of the CD icon
      top = GUI_TEXT_SIZE_SMALL * 1.09;
    };
  };
};

/// Configuration of the Game Log
class CfgDiary
{
  /// List of fixed subjects
  class FixedPages
  {
    class Tasks
    {
      type = DiaryPageTasks;
      displayName = $STR_LOGSUBJECT_BRIEFING;
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%TASK_DESCRIPTION_SHORT";
      indexIcon = "%ICON_TASK_STATE";
      recordTitle = "%DATE, %TIME";
      // task item description in map
      text = "<font color='#ffffffff' size='14' face='RobotoCondensedLight'>%TASK_BUTTON_ASSIGN_ICON%TASK_BUTTON_ASSIGN_TEXT  %TASK_BUTTON_LOCATE_ICON %TASK_BUTTON_LOCATE_TEXT</font><br/><br/>%TASK_DESCRIPTION";
      // task item description in 3D
      text3D = "<font color='#ffffffff' size='14' face='RobotoCondensedLight'>%TASK_BUTTON_ASSIGN_ICON%TASK_BUTTON_ASSIGN_TEXT</font><br/><br/>%TASK_DESCRIPTION";
      iconSize = 14; // height [px] of icons used in task description
      // icons used as button in task description
      iconButtonLocate   = ProcTextWhite; // move map to task location
      iconButtonAssign   = ProcTextWhite; // Unassign task
      iconButtonUnassign = ProcTextWhite; // Assign task
      // texts used as link in task description
      textButtonAssign   = "Assign";   // Assign task
      textButtonUnassign = "Unassign"; // Unassign task
      textButtonLocate   = "Locate";   // move map to task location if difficulty prohibit distance measuring
      textButtonLocateDistance = "%1"; // move map to task location if distance can be measured
      colorTokenDisabled = "#80ffffff";// color used in task description to denote action is disabled
    };

    class Diary
    {
      type = DiaryPageDiary;
      displayName = $STR_LOGSUBJECT_DIARY;
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%TITLE";
      indexIcon = "";
      recordTitle = "%DATE, %TIME";
      text = "%TEXT";
    };

    class Conversation
    {
      type = DiaryPageConversation;
      displayName = $STR_LOGSUBJECT_CONVERSATION;
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%UNIT_NAME";
      indexIcon = "";
      recordTitle = "%TARGET_NAME";
      text = "%TEXT";
    };

    class Units
    {
      type = DiaryPageUnits;
      displayName = $STR_DISP_SRVSETUP_UNITS; // TODO: text to the stringtable
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%UNIT_NAME";
      indexIcon = "%ICON_UNIT_TYPE";
      recordTitle = "%UNIT_NAME";
      // TODO: texts to the stringtable
      text = "%UNIT_GRP_NAME %UNIT_ID%UNIT_GRP_LEADER<br/>%$STR_GEAR_VEHICLE %UNIT_VEH_NAME %UNIT_VEH_POSITION<br/><br/>%LINK_UNIT_GEAR%LINK_UNIT_TEAMSWITCH%LINK_UNIT_CONVERSATION";
      // special format for each line of %UNIT_SKILLS
      skill = " - %SKILL_NAME ... %SKILL_LEVEL<br/>";
    };

    class Players
    {
      type = DiaryPagePlayers;
      displayName = $STR_LOGSUBJECT_PLAYERS;
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%PLAYER_NAME";
      indexIcon = "%ICON_PLAYERS_STATE";
      recordTitle = "%PLAYER_NAME";
      // TODO: texts to the stringtable
      text = "%$STR_DISP_MP_PING %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/>%$STR_DISP_MP_BANDWIDTH %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/>%$STR_DISP_MP_DESYNC %PLAYER_DESYNC<br/><br/>%PLAYER_SQUAD<br/>%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN%LINK_PLAYER_MUTE";
	  // TODO: texts to the stringtable
	  textSquad = "%$STR_DISP_MP_PL_NAME %PLAYER_FULLNAME<br/>%$STR_DISP_MP_PL_MAIL %PLAYER_EMAIL<br/>%$STR_DISP_MP_PL_ICQ %PLAYER_ICQ<br/>%$STR_DISP_MP_PL_REMARK %PLAYER_REMARK<br/><br/>%$STR_DISP_MP_PING %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/>%$STR_DISP_MP_BANDWIDTH %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/>%$STR_DISP_MP_DESYNC %PLAYER_DESYNC<br/><br/>%PLAYER_SQUAD<br/>%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN%LINK_PLAYER_MUTE";
	  // TODO: texts to the stringtable
      textUnit = "<br/>%$STR_DISP_MP_PING %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/>%$STR_DISP_MP_BANDWIDTH %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/>%$STR_DISP_MP_DESYNC %PLAYER_DESYNC<br/><br/>%PLAYER_SQUAD<br/>%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN%LINK_PLAYER_MUTE";
      // special format for the squad info
      squad = "%$STR_DISP_MP_SQ<br/>  %$STR_DISP_MP_SQ_NAME %SQUAD_NAME<br/>  %$STR_DISP_MP_SQ_ID %SQUAD_ID<br/>  %$STR_DISP_MP_SQ_MAIL %SQUAD_EMAIL<br/>  %$STR_DISP_MP_SQ_WEB %SQUAD_WEB<br/>  <img image width=80 height=80 image='%SQUAD_PICTURE'><br/>%SQUAD_TITLE";
	  // special format for the squad info
	  unit = "%$STR_DISP_MP_SQ<br/>  %$STR_DISP_MP_SQ_NAME %SQUAD_NAME<br/>  %$STR_DISP_MP_SQ_ID %SQUAD_ID<br/>  %$STR_DISP_MP_SQ_MAIL %SQUAD_EMAIL<br/>  %$STR_DISP_MP_SQ_WEB %SQUAD_WEB<br/>  <img image width=80 height=80 image='%SQUAD_PICTURE'><br/>%SQUAD_TITLE";
	};

    class Statistics
    {
      type = DiaryPageStatistics;
      displayName = $STR_LOGSUBJECT_STATISTICS;
      picture = ProcTextWhite;
      shortcuts[] = {};
      showEmpty = false;

      indexTitle = "%$STR_LOGSUBJECT_STATISTICS";
      indexIcon = "";
      recordTitle = "%$STR_STAT_MISSION";
      // TODO: texts to the stringtable
      text = "%$STR_BRIEF_YOURKILLS<br/>%STAT_KILLS_ENEMY<br/>%$STR_BRIEF_YOURKILLS_FRIENDLY<br/>%STAT_KILLS_FRIENDLY<br/>%$STR_BRIEF_YOURKILLS_CIVIL<br/>%STAT_KILLS_CIVIL%<br/>%$STR_BRIEF_CASUALTIES<br/>%STAT_CASUALTIES";
      // special format for the rows
      killsOnce = "  %NAME<br/>";
      kills = "  %COUNT x %NAME<br/>";
      casualtiesPlayerTotalOnce = "  You (%NAME)<br/>";
      casualtiesPlayerTotal = "  %COUNT x you (%NAME)<br/>";
      casualtiesPlayerOnce = "  - by %NAME<br/>";
      casualtiesPlayer = "  - %COUNT x by %NAME<br/>";
      casualtiesOnce = "  %NAME<br/>";
      casualties = "  %COUNT x %NAME<br/>";
    };
  };

  /// mapping of icon values to textures
  class Icons
  {
    // icons returned by ICON_UNIT_TYPE
    unitNone = ProcTextTransparent;
    unitGroup = ProcTextGreen;
    unitPlayable = ProcTextRed;
    unitGroupPlayable = ProcTextOrange;
    // icons returned by ICON_TASK_STATE
    taskNone = ProcTextTransparent;
    taskCreated = ProcTextBlack;
    taskAssigned = ProcTextWhite;
    taskSucceeded = ProcTextGreen;
    taskFailed = ProcTextRed;
    taskCanceled = ProcTextOrange;
    // icons returned by ICON_PLAYERS_STATE
    playerWest = ProcTextBlue;
    playerEast = ProcTextRed;
    playerCiv = ProcTextWhite;
    playerGuer = ProcTextGreen;
    playerUnknown = ProcTextBlack;

    playerBriefWest = ProcTextBlue;
    playerBriefEast = ProcTextRed;
    playerBriefGuer = ProcTextGreen;
    playerBriefCiv = ProcTextWhite;
    playerBriefUnknown = ProcTextBlack;
    playerConnecting = ProcTextBlack;
  };

  class TaskIndex // visualization of tasks in task lists
  {
    // icons for finished tasks
    taskSucceeded = ProcTextGreen;
    taskFailed    = ProcTextRed;
    taskCanceled  = ProcTextOrange;

    // colors for icon and text
    colorAssigned[] = {Yellow, 1};  // assigned task
    colorCustom[]   = {Blue, 1};    // not assigned task with custom data

    colorCreated[]  = {White, 1};   // active task
    colorDone[]     = {Gray2, 0.5}; // finished tasks
    colorCanceled[] = {Gray2, 0.5}; // finished tasks
    colorFailed[]   = {Gray2, 0.5}; // finished tasks
  };

  class Debriefing // visualization of tasks in task lists
  {
    // icons for finished tasks
    taskSucceeded = ProcTextGreen;
    taskFailed    = ProcTextRed;
    taskCanceled  = ProcTextOrange;

    // colors for icon and text
    colorCreated[]  = {White, 1};   // active task
    colorDone[]     = {Gray2, 0.5}; // finished tasks
    colorCanceled[] = {Gray2, 0.5}; // finished tasks
    colorFailed[]   = {Gray2, 0.5}; // finished tasks
  };
};

/// List of user actions types, their default parameters
class CfgActions
{
  //Such action is not created in the program, but need to be listed.
  //Used as a default here.
  class None
  {
    //Path to texture shown as an action image.
	//picture = ;
    //Base priority.
	priority = 0;
    //If set to false, action will not be displayed in the actions menu (but still accessible through shortcut).
	show = true;
    //Action is displayed as a default action.
	showWindow = false;
    //Action menu is hidden when this action is processed.
	hideOnUse = true;
    //Name of input action used as a shortcut (see class ControllerSchemes for list of input actions).
	shortcut = ;
    //Structured parametrized text, shown in the actions menu.
	text = ;
    //Structured parametrized text, shown as a default action; if empty, "text" is used instead.
	textDefault = ;
    //Raw parametrized text, used in radio protocol for example; if empty, "text" is used instead.
	textSimple = ;

  };
  class HookCargo: None
  {
    priority = 3;
    //No parameters.
    text = $STR_ACTION_HOOK;
  };
  class UnhookCargo: None
  {
    priority = 3;
    //No parameters.
    text = $STR_ACTION_UNHOOK;
  };
  class LoadVehicle: None
  {
    priority = 3;
    //No parameters.
    text = $STR_A3_ACTION_LOAD_VEHICLE;
  };
  class UnloadVehicle: None
  {
    priority = 3;
    //No parameters.
    text = $STR_A3_ACTION_UNLOAD_VEHICLE;
  };
  class UnloadAllVehicles: None
  {
    priority = 3;
    //No parameters.
    text = $STR_A3_ACTION_UNLOAD_ALL_VEHICLES;
  };
  class UnloadUnconsciousUnits : None
  {
    priority = 3;
    TEXT = "LOC: Eject unconscious units";
  };
  class GetInCommander: None
  {
    //Not used now.
    priority = 0.899;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_COMMANDER;
    textDefault = $STR_ACTION_GETIN_COMMANDER;
  };
  class GetInDriver: None
  {
    //Added <-0.3, 0> in the program (by the distance).
	priority = 0.900;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_DRIVER;
    textDefault = $STR_ACTION_GETIN_DRIVER;
  };
  class GetInPilot: None
  {
    //Added <-0.3, 0> in the program (by the distance).
	priority = 0.901;
    showWindow = true;
    //New action, same implementation as GetInDriver, other description.
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_PILOT;
    textDefault = $STR_ACTION_GETIN_PILOT;
  };
  class GetInGunner: None
  {
    //Not used now.
    priority = 0.898;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_GUNNER;
    textDefault = $STR_ACTION_GETIN_GUNNER;
  };
  class GetInCargo: None
  {
    //added <-0.3, 0> in the program (by the distance).
	priority = 0.897;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GETIN_CARGO;
    textDefault = $STR_ACTION_GETIN_CARGO;
  };
  class GetInTurret: None
  {
    //Added <-0.3, 0> in the program (by the distance).
	priority = 0.898;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    //%2 - turret (vehicle position) name.
    text = $STR_ACTION_GETIN_TURRET;
    textDefault = $STR_ACTION_GETIN_TURRET;
  };

  class PutInPilot: None
  {
    //Added <-0.3, 0> in the program (by the distance).
    priority = 0.905;
    showWindow = true;
    //New action, same implementation as GetInDriver, other description.
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_PUTIN_PILOT;
    textDefault = $STR_ACTION_PUTIN_PILOT;
  };

  class PutInDriver: None
  {
    //Added <-0.3, 0> in the program (by the distance).
    priority = 0.906;
    showWindow = true;
    //New action, same implementation as GetInDriver, other description.
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_PUTIN_DRIVER;
    textDefault = $STR_ACTION_PUTIN_DRIVER;
  };

  class PutInCargo: None
  {
    //Added <-0.3, 0> in the program (by the distance).
    priority = 0.907;
    showWindow = true;
    //New action, same implementation as GetInDriver, other description.
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_PUTIN_CARGO;
    textDefault = $STR_ACTION_PUTIN_CARGO;
  };

  class Heal: None
  {
    priority = 0.6;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_HEAL;
    textDefault = $STR_ACTION_HEAL;
  };
  class HealSoldier: None
  {
    priority = 0.6;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_HEAL_SOLDIER;
    textDefault = $STR_ACTION_HEAL_SOLDIER;
  };
  class RepairVehicle: None
  {
    priority = 0.6;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REPAIR_VEHICLE;
    textDefault = $STR_ACTION_REPAIR_VEHICLE;
  };
  class FirstAid: None
  {
    priority = 0.6;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_FIRST_AID;
    textDefault = $STR_ACTION_FIRST_AID;
  };

  class DragSoldier: None
  {
    priority = 0.6;
    text = "Drag %1";
  };
  class DragSoldierInterrupt: None
  {
    priority = 0.6;
    text = "Drop Draged";
  };
  class CarrySoldier: None
  {
    priority = 0.6;
    text = "Carry %1";
  };
  class CarrySoldierInterrupt: None
  {
    priority = 0.6;
    text = "Drop Body";
  };

  class DropCarried: None
  {
    priority = 0.6;
    text = "Drop Carried";
  };


  class Repair: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REPAIR;
    textDefault = $STR_ACTION_REPAIR;
  };
  class Refuel: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REFUEL;
    textDefault = $STR_ACTION_REFUEL;
  };
  class Rearm: None
  {
    priority = 0.5;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_REARM;
    textDefault = $STR_ACTION_REARM;
  };
  class GetOut: None
  {
    priority = 0.9;
    showWindow = true;
    shortcut = GetOut;
    //No parameters.
    text = $STR_ACTION_GETOUT;
    textDefault = $STR_ACTION_GETOUT;
  };
  class LightOn: None
  {
    shortcut = Headlights;
    priority = 0.3;
    //No parameters.
    text = $STR_ACTION_LIGHTON;
    textDefault = $STR_ACTION_LIGHTON;

  };
  class LightOff: LightOn
  {
    shortcut = Headlights;
    text = $STR_ACTION_LIGHTOFF;
    textDefault = $STR_ACTION_LIGHTOFF;

  };
  class SearchLightOn: None
  {
    priority = 0.3;
    show = true;
    //No parameters.
    text = $STR_ACTION_SEARCHLIGHTS_ON;
    textDefault = $STR_ACTION_SEARCHLIGHTS_ON;

  };
  class SearchLightOff: SearchLightOn
  {
    text = $STR_ACTION_SEARCHLIGHTS_OFF;
    textDefault = $STR_ACTION_SEARCHLIGHTS_OFF;
  };
  class CollisionLightOn: None
  {
    priority = 0.3;
    show = true;
    //No parameters.
    text = $STR_ACTION_COLLISIONLIGHTS_ON;
    textDefault = $STR_ACTION_COLLISIONLIGHTS_ON;
  };
  class CollisionLightOff: CollisionLightOn
  {
    text = $STR_ACTION_COLLISIONLIGHTS_OFF;
    textDefault = $STR_ACTION_COLLISIONLIGHTS_OFF;
  };
  class GunLightOn: None
  {
    priority = 0.1;
    show = false;
    //No parameters.
    text = $STR_ACTION_LIGHTON;
    textDefault = $STR_ACTION_LIGHTON;
  };
  class GunLightOff: None
  {
    priority = 0.1;
    show = false;
    //No parameters.
    text = $STR_ACTION_LIGHTOFF;
    textDefault = $STR_ACTION_LIGHTOFF;
  };
  class ArtilleryComputer: None
  {
    priority = 0.1;
    show = true;
    //No parameters.
    text = $STR_artillery_computer;
    textDefault = $STR_artillery_computer;
  };
  class EngineOn: None
  {
    shortcut = EngineToggle;
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_ENGINEON;
    textDefault = $STR_ACTION_ENGINEON;
  };
  class EngineOff: None
  {
    shortcut = EngineToggle;
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_ENGINEOFF;
    textDefault = $STR_ACTION_ENGINEOFF;
  };
  class ActiveSensorsOn : None
  {
    shortcut = ActiveSensorsToggle;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_SENSORS_ON;
    textDefault = $STR_ACTION_SENSORS_ON;
    showWindow = false;
  };
  class ActiveSensorsOff : None
  {
    shortcut = ActiveSensorsToggle;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_SENSORS_OFF;
    textDefault = $STR_ACTION_SENSORS_OFF;
    showWindow = false;
  };
  class TakeVehicleControl: None
  {
    priority = 10.1;
    //No parameters.
    text = $STR_ACTION_TAKE_CONTROL;
    textDefault = $STR_ACTION_TAKE_CONTROL;
  };
  class SuspendVehicleControl: None
  {
    priority = 10.1;
    //No parameters.
    text = $STR_ACTION_SUSPEND_CONTROL;
    textDefault = $STR_ACTION_SUSPEND_CONTROL;
  };
  class LockVehicleControl: None
  {
    priority = 10.1;
    //No parameters.
    text = $STR_ACTION_LOCK_CONTROL;
    textDefault = $STR_ACTION_LOCK_CONTROL;
  };
  class UnlockVehicleControl: None
  {
    priority = 10.1;
    //No parameters.
    text = $STR_ACTION_UNLOCK_CONTROL;
    textDefault =  $STR_ACTION_UNLOCK_CONTROL;
  };

  class SwitchWeapon: None
  {
    //Decreased by 0.01 * index of weapon, or increased by 0.01 for primary weapon.
	priority = 0.5;
    shortcut = SwitchWeapon;
    //Parameters:
    //%1 - weapon name.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
    hideActions[] = {};  // hide action if action of name specified in this array have bound keys - example: "SwitchSecondary"
  };
  class SwitchMagazine: SwitchWeapon
  {
    //New action, same implementation as SwitchWeapon, other shortcut.
    //Parameters:
    //%1 - weapon name.
    shortcut = ReloadMagazine;
  };
  class HideWeapon: SwitchWeapon
  {
    //New action, same implementation as SwitchWeapon, other description.
    //Parameters:
    //%1 - weapon name
    text = $STR_ACTION_HIDE_WEAPON;
    textDefault = $STR_ACTION_HIDE_WEAPON;
  };
  class UseWeapon: None
  {
    //Not used now.
    priority = 0.5;
    //Description defined in the weapon mode config.
    //Parameters:
    //%1 - action description, defined in weapon mode config "useActionTitle".
    text = "%1";
    textDefault = "%1";
    //The parameters "useActionTitle":
    //%1 - weapon mode name.
    //%2 - remaining number of magazines.
  };
  class LoadMagazine: None
  {
    //Decreased by 0.01 for magazine of other type than current.
	priority = 0.35;
    //Can be removed by the program (left only for a single action of this type).
	shortcut = ReloadMagazine;
    //Parameters:
    //%1 - magazine name.
    text = $STR_ACTION_MAGAZINE;
    textDefault = $STR_ACTION_MAGAZINE;
  };
  class LoadOtherMagazine: LoadMagazine
  {
    //New action - used for reload of magazine of other type than current magazine have
  };
  class LoadEmptyMagazine: LoadMagazine
  {
    //New action - same effect as LoadMagazine, but other parameters.
    //Decreased by 0.01 for magazine of other type than current.
	priority = 1.5;
    showWindow = true;
  };
  class TakeWeapon: None
  {
    //Added <0, 0.004) in the program (by the weapon type).
	priority = 0.52;
    showWindow = true;
    //Parameters:
    //%1 - weapon name.
    //%2 - remaining count of weapons (empty in retail version).
    text = $STR_ACTION_TAKEWEAPON;
    textDefault = $STR_ACTION_TAKEWEAPON;
  };
  class TakeDropWeapon: TakeWeapon
  {
    //New action, same implementation as TakeWeapon, other description.
    //Parameters:
    //%1 - weapon name.
    //%2 - list of weapons to drop.
    //%3 - remaining count of weapons (empty in retail version).
    text = $STR_ACTION_DROPTAKEWEAPON;
    textDefault = $STR_ACTION_DROPTAKEWEAPON;
  };
  class TakeMagazine: None
  {
    //Added <0, 0.004) in the program (by the weapon type).
	priority = 0.53;
    showWindow = true;
    //Parameters:
    //%1 - magazine name.
    //%2 - remaining count of magazines (empty in retail version).
    text = $STR_ACTION_TAKEMAGAZINE;
    textDefault = $STR_ACTION_TAKEMAGAZINE;
  };
  class TakeDropMagazine: TakeMagazine
  {
    //New action, same implementation as TakeMagazine, other description.
    //Parameters:
    //%1 - magazine name.
    //%2 - list of magazines to drop.
    //%3 - remaining count of magazines (empty in retail version).
    text = $STR_ACTION_DROPTAKEMAGAZINE;
    textDefault = $STR_ACTION_DROPTAKEMAGAZINE;
  };
  class TakeFlag: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_TAKEFLAG;
    textDefault = $STR_ACTION_TAKEFLAG;
  };
  class ReturnFlag: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_RETURNFLAG;
    textDefault = $STR_ACTION_RETURNFLAG;
  };
  class TurnIn: None
  {
    priority = 0.95;
    shortcut = TurnIn;
    //No parameters.
    text = $STR_ACTION_TURNIN;
    textDefault = $STR_ACTION_TURNIN;
  };
  class TurnOut: None
  {
    priority = 0.6;
    shortcut = TurnOut;
    //No parameters.
    text = $STR_ACTION_TURNOUT;
    textDefault = $STR_ACTION_TURNOUT;
  };
  class WeaponInHand: None
  {
    show = false;
    priority = 2;
    //Parameters:
    //%1 - name of the weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class WeaponOnBack: None
  {
    show = false;
    priority = 0.3;
    //Parameters:
    //%1 - name of the weapon.
    text = $STR_ACTION_WEAPONONBACK;
    textDefault = $STR_ACTION_WEAPONONBACK;
  };
  class SitDown: None
  {
    priority = 0.1;
    shortcut = SitDown;
    show = false;
    //No parameters.
    text = $STR_ACTION_SITDOWN;
    textDefault = $STR_ACTION_SITDOWN;
  };
  class Land: None
  {
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_LAND;
    textDefault = $STR_ACTION_LAND;
  };
  class CancelLand: None
  {
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_CANCEL_LAND;
    textDefault = $STR_ACTION_CANCEL_LAND;
  };
  class Eject: None
  {
    priority = 0.05;
    //No parameters.
    shortcut = Eject;
    text = $STR_ACTION_EJECT;
    textDefault = $STR_ACTION_EJECT;
  };
  class MoveToDriver: None
  {
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_DRIVER;
    textDefault = $STR_ACTION_TO_DRIVER;
  };
  class MoveToPilot: MoveToDriver
  {
    //New action, same implementation as MoveToDriver, other description.
    //No parameters.
    text = $STR_ACTION_TO_PILOT;
    textDefault = $STR_ACTION_TO_PILOT;
  };
  class MoveToGunner: None
  {
    //Not used now.
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_GUNNER;
    textDefault = $STR_ACTION_TO_GUNNER;
  };
  class MoveToCommander: None
  {
    //Not used now.
    priority = 0.04;
    shortcut = SwapGunner;
    //No parameters.
    text = $STR_ACTION_TO_COMMANDER;
    textDefault = $STR_ACTION_TO_COMMANDER;
  };
  class MoveToCargo: None
  {
    priority = 0.01;
    //No parameters.
    text = $STR_UI_PASSENGER_SEAT;
    textDefault = $STR_UI_PASSENGER_SEAT;
  };
  class MoveToTurret: None
  {
    priority = 0.02;
    shortcut = SwapGunner;
    //Parameters:
    //%1 - action target.
    //%2 - turret (vehicle position) name.
    text = $STR_ACTION_TO_TURRET;
    textDefault = $STR_ACTION_TO_TURRET;
  };
  class HideBody: None
  {
    priority = 0.51;
    //No parameters.
    text = $STR_ACTION_HIDE_BODY;
    textDefault = $STR_ACTION_HIDE_BODY;
  };
  class TouchOff: None
  {
    priority = 0.515;
    //Parameters:
    //%1 - number of bombs.
    text = $STR_ACTION_TOUCH_OFF;
    textDefault = $STR_ACTION_TOUCH_OFF;
  };
  class TouchOffMines: None
  {
    priority = 0.515;
    //Parameters:
    //%1 - number of bombs.
    text = $STR_ACTION_TOUCH_OFF;
    textDefault = $STR_ACTION_TOUCH_OFF;
  };
  class SetTimer: None
  {
    priority = 0.516;
    showWindow = true;
    //Parameters:
    //%1 - time we are adding.
    //%2 - remaining time.
    text = $STR_ACTION_SET_TIMER;
    textDefault = $STR_ACTION_SET_TIMER;
  };
  class StartTimer: SetTimer
  {
    //New action, same implementation as SetTimer, other description.
    //Parameters:
    //%1 - time we are setting.
    text = $STR_ACTION_START_TIMER;
    textDefault = $STR_ACTION_START_TIMER;
  };
  class Deactivate: None
  {
    priority = 0.514;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_DEACTIVATE;
    textDefault = $STR_ACTION_DEACTIVATE;
  };
  class NVGoggles: None
  {
    priority = 0.511;
    //No parameters.
    text = $STR_ACTION_TAKEON_GOGGLES;
    textDefault = $STR_ACTION_TAKEON_GOGGLES;
  };
  class NVGogglesOff: NVGoggles
  {
    //New action, same implementation as NVGoggles, other description.
    //No parameters.
    text = $STR_ACTION_TAKEOFF_GOGGLES;
    textDefault = $STR_ACTION_TAKEOFF_GOGGLES;
  };
  class ManualFire: None
  {
    priority = 0.59;
    //Depend on vehicle type, replaced by the program.
	shortcut = HeliManualFire;
    //No parameters.
    text = $STR_ACTION_MANUAL_FIRE;
    textDefault = $STR_ACTION_MANUAL_FIRE;
  };
  class ManualFireCancel: ManualFire
  {
    //New action, same implementation as ManualFire, other description.
    //No parameters.
    text = $STR_ACTION_MANUAL_FIRE_CANCEL;
    textDefault = $STR_ACTION_MANUAL_FIRE_CANCEL;
  };
  class AutoHover: None
  {
    shortcut = AutoHover;
    priority = 0.9;
    //No parameters.
    text = $STR_ACTION_HOVER;
    textDefault = $STR_ACTION_HOVER;
    showWindow = false;
  };
  class AutoHoverCancel: AutoHover
  {
    //New action, same implementation as AutoHover, other description.
    //No parameters.
    shortcut = AutoHoverCancel;
    text = $STR_ACTION_HOVER_CANCEL;
    textDefault = $STR_ACTION_HOVER_CANCEL;
    showWindow = false;
    priority = 1.9;
  };
  class VTOLVectoring : AutoHover
  {
    shortcut = VTOLVectoring;
    priority = 0.9;
    //No parameters.
    text = $STR_VECTORING_ON;
    textDefault = $STR_VECTORING_ON;
    showWindow = false;
  };
  class VTOLVectoringCancel : AutoHover
  {
    shortcut = VTOLVectoringCancel;
    text = $STR_VECTORING_OFF;
    textDefault = $STR_VECTORING_OFF;
    showWindow = false;
    priority = 1.9;
  };
  class StrokeFist: None
  {
    //Not used now.
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_STROKEFIST;
    textDefault = $STR_ACTION_STROKEFIST;
  };
  class StrokeGun: None
  {
    //Not used now.
    priority = 0.1;
    //No parameters.
    text = $STR_ACTION_STROKEGUN;
    textDefault = $STR_ACTION_STROKEGUN;
  };
  class LadderUp: None
  {
    //Used only by AI.
    //No parameters.
    text = $STR_ACTION_LADDERUP;
    textDefault = $STR_ACTION_LADDERUP;
  };
  class LadderDown: None
  {
    //Used only by AI.
    //No parameters.
    text = $STR_ACTION_LADDERDOWN;
    textDefault = $STR_ACTION_LADDERDOWN;
  };
  class LadderOnDown: None
  {
    priority = 10;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_LADDERDOWN;
    textDefault = $STR_ACTION_LADDERDOWN;
  };
  class LadderOnUp: None
  {
    priority = 10;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_LADDERUP;
    textDefault = $STR_ACTION_LADDERUP;
  };
  class LadderOff: None
  {
    priority = 10;
    //No parameters.
    text = $STR_ACTION_LADDEROFF;
    textDefault = $STR_ACTION_LADDEROFF;
  };
  class FireInflame: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_FIRE_INFLAME;
    textDefault = $STR_ACTION_FIRE_INFLAME;
  };
  class FirePutDown: None
  {
    priority = 0.99;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_FIRE_PUT_DOWN;
    textDefault = $STR_ACTION_FIRE_PUT_DOWN;
  };
  class LandGear: None
  {
    priority = 0.8;
    hideOnUse = false;
    shortcut = LandGear;
    //No parameters.
    text = $STR_ACTION_GEAR_DOWN;
    textDefault = $STR_ACTION_GEAR_DOWN;
  };
  class LandGearUp: LandGear
  {
    //New action, same implementation as LandGear, other description.
    //No parameters.
    shortcut = LandGearUp;
    text = $STR_ACTION_GEAR_UP;
    textDefault = $STR_ACTION_GEAR_UP;
  };
  class FlapsDown: None
  {
    priority = 0.7;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsDown;
    text = $STR_ACTION_FLAPS_DOWN;
    textDefault = $STR_ACTION_FLAPS_DOWN;
  };
  class FlapsUp: None
  {
    priority = 0.7;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsUp;
    text = $STR_ACTION_FLAPS_UP;
    textDefault = $STR_ACTION_FLAPS_UP;
  };

  class VectoringDown : None
  {
    priority = 0.71;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsUp;
    text = $STR_VECTORING_DOWN;
    textDefault = $STR_VECTORING_DOWN;
  };
  class VectoringUp : None
  {
    priority = 0.71;
    hideOnUse = false;
    //No parameters.
    shortcut = FlapsDown;
    text = $STR_VECTORING_UP;
    textDefault = $STR_ACTION_FLAPS_UP;
  };

  class Salute: None
  {
    priority = 0.11;
    shortcut = Salute;
    show = false;
    //No parameters.
    text = $STR_ACTION_SALUTE;
    textDefault = $STR_ACTION_SALUTE;
  };
  class ScudLaunch: None
  {
    priority = 0.04;
    //No parameters.
    text = $STR_ACTION_SCUDLAUNCH;
    textDefault = $STR_ACTION_SCUDLAUNCH;
  };
  class ScudStart: None
  {
    priority = 0.04;
    //No parameters.
    text = $STR_ACTION_SCUDSTART;
    textDefault = $STR_ACTION_SCUDSTART;
  };
  class ScudCancel: None
  {
    priority = 0.039;
    //No parameters.
    text = $STR_ACTION_SCUDCANCEL;
    textDefault = $STR_ACTION_SCUDCANCEL;
  };
  class User: None
  {
    //Decreased by 0.001 * id of action.
	priority = 1.5;
    showWindow = true;
    //Description defined by action itself.
    //Parameters:
    //%1 - action description
    text = "%1";
    textDefault = "%2";
    textToolTip = "%3";
  };
  class DropWeapon: None
  {
    //Not used from actions menu.
    //Parameters:
    //%1 - weapon name
    text = $STR_ACTION_DROP_WEAPON;
    textDefault = $STR_ACTION_DROP_WEAPON;
  };
  class PutWeapon : DropWeapon
  {
    //New action, same implementation as DropWeapon, other description.
    //Parameters:
    //%1 - weapon name.
    //%2 - action target.
    text = $STR_ACTION_PUT_WEAPON;
    textDefault = $STR_ACTION_PUT_WEAPON;
  };
  class DropMagazine: None
  {
    //Not used from actions menu
    //Parameters:
    //%1 - magazine type name.
    text = $STR_ACTION_DROP_MAGAZINE;
    textDefault = $STR_ACTION_DROP_MAGAZINE;
  };
  class PutMagazine: DropMagazine
  {
    //New action, same implementation as DropMagazine, other description.
    //Parameters:
    //%1 - magazine type name.
    //%2 - action target.
    text = $STR_ACTION_PUT_MAGAZINE;
    textDefault = $STR_ACTION_PUT_MAGAZINE;
  };
  class UserType : None
  {
    //Decreased by 0.001 * id of action.
	priority = 1.4;
    showWindow = true;
    //Description defined by action itself.
    //Parameters:
    //%1 - action description.
    //%2 - default action description.
    text = "%1";
    textDefault = "%2";
    textToolTip = "%3";
  };
  class HandGunOn: None
  {
    priority = 0.4;
    //Parameters:
    //%1 - name of the hand gun weapon.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
  };
  class HandGunOnStand: HandGunOn
  {
    //New action, same implementation as HandGunOn, other description.
    //Parameters:
    //%1 - name of the hand gun weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class HandGunOff: None
  {
    priority = 0.4;
    //Parameters:
    //%1 - name of the primary weapon.
    text = $STR_ACTION_WEAPON;
    textDefault = $STR_ACTION_WEAPON;
  };
  class HandGunOffStand: HandGunOff
  {
    //New action, same implementation as HandGunOff, other description.
    //Parameters:
    //%1 - name of the primary weapon.
    text = $STR_ACTION_WEAPONINHAND;
    textDefault = $STR_ACTION_WEAPONINHAND;
  };
  class TakeMine: None
  {
    priority = 0.512;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_TAKE_MINE;
    textDefault = $STR_ACTION_TAKE_MINE;
  };
  class UseContainerMagazine : None
  {
    priority = 0.513;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_ACTIVATE_MINE;
    textDefault = $STR_ACTION_ACTIVATE_MINE;
  };
  class ActivateMine : None
  {
    priority = 0.513;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_ACTIVATE_MINE;
    textDefault = $STR_ACTION_ACTIVATE_MINE;
  };
  class DeactivateMine: None
  {
    priority = 0.513;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_DEACTIVATE_MINE;
    textDefault = $STR_ACTION_DEACTIVATE_MINE;
  };
  class UseMagazine: None
  {
    priority = 0.519; // decreased by 0.0001 * magazine index.
    //description defined in the magazine config.
    //Parameters:
    //%1 - action description, defined in magazine config "useActionTitle".
    text = "%1";
    textDefault = "%1";
    //The parameters "useActionTitle":
    //%1 - magazine name.
    //%2 - remaining number of magazines.
  };
  class IngameMenu: None
  {
    //Not used now.
    priority = -1;
    shortcut = MenuSelect;
    //No parameters.
    text = $STR_ACTION_INGAME_MENU;
    textDefault = $STR_ACTION_INGAME_MENU;
  };
  class CancelTakeFlag: None
  {
    priority = 21;
    showWindow = true;
    //No parameters.
    text = $STR_ACTION_CANCEL_ACTION;
    textDefault = $STR_ACTION_CANCEL_ACTION;
  };
  class CancelAction: None
  {
    priority = 20;
    showWindow = true;
    shortcut = CancelAction;
    //No parameters.
    text = $STR_ACTION_CANCEL_ACTION;
    textDefault = $STR_ACTION_CANCEL_ACTION;
  };
  class MarkEntity: None
  {
    priority = 0.5199;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_MARK_ENTITY;
    textDefault = $STR_ACTION_MARK_ENTITY;
  };
  class MarkWeapon: MarkEntity
  {
    //New action, same implementation as MarkEntity, other description.
    //No parameters.
    text = $STR_ACTION_MARK_WEAPON;
    textDefault = $STR_ACTION_MARK_WEAPON;
  };

  class TeamSwitch: None
  {
    priority = 0.11;
    shortcut = TeamSwitch;
    show = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_TEAM_SWITCH;
    textDefault = $STR_ACTION_TEAM_SWITCH;
  };

  class Gear: None
  {
    priority = 0.5198;
    showWindow = true;
    shortcut = Gear;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GEAR;
    textDefault = $STR_ACTION_GEAR;
  };
  class GearOpen: None
  {
    priority = 0.5198;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_GEAR;
    textDefault = $STR_ACTION_GEAR;
  };
  class OpenBag: None
  {
    priority = 1.6198;
    showWindow = true;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_OPEN_BAG;
    textDefault = $STR_ACTION_OPEN_BAG;
  };
  class TakeBag: None
  {
    priority = 1.5198;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_TAKE_BAG;
    textDefault = $STR_ACTION_TAKE_BAG;
    showWindow = true;
  };
  class PutBag: None
  {
    priority = 1.5198;
    showWindow = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_DROP_BAG;
    textDefault = $STR_ACTION_DROP_BAG;
  };
  class DropBag: None
  {
    priority = 1.5198;
    showWindow = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_DROP_BAG;
    textDefault = $STR_ACTION_DROP_BAG;
  };
  class AddBag: None
  {
    priority = 1.5198;
    showWindow = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_TAKE_BAG;
    textDefault = $STR_ACTION_TAKE_BAG;
  };
  class IRLaserOn: None
  {
    priority = 0.1;
    show = false;
    //No parameters.
    text = "Laser Enable";
    textDefault = "Laser Enable";
  };
  class IRLaserOff: None
  {
    priority = 0.1;
    show = false;
    //No parameters.
    text = "Laser Disable";
    textDefault = "Laser Disable";
  };
  class Assemble: None
  {
    priority = 1.5198;
    showWindow = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_ASSEMBLE;
    textDefault = $STR_ACTION_ASSEMBLE;
  };
  class DisAssemble: None
  {
    priority = 1.5198;
    showWindow = false;
    //Parameters:
    //%1 - action target.
    text = $STR_ACTION_DISASSEMBLE ;
    textDefault = $STR_ACTION_DISASSEMBLE ;
  };
  class Talk: None
  {
  	//Upped from 0.41 by Joris.
    priority = 2;
    showWindow = true;
    //Parameters:
    //%1 - name of target person.
    text = $STR_ACTION_ASK;
    textDefault = $STR_ACTION_ASK;
  };
  class Tell: None
  {
    priority = 2;
    showWindow = true;
    //Parameters:
    //%1 - text to tell
    text = """%1""";
    textDefault = """%1""";
  };
  class Surrender: None
  {
    priority = 0.11;
    shortcut = Surrender;
    show = false;
    //No parameters.
    text = $STR_ACTION_SURRENDER;
    textDefault = $STR_ACTION_SURRENDER;
  };
  class GetOver: None
  {
    priority = 0.11;
    shortcut = GetOver;
    show = false;
    //No parameters.
    text = $STR_ACTION_GET_OVER;
    textDefault = $STR_ACTION_GET_OVER;
  };

  class OpenParachute: None
  {
    priority = 9.1;
    text = $STR_A3_RSCGROUPROOTMENU_ITEMS_OPENPARACHUTE0;
  };


  //--------------------------------------- rtd helicopter actions ---------------------------------------

  class HelicopterAutoTrimOn: None
  {
    text = $STR_ACTION_AUTOTRIM_ON;
    textDefault = $STR_ACTION_AUTOTRIM_ON;
    priority = 3;
    show = true;
  };
  class HelicopterAutoTrimOff: None
  {
    text = $STR_ACTION_AUTOTRIM_OFF;
    textDefault = $STR_ACTION_AUTOTRIM_OFF;
    priority = 3;
    show = true;
  };


  class HelicopterTrimOn: None
  {
    text = $STR_ACTION_TRIM_ON;
    textDefault = $STR_ACTION_TRIM_ON;
    priority = 3;
    show = true;
  };
  class HelicopterTrimOff: None
  {
    text = $STR_ACTION_TRIM_OFF;
    textDefault = $STR_ACTION_TRIM_OFF;
    priority = 3;
    show = true;
  };

  class WheelsBrakeOn: None
  {
    text = $STR_ACTION_BRAKE_ON;
    textDefault = $STR_ACTION_BRAKE_ON;
    priority = 3.0;
    show = true;
  };
  class WheelsBrakeOff: WheelsBrakeOn
  {
    text = $STR_ACTION_BRAKE_OFF;
    textDefault = $STR_ACTION_BRAKE_OFF;
  };
  //--------------------------------------- rtd helicopter actions end ---------------------------------------

  class PeriscopeDepthOn: None
  {
    text = $STR_A3_LOC_PeriscopeDepthOn;
    textDefault = $STR_A3_LOC_PeriscopeDepthOn;
  };

  class PeriscopeDepthOff: None
  {
    text = $STR_A3_LOC_PeriscopeDepthOff;
    textDefault = $STR_A3_LOC_PeriscopeDepthOff;
  };

  class UAVTerminalOpen: None
  {
    text = $STR_useract_uav_openuavterminal;
    textDefault = $STR_useract_uav_openuavterminal;
  };

  class UAVTerminalMakeConnection: None
  {
    text = $STR_useract_uav_uavterminalmakeconnection;
    textDefault = $STR_useract_uav_uavterminalmakeconnection;
  };

  class UAVTerminalReleaseConnection: None
  {
    text = $STR_useract_uav_uavterminalreleaseconnection;
    textDefault = $STR_useract_uav_uavterminalreleaseconnection;
  };

  class UAVTerminalHackConnection: None
  {
    text = $STR_useract_uav_uavterminalhackconnection;
    textDefault = $STR_useract_uav_uavterminalhackconnection;
  };

  class BackFromUAV: None
  {
    text = $STR_useract_uav_releasecontrols;
    textDefault = $STR_useract_uav_releasecontrols;
  };

  class SwitchToUAVDriver: None
  {
    text = $STR_useract_uav_takecontrols;
    textDefault = $STR_useract_uav_takecontrols;
  };

  class SwitchToUAVGunner: None
  {
    text = $STR_useract_uav_takegunnercontrols;
    textDefault = $STR_useract_uav_takegunnercontrols;
  };

  class ListLeftVehicleDisplay : None
  {
    shortcut = ListLeftVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_LEFT_NEXT;
    textDefault = $STR_ACTION_CUSTOMINFO_LEFT_NEXT;
    showWindow = false;
  };
  class ListRightVehicleDisplay : None
  {
    shortcut = ListRightVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_RIGHT_NEXT;
    textDefault = $STR_ACTION_CUSTOMINFO_RIGHT_NEXT;
    showWindow = false;
  };

  class ListPrevLeftVehicleDisplay : None
  {
    shortcut = ListPrevLeftVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_LEFT_PREV;
    textDefault = $STR_ACTION_CUSTOMINFO_LEFT_PREV;
    showWindow = false;
  };
  class ListPrevRightVehicleDisplay : None
  {
    shortcut = ListPrevRightVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_RIGHT_PREV;
    textDefault = $STR_ACTION_CUSTOMINFO_RIGHT_PREV;
    showWindow = false;
  };
  class CloseLeftVehicleDisplay : None
  {
    shortcut = CloseLeftVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_LEFT_CLOSE;
    textDefault = $STR_ACTION_CUSTOMINFO_LEFT_CLOSE;
    showWindow = false;
    show = false;
  };
  class CloseRightVehicleDisplay : None
  {
    shortcut = CloseRightVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_RIGHT_CLOSE;
    textDefault = $STR_ACTION_CUSTOMINFO_RIGHT_CLOSE;
    showWindow = false;
    show = false;
  };

  class NextModeLeftVehicleDisplay : None
  {
    shortcut = NextModeLeftVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_LEFT_MODE;
    textDefault = $STR_ACTION_CUSTOMINFO_LEFT_MODE;
    showWindow = false;
  };
  class NextModeRightVehicleDisplay : None
  {
    shortcut = NextModeRightVehicleDisplay;
    priority = 25.0;
    //No parameters.
    text = $STR_ACTION_CUSTOMINFO_RIGHT_MODE;
    textDefault = $STR_ACTION_CUSTOMINFO_RIGHT_MODE;
    showWindow = false;
  };

  /// A3 new features from UI_F
	class Sleep: None
	{
		text = "Sleep";
	};

	class WakeUp: None
	{
		text = "WakeUp";
	};
	class UnmountItem: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Unmount %1 from %2";
		textDefault = "";
	 };

	class MountItem: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Mount %1 to %2";
		textDefault = "";
	 };

	class DropItem: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Drop %1";
		textDefault = "";
	 };
	// maybe will be unused
	class TakeItem: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Take %1 %2";
		textDefault = "";
	 };
	class UnloadMagazine: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Unload Magazine";
		textDefault = "";
	 };

	 class ChangeUniformWithBody: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "ChangeUniformWithBody %1";
		textDefault = "";
	 };

	 class DropItemFromBody: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "DropItemFromBody %1";
		textDefault = "";
	 };

   class TakeItemFromBody: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "TakeItemFromBody %1";
		textDefault = "";
	 };

   class ChangeBackpackFromBackpack: None
   {
     showWindow = false;
     priority = 0.7;
     text = "ChangeBackpackFromBackpack %1";
     textDefault = "";
   };

   class TakeWeaponFromBody: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "TakeWeaponFromBody %1";
		textDefault = "";
	};

   class TakeBackpackFromBody: None
   {
     showWindow = false;
     priority = 0.7;
     text = "TakeBackpackFromBody %1";
     textDefault = "";
   };

	// actions for interact between inventory and uniform items
	class UnmountUniformItem: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "Unmount %1 from uniform";
		textDefault = "";
	 };

	class MountUniformItem: None
	 {
		showWindow = false;
		priority = 0.7;
		text = "Mount %1 on uniform";
		textDefault = "";
	 };

	 // weapon mount/unmount from internal inventory
	class MountWeaponFromInv: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Mount %1 from inventory";
		extDefault = "";
	 };

	class UnmountWeaponToInv: None
	 {
		showWindow = true;
		priority = 0.7;
		text = "Unmount %1 to inventory";
		extDefault = "";
	 };
	 class OpenParachuteSteerable: None
	 {
		 priority = 9.1;
		 text = "Open steerable parachute";
	 };
	 class OpenParachuteNonSteerable: None
	 {
		 priority = 9.2;
		 text = "Open nonsteerable parachute";
	 };
	 class ActivateBreathingBomb: None
	 {
		 priority = 9.3;
		 text = "Activate oxygen tube";
	 };
	 class DeactivateBreathingBomb: None
	 {
		 priority = 9.4;
		 text = "Deactivate oxygen tube";
	 };

	class PatchSoldier: None
	{
		text = "Help %1";
		priority = 9.9;
		showWindow = true;
		textDefault = "";
	};

	class HealSoldierSelf: None
	{
		text = "Treat self %1";
		priority = 9.9;
		showWindow = true;
		textDefault = "";
	};
};

class PreloadTextures
{
  // any texture corresponding to the entry below is preloaded
  // and kept in the memory permanently
  // actual texture file is looked up in the corresponding config entry
  // lookup values:
  //  "*" - path is relative to Data unless it starts with a backslash
  //  "\*" - path is always absolute
  // "@*" - model name (rel. to data3d) is given in the config - load all textures for itreferenced by it
  // "\@*" - model name (abs) is given in the config - load all textures for itreferenced by it
  // in future other values or combinations may be possible,
  // like for textures which need to be loaded, but not all mipmaps are needed
  class CfgInGameUI
  {
    imageCornerElement = "*";

    class PeripheralVision
    {
      cueTexture = "\*";
      bloodTexture = "\*";
    };

    class Cursor
    {
      me = "*";
      aim = "*";
      weapon = "*";
      select_target = "*";
      lock_target = "*";
      leader = "*";
      mission = "*";
      tactical = "*";
      move = "*";
      selected = "*";
      attack = "*";
      getIn = "*";
      watch = "*";
      outArrow = "*";
    };
  };

  class CfgCloudletShapes
  {
    cloudletSmoke = "@*";
    cloudletWater = "@*";
    cloudletFire = "@*";
  };
};

class CfgMissions
{
  class Cutscenes
  {
  };
  class Campaigns
  {
  };
  class Missions
  {
  };
  class MPMissions
  {
  };
  class Templates
  {
  };
  class MPTemplates
  {
  };
	class Tutorial
	{
	};
};


class CfgRanks
{
	class 0
	{
		rank = "Private";
		displayName = $STR_PRIVATE;
		displayNameShort = $STR_SHORT_PRIVATE;
		texture = ProcTextWhite;
	};
	class 1
	{
		rank = "Corporal";
		displayName = $STR_CORPORAL;
		displayNameShort = $STR_SHORT_CORPORAL;
		texture = ProcTextWhite;
	};
	class 2
	{
		rank = "Sergeant";
		displayName = $STR_SERGEANT;
		displayNameShort = $STR_SHORT_SERGEANT;
		texture = ProcTextWhite;
	};
	class 3
	{
		rank = "Lieutenant";
		displayName = $STR_LIEUTENANT;
		displayNameShort = $STR_SHORT_LIEUTENANT;
		texture = ProcTextWhite;
	};
	class 4
	{
		rank = "Captain";
		displayName = $STR_CAPTAIN;
		displayNameShort = $STR_SHORT_CAPTAIN;
		texture = ProcTextWhite;
	};
	class 5
	{
		rank = "Major";
		displayName = $STR_MAJOR;
		displayNameShort = $STR_SHORT_MAJOR;
		texture = ProcTextWhite;
	};
	class 6
	{
		rank = "Colonel";
		displayName = $STR_COLONEL;
		displayNameShort = $STR_SHORT_COLONEL;
		texture = ProcTextWhite;
	};
	class 7
	{
		rank = "General";
		displayName = $STR_GENERAL;
		displayNameShort = $STR_SHORT_GENERAL;
		texture = ProcTextWhite;
	};
};

/// pbo launching support
/// action launched for entity preview
pboTryEntity = "textLog ""%1"""; // %1 will be replaced by the entity config name
/// action launched for weapon preview
pboTryWeapon = "textLog ""%1"""; // %1 will be replaced by the weapon config name
/// test if entity preview is available
pboIsEntityLocked = "false"; // %1 will be replaced by the entity config name
/// test if weapon preview is available
pboIsWeaponLocked = "false"; // %1 will be replaced by the weapon config name

#include "dikCodes.h"

#define INPUT_DEVICE_KEYBOARD   0x00000000
#define INPUT_DEVICE_MOUSE      0x00010000 //! mouse button
#define INPUT_DEVICE_STICK      0x00020000 //! stick button
#define INPUT_DEVICE_STICK_AXIS 0x00030000 //! stick axis
#define INPUT_DEVICE_STICK_POV  0x00040000 //! stick pov switch
#define INPUT_DEVICE_XINPUT     0x00050000 //! XInput device
#define INPUT_DEVICE_TRACKER    0x00080000 //! track IR
#define INPUT_DEVICE_MOUSE_AXIS 0x00100000 //! mouse axis
#define INPUT_DEVICE_SPECIAL_COMBINATIONS 0x00110000 //! keyboard + mouse (LCtrl + LMB)
#define INPUT_DOUBLE_TAP_OFFSET   256
//note: key combinations can be mixed with mouse input, but DIK_LCONTROL is the only combo key available for users in control options UI
// Possible values are:
//     {DIK_LCONTROL,INPUT_DEVICE_MOUSE}                         //LCtrl+LMB
//     {DIK_LCONTROL,INPUT_DEVICE_MOUSE+2}                       //LCtrl+MouseWheel
//     {DIK_LCONTROL,INPUT_DEVICE_MOUSE+3+MOUSE_CLICK_OFFSET}   //LCtrl+RMB Click
//#define KEYBOARD_COMBO_OFFSET       16777216 //do not use it as offset here, use array {comboDik, keyDik} for key combinations!
#define MOUSE_CLICK_OFFSET        128
#define INPUT_DOUBLE_TAP_OFFSET   256

//@{ specific mouse axes
#define INPUT_DEVICE_MOUSE_AXIS_LEFT  (INPUT_DEVICE_MOUSE_AXIS + 0)
#define INPUT_DEVICE_MOUSE_AXIS_RIGHT (INPUT_DEVICE_MOUSE_AXIS + 1)
#define INPUT_DEVICE_MOUSE_AXIS_UP    (INPUT_DEVICE_MOUSE_AXIS + 2)
#define INPUT_DEVICE_MOUSE_AXIS_DOWN  (INPUT_DEVICE_MOUSE_AXIS + 3)
#define INPUT_DEVICE_MOUSE_WHEEL_UP   (INPUT_DEVICE_MOUSE_AXIS + 4)
#define INPUT_DEVICE_MOUSE_WHEEL_DOWN (INPUT_DEVICE_MOUSE_AXIS + 5)
//@}

//@{ Joystick axes macros
#define AXIS_POS  0
#define AXIS_NEG  8
#define AXIS_X    0
#define AXIS_Y    1
#define AXIS_Z    2
#define AXIS_RX   3
#define AXIS_RY   4
#define AXIS_RZ   5
#define AXIS_SLD1 6
#define AXIS_SLD2 7
//@}

/*!
\patch 5128 Date 2/14/2007 by Ondra
- New: New double-tap bindings for compass and watch, new binding (Ctrl-M) for minimap.
*/

class CfgDefaultKeysPresets
{
  class Default
  {
    // Name visible when selecting the preset.
    displayName = $STR_DISP_DEFAULT;
    // select this profile as default
    default = true;
    // key mapping
    class Mappings
    {
      swimUp[] = {DIK_Q};
      swimDown[] = {DIK_Z};
      adjustUp[] = {{DIK_LCONTROL,DIK_W}};
      adjustLeft[] = {{DIK_LCONTROL,DIK_A}};
      adjustDown[] = {{DIK_LCONTROL,DIK_S}};
      adjustRight[] = {{DIK_LCONTROL,DIK_D}};
      moveForward[] = {DIK_W, DIK_UP};
      moveBack[] = {DIK_S, DIK_DOWN};
      turnLeft[] = {DIK_A, DIK_LEFT};
      turnRight[] = {DIK_D, DIK_RIGHT};
      moveUp[] = {};
      moveDown[] = {};
      moveFastForward[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_W};
      moveSlowForward[] = {};
      moveLeft[] = {DIK_DELETE};
      moveRight[] = {DIK_END};
      evasiveForward[] = {};
      evasiveLeft[] = {DIK_Q};
      evasiveRight[] = {DIK_E};
      evasiveBack[] = {};
      stand[] = {DIK_C};
      crouch[] = {DIK_X};
      prone[] = {DIK_Z};
      //toggleWeapons[] = {DIK_F};
      nextWeapon[] = {DIK_F};
      prevWeapon[] = {};
      switchWeapon[] = {};
      switchPrimary[] = {};
      switchHandgun[] = {};
      switchSecondary[] = {};
      fire[] = {{DIK_LCONTROL,INPUT_DEVICE_MOUSE}};
      defaultAction[] = {INPUT_DEVICE_MOUSE};
      actionInMap[] = {INPUT_DEVICE_MOUSE};
      reloadMagazine[] = {DIK_R};
      lockTargets[] = {DIK_TAB};
      lockEmptyTargets[] = {{DIK_LCONTROL,DIK_TAB}};
      lockTarget[] = {INPUT_DEVICE_MOUSE + 1};
      revealTarget[] = {INPUT_DEVICE_MOUSE + 1};
      tacticalPing[] = {{DIK_LCONTROL, DIK_T}};
      zoomTemp[] = {};
      tempRaiseWeapon[] = {};
      toggleRaiseWeapon[] = {{DIK_RCONTROL, DIK_R}, INPUT_DOUBLE_TAP_OFFSET+DIK_LCONTROL};
      launchCM[] = {DIK_R};
      nextCM[] = {{DIK_LCONTROL,DIK_R}};
      throw[] = {};
      cycleThrownItems[] = {};

      prevAction[] = {DIK_LBRACKET, INPUT_DEVICE_MOUSE_WHEEL_UP};
      nextAction[] = {DIK_RBRACKET, INPUT_DEVICE_MOUSE_WHEEL_DOWN};
      action[] = {DIK_RETURN, INPUT_DEVICE_MOUSE + 2};
      actionContext[] = {INPUT_DEVICE_MOUSE};
      actionFreeLook[] = {INPUT_DEVICE_MOUSE};
      headlights[] = {DIK_L};
      nightVision[] = {DIK_N};
      binocular[] = {DIK_B};
      handgun[] = {DIK_SEMICOLON};
      compass[] = {DIK_K};
      watch[] = {DIK_O};
      minimap[] = {};
      uavView[] = {};
      compassToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_K};
      watchToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_O};
      minimapToggle[] = {{DIK_RCONTROL,DIK_M}};
      uavViewToggle[] = {};
      deployWeaponAuto[] = {};
      deployWeaponManual[] = {};
      showMap[] = { DIK_M };
      hideMap[] = {DIK_M};
      help[] = {DIK_H};
      timeInc[] = {DIK_EQUALS};
      timeDec[] = {DIK_MINUS};
      copyVersion[] = {{DIK_LCONTROL, DIK_SLASH}};
      openDlcScreen[] = {{DIK_LCONTROL, DIK_B}};
      optics[] = {DIK_NUMPAD0, INPUT_DEVICE_MOUSE+MOUSE_CLICK_OFFSET+1};
      OpticsTemp[]={};
      opticsMode[] = {DIK_DIVIDE};
      personView[] = {DIK_NUMPADENTER};
      tacticalView[] = {DIK_DECIMAL};
      zoomIn[] = {DIK_ADD};
      zoomInToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_ADD};
      zoomOut[] = {DIK_SUBTRACT};
      zoomOutToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_SUBTRACT};
      zoomContIn[] = {};
      zoomContOut[] = {};
      gunElevUp[] = {DIK_PRIOR};
      gunElevDown[] = {DIK_NEXT};
      gunElevSlow[] = {DIK_LSHIFT, DIK_RSHIFT};
      gunElevAuto[] = {DIK_BACKSLASH};
      zeroingUp[] = {DIK_PRIOR};
      zeroingDown[] = {DIK_NEXT};
      lookAround[] = {DIK_LMENU};
      lookAroundToggle[] = {DIK_MULTIPLY, INPUT_DOUBLE_TAP_OFFSET+DIK_LMENU};
      lookLeftDown[] = {DIK_NUMPAD1};
      lookDown[] = {DIK_NUMPAD2};
      lookRightDown[] = {DIK_NUMPAD3};
      lookLeft[] = {DIK_NUMPAD4};
      lookCenter[] = {DIK_NUMPAD5};
      lookRight[] = {DIK_NUMPAD6};
      lookLeftUp[] = {DIK_NUMPAD7};
      lookUp[] = {DIK_NUMPAD8};
      lookRightUp[] = {DIK_NUMPAD9};
      lookLeftCont[] = {INPUT_DEVICE_TRACKER + 1};
      lookRightCont[] = {INPUT_DEVICE_TRACKER + 7};
      lookDownCont[] = {INPUT_DEVICE_TRACKER + 0};
      lookUpCont[] = {INPUT_DEVICE_TRACKER + 6};

      lookShiftLeftCont[] = {INPUT_DEVICE_TRACKER + 3};
      lookShiftRightCont[] = {INPUT_DEVICE_TRACKER + 9};
      lookShiftUpCont[] = {INPUT_DEVICE_TRACKER + 4};
      lookShiftDownCont[] = {};
      lookShiftForwardCont[] = {INPUT_DEVICE_TRACKER + 11};
      lookShiftBackCont[] = {};
      lookRollLeftCont[] = {INPUT_DEVICE_TRACKER + 2};
      lookRollRightCont[] = {INPUT_DEVICE_TRACKER + 8};

      lookShiftLeft[] = {};
      lookShiftRight[] = {};
      lookShiftUp[] = {{DIK_LCONTROL,DIK_PGUP}};
      lookShiftDown[] = {{DIK_LCONTROL,DIK_PGDN}};
      lookShiftForward[] = {};
      lookShiftBack[] = {};
      lookRollLeft[] = {{DIK_LCONTROL,DIK_Q}};
      lookRollRight[] = {{DIK_LCONTROL,DIK_E}};
      lookShiftCenter[] = {{DIK_LCONTROL,DIK_NUMPAD5}};
      freeHeadMove[] = {DIK_LCONTROL};

      leanLeft[] = {DIK_Q, INPUT_DEVICE_TRACKER + 3};
      leanRight[] = {DIK_E, INPUT_DEVICE_TRACKER + 9};
      leanLeftToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_Q};
      leanRightToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_E};
      prevChannel[] = {DIK_COMMA};
      nextChannel[] = {DIK_PERIOD};
      chat[] = {DIK_SLASH};
      voiceOverNet[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_CAPITAL};
      pushToTalk[] = {DIK_CAPITAL};

      commandingmenu1[] = {DIK_1};
      commandingmenu2[] = {DIK_2};
      commandingmenu3[] = {DIK_3};
      commandingmenu4[] = {DIK_4};
      commandingmenu5[] = {DIK_5};
      commandingmenu6[] = {DIK_6};
      commandingmenu7[] = {DIK_7};
      commandingmenu8[] = {DIK_8};
      commandingmenu9[] = {DIK_9};
      commandingmenu0[] = {DIK_0};

      selectgroupunit1[] = {DIK_F1};
      selectgroupunit2[] = {DIK_F2};
      selectgroupunit3[] = {DIK_F3};
      selectgroupunit4[] = {DIK_F4};
      selectgroupunit5[] = {DIK_F5};
      selectgroupunit6[] = {DIK_F6};
      selectgroupunit7[] = {DIK_F7};
      selectgroupunit8[] = {DIK_F8};
      selectgroupunit9[] = {DIK_F9};
      selectgroupunit0[] = {DIK_F10};

      grouppageprev[] = {DIK_F11};
      grouppageNext[] = {DIK_F12};

      selectteamred[]    = {{DIK_LSHIFT,DIK_F1},{DIK_RSHIFT,DIK_F1}};
      selectteamgreen[]  = {{DIK_LSHIFT,DIK_F2},{DIK_RSHIFT,DIK_F2}};
      selectteamblue[]   = {{DIK_LSHIFT,DIK_F3},{DIK_RSHIFT,DIK_F3}};
      selectteamyellow[] = {{DIK_LSHIFT,DIK_F4},{DIK_RSHIFT,DIK_F4}};
      selectteamwhite[]  = {{DIK_LSHIFT,DIK_F5},{DIK_RSHIFT,DIK_F5}};

      setteamred[]    = {{DIK_LCONTROL,DIK_F1},{DIK_RCONTROL,DIK_F1}};
      setteamgreen[]  = {{DIK_LCONTROL,DIK_F2},{DIK_RCONTROL,DIK_F2}};
      setteamblue[]   = {{DIK_LCONTROL,DIK_F3},{DIK_RCONTROL,DIK_F3}};
      setteamyellow[] = {{DIK_LCONTROL,DIK_F4},{DIK_RCONTROL,DIK_F4}};
      setteamwhite[]  = {{DIK_LCONTROL,DIK_F5},{DIK_RCONTROL,DIK_F5}};

      networkStats[] = {DIK_I};
      networkPlayers[] = {DIK_P};
      selectAll[] = {DIK_GRAVE};
      turbo[] = {};
      turboToggle[] = {};
      vehicleTurbo[] = {DIK_LSHIFT};
      holdBreath[] = {INPUT_DEVICE_MOUSE + 1};
      salute[] = {DIK_BACKSLASH};
      sitDown[] = {DIK_APOSTROPHE};
      walk[] = {};
      walkRunToggle[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_LSHIFT};
      walkRunTemp[] = {DIK_LSHIFT};
      tactToggle[] = {};
      tactTemp[] = {};
      TactShort[] = {};
      EngineToggle[] = {{DIK_RCONTROL,DIK_E}};
      ActiveSensorsToggle[] = {};
      ListLeftVehicleDisplay[] = {};
      ListRightVehicleDisplay[] = {};

      getOver[] = {DIK_V};

      aimUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
      aimDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
      aimLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      aimRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

      aimHeadUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
      aimHeadDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
      aimHeadLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      aimHeadRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

      ingamePause[] = {DIK_ESCAPE};
      menuSelect[] = {};
      navigateMenu[] = { DIK_BACK };
      closeContext[] = { INPUT_DEVICE_MOUSE + MOUSE_CLICK_OFFSET + 1 };
      forceCommandingMode[] = {DIK_SPACE};

      heliUp[] = {DIK_Q};
      heliDown[] = {DIK_Z};
      heliLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      heliRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};
      airBankLeft[] = {DIK_A, DIK_LEFT};
      airBankRight[] = {DIK_D, DIK_RIGHT};
      heliRudderLeft[] = {DIK_X, DIK_DELETE};
      heliRudderRight[] = {DIK_C, DIK_END};
      heliForward[] = {DIK_W, DIK_UP, INPUT_DEVICE_MOUSE_AXIS_DOWN};
      heliBack[] = {DIK_S, DIK_DOWN, INPUT_DEVICE_MOUSE_AXIS_UP};
      heliFastForward[] = {DIK_E};
      landGear[] = {{DIK_RCONTROL, DIK_G}};
      landGearUp[] = {{DIK_RCONTROL, DIK_G}};
      flapsDown[] = {{DIK_RCONTROL, DIK_K}};
      flapsUp[] = {{DIK_RCONTROL, DIK_L}};

      heliCyclicLeft[] = {DIK_A, DIK_LEFT};
      heliCyclicRight[] = {DIK_D, DIK_RIGHT};
      heliCyclicForward[] = {DIK_W, DIK_UP, INPUT_DEVICE_MOUSE_AXIS_DOWN};
      heliCyclicBack[] = {DIK_S, DIK_DOWN, INPUT_DEVICE_MOUSE_AXIS_UP};
      heliCollectiveRaise[] = {DIK_Q};
      heliCollectiveLower[] = {DIK_Z};

      heliWheelsBrake[] = {{DIK_RCONTROL,DIK_W}};
      airPlaneBrake[] = {{DIK_RCONTROL,DIK_Z}};

      helicopterTrimOn[] = {{DIK_RCONTROL,DIK_NUMPAD5}};
      helicopterTrimOff[] = {{DIK_RCONTROL,DIK_DECIMAL}};
      HeliTrimLeft[] = {{DIK_RCONTROL,DIK_NUMPAD4}};
      HeliTrimRight[] = {{DIK_RCONTROL,DIK_NUMPAD6}};
      HeliTrimForward[] = {{DIK_RCONTROL,DIK_NUMPAD8}};
      HeliTrimBackward[] = {{DIK_RCONTROL,DIK_NUMPAD2}};
      HeliTrimRudderLeft[] = {{DIK_RCONTROL,DIK_NUMPAD1}};
      HeliTrimRudderRight[] = {{DIK_RCONTROL,DIK_NUMPAD3}};
      HeliRopeAction[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_R};
      autoHover[] = {INPUT_DOUBLE_TAP_OFFSET+DIK_BACKSLASH};
      autoHoverCancel[] = {DIK_BACKSLASH};

      VTOLVectoring[] = { INPUT_DOUBLE_TAP_OFFSET + DIK_BACKSLASH };
      VTOLVectoringCancel[] = { DIK_BACKSLASH };

      submarineUp[] = {DIK_Q};
      submarineDown[] = {DIK_Z};
      submarineLeft[] = {DIK_A, DIK_LEFT, INPUT_DEVICE_MOUSE_AXIS_LEFT};
      submarineRight[] = {DIK_D, DIK_RIGHT, INPUT_DEVICE_MOUSE_AXIS_RIGHT};
      submarineForward[] = {DIK_W, DIK_UP};
      submarineBack[] = {DIK_S, DIK_DOWN};
      submarineCyclicForward[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
      submarineCyclicBack[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};

      seagullUp[] = {DIK_Q, INPUT_DEVICE_MOUSE_AXIS_DOWN};
      seagullDown[] = {DIK_Z, INPUT_DEVICE_MOUSE_AXIS_UP};
      seagullForward[] = {DIK_W, DIK_UP};
      seagullBack[] = {DIK_S, DIK_DOWN};
      seagullFastForward[] = {DIK_E};

      carLeft[] = {DIK_A, DIK_LEFT};
      carRight[] = {DIK_D, DIK_RIGHT};
      carLinearLeft[] = {STICK_AXIS+AXIS_NEG+AXIS_X};
      carLinearRight[] = {STICK_AXIS+AXIS_NEG+AXIS_Y};
      carWheelLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      carWheelRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

      //we want only full-auto gearbox
      //carGearUp[] = {};
      //carGearDwn[] = {};

      carForward[] = {DIK_W, DIK_UP};
      carBack[] = {DIK_S, DIK_DOWN};
      carHandBrake[] = {};
      carFastForward[] = {DIK_E};
      carSlowForward[] = {DIK_Q};

      carAimUp[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
      carAimDown[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
      carAimLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      carAimRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};

      commandLeft[] = {DIK_A, DIK_LEFT};
      commandRight[] = {DIK_D, DIK_RIGHT};
      commandForward[] = {DIK_W, DIK_UP};
      commandBack[] = {DIK_S, DIK_DOWN};
      commandFast[] = {DIK_E};
      commandSlow[] = {DIK_Q};

      switchGunnerWeapon[] = {{DIK_LCONTROL, DIK_F}};

      vehLockTargets[] = {DIK_TAB};
      vehLockEmptyTargets[] = {{DIK_LCONTROL,DIK_TAB}};
      vehLockTurretView[] = {{DIK_LCONTROL, DIK_T}};
      swapGunner[] = {};

      heliManualFire[] = {DIK_APOSTROPHE};
      turnIn[] = {DIK_X, DIK_C};
      turnOut[] = {DIK_Z};

      cancelAction[] = {};

      commandWatch[] = {DIK_LMENU};

      teamSwitch[] = {DIK_T};
      teamSwitchPrev[] = {DIK_Y};
      teamSwitchNext[] = {DIK_U};
      gear[] = {DIK_G};
      CuratorInterface[] = {{DIK_LSHIFT, DIK_U}};
      CuratorDelete[] = {DIK_DELETE};
      CuratorDestroy[] = {DIK_END};
      CuratorMoveCamTo[] = {DIK_F};
      CuratorLockCameraTo[] = {{DIK_LCONTROL, DIK_F}};
      CuratorLevelObject[] = {DIK_X};
      CuratorRotateMod[] = {DIK_LSHIFT};
      CuratorGroupMod[] = {DIK_LCONTROL};
      CuratorMultipleMod[] = {DIK_LCONTROL};
      CuratorMoveY[] = {DIK_LALT};
      CuratorContentWaypoint[] = {DIK_LALT};
      CuratorGetOut[] = {DIK_G};
      CuratorCameraLook[] = {INPUT_DEVICE_MOUSE+3};
      CuratorCollapseParent[] = {DIK_C};

      TurretElevationUp[] = {};
      TurretElevationDown[] = {};

      cheat1[] = {DIK_RWIN,DIK_LWIN};
      cheat2[] = {DIK_RMENU};

      buldSwitchCamera[] = {DIK_INSERT};
      buldFreeLook[] = {DIK_NUMPAD5};
      buldSelect[] = {DIK_SPACE};
      buldResetCamera[] = {DIK_NUMPAD0};
      buldMagnetizePoints[] = {DIK_F5};
      buldMagnetizePlanes[] = {DIK_F6};
      buldMagnetizeYFixed[] = {DIK_F7};

      buldTerrainRaise1m[] = {DIK_O};
      buldTerrainRaise10cm[] = {DIK_U};
      buldTerrainLower1m[] = {DIK_L};
      buldTerrainLower10cm[] = {DIK_J};
      buldTerrainRaise5m[] = {DIK_P};
      buldTerrainRaise50cm[] = {DIK_I};
      buldTerrainLower5m[] = {DIK_SEMICOLON};
      buldTerrainLower50cm[] = {DIK_K};

      buldTerrainShowNode[] = {DIK_H};
      buldSelectionType[] = {DIK_S};

      buldLeft[] = {DIK_LEFT};
      buldRight[] = {DIK_RIGHT};
      buldForward[] = {DIK_UP};
      buldBack[] = {DIK_DOWN};
      buldMoveLeft[] = {INPUT_DEVICE_MOUSE_AXIS_LEFT};
      buldMoveRight[] = {INPUT_DEVICE_MOUSE_AXIS_RIGHT};
      buldMoveForward[] = {INPUT_DEVICE_MOUSE_AXIS_UP};
      buldMoveBack[] = {INPUT_DEVICE_MOUSE_AXIS_DOWN};
      buldTurbo[] = {DIK_LSHIFT};

    // Brush actions
      buldBrushRatio[] = {DIK_B};
      buldBrushStrength[] = {DIK_M};
      buldBrushSmooth[] = {DIK_LSHIFT};
      buldBrushRandomize[]= {DIK_R};
      BuldBrushSetHeight[]= {DIK_C};
      buldBrushOuter[]= {DIK_N};
    // Undo Redo
      buldUndo[] = {{DIK_LCONTROL, DIK_Z}};
      buldRedo[] = {{DIK_LCONTROL, DIK_R}};
      // objects tools
      BuldCreateObj[] = {DIK_V};
      BuldDuplicateSel[] = {DIK_C};
      BuldRemoveSel[] = {DIK_D};
      BuldRotateSelX[] = {DIK_X};// rotate around Y is default
      BuldRotateSelZ[] = {DIK_Z};
      BuldScaleSel[] = {DIK_E};
      BuldElevateSel[] = {DIK_W};
      BuldKeepAbsoluteElevationSel[] = {DIK_M};
      BuldClearAllElevationLocks[] = { { DIK_LSHIFT, DIK_M } };
    //////////////////



      buldUp[] = {DIK_PGUP, DIK_Q};
      buldDown[] = {DIK_PGDN, DIK_Z};
      buldLookLeft[] = {DIK_NUMPAD4};
      buldLookRight[] = {DIK_NUMPAD6};
      buldLookUp[] = {DIK_NUMPAD8};
      buldLookDown[] = {DIK_NUMPAD2};
      buldZoomIn[] = {DIK_NUMPADPLUS};
      buldZoomOut[] = {DIK_NUMPADMINUS};
      buldTextureInfo[] = {DIK_T};

      diaryFull[] = {{DIK_LCONTROL, DIK_J}};
      diary[] = {DIK_J};
      diaryToggle[] = {INPUT_DOUBLE_TAP_OFFSET + DIK_J};

      switchCommand[] = {{DIK_LCONTROL,DIK_SPACE},DIK_APPS};

      //--- Camera
      cameraMoveForward[] = { DIK_W };
      cameraMoveBackward[] = { DIK_S };
      cameraMoveLeft[] = { DIK_A };
      cameraMoveRight[] = { DIK_D };
      cameraMoveUp[] = { DIK_Q };
      cameraMoveDown[] = { DIK_Z };
      cameraMoveTurbo1[] = { DIK_LSHIFT, DIK_RSHIFT };
      cameraMoveTurbo2[] = { DIK_LMENU, DIK_RMENU };
      cameraZoomIn[] = { DIK_ADD };
      cameraZoomOut[] = { DIK_SUBTRACT };
      cameraLookUp[] = { DIK_NUMPAD8 };
      cameraLookDown[] = { DIK_NUMPAD2 };
      cameraLookLeft[] = { DIK_NUMPAD4 };
      cameraLookRight[] = { DIK_NUMPAD6 };
      cameraReset[] = { DIK_NUMPAD5 };
      cameraTarget[] = { DIK_F };
      cameraVisionMode[] = { DIK_N };
      cameraFlashlight[] = { DIK_L };
      cameraInterface[] = { DIK_BACK };

      //--- Editor Camera
      editorCameraMoveForward[] = { DIK_W };
      editorCameraMoveBackward[] = { DIK_S };
      editorCameraMoveLeft[] = { DIK_A };
      editorCameraMoveRight[] = { DIK_D };
      editorCameraMoveUp[] = { DIK_Q };
      editorCameraMoveDown[] = { DIK_Z };
      editorCameraMoveTurbo[] = { DIK_LSHIFT, DIK_RSHIFT };
      editorCameraLookUp[] = { DIK_NUMPAD8 };
      editorCameraLookDown[] = { DIK_NUMPAD2 };
      editorCameraLookLeft[] = { DIK_NUMPAD4 };
      editorCameraLookRight[] = { DIK_NUMPAD6 };
      editorCameraReset[] = { DIK_NUMPAD5 };
    };
  };
};

#define TRACKER    0x00080000 //! tracker
#define STICK      0x00020000 //! stick button
#define STICK_AXIS 0x00030000 //! stick axis
#define STICK_POV  0x00040000 //! stick pov switch
#define AXIS_POS  0
#define AXIS_NEG  8
#define AXIS_X    0
#define AXIS_Y    1
#define AXIS_Z    2
#define AXIS_RX   3
#define AXIS_RY   4
#define AXIS_RZ   5
#define AXIS_SLD1 6
#define AXIS_SLD2 7

// Joystick schemes ready to be mapped to selected joysticks in DisplayJoystickSchemes
class JoystickSchemes
{
  class Joystick1
  {
    name = $STR_CONTROLLER_SCHEME_GENERIC_STICK;
    class ActionsMapping
    {
      keyHeliCyclicForward[] = {STICK_AXIS+AXIS_NEG+AXIS_Y};
      keyHeliCyclicBack[] = {STICK_AXIS+AXIS_Y};
      keyHeliCyclicLeft[] = {STICK_AXIS+AXIS_NEG+AXIS_X};
      keyHeliCyclicRight[] = {STICK_AXIS+AXIS_X};
      keyHeliCollectiveRaiseCont[] = {STICK_AXIS+AXIS_NEG+AXIS_SLD1};
      keyHeliCollectiveLowerCont[] = {STICK_AXIS+AXIS_SLD1};

      keyAirBankLeft[] = {STICK_AXIS+AXIS_NEG+AXIS_X};
      keyAirBankRight[] = {STICK_AXIS+AXIS_X};
      keyHeliForward[] = {STICK_AXIS+AXIS_NEG+AXIS_Y};
      keyHeliBack[] = {STICK_AXIS+AXIS_Y};

      keySeagullUp[] = {STICK_AXIS+AXIS_Y};
      keySeagullDown[] = {STICK_AXIS+AXIS_NEG+AXIS_Y};

      keyCarLeft[] = {STICK_AXIS+AXIS_NEG+AXIS_X};
      keyCarRight[] = {STICK_AXIS+AXIS_NEG+AXIS_Y};
      keyCarForward[] = {STICK_AXIS+AXIS_Y};
      keyCarBack[] = {STICK_AXIS+AXIS_Y};
      keyVehLockTargets[] = {STICK+1};

      keyToggleWeapons[] = {STICK+2};
      keyDefaultAction[] = {STICK+0};
      keyLockTargets[] = {STICK+1};
      keyPrevAction[] = {STICK+6};
      keyNextAction[] = {STICK+4};
      keyAction[] = {STICK+5};
      keyActionContext[] = {STICK+0};
      keyActionFreeLook[] = {STICK+0};
      keyZoomIn[] = {STICK+3};
      keyLookLeftDown[] = {STICK_POV+5};
      keyLookDown[] = {STICK_POV+4};
      keyLookRightDown[] = {STICK_POV+3};
      keyLookLeft[] = {STICK_POV+6};
      keyLookRight[] = {STICK_POV+2};
      keyLookLeftUp[] = {STICK_POV+7};
      keyLookUp[] = {STICK_POV+0};
      keyLookRightUp[] = {STICK_POV+1};
    };
  };
  class Joystick2
  {
    name = $STR_CONTROLLER_SCHEME_GENERIC_THROTTLE;
    class ActionsMapping
    {
      keyHeliCollectiveRaiseCont[] = {STICK_AXIS+AXIS_Z};
      keyHeliCollectiveLowerCont[] = {STICK_AXIS+AXIS_NEG+AXIS_Z};

      keyLookLeftDown[] = {STICK_POV+5};
      keyLookDown[] = {STICK_POV+4};
      keyLookRightDown[] = {STICK_POV+3};
      keyLookLeft[] = {STICK_POV+6};
      keyLookRight[] = {STICK_POV+2};
      keyLookLeftUp[] = {STICK_POV+7};
      keyLookUp[] = {STICK_POV+0};
      keyLookRightUp[] = {STICK_POV+1};
    };
  };
  class Joystick3
  {
    name = $STR_CONTROLLER_SCHEME_GENERIC_PEDALS;
    class ActionsMapping
    {
      keyHeliRudderLeft[] = {STICK_AXIS+AXIS_NEG+AXIS_Z};
      keyHeliRudderRight[] = {STICK_AXIS+AXIS_Z};
    };
  };
  class Joystick4
  {
    name = $STR_CONTROLLER_SCHEME_GENERIC_TRACKIR;
    class ActionsMapping
    {
      keyLeanLeft[] = {TRACKER+3};
      keyLeanRight[] = {TRACKER+9};
      keyZoomContIn[] = {TRACKER+11};
      keyZoomContOut[] = {TRACKER+5};
      keyLookLeftCont[] = {TRACKER+1};
      keyLookRightCont[] = {TRACKER+7};
      keyLookDownCont[] = {TRACKER+0};
      keyLookUpCont[] = {TRACKER+6};
      keyLookShiftLeftCont[] = {TRACKER+3};
      keyLookShiftRightCont[] = {TRACKER+9};
      keyLookRollLeftCont[] = {TRACKER+2};
      keyLookRollRightCont[] = {TRACKER+8};
    };
  };
};

/// List of actions, for which the continuing hold after double tap on keyboard
/// should be considered as double tap itself until the key release
DoubleTapAndHoldActions[] =
{
  moveForward,
  moveBack,
  turnLeft,
  turnRight,
  moveFastForward,
  moveSlowForward,
  moveLeft,
  moveRight,
  defaultAction,
  tempRaiseWeapon,
  compass,
  watch,
  lookAround,
  minimap,
  zoomIn,
  zoomOut
};

//////////////////////////////////////////////////////
/// Default XInput and Mouse CURVES
///
#define DEFINE_ACTION_CURVE(action, CURVE) \
class action \
{ \
  CURVE \
};

//--- Air
#define HeliXCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 1, 1.5};
#define HeliYCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 1, 1.5};

//--- Car
#define CarXCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 2, 3};
#define CarYCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 1, 1.5};
#define CarAimXCurveDef \
  deadZone = 0; \
  curve[] = {"LinRampZoom", \
{1.0,		0.4,0.1,	0.90,0.90,	0.99,3.60,	1.0,9.00}, \
{0.7,		0.4,0.1,	0.90,0.75,	0.99,3.00,	1.0,8.00}, \
{0.3,		0.4,0.1,	0.90,0.60,	0.99,1.80,	1.0,5.00} };
#define CarAimYCurveDef \
  deadZone = 0; \
  curve[] = {"LinRampZoom", \
{1.0,		0.2,0.05,	0.99,1.80,	1.0,5.40}, \
{0.7,		0.2,0.03,	0.99,1.20,	1.0,4.80}, \
{0.3,		0.2,0.02,	0.99,1.80,	1.0,3.00} };

//--- Char
#define AimXCurveDef \
  deadZone = 0; \
  curve[] = {"LinRampZoom", \
{1.0,		0.4,0.1,	0.90,0.90,	0.99,1.80,	1.0,3.00}, \
{0.7,		0.4,0.1,	0.90,0.75,	0.99,1.50,	1.0,2.50}, \
{0.3,		0.4,0.1,	0.90,0.60,	0.99,0.90,	1.0,1.20} };
#define AimYCurveDef \
  deadZone = 0; \
  curve[] = {"LinRampZoom", \
{1.0,		0.2,0.05,	0.99,0.80,	1.0,1.80}, \
{0.7,		0.2,0.03,	0.99,0.60,	1.0,1.60}, \
{0.3,		0.2,0.02,	0.99,0.40,	1.0,1.00} };
#define AimHeadXCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 2, 4};
#define AimHeadYCurveDef \
  deadZone = 0; \
  curve[] = {"Gamma", 1, 2.5};

//--- Char move
#define MoveXCurveDef \
  deadZone = 0.1; \
  curve[] = {"Gamma", 1, 2};
#define MoveYCurveDef \
  deadZone = 0.1; \
  curve[] = {"Gamma", 1, 4};

class DefaultAnalogCurveDefs
{
  //class Characters
  DEFINE_ACTION_CURVE(MoveBack, MoveYCurveDef)
  DEFINE_ACTION_CURVE(MoveFastForward, MoveYCurveDef)
  DEFINE_ACTION_CURVE(TurnLeft, MoveXCurveDef)
  DEFINE_ACTION_CURVE(TurnRight, MoveXCurveDef)
  DEFINE_ACTION_CURVE(AimUp, AimYCurveDef)
  DEFINE_ACTION_CURVE(AimDown, AimYCurveDef)
  DEFINE_ACTION_CURVE(AimLeft, AimXCurveDef)
  DEFINE_ACTION_CURVE(AimRight, AimXCurveDef)
  DEFINE_ACTION_CURVE(AimHeadUp, AimHeadYCurveDef)
  DEFINE_ACTION_CURVE(AimHeadDown, AimHeadYCurveDef)
  DEFINE_ACTION_CURVE(AimHeadLeft, AimHeadXCurveDef)
  DEFINE_ACTION_CURVE(AimHeadRight, AimHeadXCurveDef)
  //class Ground
  DEFINE_ACTION_CURVE(CarLeft, CarXCurveDef)
  DEFINE_ACTION_CURVE(CarRight, CarXCurveDef)
  DEFINE_ACTION_CURVE(CarBack, CarYCurveDef)
  DEFINE_ACTION_CURVE(CarFastForward, CarYCurveDef)
  DEFINE_ACTION_CURVE(CarAimUp, CarAimYCurveDef)
  DEFINE_ACTION_CURVE(CarAimDown, CarAimYCurveDef)
  DEFINE_ACTION_CURVE(CarAimLeft, CarAimXCurveDef)
  DEFINE_ACTION_CURVE(CarAimRight, CarAimXCurveDef)
  //class AirCraft
  DEFINE_ACTION_CURVE(HeliUp, HeliYCurveDef)
  DEFINE_ACTION_CURVE(HeliDown, HeliYCurveDef)
  DEFINE_ACTION_CURVE(HeliCyclicLeft, HeliXCurveDef)
  DEFINE_ACTION_CURVE(HeliCyclicRight, HeliXCurveDef)
  DEFINE_ACTION_CURVE(HeliRudderLeft, HeliXCurveDef)
  DEFINE_ACTION_CURVE(HeliRudderRight, HeliXCurveDef)
  DEFINE_ACTION_CURVE(HeliBack, HeliYCurveDef)
  DEFINE_ACTION_CURVE(HeliFastForward, HeliYCurveDef)
  DEFINE_ACTION_CURVE(SeagullUp, HeliYCurveDef)
  DEFINE_ACTION_CURVE(SeagullDown, HeliYCurveDef)
  DEFINE_ACTION_CURVE(SeagullBack, HeliYCurveDef)
  DEFINE_ACTION_CURVE(SeagullFastForward, HeliYCurveDef)
};

#define AimXCurveMouse \
  deadZone = 0.2; \
  curve[] = {"LinRampZoom", \
{1.0, 0.7,0.075, 0.85,0.60, 1.0, 7.50}, \
{0.7, 0.7,0.075, 0.85,0.55, 1.0, 5.50}, \
{0.3, 0.7,0.075, 0.85,0.20, 1.0, 1.50} };

class DefaultMouseCurveDefs
{
  // list of typical Mouse driven actions
  //   aimUp, aimDown, aimLeft, aimRight
  //   aimHeadUp, aimHeadDown, aimHeadLeft, aimHeadRight
  //   heliLeft, heliRight, heliForward, heliBack
  //   carLeft, carRight, carAimUp, carAimDown, carAimLeft, carAimRight
  //   seagullUp, seagullDown
  //   buldMoveLeft, buldMoveRight, buldMoveForward, buldMoveBack
/*
  DEFINE_ACTION_CURVE(AimLeft, AimXCurveMouse)
  DEFINE_ACTION_CURVE(AimRight, AimXCurveMouse)
*/
};
