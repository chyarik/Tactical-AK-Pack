//define experiences
class CfgExperience
{
  access = ReadAndCreate;

  destroyUnit[]={unit1, unit2, unit3};
  // four price levels
  //    max price, basic experience
  unit1[] = {2000, 0};        // unimportant
  unit2[] = {650000, 200};    // soldiers and soft
  unit3[] = {10000000, 500};  // armoured, air

  destroyEnemy    = 1;
  destroyFriendly = -5;
  destroyCivilian = -5; 
  // buldings are free to destroy - nobody cares
  destroyStatic   = 0;
  //for leadership only
  destroyYourUnit = -0.2;

  renegadeLimit = -2000;

  playerKilled = 0;

  //for subordinate soldier only
  commandCompleted  = 0;
  commandFailed     = 0;
  followMe          = 0;

  //for leadership only
  missionCompleted  = 0;
  missionFailed     = 0;

  //A: divided by 10
  ranks[] =
  {
    0, //Private
    0, //Corporal
    0, //Sergeant
    0, //Lieutenant
    0, //Captain
    0, //Major
    0  //Colonel
  };
};

class CfgAISkill
{
  // source skill value, target skill value, ...
  /// precision related skills
  aimingAccuracy[]=
  {
    0,0, 1,1
  };
  aimingShake[]=
  {
    0,0, 1,1
  };

  /// skill related skills
  aimingSpeed[]=
  {
    0,0.5, 1,1
  };
  endurance[]=
  {
    0,0, 1,1
  };
  spotDistance[]=
  {
    0,0, 1,1
  };
  spotTime[]=
  {
    0,0, 1,1
  };
  courage[]=
  {
    0,0, 1,1
  };
  reloadSpeed[]=
  {
    0,0, 1,1
  };
  commanding[]=
  {
    0,0, 1,1
  };
  general[]=
  {
    0,0, 1,1
  };
};

class CfgAILevelPresets
{
  class AILevelLow
  {
    displayName = $STR_AILEVEL_NOVICE;
    skillAI = 0.5;
    precisionAI = 0.2;   
  };

  class AILevelMedium
  {
    displayName = $STR_AILEVEL_NORMAL;
    skillAI = 0.7;
    precisionAI = 0.5;
  };

  class AILevelHigh
  {
    displayName = $STR_AILEVEL_EXPERT;
    skillAI = 0.8;
    precisionAI = 0.7;
  };

  class Custom
  {
    displayName = $STR_AILEVEL_CUSTOM;
    skillAI = 0.5;
    precisionAI = 0.5;
  };
};

class CfgDifficultyPresets
{
  defaultPreset = Regular;

  // Parameters that affect difficulty and which are shared among presets
  myArmorCoef = 1.5;
  groupArmorCoef = 1.5;

  fadeDistanceStart = 40.0;
  fadeDistanceSpan = 10.0;

  recoilCoef = 1;
  visionAidCoef = 0.8;
  divingLimitMultiplier = 1.0;

  animSpeedCoef = 0;
  cancelThreshold = 0;
  showCadetHints = true;
  showCadetWP = true;

  class Recruit
  {
    displayName = $STR_Difficulty0;
    description = $STR_Difficulty0_desc;

    levelAI = AILevelLow;

    class Options
    {
      // Simulation
      reducedDamage = true;     // Reduced damage

      // Situational awareness
      groupIndicators = 2;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
      friendlyTags = 2;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
      enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
      detectedMines = 2;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
      commands = 2;             // Commands           (0 = never, 1 = fade out, 2 = always)
      waypoints = 2;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
      tacticalPing = true;      // Tactical ping
      
      // Personal awareness
      weaponInfo = 2;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
      stanceIndicator = 2;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
      staminaBar = true;        // Stamina bar
      weaponCrosshair = true;   // Weapon crosshair
      visionAid = true;         // Vision aid
      squadRadar = true;        // Squad radar
      
      // View
      thirdPersonView = true;   // 3rd person view
      cameraShake = true;       // Camera shake

      // Multiplayer
      scoreTable = true;        // Score table
      deathMessages = true;     // Killed by
      vonID = true;             // VON ID

      // Misc
      mapContentFriendly  = true;     // Extended map content
      mapContentEnemy     = true;     // Extended map content
      mapContentMines     = true;     // Extended map content
      autoReport          = true;     // Automatic reporting
      multipleSaves       = true;     // Multiple saves
    };
  };

  class Regular
  {
    displayName = $STR_Difficulty1;
    description = $STR_Difficulty1_desc;

    levelAI = AILevelMedium;

    class Options
    {
      // Simulation
      reducedDamage = false;    // Reduced damage

      groupIndicators = 2;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
      friendlyTags = 2;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
      enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
      detectedMines = 2;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
      commands = 2;             // Commands           (0 = never, 1 = fade out, 2 = always)
      waypoints = 2;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
      tacticalPing = true;      // Tactical ping

      // Personal awareness
      weaponInfo = 2;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
      stanceIndicator = 2;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
      staminaBar = true;        // Stamina bar
      weaponCrosshair = true;   // Weapon crosshair
      visionAid = false;        // Vision aid
      squadRadar = true;        // Squad radar

      // View
      thirdPersonView = true;   // 3rd person view
      cameraShake = true;       // Camera shake

      // Multiplayer
      scoreTable = true;        // Score table
      deathMessages = true;     // Killed by
      vonID = true;             // VON ID

      // Misc
      mapContent = true;        // Extended map content
      autoReport = true;        // Automatic reporting
      multipleSaves = true;     // Multiple saves
    };
  };

  class Veteran
  {
    displayName = $STR_Difficulty2;
    description = $STR_Difficulty2_desc;

    levelAI = AILevelHigh;    

    class Options
    {
      // Simulation
      reducedDamage = false;    // Reduced damage

      // Situational awareness
      groupIndicators = 0;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
      friendlyTags = 0;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
      enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
      detectedMines = 0;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
      commands = 1;             // Commands           (0 = never, 1 = fade out, 2 = always)
      waypoints = 1;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
      tacticalPing = false;     // Tactical ping

      // Personal awareness
      weaponInfo = 1;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
      stanceIndicator = 1;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
      staminaBar = false;       // Stamina bar
      weaponCrosshair = false;  // Weapon crosshair
      visionAid = false;        // Vision aid
      squadRadar = false;       // Squad radar

      // View
      thirdPersonView = false;  // 3rd person view
      cameraShake = true;       // Camera shake

      // Multiplayer
      scoreTable = true;        // Score table
      deathMessages = true;     // Killed by
      vonID = true;             // VON ID

      // Misc
      mapContent = false;       // Extended map content
      autoReport = false;       // Automatic reporting
      multipleSaves = false;    // Multiple saves
    };
  };

  class Custom
  {
    displayName = $STR_Difficulty_Custom;
    description = $STR_Difficulty_Custom_desc;

    levelAI = AILevelMedium;

    class Options
    {
      // Simulation
      reducedDamage = false;    // Reduced damage

      // Situational awareness
      groupIndicators = 0;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
      friendlyTags = 0;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
      enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
      detectedMines = 0;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
      commands = 0;             // Commands           (0 = never, 1 = fade out, 2 = always)
      waypoints = 0;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
      tacticalPing = false;     // Tactical ping

      // Personal awareness
      weaponInfo = 1;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
      stanceIndicator = 0;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
      staminaBar = false;       // Stamina bar
      weaponCrosshair = false;  // Weapon crosshair
      visionAid = false;        // Vision aid
      squadRadar = false;       // Squad radar

      // View
      thirdPersonView = false;  // 3rd person view
      cameraShake = false;      // Camera shake

      // Multiplayer
      scoreTable = false;       // Score table
      deathMessages = false;    // Killed by
      vonID = false;            // VON ID

      // Misc
      mapContent = false;       // Extended map content
      autoReport = false;       // Automatic reporting
      multipleSaves = false;    // Multiple saves
    };
  };
};

//----------------------------------------------------------------------
// Class CfgDifficulties and its content is not used by the game anymore.
// However, it is preserved for backwards compatibility with community
// modifications which might possibly use some of its parameters.
//----------------------------------------------------------------------
class CfgDifficulties
{
  default = Regular;
  
  // mapping of Xbox 360 default difficulties
  defaultNormal = Regular;
  defaultEasy = Regular;
  defaultHard = Veteran;

  class Recruit
  {
    // missing display name means the difficulty setting is by default disabled
    displayName = $STR_Difficulty0;
    description = $STR_Difficulty0_desc;
    showCadetHints = true;
    showCadetWP = true;
    maxPilotHeight = 150;
    scoreImage = ProcTextWhite;
    scoreChar = "o";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    levelAI = AILevelLow;

    myArmorCoef = 5.0;
    groupArmorCoef = 4.0;
	// strenght of peripheral vision, <0,1>
    peripheralVisionAid = 0.8; 
	/// strengh of on-screen vision aid, <0,1>
    visionAid =0.8; 

    recoilCoef = 1;  
    autoReload = false;  
    animSpeedCoef = 0;

    //first aid params for stabilizing
    HealSpeedMedicMedikit     = 0.1;
    HealSpeedMedicFAK         = 0.1;
    HealSpeedMedic            = 0.1;
    HealSpeedSoldierFAK       = 0.04;
    HealSpeedSoldier          = 0.04;
    //rate of bleeding
    BleedingRate               = 0.08;
    //threshold used for interrupting action
    CancelThreshold           = 0.2;
    //multiplier to limit capacity of lungs for soldiers
    DivingLimitMultiplier     = 1.0;

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {true, true};
      friendlyTag[] = {true, true};
      enemyTag[] = {false, true};
      mineTag[] = {true, true};
      hud[] = {true, true};
      hudPerm[] = {true, true};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      stanceIndicator[] = {true, true};
      staminaBar[] = {true, true};
      autoSpot[] = {true, true};
      map[] = {true, true};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {true, true};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};      
      unlimitedSaves[] = {false, false};
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      vonID[]={true,true};
      cameraShake[] = {false, true};
      hudGroupInfo[] = {true, true};
    };
  };

  class Regular
  {
    displayName = $STR_Difficulty1;
    description = $STR_Difficulty1_desc;
    showCadetHints = true;
    showCadetWP = true;
    maxPilotHeight = 400;
    scoreImage = ProcTextWhite;
    scoreChar = "o";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    levelAI = AILevelMedium;

    myArmorCoef = 3.0;
    groupArmorCoef = 2.4;
	// strenght of peripheral vision, <0,1>
    peripheralVisionAid = 0.9; 
	/// strengh of on-screen vision aid, <0,1>
    visionAid = 0; 

    //first aid params for stabilizing
    HealSpeedMedicMedikit     = 0.1;
    HealSpeedMedicFAK         = 0.1;
    HealSpeedMedic            = 0.1;
    HealSpeedSoldierFAK       = 0.04;
    HealSpeedSoldier          = 0.04;
    //rate of bleeding
    BleedingRate               = 0.08;
    //threshold used for interrupting action
    CancelThreshold           = 0.2;
    //multiplier to limit capacity of lungs for soldiers
    DivingLimitMultiplier     = 1.0;

    recoilCoef = 1;  
    autoReload = false;  
    animSpeedCoef = 0;

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {true, true};
      friendlyTag[] = {true, true};
      enemyTag[] = {false, true};
      mineTag[] = {true, true};
      hud[] = {true, true};
      hudPerm[] = {true, true};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      stanceIndicator[] = {true, true};
      staminaBar[] = {true, true};
      autoSpot[] = {true, true};
      map[] = {true, true};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {true, true};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};
      unlimitedSaves[] = {true, true};
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      vonId[] = {true, true};
      cameraShake[] = {true, true};
      // VBS2-specific difficulty settings
      hudGroupInfo[] = {true, true};
    };
  };

  class Veteran
  {
    displayName = $STR_Difficulty2;
    description = $STR_Difficulty2_desc;
    showCadetHints = false;
    showCadetWP = true;
    maxPilotHeight = 10000;
    scoreImage = ProcTextWhite;
    scoreChar = "*";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    levelAI = AILevelHigh;

    myArmorCoef = 1.2;
    groupArmorCoef = 1.1;
	// strenght of peripheral vision, <0,1>
    peripheralVisionAid = 0.6; 
	/// strengh of on-screen vision aid, <0,1>
    visionAid = 0; 

    //first aid params for stabilizing
    HealSpeedMedicMedikit     = 0.1;
    HealSpeedMedicFAK         = 0.1;
    HealSpeedMedic            = 0.1;
    HealSpeedSoldierFAK       = 0.04;
    HealSpeedSoldier          = 0.04;
    //rate of bleeding
    BleedingRate               = 0.08;
    //threshold used for interrupting action
    CancelThreshold           = 0.2;
    //multiplier to limit capacity of lungs for soldiers
    DivingLimitMultiplier     = 1.0;

    recoilCoef = 1;  
    autoReload = false;  
    animSpeedCoef = 0;

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {false, false};
      friendlyTag[] = {false, false};
      enemyTag[] = {false, false};
      mineTag[] = {false, false};
      hud[] = {true, true};
      hudPerm[] = {false, false};
      hudWp[] = {true, true};
      hudWpPerm[] = {true, true};
      stanceIndicator[] = {true, true};
      staminaBar[] = {true, true};
      autoSpot[] = {false, false};
      map[] = {false, false};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {false, false};
      clockIndicator[] = {true, true};
      3rdPersonView[] = {true, true};
      unlimitedSaves[] = {false, false};
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      vonId[] = {false, true};
      cameraShake[] = {true, true};
      // VBS2-specific difficulty settings
      hudGroupInfo[] = {true, true};
    };
  };
  class Mercenary
  {
    // missing display name means the difficulty setting is by default disabled
    displayName = $STR_Difficulty3;
    description = $STR_Difficulty3_desc;
    showCadetHints = false;
    showCadetWP = false;
    maxPilotHeight = 10000;
    scoreImage = ProcTextWhite;
    scoreChar = "*";
    badScoreImage = ProcTextWhite;
    badScoreChar = "X";

    levelAI = AILevelHigh;

    myArmorCoef = 1.0;
    groupArmorCoef = 1.0;
	// strenght of peripheral vision, <0,1>
    peripheralVisionAid = 0.25; 
	/// strengh of on-screen vision aid, <0,1>
    visionAid = 0; 


    //first aid params for stabilizing
    HealSpeedMedicMedikit     = 0.1;
    HealSpeedMedicFAK         = 0.1;
    HealSpeedMedic            = 0.1;
    HealSpeedSoldierFAK       = 0.04;
    HealSpeedSoldier          = 0.04;
    //rate of bleeding
    BleedingRate               = 0.08;
    //threshold used for interrupting action
    CancelThreshold           = 0.2;
    //multiplier to limit capacity of lungs for soldiers
    DivingLimitMultiplier     = 1.0;

    recoilCoef = 1;  
    autoReload = false;  
    animSpeedCoef = 0;

    class Flags
    {
      // name = {default, userCanChange};
      armor[] = {false, false};
      friendlyTag[] = {false, false};
      enemyTag[] = {false, false};
      mineTag[] = {false, false};
      hud[] = {true, true};
      hudPerm[] = {false, false};
      hudWp[] = {false, false};
      hudWpPerm[] = {false, false};
      stanceIndicator[] = {false, false};
      staminaBar[] = {false, false};
      autoSpot[] = {false, false};
      map[] = {false, false};
      weaponCursor[] = {true, true};
      autoGuideAT[] = {false, false};
      clockIndicator[] = {false, false};
      3rdPersonView[] = {false, false};
      unlimitedSaves[] = {false, false};
      deathMessages[] = {true, true};
      netStats[] = {true, true};
      vonID[]={false,true};
      cameraShake[] = {true, false};
      hudGroupInfo[] = {false, false};
    };
  };
};
