// define some Xbox specific values

class CfgMPGameTypes
{
  class Unknown
  {
    name = $STR_XBOX_MPTYPE_UNKNOWN;
    shortcut = $STR_XBOX_MPTYPE_UNKNOWN_SHORT;
    statsStandard = StandardUnknown;
    statsRanked = RankedUnknown;
    id = 0;
  };
	class DM
	{
		name = $STR_XBOX_MPTYPE_DM;
		shortcut = $STR_XBOX_MPTYPE_DM_SHORT;
    statsStandard = StandardDM;
    statsRanked = RankedDM;
		id = 1; // identification for matchmaking service
	};
	class CTF
	{
		name = $STR_XBOX_MPTYPE_CTF;
		shortcut = $STR_XBOX_MPTYPE_CTF_SHORT;
    statsStandard = StandardCTF;
    statsRanked = RankedCTF;
		id = 2;
	};
	class FF
	{
		name = $STR_XBOX_MPTYPE_FF;
		shortcut = $STR_XBOX_MPTYPE_FF_SHORT;
    statsStandard = StandardFF;
    statsRanked = RankedFF;
		id = 3;
	};
	class Coop
	{
		name = $STR_XBOX_MPTYPE_COOP;
		shortcut = $STR_XBOX_MPTYPE_COOP_SHORT;
    statsStandard = ""; // no statistics for non-competitive games
    statsRanked = "";
		id = 4;
	};
	class Team
	{
		name = $STR_XBOX_MPTYPE_TEAM;
		shortcut = $STR_XBOX_MPTYPE_TEAM_SHORT;
    statsStandard = StandardTeam;
    statsRanked = RankedTeam;
		id = 5;
	};
	class SCont
	{
		name = $STR_XBOX_MPTYPE_SCONTROL;
		shortcut = $STR_XBOX_MPTYPE_SCONTROL_SHORT;
    statsStandard = StandardSControl;
    statsRanked = RankedSControl;
		id = 6;
	};
	class Hold
	{
		name = $STR_XBOX_MPTYPE_HOLDLOCATION;
		shortcut = $STR_XBOX_MPTYPE_HOLDLOCATION_SHORT;
    statsStandard = StandardHold;
    statsRanked = RankedHold;
		id = 7;
	};
  class CTI
  {
    name = $STR_XBOX_MPTYPE_CTI;
    shortcut = $STR_XBOX_MPTYPE_CTI_SHORT;
    statsStandard = StandardCTI;
    statsRanked = RankedCTI;
    id = 8;
  };
};

class CfgLiveStats
{
  // New format of leaderboard definition for Xbox 360
  class TrueSkill
  {
    // TODO: Move to stringtable
	name = "TrueSkill™ rankings";   
    // STATS_VIEW_SKILL_RANKED_MP
	board = 0xFFFF0001;             
    class Columns
    {
      class Rank
      {
        id = -1; // fixed 
        name = $STR_LIVE_STATS_RANK;
        width = 0.1;
        format = "%d.";
        align = ST_RIGHT;
      };
      class Gamertag
      {
        // fixed 
		id = -2; 
        name = $STR_LIVE_STATS_NAME;
        width = 0.5;
        format = "%s";
        align = ST_LEFT;
      };
      class Skill
      {
        // X_STATS_COLUMN_SKILL_SKILL
		id = 61; 
        // TODO: Move to stringtable
		name = "TrueSkill™ rank";  
        width = 0.2;
        format = "%d";
        align = ST_RIGHT;
      };
      class GamesPlayed
      {
        // X_STATS_COLUMN_SKILL_GAMESPLAYED
		id = 62; 
        name = "Games played";
        width = 0.2;
        format = "%d";
        align = ST_RIGHT;
      };
    };
  };

  // No statistics for single missions or cooperative missions now

  class StandardDM
  {
    // name = $STR_XBOX_LIVE_STATS_DM;
    
	name = "Standard - Death Match"; 
    // STATS_VIEW_STANDARD_DM
	board = 1; 

    algorithm = 2;
    dropouts = true;
    // multiplier
	coefWin = 10; 
    // multiplier
	coefLoose = -10; 
    // Handicap calculation
    coefM1 = 1;
    coefS1 = 100;
    coefM2 = 1;
    coefS2 = 100;
    // handicap saturation
	coefMin = 0.1; 
    // handicap saturation
	coefMax = 10.0; 

    class Columns
    {
      class Rank
      {
        // fixed 
		id = -1; 
        name = $STR_LIVE_STATS_RANK;
        width = 0.1;
        format = "%d.";
        align = ST_RIGHT;
      };
      class Gamertag
      {
        // fixed 
		id = -2; 
        name = $STR_LIVE_STATS_NAME;
        width = 0.5;
        format = "%s";
        align = ST_LEFT;
      };
      class Score
      {
        // fixed
		id = -3; 
        // TODO: Move to stringtable
		name = "Score";  
        width = 0.2;
        format = "%I64d";
        align = ST_RIGHT;
      };
      class GamesPlayed
      {
        // STATS_COLUMN_XXX_GAMES_PLAYED
		id = 1; 
        name = "Games played";
        width = 0.2;
        format = "%d";
        align = ST_RIGHT;
      };
    };
  };
  class StandardCTF
  {
    // name = $STR_XBOX_LIVE_STATS_CTF;
    
	name = "Standard - Capture The Flag"; 
    // STATS_VIEW_STANDARD_CTF
	board = 2; 

    algorithm = 3;
    dropouts = true;
    // multiplier
	coefWin = 10; 
    // multiplier
	coefLoose = -10; 
    // Handicap calculation
    coefM1 = 1;
    coefS1 = 100;
    coefM2 = 1;
    coefS2 = 100;
    // handicap saturation
	coefMin = 0.1; 
    // handicap saturation
	coefMax = 10.0; 
    coefAI = 0.5;

    class Columns
    {
      class Rank
      {
        // fixed 
		id = -1; 
        name = $STR_LIVE_STATS_RANK;
        width = 0.1;
        format = "%d.";
        align = ST_RIGHT;
      };
      class Gamertag
      {
        // fixed 
		id = -2; 
        name = $STR_LIVE_STATS_NAME;
        width = 0.5;
        format = "%s";
        align = ST_LEFT;
      };
      class Score
      {
        // fixed
		id = -3; 
        // TODO: Move to stringtable
		name = "Score";  
        width = 0.2;
        format = "%I64d";
        align = ST_RIGHT;
      };
      class GamesPlayed
      {
        // STATS_COLUMN_XXX_GAMES_PLAYED
		id = 1; 
        name = "Games played";
        width = 0.2;
        format = "%d";
        align = ST_RIGHT;
      };
    };
  };
  class StandardFF : StandardDM
  {
    // name = $STR_XBOX_LIVE_STATS_FF;
    
	name = "Standard - Flag Fight"; 
    // STATS_VIEW_STANDARD_FF
	board = 3; 
  };
  class StandardTeam : StandardCTF
  {
    // name = $STR_XBOX_LIVE_STATS_TEAM;
    name = "Standard - Team Mission"; 
    // STATS_VIEW_STANDARD_TEAM
	board = 4; 
  };
  class StandardSControl : StandardCTF
  {
    // name = $STR_XBOX_LIVE_STATS_SCONTROL;
    name = "Standard - Sector Control"; 
    // STATS_VIEW_STANDARD_SCONTROL
	board = 5; 
  };
  class StandardHold : StandardCTF
  {
    // name = $STR_XBOX_LIVE_STATS_HOLD;
    name = "Standard - Hold Location"; 
    // STATS_VIEW_STANDARD_HOLD
	board = 6; 
  };
  class StandardUnknown : StandardDM
  {
    // name = $STR_XBOX_LIVE_STATS_UNKNOWN;
    name = "Standard - Unknown"; 
    // STATS_VIEW_STANDARD_UNKNOWN
	board = 7; 
  };

  class RankedDM : StandardDM
  {
    // name = $STR_XBOX_LIVE_STATS_DM;
    name = "Ranked - Death Match"; 
    // STATS_VIEW_RANKED_DM
	board = 8; 
  }
  class RankedCTF : StandardCTF
  {
    // name = $STR_XBOX_LIVE_STATS_CTF;
    name = "Ranked - Capture The Flag"; 
    // STATS_VIEW_RANKED_CTF
	board = 9; 
  }
  class RankedFF : StandardFF
  {
    // name = $STR_XBOX_LIVE_STATS_FF;
    name = "Ranked - Flag Fight"; 
    // STATS_VIEW_RANKED_FF
	board = 10; 
  };
  class RankedTeam : StandardTeam
  {
    // name = $STR_XBOX_LIVE_STATS_TEAM;
    name = "Ranked - Team Mission"; 
    // STATS_VIEW_RANKED_TEAM
	board = 11; 
  };
  class RankedSControl : StandardSControl
  {
    // name = $STR_XBOX_LIVE_STATS_SCONTROL;
    name = "Ranked - Sector Control"; 
    // STATS_VIEW_RANKED_SCONTROL
	board = 12; 
  };
  class RankedHold : StandardHold
  {
    // name = $STR_XBOX_LIVE_STATS_HOLD;
    name = "Ranked - Hold Location"; 
    // STATS_VIEW_RANKED_HOLD
	board = 13; 
  };
  class RankedUnknown : StandardUnknown
  {
    // name = $STR_XBOX_LIVE_STATS_UNKNOWN;
    name = "Ranked - Unknown"; 
    // STATS_VIEW_RANKED_UNKNOWN
	board = 14; 
  };
};

/// List of achievements
class CfgAchievements
{
  class Quartermaster
  {
    id = 1;
    name = "Quartermaster"; 
    description = "Unlock all Armory items."; 
    descriptionUnachieved = "Unlock all Armory items."; 
    picture = ProcTextWhite;
  };
  class Marksman
  {
    id = 2;
    name = "Marksman"; 
    description = "Complete the Firing Range with 100% accuracy and at least 20 shots fired."; 
    descriptionUnachieved = "Complete the Firing Range with 100% accuracy and at least 20 shots fired."; 
    picture = ProcTextWhite;
  };
  class Speedfreak
  {
    id = 3;
    name = "Speedfreak"; 
    description = "Complete the Mobility Range in under 1:00."; 
    descriptionUnachieved = "Complete the Mobility Range in under 1:00."; 
    picture = ProcTextWhite;
  };
  class SkyHigh
  {
    id = 4;
    name = "Sky High"; 
    description = "Get to 2000 meters altitude."; 
    descriptionUnachieved = "Get to 2000 meters altitude."; 
    picture = ProcTextWhite;
  };
  class Hunter
  {
    id = 5;
    name = "Hunter"; 
    description = "Shoot down 100 seagulls."; 
    descriptionUnachieved = "Shoot down 100 seagulls."; 
    picture = ProcTextWhite;
  };
};

// Xbox voice masks
class CfgVoiceMask
{
  // the first is default
  class None
  {
    name = $STR_VOICE_MASK_NONE;
    specEnergyWeight = -1;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = -1;
  };
	class Anonymous
	{
		name = $STR_VOICE_MASK_ANONYMOUS;
    specEnergyWeight = 0.95;
    pitchScale = 0.50;
    whisperValue = 0.35;
    roboticValue = -1;
	};
  class Cartoon
  {
    name = $STR_VOICE_MASK_CARTOON;
    specEnergyWeight = 0.1;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = -1;
  };
  class BigGuy
  {
    name = $STR_VOICE_MASK_BIGGUY;
    specEnergyWeight = 0.90;
    pitchScale = 0.05;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Child
  {
    name = $STR_VOICE_MASK_CHILD;
    specEnergyWeight = 0.1;
    pitchScale = 0.7;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Robot
  {
    name = $STR_VOICE_MASK_ROBOT;
    specEnergyWeight = 0.5;
    pitchScale = -1;
    whisperValue = -1;
    roboticValue = 0.05;
  };
  class DarkMaster
  {
    name = $STR_VOICE_MASK_DARKMASTER;
    specEnergyWeight = 1;
    pitchScale = 0;
    whisperValue = -1;
    roboticValue = -1;
  };
  class Whisper
  {
    name = $STR_VOICE_MASK_WHISPER;
    specEnergyWeight = 0.5;
    pitchScale = -1;
    whisperValue = 0.01;
    roboticValue = -1;
  };
};

// Karel 3.12.2008
class CfgRumble
{
  coefEngineToLeft = 1.5*0.9;
  coefEngineToRight = 1.2*0.9;
  coefSurfaceToLeft = 0.25;
  coefSurfaceToRight = 0.45;
  coefWeaponToLeft = 4;
  coefWeaponToRight = 4;
};

#define DEFINE_ACTION(action, key, CURVES) \
  class action \
  { \
  keys[] = {key}; \
  CURVES \
  };

#define DEFINE_ACTION_EX(action, actionInverted, key, CURVES) \
  class action \
  { \
    actionNameYAxis = actionInverted; \
    keys[] = {key}; \
    CURVES \
  };

#define HeliXCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 1, 1.5}; \
  curveMedium[] = {"Gamma", 1, 1.5}; \
  curveHigh[] = {"Gamma", 1, 1.5};
#define HeliYCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 1, 1.5}; \
  curveMedium[] = {"Gamma", 1, 1.5}; \
  curveHigh[] = {"Gamma", 1, 1.5};

#define HELI_CONTROLS_R_AIM \
  DEFINE_ACTION_EX(HeliCyclicBack, HeliCyclicForward, KEY_XBOX_LeftThumbYUp, HeliYCurve) \
  DEFINE_ACTION_EX(HeliCyclicForward, HeliCyclicBack, KEY_XBOX_LeftThumbYDown, HeliYCurve) \
  DEFINE_ACTION(HeliCyclicLeft, KEY_XBOX_LeftThumbXLeft, HeliXCurve) \
  DEFINE_ACTION(HeliCyclicRight, KEY_XBOX_LeftThumbXRight, HeliXCurve) \
  DEFINE_ACTION(HeliRudderLeft, KEY_XBOX_LeftTrigger, HeliXCurve) \
  DEFINE_ACTION(HeliRudderRight, KEY_XBOX_RightTrigger, HeliXCurve) \
  DEFINE_ACTION(HeliCollectiveRaise, KEY_XBOX_RightBumper, HeliXCurve) \
  DEFINE_ACTION(HeliCollectiveLower, KEY_XBOX_LeftBumper, HeliXCurve) \
  HeliBack[] = {}; \
  HeliFastForward[] = {}; \
  HeliForward[] = {}; \
  DEFINE_ACTION(SeagullUp, KEY_XBOX_LeftThumbYUp, HeliYCurve) \
  DEFINE_ACTION(SeagullDown, KEY_XBOX_LeftThumbYDown, HeliYCurve) \
  DEFINE_ACTION_EX(SeagullBack, SeagullFastForward, KEY_XBOX_RightThumbYUp, HeliYCurve) \
  DEFINE_ACTION_EX(SeagullFastForward, SeagullBack, KEY_XBOX_RightThumbYDown, HeliYCurve) \
  DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_RightThumbYUp, AimHeadYCurve) \
  DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_RightThumbYDown, AimHeadYCurve) \
  DEFINE_ACTION(AimHeadLeft, KEY_XBOX_RightThumbXLeft, AimHeadXCurve) \
  DEFINE_ACTION(AimHeadRight, KEY_XBOX_RightThumbXRight, AimHeadXCurve) \
  DEFINE_ACTION_EX(AimDown, AimUp, KEY_XBOX_RightThumbYUp, AimHeadYCurve) \
  DEFINE_ACTION_EX(AimUp, AimDown, KEY_XBOX_RightThumbYDown, AimHeadYCurve) \
  DEFINE_ACTION(AimLeft, KEY_XBOX_RightThumbXLeft, AimHeadXCurve) \
  DEFINE_ACTION(AimRight, KEY_XBOX_RightThumbXRight, AimHeadXCurve) \
  SeagullForward[] = {};

#define CarXCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 2, 3.0}; \
  curveMedium[] = {"Gamma", 2, 3.0}; \
  curveHigh[] = {"Gamma", 2, 3.0};
#define CarYCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 1, 1.5}; \
  curveMedium[] = {"Gamma", 1, 1.5}; \
  curveHigh[] = {"Gamma", 1, 1.5};
#define CarAimXCurve \
  deadZone = 0; \
  curveLow[] = {"LinRampZoom", \
    {1.0, 0.4,0.1, 0.90,0.90 0.99,3.60, 1.0,9.00}, \
    {0.7, 0.4,0.1, 0.90,0.75, 0.99,3.00, 1.0,8.00}, \
    {0.3, 0.4,0.1, 0.90,0.60, 0.99,1.80, 1.0,5.00} }; \
  curveMedium[] = {"LinRampZoom", \
    {1.0, 0.4,0.1, 0.90,0.90 0.99,3.60, 1.0,9.00}, \
    {0.7, 0.4,0.1, 0.90,0.75, 0.99,3.00, 1.0,8.00}, \
    {0.3, 0.4,0.1, 0.90,0.60, 0.99,1.80, 1.0,5.00} }; \
  curveHigh[] = {"LinRampZoom", \
    {1.0, 0.4,0.1, 0.90,0.90 0.99,3.60, 1.0,9.00}, \
    {0.7, 0.4,0.1, 0.90,0.75, 0.99,3.00, 1.0,8.00}, \
    {0.3, 0.4,0.1, 0.90,0.60, 0.99,1.80, 1.0,5.00} };
#define CarAimYCurve \
  deadZone = 0; \
  curveLow[] = {"LinRampZoom", \
    {1.0, 0.8,0.1, 0.9,0.14, 1.0, 1.0}, \
    {0.7, 0.8,0.08, 0.9,0.12, 1.0, 0.80}, \
    {0.3, 0.8,0.06, 0.9,0.09, 1.0, 0.60} }; \
  curveMedium[] = {"LinRampZoom", \
    {1.0, 0.8,0.1, 0.9,0.14, 1.0, 1.0}, \
    {0.7, 0.8,0.08, 0.9,0.12, 1.0, 0.80}, \
    {0.3, 0.8,0.06, 0.9,0.09, 1.0, 0.60} }; \
  curveHigh[] = {"LinRampZoom", \
    {1.0, 0.8,0.1, 0.9,0.14, 1.0, 1.0}, \
    {0.7, 0.8,0.08, 0.9,0.12, 1.0, 0.80}, \
    {0.3, 0.8,0.06, 0.9,0.09, 1.0, 0.60} };

#define CAR_CONTROLS \
  DEFINE_ACTION(CarLeft, KEY_XBOX_RightThumbXLeft, CarXCurve) \
  DEFINE_ACTION(CarRight, KEY_XBOX_RightThumbXRight, CarXCurve) \
  CarForward[] = {}; \
  DEFINE_ACTION(CarBack, KEY_XBOX_LeftThumbYDown, CarYCurve) \
  DEFINE_ACTION(CarFastForward, KEY_XBOX_LeftThumbYUp, CarYCurve) \
  CarSlowForward[] = {}; \
  DEFINE_ACTION_EX(CarAimUp, CarAimDown, KEY_XBOX_RightThumbYUp, CarAimYCurve) \
  DEFINE_ACTION_EX(CarAimDown, CarAimUp, KEY_XBOX_RightThumbYDown, CarAimYCurve) \
  DEFINE_ACTION(CarAimLeft, KEY_XBOX_RightThumbXLeft, CarAimXCurve) \
  DEFINE_ACTION(CarAimRight, KEY_XBOX_RightThumbXRight, CarAimXCurve) \
  DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_RightThumbYUp, AimHeadYCurve) \
  DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_RightThumbYDown, AimHeadYCurve) \
  DEFINE_ACTION(AimHeadLeft, KEY_XBOX_RightThumbXLeft, AimHeadXCurve) \
  DEFINE_ACTION(AimHeadRight, KEY_XBOX_RightThumbXRight, AimHeadXCurve)

#define DefButtonDeadZone {64,48}
#define FireDeadZone {80,64}
#define RevealDeadZone {192,128}

class ButtonDeadZonesDefault
{
  deadZone_A[]=DefButtonDeadZone;
  deadZone_B[]=DefButtonDeadZone;
  deadZone_X[]=DefButtonDeadZone;
  deadZone_Y[]=DefButtonDeadZone;

  deadZone_Up[]=DefButtonDeadZone;
  deadZone_Down[]=DefButtonDeadZone;
  deadZone_Left[]=DefButtonDeadZone;
  deadZone_Right[]=DefButtonDeadZone;

  deadZone_Start[]=DefButtonDeadZone;
  deadZone_Back[]=DefButtonDeadZone;

  deadZone_LeftBumper[]=DefButtonDeadZone;
  deadZone_RightBumper[]=DefButtonDeadZone;

  deadZone_LeftThumb[]=DefButtonDeadZone;
  deadZone_RightThumb[]=DefButtonDeadZone;
};

#define RightStickDeadZoneX 0.21
#define RightStickDeadZoneY 0.23
#define LeftStickDeadZoneX 0.21
#define LeftStickDeadZoneY 0.23
#define WheelDeadZone 0.17

class ControllerTypes
{
  class Gamepad
  {
    resource = RscDisplayProfileController;
    hint = $STR_XBOX_GAMEPAD;
    imageRightA = false;
    imageRightB = false;
    imageRightY = false;
    imageRightX = false;
    imageRightWhite = false;
    imageRightBlack = false;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = true;
    imageRightStart = true;
  };

  class Joystick
  {
    resource = RscDisplayProfileControllerJoystick;
    hint = $STR_XBOX_JOYSTICK;
    imageRightA = false;
    imageRightB = false;
    imageRightY = true;
    imageRightX = true;
    imageRightWhite = true;
    imageRightBlack = true;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = false;
    imageRightStart = false;
  };

  class Wheel
  {
    resource = RscDisplayProfileControllerWheel;
    hint = $STR_XBOX_WHEEL;
    imageRightA = false;
    imageRightB = false;
    imageRightY = false;
    imageRightX = false;
    imageRightWhite = false;
    imageRightBlack = false;
    imageRightLeft = true;
    imageRightRight = true;
    imageRightUp = true;
    imageRightDown = true;
    imageRightBack = true;
    imageRightStart = true;
  };
};

//--- Character
// Karel 27.11.2008 (Thanksgiving Day)
#define AimXCurve \
  deadZone = 0; \
  curveLow[] = {"LinRampZoom", \
    {1.0,  0.4,0.1, 0.80,1.44, 0.99,2.88, 1.0,3.90}, \
    {0.7,  0.4,0.1, 0.80,1.20, 0.99,2.40, 1.0,3.25}, \
    {0.3,  0.4,0.1, 0.80,0.96, 0.99,1.44, 1.0,1.56} }; \
  curveMedium[] = {"LinRampZoom", \
    {1.0,  0.4,0.1, 0.80,1.44, 0.99,2.88, 1.0,3.90}, \
    {0.7,  0.4,0.1, 0.80,1.20, 0.99,2.40, 1.0,3.25}, \
    {0.3,  0.4,0.1, 0.80,0.96, 0.99,1.44, 1.0,1.56} }; \
  curveHigh[] = {"LinRampZoom", \
    {1.0,  0.4,0.1, 0.80,1.44, 0.99,2.88, 1.0,3.90}, \
    {0.7,  0.4,0.1, 0.80,1.20, 0.99,2.40, 1.0,3.25}, \
    {0.3,  0.4,0.1, 0.80,0.96, 0.99,1.44, 1.0,1.56} }; \
/*
    {1.0,  0.4,0.1, 0.90,0.90*1.6, 0.99,1.80*1.6, 1.0,3.00*1.3}, \
    {0.7,  0.4,0.1, 0.90,0.75*1.6, 0.99,1.50*1.6, 1.0,2.50*1.3}, \
    {0.3,  0.4,0.1, 0.90,0.60*1.6, 0.99,0.90*1.6, 1.0,1.20*1.3} };
*/
#define AimYCurve \
  deadZone = 0; \
  curveLow[] = {"LinRampZoom", \
    {1.0,  0.2,0.05, 0.99,0.80, 1.0,1.80}, \
    {0.7,  0.2,0.03, 0.99,0.60, 1.0,1.60}, \
    {0.3,  0.2,0.02, 0.99,0.40, 1.0,1.00} }; \
  curveMedium[] = {"LinRampZoom", \
    {1.0,  0.2,0.05, 0.99,0.80, 1.0,1.80}, \
    {0.7,  0.2,0.03, 0.99,0.60, 1.0,1.60}, \
    {0.3,  0.2,0.02, 0.99,0.40, 1.0,1.00} }; \
  curveHigh[] = {"LinRampZoom", \
    {1.0,  0.2,0.05, 0.99,0.80, 1.0,1.80}, \
    {0.7,  0.2,0.03, 0.99,0.60, 1.0,1.60}, \
    {0.3,  0.2,0.02, 0.99,0.40, 1.0,1.00} };
#define AimHeadXCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 8, 3}; \
  curveMedium[] = {"Gamma", 8, 3}; \
  curveHigh[] = {"Gamma", 8, 3};
#define AimHeadYCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 6, 3}; \
  curveMedium[] = {"Gamma", 6, 3}; \
  curveHigh[] = {"Gamma", 6, 3};
#define MoveXCurve \
  deadZone = 0.1; \
  curveLow[] = {"Gamma", 1, 2}; \
  curveMedium[] = {"Gamma", 1, 2}; \
  curveHigh[] = {"Gamma", 1, 2};
#define MoveYCurve \
  deadZone = 0.1; \
  curveLow[] = {"Gamma", 1, 4}; \
  curveMedium[] = {"Gamma", 1, 4}; \
  curveHigh[] = {"Gamma", 1, 4};

#define WheelCurve \
  deadZone = 0; \
  curveLow[] = {"Gamma", 1.5, 4}; \
  curveMedium[] = {"Gamma", 1.5, 4}; \
  curveHigh[] = {"Gamma", 1.5, 4};

// Karel 1.12.2008
#define ZoomCurve \
  deadZone = 0.0; \
  curveLow[] = {"LinRampZoom", \
    {0.7,  0.01,0.1, 0.4,0.11, 1.0,1.00} }; \
  curveMedium[] = {"LinRampZoom", \
    {0.7,  0.01,0.1, 0.4,0.11, 1.0,1.00} }; \
  curveHigh[] = {"LinRampZoom", \
    {0.7,  0.01,0.1, 0.4,0.11, 1.0,1.00} };

class ControllerSchemes
{
  // default Controller Scheme on PC
  defaultScheme = Default;
  // default Controller Schemes on Xbox 360, based on the Xbox Guide Settings
  defaultSchemeMovementLeftBrakeTriggerAccTrigger = Default;
  defaultSchemeMovementLeftBrakeTriggerAccButton = Default;
  defaultSchemeMovementLeftBrakeButtonAccTrigger = Default;
  defaultSchemeMovementLeftBrakeButtonAccButton = Default;
  defaultSchemeMovementRightBrakeTriggerAccTrigger = Default;
  defaultSchemeMovementRightBrakeTriggerAccButton = Default;
  defaultSchemeMovementRightBrakeButtonAccTrigger = Default;
  defaultSchemeMovementRightBrakeButtonAccButton = Default;

  class Default
  {
    name = $STR_XBOX_CONTROLER_SCHEME_DEFAULT;

    class Gamepad
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_RightTrigger};
        ReloadMagazine[] = {KEY_XBOX_X};

        DEFINE_ACTION(LookAround, KEY_XBOX_LeftTrigger)
        //LookAround[] = {KEY_XBOX_LeftTrigger,ZoomCurve};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {KEY_XBOX_LeftThumb};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        ForceCommandingMode[] = {KEY_XBOX_LeftBumper};
        Compass[] = {};
        Diary[] = {};
        ShowMap[] = {KEY_XBOX_RightBumper};
        HideMap[] = {};
        ZoomContIn[] = {KEY_XBOX_LeftTrigger};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {KEY_XBOX_RightThumb};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_LeftThumbYUp, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_LeftThumbYDown, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Joystick
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_A};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightThumb};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_RightThumb};

        VehLockTargets[] = {KEY_XBOX_RightBumper};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_LeftThumb};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        Diary[] = {KEY_XBOX_RightBumper};
        ShowMap[] = {};
        HideMap[] = {};
        ZoomContIn[] = {KEY_XBOX_RightThumb};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_RightThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_RightThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_RightTrigger, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_LeftTrigger, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Wheel
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_LeftBumper};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightBumper};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        Diary[] = {KEY_XBOX_RightBumper};
        ShowMap[] = {};
        HideMap[] = {};
        ZoomContIn[] = {KEY_XBOX_RightBumper};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {};
        IngamePause[] = {KEY_XBOX_Start};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_LeftThumbYUp, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_LeftThumbYDown, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Vehicles
    {
      class Characters
      {
        name = $STR_XBOX_CONTROLER_CHARACTERS;
        axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_UP;

          textRThumb = $STR_XBOX_CONTROLER_AIM;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_UD_AIM;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_LR_AIM;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_OPTICS;

          class Actions
          {
            DEFINE_ACTION(MoveBack, KEY_XBOX_LeftThumbYDown, MoveYCurve)
            DEFINE_ACTION(MoveFastForward, KEY_XBOX_LeftThumbYUp, MoveYCurve)
            DEFINE_ACTION(TurnLeft, KEY_XBOX_LeftThumbXLeft, MoveXCurve)
            DEFINE_ACTION(TurnRight, KEY_XBOX_LeftThumbXRight, MoveXCurve)
            MoveUp[] = {KEY_XBOX_LeftThumb};
            MoveDown[] = {KEY_XBOX_B};
            DEFINE_ACTION_EX(AimUp, AimDown, KEY_XBOX_RightThumbYUp, AimYCurve)
            DEFINE_ACTION_EX(AimDown, AimUp, KEY_XBOX_RightThumbYDown, AimYCurve)
            DEFINE_ACTION(AimLeft, KEY_XBOX_RightThumbXLeft, AimXCurve)
            DEFINE_ACTION(AimRight, KEY_XBOX_RightThumbXRight, AimXCurve)
            DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_RightThumbYUp, AimHeadYCurve)
            DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_RightThumbYDown, AimHeadYCurve)
            DEFINE_ACTION(AimHeadLeft, KEY_XBOX_RightThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(AimHeadRight, KEY_XBOX_RightThumbXRight, AimHeadXCurve)
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textLThumbPS = $STR_XBOX_CONTROLER_RS_KNEEL;

          textRThumb = $STR_XBOX_CONTROLER_AIM;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_UD_AIM;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_LR_AIM;
          textRThumbPS = $STR_XBOX_CONTROLER_LS_ZOOM;

          class Actions
          {
            DEFINE_ACTION(MoveBack, KEY_XBOX_LeftTrigger, MoveYCurve)
            DEFINE_ACTION(MoveFastForward, KEY_XBOX_RightTrigger, MoveYCurve)
            DEFINE_ACTION(TurnLeft, KEY_XBOX_RightThumbXLeft, MoveXCurve)
            DEFINE_ACTION(TurnRight, KEY_XBOX_RightThumbXRight, MoveXCurve)
            MoveUp[] = {};
            MoveDown[] = {KEY_XBOX_B};
            DEFINE_ACTION_EX(AimUp, AimDown, KEY_XBOX_LeftThumbYUp, AimYCurve)
            DEFINE_ACTION_EX(AimDown, AimUp, KEY_XBOX_LeftThumbYDown, AimYCurve)
            DEFINE_ACTION(AimLeft, KEY_XBOX_LeftThumbXLeft, AimXCurve)
            DEFINE_ACTION(AimRight, KEY_XBOX_LeftThumbXRight, AimXCurve)
            DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_LeftThumbYUp, AimHeadYCurve)
            DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_LeftThumbYDown, AimHeadYCurve)
            DEFINE_ACTION(AimHeadLeft, KEY_XBOX_LeftThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(AimHeadRight, KEY_XBOX_LeftThumbXRight, AimHeadXCurve)
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            DEFINE_ACTION(MoveBack, KEY_XBOX_LeftTrigger, MoveYCurve)
            DEFINE_ACTION(MoveFastForward, KEY_XBOX_RightTrigger, MoveYCurve)
            DEFINE_ACTION(TurnLeft, KEY_XBOX_LeftThumbXLeft, WheelCurve)
            DEFINE_ACTION(TurnRight, KEY_XBOX_LeftThumbXRight, WheelCurve)
            MoveUp[] = {};
            MoveDown[] = {};
            AimUp[] = {};
            AimDown[] = {};
            AimLeft[] = {};
            AimRight[] = {};
            AimHeadUp[] = {};
            AimHeadDown[] = {};
            DEFINE_ACTION(AimHeadLeft, KEY_XBOX_LeftThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(AimHeadRight, KEY_XBOX_LeftThumbXRight, AimHeadXCurve)
          };
        };
      };

      class Ground
      {
        name = $STR_XBOX_CONTROLER_VEHICLE_GROUND;
        axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = "";
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TURN;
          textRThumbPS = "";

          class Actions
          {
            CAR_CONTROLS
              SwapGunner[] = {KEY_XBOX_B};
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbLR = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = "";
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TURN;
          textRThumbPS = "";

          class Actions
          {
            DEFINE_ACTION(CarLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
            DEFINE_ACTION(CarRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
            CarForward[] = {};
            DEFINE_ACTION(CarBack, KEY_XBOX_LeftTrigger, CarYCurve)
            DEFINE_ACTION(CarFastForward, KEY_XBOX_RightTrigger, CarYCurve)
            CarSlowForward[] = {};
            DEFINE_ACTION_EX(CarAimUp, CarAimDown, KEY_XBOX_LeftThumbYUp, CarAimYCurve)
            DEFINE_ACTION_EX(CarAimDown, CarAimUp, KEY_XBOX_LeftThumbYDown, CarAimYCurve)
            DEFINE_ACTION(CarAimLeft, KEY_XBOX_LeftThumbXLeft, CarAimXCurve)
            DEFINE_ACTION(CarAimRight, KEY_XBOX_LeftThumbXRight, CarAimXCurve)
            SwapGunner[] = {KEY_XBOX_B};
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_STRAFE;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_MOVE;
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            DEFINE_ACTION(CarLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
            DEFINE_ACTION(CarRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
            CarForward[] = {};
            DEFINE_ACTION(CarBack, KEY_XBOX_LeftTrigger, CarYCurve)
            DEFINE_ACTION(CarFastForward, KEY_XBOX_RightTrigger, CarYCurve)
            CarSlowForward[] = {};
            CarAimUp[] = {};
            CarAimDown[] = {};
            DEFINE_ACTION(CarAimLeft, KEY_XBOX_LeftThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(CarAimRight, KEY_XBOX_LeftThumbXRight, AimHeadXCurve)
            SwapGunner[] = {KEY_XBOX_A};
          };
        };
      };

      class Aircraft
      {
        name = $STR_XBOX_CONTROLER_AIR;
        axisY = true;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_FLY;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_RUDDER;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_LOCK;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_TILT_MOVE;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TILT;
          textRThumbPS = "";

          class Actions
          {
            HELI_CONTROLS_R_AIM
            HeliManualFire[] = {KEY_XBOX_B};
		Diary[] = {};
		ZoomContIn[] = {};
		LookAround[] = {};
		ForceCommandingMode[] = {};
		ShowMap[] = {};
		keyLookCenter[] = {KEY_XBOX_RightThumb};
		AutoHover[] = {KEY_XBOX_X};
		AutoHoverCancel[] = {KEY_XBOX_X};
		LookAroundToggle[] = {KEY_XBOX_B};
          };
        };

        class Joystick
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_FLY;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_RUDDER;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_LOCK;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_TILT_MOVE;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_TILT;
          textRThumbPS = "";

          class Actions
          {
            DEFINE_ACTION(HeliUp, KEY_XBOX_RightTrigger, HeliYCurve)
            DEFINE_ACTION(HeliDown, KEY_XBOX_LeftTrigger, HeliYCurve)
            DEFINE_ACTION(HeliCyclicLeft, KEY_XBOX_RightThumbXLeft, HeliXCurve)
            DEFINE_ACTION(HeliCyclicRight, KEY_XBOX_RightThumbXRight, HeliXCurve)
            DEFINE_ACTION(HeliRudderLeft, KEY_XBOX_LeftThumbXLeft, HeliXCurve)
            DEFINE_ACTION(HeliRudderRight, KEY_XBOX_LeftThumbXRight, HeliXCurve)
            DEFINE_ACTION_EX(HeliBack, HeliFastForward, KEY_XBOX_LeftThumbYUp, HeliYCurve)
            DEFINE_ACTION_EX(HeliFastForward, HeliBack, KEY_XBOX_LeftThumbYDown, HeliYCurve)
            HeliForward[] = {};
            HeliManualFire[] = {KEY_XBOX_B};

            DEFINE_ACTION(SeagullUp, KEY_XBOX_RightTrigger, HeliYCurve)
            DEFINE_ACTION(SeagullDown, KEY_XBOX_LeftTrigger, HeliYCurve)
            DEFINE_ACTION_EX(SeagullBack, SeagullFastForward, KEY_XBOX_LeftThumbYUp, HeliYCurve)
            DEFINE_ACTION_EX(SeagullFastForward, SeagullBack, KEY_XBOX_LeftThumbYDown, HeliYCurve)
            SeagullForward[] = {};
          };
        };

        class Wheel
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TURN;
          textLThumbUD = "";
          textLThumbPS = "";

          textRThumb = "";
          textRThumbLR = "";
          textRThumbUD = "";
          textRThumbPS = "";

          class Actions
          {
            HeliUp[] = {};
            HeliDown[] = {};
            HeliCyclicLeft[] = {};
            HeliCyclicRight[] = {};

            DEFINE_ACTION(HeliRudderLeft, KEY_XBOX_LeftThumbXLeft, HeliXCurve)
            DEFINE_ACTION(HeliRudderRight, KEY_XBOX_LeftThumbXRight, HeliXCurve)
            DEFINE_ACTION_EX(HeliBack, HeliFastForward, KEY_XBOX_LeftTrigger, CarYCurve)
            DEFINE_ACTION_EX(HeliFastForward, HeliBack, KEY_XBOX_RightTrigger, CarYCurve)
            HeliForward[] = {};
            HeliManualFire[] = {KEY_XBOX_A};

            SeagullUp[] = {};
            SeagullDown[] = {};
            DEFINE_ACTION_EX(SeagullBack, SeagullFastForward, KEY_XBOX_LeftTrigger, CarYCurve)
            DEFINE_ACTION_EX(SeagullFastForward, SeagullBack, KEY_XBOX_RightTrigger, CarYCurve)
            SeagullForward[] = {};
          };
        };
      };
    };
  };

  class LeftHanded: Default
  {
    name = "Left Handed"; 

    class Gamepad
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_LeftTrigger};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightTrigger};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_RightTrigger};

        VehLockTargets[] = {KEY_XBOX_RightThumb};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        ForceCommandingMode[] = {KEY_XBOX_RightBumper};
        Compass[] = {};
        Diary[] = {KEY_XBOX_RightBumper};
        ShowMap[] = {};
        HideMap[] = {};
        ZoomContIn[] = {KEY_XBOX_RightTrigger};
        PersonView[] = {KEY_XBOX_Back};
        IngamePause[] = {KEY_XBOX_Start};
        Optics[] = {KEY_XBOX_LeftThumb};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_RightThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_RightThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_RightThumbYUp, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_RightThumbYDown, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Joystick
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_Y};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_LeftTrigger};
        LockTarget[] = {};
        RevealTarget[] = {};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        Diary[] = {KEY_XBOX_RightBumper};
        ShowMap[] = {};
        HideMap[] = {};
        ZoomContIn[] = {};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {KEY_XBOX_LeftBumper};
        IngamePause[] = {KEY_XBOX_Start};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_LeftThumbYUp, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_LeftThumbYDown, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Wheel
    {
      class ButtonDeadZones: ButtonDeadZonesDefault
      {
        deadZone_LeftTrigger[]=RevealDeadZone;
        deadZone_RightTrigger[]=FireDeadZone;
      };

      class ThumbStickDeadZones
      {
        leftX = LeftStickDeadZoneX;
        leftY = LeftStickDeadZoneY;
        rightX = LeftStickDeadZoneX;
        rightY = RightStickDeadZoneY;
      };

      class Actions
      {
        ToggleWeapons[] = {KEY_XBOX_Y};
        DefaultAction[] = {KEY_XBOX_LeftBumper};
        ReloadMagazine[] = {KEY_XBOX_X};

        LookAround[] = {KEY_XBOX_RightBumper};
        LockTarget[] = {};
        RevealTarget[] = {KEY_XBOX_LeftTrigger};

        VehLockTargets[] = {};

        PrevAction[] = {KEY_XBOX_Up};
        NextAction[] = {KEY_XBOX_Down};
        Action[] = {KEY_XBOX_A};
        MenuSelect[] = {KEY_XBOX_Right};
        navigateMenu[] = { KEY_XBOX_Left };
        CancelAction[] = {KEY_XBOX_X};

        Compass[] = {};
        Diary[] = {KEY_XBOX_RightBumper};
        ShowMap[] = {};
        HideMap[] = {};
        ZoomContIn[] = {KEY_XBOX_RightBumper};
        PersonView[] = {KEY_XBOX_Back};
        Optics[] = {};
        IngamePause[] = {KEY_XBOX_Start};

        DEFINE_ACTION(CommandLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
        DEFINE_ACTION(CommandRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
        DEFINE_ACTION(CommandForward, KEY_XBOX_LeftThumbYUp, CarYCurve)
        DEFINE_ACTION(CommandBack, KEY_XBOX_LeftThumbYDown, CarYCurve)
        CommandFast[] = {};
        CommandSlow[] = {};
      };
    };

    class Vehicles: Vehicles
    {
      class Characters: Characters
      {
        name = "characTers";    
        axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_AIM;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_LR_AIM;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_UD_AIM;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_OPTICS;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_UP;

          class Actions
          {
            DEFINE_ACTION(MoveBack, KEY_XBOX_RightThumbYDown, MoveYCurve)
            DEFINE_ACTION(MoveFastForward, KEY_XBOX_RightThumbYUp, MoveYCurve)
            DEFINE_ACTION(TurnLeft, KEY_XBOX_RightThumbXLeft, MoveXCurve)
            DEFINE_ACTION(TurnRight, KEY_XBOX_RightThumbXRight, MoveXCurve)

            MoveUp[] = {KEY_XBOX_RightThumb};
            MoveDown[] = {KEY_XBOX_B};

            DEFINE_ACTION_EX(AimUp, AimDown, KEY_XBOX_LeftThumbYUp, AimYCurve)
            DEFINE_ACTION_EX(AimDown, AimUp, KEY_XBOX_LeftThumbYDown, AimYCurve)
            DEFINE_ACTION(AimLeft, KEY_XBOX_LeftThumbXLeft, AimXCurve)
            DEFINE_ACTION(AimRight, KEY_XBOX_LeftThumbXRight, AimXCurve)

            DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_LeftThumbYUp, AimHeadYCurve)
            DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_LeftThumbYDown, AimHeadYCurve)
            DEFINE_ACTION(AimHeadLeft, KEY_XBOX_LeftThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(AimHeadRight, KEY_XBOX_LeftThumbXRight, AimHeadXCurve)
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Ground: Ground
      {
        name = "groUnd"; 
        axisY = false;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TURN;
          textLThumbUD = "";
          textLThumbPS = "";

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = "";
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = "";

          class Actions
          {
            DEFINE_ACTION(CarLeft, KEY_XBOX_LeftThumbXLeft, CarXCurve)
            DEFINE_ACTION(CarRight, KEY_XBOX_LeftThumbXRight, CarXCurve)
            CarForward[] = {};
            DEFINE_ACTION(CarBack, KEY_XBOX_RightThumbYDown, CarYCurve)
            DEFINE_ACTION(CarFastForward, KEY_XBOX_RightThumbYUp, CarYCurve)
            CarSlowForward[] = {};
            DEFINE_ACTION_EX(CarAimUp, CarAimDown, KEY_XBOX_LeftThumbYUp, CarAimYCurve)
            DEFINE_ACTION_EX(CarAimDown, CarAimUp, KEY_XBOX_LeftThumbYDown, CarAimYCurve)
            DEFINE_ACTION(CarAimLeft, KEY_XBOX_LeftThumbXLeft, CarAimXCurve)
            DEFINE_ACTION(CarAimRight, KEY_XBOX_LeftThumbXRight, CarAimXCurve)
            SwapGunner[] = {KEY_XBOX_B};
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Aircraft: Aircraft
      {
        name = "aIr"; 
        axisY = true;

        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_TILT;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_TILT_MOVE;
          textLThumbPS = ;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_FLY;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_RUDDER;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_LOCK;

          class Actions
          {
            DEFINE_ACTION(HeliUp, KEY_XBOX_RightThumbYUp, HeliYCurve)
            DEFINE_ACTION(HeliDown, KEY_XBOX_RightThumbYDown, HeliYCurve)
            DEFINE_ACTION(HeliCyclicLeft, KEY_XBOX_LeftThumbXLeft, HeliXCurve)
            DEFINE_ACTION(HeliCyclicRight, KEY_XBOX_RightThumbXRight, HeliXCurve)
            DEFINE_ACTION(HeliRudderLeft, KEY_XBOX_LeftThumbXLeft, HeliXCurve)
            DEFINE_ACTION(HeliRudderRight, KEY_XBOX_RightThumbXRight, HeliXCurve)
            DEFINE_ACTION_EX(HeliBack, HeliFastForward, KEY_XBOX_LeftThumbYUp, HeliYCurve)
            DEFINE_ACTION_EX(HeliFastForward, HeliBack, KEY_XBOX_LeftThumbYDown, HeliYCurve)
            HeliForward[] = {};
            HeliManualFire[] = {KEY_XBOX_B};

            DEFINE_ACTION(SeagullUp, KEY_XBOX_RightThumbYUp, HeliYCurve)
            DEFINE_ACTION(SeagullDown, KEY_XBOX_RightThumbYDown, HeliYCurve)
            DEFINE_ACTION_EX(SeagullBack, SeagullFastForward, KEY_XBOX_LeftThumbYUp, HeliYCurve)
            DEFINE_ACTION_EX(SeagullFastForward, SeagullBack, KEY_XBOX_LeftThumbYDown, HeliYCurve)
            SeagullForward[] = {};
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };
    };
  };

  class SpecialSoldier: Default
  {
    name = "Special Soldier";

    class Gamepad: Gamepad {};

    class Joystick: Joystick {};

    class Wheel: Wheel {};

    class Vehicles: Vehicles
    {
      class Characters: Characters
      {
        class Gamepad
        {
          textDPad = $STR_XBOX_CONTROLER_DP_MENU;

          textLThumb = $STR_XBOX_CONTROLER_AIM;
          textLThumbLR = $STR_XBOX_CONTROLER_LS_LR_AIM;
          textLThumbUD = $STR_XBOX_CONTROLER_LS_UD_AIM;
          textLThumbPS = $STR_XBOX_CONTROLER_LS_UP;

          textRThumb = $STR_XBOX_CONTROLER_MOVEMENT;
          textRThumbLR = $STR_XBOX_CONTROLER_RS_STRAFE;
          textRThumbUD = $STR_XBOX_CONTROLER_RS_MOVE;
          textRThumbPS = $STR_XBOX_CONTROLER_RS_OPTICS;

          class Actions
          {
            DEFINE_ACTION(MoveBack, KEY_XBOX_RightThumbYDown, MoveYCurve)
            DEFINE_ACTION(MoveFastForward, KEY_XBOX_RightThumbYUp, MoveYCurve)
            DEFINE_ACTION(TurnLeft, KEY_XBOX_RightThumbXLeft, MoveXCurve)
            DEFINE_ACTION(TurnRight, KEY_XBOX_RightThumbXRight, MoveXCurve)

            MoveUp[] = {KEY_XBOX_LeftThumb};
            MoveDown[] = {KEY_XBOX_B};

            DEFINE_ACTION_EX(AimUp, AimDown, KEY_XBOX_LeftThumbYUp, AimYCurve)
            DEFINE_ACTION_EX(AimDown, AimUp, KEY_XBOX_LeftThumbYDown, AimYCurve)
            DEFINE_ACTION(AimLeft, KEY_XBOX_LeftThumbXLeft, AimXCurve)
            DEFINE_ACTION(AimRight, KEY_XBOX_LeftThumbXRight, AimXCurve)

            DEFINE_ACTION_EX(AimHeadUp, AimHeadDown, KEY_XBOX_LeftThumbYUp, AimHeadYCurve)
            DEFINE_ACTION_EX(AimHeadDown, AimHeadUp, KEY_XBOX_LeftThumbYDown, AimHeadYCurve)
            DEFINE_ACTION(AimHeadLeft, KEY_XBOX_LeftThumbXLeft, AimHeadXCurve)
            DEFINE_ACTION(AimHeadRight, KEY_XBOX_LeftThumbXRight, AimHeadXCurve)
          };
        };

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Ground: Ground
      {
        class Gamepad: Gamepad {};

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };

      class Aircraft: Aircraft
      {
        class Gamepad: Gamepad {};

        class Joystick: Joystick {};

        class Wheel: Wheel {};
      };
    };
  };
};
