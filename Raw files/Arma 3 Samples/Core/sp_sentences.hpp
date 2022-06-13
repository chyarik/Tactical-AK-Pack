// speech sentences

/// properties of radio channels
class RadioChannels
{
  class GlobalChannel // global radio
  {
    level = 1;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class SideChannel // side radio
  {
    level = 2;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class CommandChannel // command radio
  {
    level = 3;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class GroupChannel // group radio
  {
    level = 4;
    noise = "loop";
    micOuts = "micOuts";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class VehicleChannel // vehicle intercom
  {
    level = 5;
    noise = "";
    micOuts = "";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;
  };
  class DirectSpeakingChannel
  {
    level = 0;
    noise = "";
    micOuts = "";

    pauseAfterWord = 0;
    pauseInNumber = 0;
    pauseAfterNumber = 0;
    pauseInUnitList = 0;
    pauseAfterUnitList = 0.05;

    sound3D = true;
  };
};

/// Interface of the radio protocol
class RadioProtocolBase
{
  access = ReadAndWrite;

  /// Dictionary (only words required directly by the program or core config)
  class Words
  {
    // no micOuts defined in CfgVoice.micOuts
    // referenced in RadioChannels
	loop[] = {}; 

    // special sounds
    pause[] = {};
    // used as a mark when message is transmitted
	xmit[] = {}; 

    // numbers (used as units' call-signs)
    zero[] = {};
    one[] = {};
    two[] = {};
    three[] = {};
    four[] = {};
    five[] = {};
    six[] = {};
    seven[] = {};
    eight[] = {};
    nine[] = {};
    ten[] = {};
    eleven[] = {};
    twelve[] = {};
    thirteen[] = {};
    fourteen[] = {};
    fifteen[] = {};
    sixteen[] = {};
    seventeen[] = {};
    eighteen[] = {};
    nineteen[] = {};
    twenty[] = {};
    thirty[] = {};
    forty[] = {};
    fifty[] = {};
    sixty[] = {};
    seventy[] = {};
    eighty[] = {};
    ninety[] = {};
    hundred[] = {};

    // Spelling (digits + phonetic alphabet)
    zero2[] = {};
    one2[] = {};
    two2[] = {};
    three2[] = {};
    four2[] = {};
    five2[] = {};
    six2[] = {};
    seven2[] = {};
    eight2[] = {};
    nine2[] = {};
    ten2[] = {};
    eleven2[] = {};
    twelve2[] = {};

    alpha[] = {};
    bravo[] = {};
    charlie[] = {};
    delta[] = {};
    echo[] = {};
    foxtrot[] = {};
    golf[] = {};
    hotel[] = {};
    india[] = {};
    juliet[] = {};
    kilo[] = {};
    lima[] = {};
    mike[] = {};
    november[] = {};
    oscar[] = {};
    papa[] = {};
    quebec[] = {};
    romeo[] = {};
    sierra[] = {};
    tango[] = {};
    uniform[] = {};
    victor[] = {};
    whiskey[] = {};
    xray[] = {};
    yankee[] = {};
    zulu[] = {};

    // When messages is addressed to a group of units
    all[] = {};
    allGroup[] = {};		
    // teams
    whiteTeam[] = {};
    redTeam[] = {};
    greenTeam[] = {};
    blueTeam[] = {};
    yellowTeam[] = {};

    // Target side
    unknown[] = {};
    enemy[] = {};
    friendly[] = {};
    neutral[] = {};

    // Azimuth
    north[] = {};
    northEast[] = {};
    east[] = {};
    southEast[] = {};
    south[] = {};
    southWest[] = {};
    west[] = {};
    northWest[] = {};

    // Relative direction
    at10[] = {};
    at11[] = {};
    at12[] = {};
    at1[] = {};
    at2[] = {};
    at3[] = {};
    at4[] = {};
    at5[] = {};
    at6[] = {};
    at7[] = {};
    at8[] = {};
    at9[] = {};

    // Distances
    dist50[] = {};
    dist100[] = {};
    dist200[] = {};
    dist500[] = {};
    dist1000[] = {};
    dist2000[] = {};
    far[] = {};

    // Words to Report targets
    inFrontOf[] = {};
    rightOf[] = {};
    behind[] = {};
    leftOf[] = {};
    dangerCloseTo[] = {};
    notFarFrom[] = {};
    farFrom[] = {};
    front[] = {};
    right[] = {};
    rear[] = {};
    left[] = {};
    rightFlank[] = {};
    leftFlank[] = {};
    damnClose[] = {};
    notFar[] = {};
    closeTo[] = {};
    and[] = {};
  };

  // priority classes
  class Default
  {
    priority = 0;
    // never
	timeout = 1000.0;	
  };
  class Report
  {
    priority = 100;
    timeout = 30.0;
  };
  class PriorityReport
  {
    priority = 200;
    timeout = 60.0;
  };
  class Confirmation
  {
    priority = 300;
    timeout = 3.0;
  };
  class Completition
  {
    priority = 400;
    timeout = 5.0;
  };
  class JoinCompleted
  {
    priority = 400;
    timeout = 30.0;
  };
  class Failure
  {
    priority = 500;
    timeout = 30.0;
  };
  class Notify
  {
    priority = 600;
    timeout = 5.0;
  };
  class Detected
  {
    priority = 700;
    timeout = 5.0;
  };
  class NormalCommand
  {
    priority = 800;
    // never
	timeout = 1000.0; 
  };
  class CriticalReport
  {
    priority = 850;
    timeout = 60.0;
  };
  class UrgentCommand
  {
    priority = 900;
	// never
    timeout = 1000.0; 
  };
  class UICommand	// command with context == CtxUI
  {
    priority = 1000;
	// never
    timeout = 1000.0; 
  };
  class Design
  {
    priority = 950;
	// never
    timeout = 1000.0;
  };

  // sentences interfaces
  class SentUnitKilled: CriticalReport {versions[] = {};};
  class SentSupportAskHeal: NormalCommand {versions[] = {};};
  class SentSupportAskRepair: NormalCommand {versions[] = {};};
  class SentSupportAskRefuel: NormalCommand {versions[] = {};};
  class SentSupportAskRearm: NormalCommand {versions[] = {};};
  class SentSupportConfirm: NormalCommand {versions[] = {};};
  class SentSupportReady: NormalCommand {versions[] = {};};
  class SentSupportDone: NormalCommand {versions[] = {};};
  class SentSupportNotAvailable: NormalCommand {versions[] = {};};
  class SentHealthCritical: CriticalReport {versions[] = {};};
  class SentHealthNormal: CriticalReport {versions[] = {};};
  class SentHealthUnconscious: CriticalReport {versions[] = {};};
  class SentDammageCritical: CriticalReport {versions[] = {};};
  class SentOutOfFirstAidKits: Report {versions[] = {};};
  class SentFuelCritical: CriticalReport {versions[] = {};};
  class SentFuelLow: Report {versions[] = {};};
  class SentAmmoCritical: CriticalReport {versions[] = {};};
  class SentAmmoLow: Report {versions[] = {};};
  class SentReportPosition: Report {versions[] = {};};
  class SentIsLeader: CriticalReport {versions[] = {};};
  class SentCommandCompleted: Completition {versions[] = {};};
  class SentJoinCompleted: JoinCompleted {versions[] = {};};
  class SentFireReady: Completition {versions[] = {};};
  class SentDetectedMine: Completition {versions[] = {};};
  class SentDetectedBomb: Completition {versions[] = {};};
  class SentDetectedExplosive: Completition {versions[] = {};};
  class SentFireNegative: Completition {versions[] = {};};
  class SentCommandFailed: Failure {versions[] = {};};
  class SentDestinationUnreacheable: Failure {versions[] = {};};
  //uses recursive versions selection, sentence first
  class SelectEnemyDetectedSentence {sentences[] = {};}; 
  class SentEnemyDetectedGroupCoreRelative: Detected {versions[] = {};};
  class SentEnemyDetectedOnGridReference: Detected {versions[] = {};};
  class SentEnemyDetectedLocationRelative: Detected {versions[] = {};};
  class SentEnemyDetectedUnitRelative: Detected {versions[] = {};};
  class SentEnemyDetectedSenderRelative: Detected {versions[] = {};};
  class SentObjectDestroyed : Completition {versions[] = {};};
  class SentObjectDestroyedUnknown : Completition {versions[] = {};};
  class SentContact : UrgentCommand {versions[] = {};};
  class SentUnderFire : UrgentCommand {versions[] = {};};
  class SentCoverMe : Confirmation {versions[] = {};};
  class SentCovering : Confirmation {versions[] = {};};
  
  class SentSuppressing : Report {versions[] = {};};
  class SentReloading : Confirmation {versions[] = {};};
  class SentThrowingGrenade : Confirmation {versions[] = {};};
  class SentThrowingSmoke : Report {versions[] = {};};
  class SentIncomingGrenade : Report {versions[] = {};};
  class SentEnemyContact : Report {versions[] = {};};
  class SentEndangered : Report {versions[] = {};};
  class SentRouted : Report {versions[] = {};};
  class SentWitnessDeadBody : Report {versions[] = {};};
  class SentWitnessKilled : Report {versions[] = {};};
  class SentCombatGeneric : Report {versions[] = {};};
  class SentCheering : Report {versions[] = {};};
  class SentScreaming : Report {versions[] = {};};
  
  
  class SentClear : NormalCommand {versions[] = {};};
  class SentRepeatCommand : NormalCommand {versions[] = {};};
  class SentWhereAreYou : NormalCommand {versions[] = {};};
  class SentReturnToFormation: NormalCommand {versions[] = {};};
  class SentFormColumn: NormalCommand {versions[] = {};};
  class SentFormStaggeredColumn: NormalCommand {versions[] = {};};
  class SentFormWedge: NormalCommand {versions[] = {};};
  class SentFormEcholonLeft: NormalCommand {versions[] = {};};
  class SentFormEcholonRight: NormalCommand {versions[] = {};};
  class SentFormVee: NormalCommand {versions[] = {};};
  class SentFormLine: NormalCommand {versions[] = {};};
  class SentFormFile: NormalCommand {versions[] = {};};
  class SentFormDiamond: NormalCommand {versions[] = {};};
  class SentBehaviourCareless : NormalCommand {versions[] = {};};
  class SentBehaviourSafe : NormalCommand {versions[] = {};};
  class SentBehaviourAware : NormalCommand {versions[] = {};};
  class SentBehaviourCombat : NormalCommand {versions[] = {};};
  class SentBehaviourStealth : NormalCommand {versions[] = {};};
  class SentOpenFire: NormalCommand {versions[] = {};};
  class SentOpenFireInCombat: NormalCommand {versions[] = {};};
  class SentHoldFire: UrgentCommand {versions[] = {};};
  class SentHoldFireInCombat: UrgentCommand {versions[] = {};};
  class SentCeaseFireInsideGroup: UrgentCommand {versions[] = {};};
  class SentCeaseFire: UrgentCommand {versions[] = {};};
  class SentLooseFormation: NormalCommand {versions[] = {};};
  class SentKeepFormation: NormalCommand {versions[] = {};};
  class SentUnitPosDown: NormalCommand {versions[] = {};};
  class SentUnitPosMiddle: NormalCommand {versions[] = {};};
  class SentUnitPosUp: NormalCommand {versions[] = {};};
  class SentUnitPosAuto: NormalCommand {versions[] = {};};
  class SentFormPosAdvance: NormalCommand {versions[] = {};};
  class SentFormPosStayBack: NormalCommand {versions[] = {};};
  class SentFormPosFlankLeft: NormalCommand {versions[] = {};};
  class SentFormPosFlankRight: NormalCommand {versions[] = {};};
  class SentReportStatus: NormalCommand {versions[] = {};};
  class SentTeam: NormalCommand {versions[] = {};};
  class SentTeamPlural: NormalCommand {versions[] = {};};
  class SentWatchTgt: NormalCommand {versions[] = {};};
  class SentWatchDir: NormalCommand {versions[] = {};};
  class SentWatchPos: NormalCommand {versions[] = {};};
  class SentWatchAround: NormalCommand {versions[] = {};};
  class SentNoTarget: NormalCommand {versions[] = {};};
  class SentTarget: UrgentCommand {versions[] = {};};
  class SentEngage: NormalCommand {versions[] = {};};
  class SentFire: NormalCommand {versions[] = {};};
  class SentEngageNoTarget: NormalCommand {versions[] = {};};
  class SentFireNoTarget: NormalCommand {versions[] = {};};
  //uses recursive versions selection, sentence first
  class SelectCmdMoveSentence {sentences[] = {};}; 
  class SentCmdMoveGroupRelative: NormalCommand {versions[] = {};};
  class SentCmdMoveRecipientsRelative: NormalCommand {versions[] = {};};
  class SentCmdMoveToGrid: NormalCommand {versions[] = {};};
  class SentCmdMoveToTarget: NormalCommand {versions[] = {};};
  class SentCmdMoveToObject: NormalCommand {versions[] = {};};
  class SentCmdMoveLocationRelative: NormalCommand {versions[] = {};};

  class SentCmdHealSomeone: NormalCommand {versions[] = {};};
  class SentCmdHealSelf: NormalCommand {versions[] = {};};
  class SentAssemble: NormalCommand {versions[] = {};};
  class SentDisassemble: NormalCommand {versions[] = {};};  
  class SentCmdActionTakeBag: NormalCommand {versions[] = {};};
  class SentCmdActionDropBag: NormalCommand {versions[] = {};};
  class SentCmdActionOpenBag: NormalCommand {versions[] = {};};
  class SentLightsOn: NormalCommand {versions[] = {};};  
  class SentLightsOff: NormalCommand {versions[] = {};};
  class SentPointersOn: NormalCommand {versions[] = {};};
  class SentPointersOff: NormalCommand {versions[] = {};};

  class SentCmdHeal: NormalCommand {versions[] = {};};
  class SentCmdHealFar: NormalCommand {versions[] = {};};
  class SentCmdHealAt: NormalCommand {versions[] = {};};
  class SentCmdRepair: NormalCommand {versions[] = {};};
  class SentCmdRepairFar: NormalCommand {versions[] = {};};
  class SentCmdRepairAt: NormalCommand {versions[] = {};};
  class SentCmdRefuel: NormalCommand {versions[] = {};};
  class SentCmdRefuelFar: NormalCommand {versions[] = {};};
  class SentCmdRefuelAt: NormalCommand {versions[] = {};};
  class SentCmdRearm: NormalCommand {versions[] = {};};
  class SentCmdRearmFar: NormalCommand {versions[] = {};};
  class SentCmdRearmAt: NormalCommand {versions[] = {};};
  class SentCmdSupport: NormalCommand {versions[] = {};};
  class SentCmdSupportFar: NormalCommand {versions[] = {};};
  class SentCmdSupportAt: NormalCommand {versions[] = {};};
  class SentCmdDropWeapon: NormalCommand {versions[] = {};};
  class SentCmdDropMagazine: NormalCommand {versions[] = {};};
  class SentCmdTakeWeapon: NormalCommand {versions[] = {};};
  class SentCmdTakeWeaponFar: NormalCommand {versions[] = {};};
  class SentCmdTakeWeaponAt: NormalCommand {versions[] = {};};
  class SentCmdTakeMagazine: NormalCommand {versions[] = {};};
  class SentCmdTakeMagazineFar: NormalCommand {versions[] = {};};
  class SentCmdTakeMagazineAt: NormalCommand {versions[] = {};};
  class SentCmdUseContainerMagazine: NormalCommand {versions[] = {};};
  class SentCmdAction: NormalCommand {versions[] = {};};
  class SentCmdActionNear: NormalCommand {versions[] = {};};
  class SentCmdActionFar: NormalCommand {versions[] = {};};
  class SentCmdActionAt: NormalCommand {versions[] = {};};
  class SentCmdTakeFlag: NormalCommand {versions[] = {};};
  class SentCmdTakeFlagFar: NormalCommand {versions[] = {};};
  class SentCmdTakeFlagAt: NormalCommand {versions[] = {};};
  class SentCmdReturnFlag: NormalCommand {versions[] = {};};
  class SentCmdReturnFlagFar: NormalCommand {versions[] = {};};
  class SentCmdReturnFlagAt: NormalCommand {versions[] = {};};
  class SentCmdEject: NormalCommand {versions[] = {};};
  class SentCmdPlaceCharge: NormalCommand {versions[] = {};};
  class SentCmdDetonate: NormalCommand {versions[] = {};};
  class SentCmdActivateTimer: NormalCommand {versions[] = {};};
  class SentCmdDeactivateBomb: NormalCommand {versions[] = {};};
  class SentCmdActivateMine: NormalCommand {versions[] = {};};
  class SentCmdDeactivateMine: NormalCommand {versions[] = {};};
  class SentCmdTakeMine: NormalCommand {versions[] = {};};
  class SentCmdLightFire: NormalCommand {versions[] = {};};
  class SentCmdLightFireFar: NormalCommand {versions[] = {};};
  class SentCmdLightFireAt: NormalCommand {versions[] = {};};
  class SentCmdPutOutFire: NormalCommand {versions[] = {};};
  class SentCmdPutOutFireFar: NormalCommand {versions[] = {};};
  class SentCmdPutOutFireAt: NormalCommand {versions[] = {};};
  class SentCmdOpenDoor: NormalCommand {versions[] = {};};
  class SentCmdOpenDoorFar: NormalCommand {versions[] = {};};
  class SentCmdOpenDoorAt: NormalCommand {versions[] = {};};
  class SentCmdCloseDoor: NormalCommand {versions[] = {};};
  class SentCmdCloseDoorFar: NormalCommand {versions[] = {};};
  class SentCmdCloseDoorAt: NormalCommand {versions[] = {};};
  class SentCmdFollowMe: UrgentCommand {versions[] = {};};
  class SentCmdFollow: UrgentCommand {versions[] = {};};
  class SentCmdAttack: UrgentCommand {versions[] = {};};
  class SentAttackNoTarget: UrgentCommand {versions[] = {};};
  class SentCmdFire: UrgentCommand {versions[] = {};};
  class SentCmdGetIn: NormalCommand {versions[] = {};};
  class SentCmdGetInCommander: NormalCommand {versions[] = {};};
  class SentCmdGetInDriver: NormalCommand {versions[] = {};};
  class SentCmdGetInPilot: NormalCommand {versions[] = {};};
  class SentCmdGetInGunner: NormalCommand {versions[] = {};};
  class SentCmdGetInCargo: NormalCommand {versions[] = {};};
  class SentCmdSwitchToDriver: NormalCommand {versions[] = {};};
  class SentCmdSwitchToGunner: NormalCommand {versions[] = {};};
  class SentCmdSwitchToCommander: NormalCommand {versions[] = {};};
  class SentCmdSwitchToCargo: NormalCommand {versions[] = {};};
  class SentCmdGetOut: NormalCommand {versions[] = {};};
  class SentCmdStop: NormalCommand {versions[] = {};};
  class SentCmdExpect: NormalCommand {versions[] = {};};
  class SentCmdHide: NormalCommand {versions[] = {};};
  class SentCmdDismiss: NormalCommand {versions[] = {};};
  class SentNotifyAttack: Notify {versions[] = {};};
  class SentNotifyAttackSubgroup: SentNotifyAttack {};
  class SentNotifySupport: Notify {versions[] = {};};
  class SentConfirmMove: Confirmation {versions[] = {};};
  class SentConfirmAttack: Confirmation {versions[] = {};};
  class SentConfirmOther: Confirmation {versions[] = {};};
  class SentARTYFireAt: UrgentCommand {versions[] = {};};
  class SentARTYFireAtWithAmmo: UrgentCommand {versions[] = {};};
  class SentRepairThat: UrgentCommand {versions[] = {};};
  class SentARTYRoundsComplete: NormalCommand {versions[] = {};};
  class SentARTYCannotExecuteAdjustCoordinates: NormalCommand {versions[] = {};};
  class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope: NormalCommand {versions[] = {};};
  class SentCmdSuppress : UrgentCommand { versions[] = {}; };
  class SentNotifySuppress : Notify { versions[] = {}; };
  class SentConfirmSuppress : Confirmation { versions[] = {}; };
  
  //uses recursive versions selection, sentence first
  class SelectVehicleMoveSentence {sentences[] = {};}; 
  class VehicleMoveGroupRelative: NormalCommand {versions[] = {};};
  class VehicleMoveRecipientsRelative: NormalCommand {versions[] = {};};
  class VehicleMoveToGrid: NormalCommand {versions[] = {};};
  class VehicleMoveToObject: NormalCommand {versions[] = {};};
  class VehicleMoveLocationRelative: NormalCommand {versions[] = {};};
  class VehicleWatchTgt {versions[] = {};};
  class VehicleWatchPos {versions[] = {};};
  class VehicleJoin {versions[] = {};};
  class VehicleFire {versions[] = {};};
  class VehicleTarget {versions[] = {};};
  class VehicleNoTarget {versions[] = {};};
  class VehicleCeaseFire {versions[] = {};};
  class VehicleForward {versions[] = {};};
  class VehicleStop {versions[] = {};};
  class VehicleBackward {versions[] = {};};
  class VehicleFaster {versions[] = {};};
  class VehicleSlower {versions[] = {};};
  class VehicleLeft {versions[] = {};};
  class VehicleRight {versions[] = {};};
  class VehicleManualFire {versions[] = {};};
  class VehicleCancelManualFire {versions[] = {};};
  class VehicleDirectFire {versions[] = {};};
  class VehicleLoad {versions[] = {};};
  class VehicleLoadMagazine {versions[] = {};};
  class VehicleAzimut {versions[] = {};};
  class VehicleFireFailed {versions[] = {};};

  class ClausePosition
  {
    // params:
    // 1 - azimuth
    // 2 - distance
    text = "";
    speech[] = {};
  };
  class ClausePositionNear
  {
    // params:
    // 1 - object
    // 2 - azimuth
    text = "";
    speech[] = {};
  };

/*
  // Each radio protocol must specify its Argument definitions.
  class Arguments
  {
    class Direction
    {
      class Compass
      {
        //Class names corresponds to azimuth (in degrees).
        class 0 { text = "North"; speech[] = {"North"}; };
        class 45;
        ...
        class 315;
      };
      class RelativeNN //variants
      { //Class names corresponds to azimuth (in degrees).
        class 0 { text = "in front of"; speech[] = {"inFrontOf"}; };
        class 90;
        class 180;
        class 270;
      };
    };
    class DistanceNN //variants
    { //Class names corresponds to three possible levels of distance (group territory, effective fight distance, far)
      class Level0 { text = "dangerously close to"; speech[] = {"DangerouslyClose", "to"}; };
      class Level1; //close to
      class Level2; //far from
    }; //class Distance
    class AggrTargets
    {
      modes[] = {"Default"}; //list class names from SpeechVariant class which should be used for mode 1,2,...
      //modes[] = {"CZ", "CZ_Akuzativ"}; //example for modes 1,2
    };
  };
*/

  class Arguments
  {
    class Direction
    {
      class Compass1
      { // other versions can be useful in other languages ("na sever", "severne")
        //Class names corresponds to azimuth (in degrees).
        class 0
        {
          text = $STR_Q_NORTH;
          speech[] = {North};
        };
        class 45
        {
          text = $STR_Q_NORTH_EAST;
          speech[] = {NorthEast};
        };
        class 90
        {
          text = $STR_Q_EAST;
          speech[] = {East};
        };
        class 135
        {
          text = $STR_Q_SOUTH_EAST;
          speech[] = {SouthEast};
        };
        class 180
        {
          text = $STR_Q_SOUTH;
          speech[] = {South};
        };
        class 225
        {
          text = $STR_Q_SOUTH_WEST;
          speech[] = {SouthWest};
        };
        class 270
        {
          text = $STR_Q_WEST;
          speech[] = {West};
        };
        class 315
        {
          text = $STR_Q_NORTH_WEST;
          speech[] = {NorthWest};
        };
      };
      class Compass2
      { // other versions can be useful in other languages ("na sever", "severne")
        //Class names corresponds to azimuth (in degrees).
        class 0
        {
          text = $STR_Q_NORTH;
          speech[] = {North2};
        };
        class 45
        {
          text = $STR_Q_NORTH_EAST;
          speech[] = {NorthEast2};
        };
        class 90
        {
          text = $STR_Q_EAST;
          speech[] = {East2};
        };
        class 135
        {
          text = $STR_Q_SOUTH_EAST;
          speech[] = {SouthEast2};
        };
        class 180
        {
          text = $STR_Q_SOUTH;
          speech[] = {South2};
        };
        class 225
        {
          text = $STR_Q_SOUTH_WEST;
          speech[] = {SouthWest2};
        };
        class 270
        {
          text = $STR_Q_WEST;
          speech[] = {West2};
        };
        class 315
        {
          text = $STR_Q_NORTH_WEST;
          speech[] = {NorthWest2};
        };
      };
      class Relative1
      { //Class names corresponds to azimuth (in degrees).
        class 0
        {
          text = "in front of";
          speach[] = {InFrontOf};
        };
        class 90
        {
          text = "right of";
          speach[] = {RightOf};
        };
        class 180
        {
          text = "behind";
          speach[] = {Behind};
        };
        class 270
        {
          text = "left of";
          speach[] = {LeftOf};
        };
      };
    }; //class Direction
    class Distance1
    {
      //Class names corresponds to three possible levels of distance (group territory, effective fight distance, far)
      class Level0
      {
        text = "";
        speech[] = {DangerCloseTo};
      };
      class Level1
      {
        text = "";
        speech[] = {NotFarFrom};
      };
      class Level2
      {
        text = "";
        speech[] = {FarFrom};
      };
    }; //class Distance
    class AggrTargets
    {
      modes[] = {"Default"};
    };
  };

};

// Empty class (definition is in dubbing.pbo, but Bin\config.cpp says: RadioProtocolDefault = "*"; in PreloadConfig, so we need at least basic core definition)
class RadioProtocolDefault: RadioProtocolBase
{
};
