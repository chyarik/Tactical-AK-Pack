class UserActionsConflictGroups
{
  // helper groups to define collision groups
  class ActionGroups {
    basic[] = {
      ToggleWeapons,
      SwitchWeapon,
      DefaultAction,
      ReloadMagazine,
      // lock target - RIGHT MOUSE BUTTON
      LockTarget,
      RevealTarget,
      TacticalPing,
      PrevAction,
      NextAction,
      Action,
      ActionContext,
      ActionFreeLook,
      Headlights,
      NightVision,
      Binocular,
      Compass,
      CompassToggle,
      uavView,
      uavViewToggle,
      Watch,
      WatchToggle,
      MiniMap,
      MiniMapToggle,
      ShowMap,
      HideMap,
      Help,
      TimeInc,
      TimeDec,
      CopyVersion,
      OpenDlcScreen,
      Optics,
      PersonView,
      TacticalView,
      ZoomIn,
      ZoomInToggle,
      ZoomOut,
      zoomOutToggle,
      // continuous zoom
      ZoomContIn,
      ZoomContOut,
      ZeroingUp,
      ZeroingDown,
      LookAround,
      LookAroundToggle,
      LookLeftDown,
      LookDown,
      LookRightDown,
      LookLeft,
      LookCenter,
      LookRight,
      LookLeftUp,
      LookUp,
      LookRightUp,
      LookLeftCont,
      LookRightCont,
      LookDownCont,
      LookUpCont,
      PrevChannel,
      NextChannel,
      Chat,
      VoiceOverNet,
      PushToTalk,
      PushToTalkAll,
      PushToTalkSide,
      PushToTalkCommand,
      PushToTalkGroup,
      PushToTalkVehicle,
      PushToTalkDirect,
      CommandingMenu1,
      CommandingMenu2,
      CommandingMenu3,
      CommandingMenu4,
      CommandingMenu5,
      CommandingMenu6,
      CommandingMenu7,
      CommandingMenu8,
      CommandingMenu9,
      CommandingMenu0,
      SelectGroupUnit1,
      SelectGroupUnit2,
      SelectGroupUnit3,
      SelectGroupUnit4,
      SelectGroupUnit5,
      SelectGroupUnit6,
      SelectGroupUnit7,
      SelectGroupUnit8,
      SelectGroupUnit9,
      SelectGroupUnit0,
      GroupPagePrev,
      GroupPageNext,
      SelectTeamRed,
      SelectTeamGreen,
      SelectTeamBlue,
      SelectTeamYellow,
      SelectTeamWhite,
      SetTeamRed,
      SetTeamGreen,
      SetTeamBlue,
      SetTeamYellow,
      SetTeamWhite,
      NetworkStats,
      SelectAll,
      Turbo,
      TurboToggle,
      Slow,
      HoldBreath,
      IngamePause,
      MenuSelect,
      ForceCommandingMode,
      SwitchCommand,
      SwapGunner,
      CancelAction,
      CommandWatch,
      TeamSwitch,
      TeamSwitchPrev,
      TeamSwitchNext,
      Gear,
      Cheat1,
      Cheat2,
      Diary,
      Surrender,
      GetOver,
      TurretElevationUp,
      TurretElevationDown,
    };
    ManBasic[] = {
      TempRaiseWeapon,
      ToggleRaiseWeapon,
      Handgun,
      Salute,
      SitDown,
      LockTargets,  // next / prev target - DIK_TAB
      LockEmptyTargets
    };
    VehBasic[] = {
      Fire,
      VehicleTurbo,
      HeliManualFire,
      // next / prev target in vehicles
	  VehLockTargets,
      VehLockEmptyTargets,
      GetOut,
      Eject,
      //--- Artillery
      GunElevUp,
      GunElevDown,
      GunElevSlow,
      GunElevAuto,

      TransportNightVision
    };
    ManMoveGround[] = {
      //Adjust,
      AimUp,
      AimDown,
      AimLeft,
      AimRight,
      MoveForward,
      MoveBack,
      TurnLeft,
      TurnRight,
      MoveUp,
      MoveDown,
      MoveFastForward,
      MoveSlowForward,
      MoveLeft,
      MoveRight,
      EvasiveLeft,
      EvasiveRight,
      Stand,
      Crouch,
      Prone,
      LeanLeft,
      LeanRight,
      LeanLeftToggle,
      LeanRightToggle,
      WalkRunToggle,
      WalkRunTemp
    };
    ManMoveUnderwater[] = {
      SwimUp,
      SwimDown,
      AimUp,
      AimDown,
      AimLeft,
      AimRight,
      MoveForward,
      MoveBack,
      TurnLeft,
      TurnRight,
      MoveUp,
      MoveDown,
      MoveFastForward,
      MoveSlowForward,
      MoveLeft,
      MoveRight
    };
    AimingHead[] = {
      AimHeadUp,
      AimHeadDown,
      AimHeadLeft,
      AimHeadRight
    };
    AirCraft[] = {
      // Helicopter control
      HeliUp,
      HeliDown,
      HeliThrottlePos,
      HeliThrottleNeg,
      HeliLeft,
      HeliRight,
      AirBankLeft,
      AirBankRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,
      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,
      AirPlaneBrake,

    };
    Heli[] = {
      HeliCollectiveRaise,       // Helicopter control
      HeliCollectiveLower,
      HeliCollectiveRaiseCont,
      HeliCollectiveLowerCont,
      HeliLeft,
      HeliRight,
      HeliCyclicLeft,
      HeliCyclicRight,
      HeliRudderLeft,
      HeliRudderRight,
      CyclicForward,
      CyclicBack,
      HeliFastForward,
      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,
      HelicopterTrimOn,
      HelicopterTrimOff,

      HeliWheelsBrake,
      HeliTrimLeft,
      HeliTrimRight,
      HeliTrimForward,
      HeliTrimBackward,
      HeliTrimRudderLeft,
      HeliTrimRudderRight,
      HeliRopeAction
    };
    CarMovement[] = {
      // Car control
	    CarLeft,
      CarRight,
      CarLinearLeft,
      CarLinearRight,
      CarWheelLeft,
      CarWheelRight,
      CarForward,
      CarBack,
      CarHandBrake,
      CarFastForward,
      CarSlowForward
    };
    CarFreelook[] = {
      CarAimUp,
      CarAimDown,
      CarAimLeft,
      CarAimRight
    };
    Tank[] = {
      TurnIn,
      TurnOut,
    };
    SeaGull[] = { // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward
    };
    FreeHeadMove[] = {
      FreeHeadMove
    };
    HeadMove[] = {
      LookShiftLeftCont,
      LookShiftRightCont,
      LookShiftUpCont,
      LookShiftDownCont,
      LookShiftForwardCont,
      LookShiftBackCont,
      LookRollLeftCont,
      LookRollRightCont,
      LookShiftLeft,
      LookShiftRight,
      LookShiftUp,
      LookShiftDown,
      LookShiftForward,
      LookRollLeft,
      LookRollRight,
      LookShiftBack,
      LookShiftCenter
    };
    Command[] = {
      // Vehicle commands
	  CommandLeft,
      CommandRight,
      CommandForward,
      CommandBack,
      CommandFast,
      CommandSlow,
      SwitchGunnerWeapon
    };
    buldozer[] = {
      BuldSwitchCamera,
      BuldFreeLook,
      BuldSelect,
      BuldResetCamera,
      BuldMagnetizePoints,
      BuldMagnetizePlanes,
      BuldMagnetizeYFixed,
      BuldTerrainRaise1m,
      buldTerrainRaise10cm,
      BuldTerrainLower1m,
      BuldTerrainLower10cm,
      BuldTerrainRaise5m,
      BuldTerrainRaise50cm,
      BuldTerrainLower5m,
      BuldTerrainLower50cm,
      BuldTerrainShowNode,
      BuldSelectionType,
      BuldLeft,
      BuldRight,
      BuldForward,
      BuldBack,
      BuldMoveLeft,
      BuldMoveRight,
      BuldMoveForward,
      BuldMoveBack,
      BuldTurbo,
      BuldUp,
      BuldDown,
      BuldLookLeft,
      BuldLookRight,
      BuldLookUp,
      BuldLookDown,
      BuldZoomIn,
      BuldZoomOut,
      BuldTextureInfo,
      //////// Brush actions
      BuldBrushRatio,
      BuldBrushStrength,
      BuldBrushSmooth,
      BuldBrushRandomize,
      BuldBrushSetHeight,
      BuldBrushOuter,
      //////// Undo Redo
      BuldUndo,
      BuldRedo,
      // objects tools
      BuldCreateObj,
      BuldDuplicateSel,
      BuldRemoveSel,
      BuldRotateSelX,// rotate around Y is default
      BuldRotateSelZ,
      BuldScaleSel,
      BuldElevateSel,
      BuldKeepAbsoluteElevationSel,
      BuldClearAllElevationLocks
    };
  };
  // CollisionGroups uses the actionGroups within array definitions
  // actions within one collisionGroup collides
  class CollisionGroups {
    manMain[] = {basic, manBasic};
    vehMain[] = {basic, vehBasic};

    manMoveGround[] = {manMoveGround, manBasic, basic};
/*
    manMoveUnderwater[] = {manMoveUnderwater, manBasic, basic};
    commander[] = {command, vehBasic, basic};
    aimingHead[] = {aimingHead, manBasic, basic};

    heli[] = {heli, vehBasic, basic, HeadMove}; //we do not want FreeHeadMove to collide with HeadMove actions (standalone key ctrl vs. ctrl+xxx combo actions)
    aircraft[] = {aircraft, vehBasic, basic, HeadMove}; //we do not want FreeHeadMove to collide with HeadMove actions (standalone key ctrl vs. ctrl+xxx combo actions)
    carMove[] = {CarMovement, vehBasic, basic, HeadMove};
    carLook[] = {CarFreelook, vehBasic, basic, HeadMove};
    TankMove[] = {CarMovement, Tank, vehBasic, basic, HeadMove};
    TankLook[] = {CarFreelook, Tank, vehBasic, basic, HeadMove};
    Artillery[] = {CarFreelook, Tank, vehBasic, basic, HeadMove};

    heliF[] = {heli, vehBasic, basic, FreeHeadMove};
    aircraftF[] = {aircraft, vehBasic, basic, FreeHeadMove};
    carMoveF[] = {CarMovement, vehBasic, basic, FreeHeadMove};
    carLookF[] = {CarFreelook, vehBasic, basic, FreeHeadMove};
    TankMoveF[] = {CarMovement, Tank, vehBasic, basic, FreeHeadMove};
    TankLookF[] = {CarFreelook, Tank, vehBasic, basic, FreeHeadMove};
*/
    seagull[] = {seagull};
    buldozer[] = {buldozer};
  };
  // Exceptions groups are prioritized: actions within the same group cannot collide
  class Exceptions {
    leftAlt[] = {lookAround, commandWatch};
    map[] = {showMap, hideMap};
    lockRevealTarget[] = {lockTarget, revealTarget, holdBreath};
    rollLeft[] = {EvasiveLeft, LeanLeft};
    rollRight[] = {EvasiveRight, LeanRight};
    landGear[] = {LandGear, LandGearUp};
    zoomIn[] = {zoomIn, zoomInToggle};
    zoomOut[] = {zoomOut, zoomOutToggle};
    mouseConfirm[] = {DefaultAction, ActionContext, ActionFreeLook};
    moveUp[] = {GunElevUp, zeroingUp, heliUp, seagullUp };
    moveDown[] = {GunElevDown, zeroingDown, heliDown, seagullDown };
    autoHover[] = {AutoHover, AutoHoverCancel};
    speedModifier[] = {VehicleTurbo, GunElevSlow};
  };
};

class UserActionGroups
{
  class All
  {
    name = $STR_USRACT_GROUP_ALL;
    group[] = {
      MoveForward,
      MoveBack,
      TurnLeft,
      TurnRight,
      MoveUp,
      MoveDown,
      MoveFastForward,
      MoveSlowForward,
      MoveLeft,
      MoveRight,
      EvasiveLeft,
      EvasiveRight,
      Stand,
      Crouch,
      Prone,
      LeanLeft,
      LeanRight,
      LeanLeftToggle,
      LeanRightToggle,
      WalkRunToggle,
      WalkRunTemp,

      ToggleWeapons,
      SwitchWeapon,
      Fire,
      DefaultAction,
      ReloadMagazine,
      opticsMode,
      LockTargets,  // next / prev target - DIK_TAB
      LockEmptyTargets,
      LockTarget,   // lock target - RIGHT MOUSE BUTTON
      launchCM,
      nextCM,
      Throw,
      CycleThrownItems,
      RevealTarget,
      TacticalPing,
      TempRaiseWeapon,
      ToggleRaiseWeapon,
      PrevAction,
      NextAction,
      Action,
      ActionContext,
      ActionFreeLook,
      Headlights,
      NightVision,
      TransportNightVision,
      Binocular,
      Handgun,
      Compass,
      CompassToggle,
      uavView,
      uavViewToggle,
      Watch,
      WatchToggle,
      MiniMap,
      MiniMapToggle,
      ShowMap,
      HideMap,
      Help,
      TimeInc,
      TimeDec,
      CopyVersion,
      OpenDlcScreen,
      Optics,
      PersonView,
      TacticalView,
      ZoomIn,
      ZoomInToggle,
      ZoomOut,
      zoomOutToggle,
      // continuous zoom
	  ZoomContIn,
      ZoomContOut,
      ZeroingUp,
      ZeroingDown,
      GunElevUp,
      GunElevDown,
      GunElevSlow,
      GunElevAuto,
      LookAround,
      LookAroundToggle,
      LookLeftDown,
      LookDown,
      LookRightDown,
      LookLeft,
      LookCenter,
      LookRight,
      LookLeftUp,
      LookUp,
      LookRightUp,
      LookLeftCont,
      LookRightCont,
      LookDownCont,
      LookUpCont,

      LookShiftLeftCont,
      LookShiftRightCont,
      LookShiftUpCont,
      LookShiftDownCont,
      LookShiftForwardCont,
      LookShiftBackCont,
      LookRollLeftCont,
      LookRollRightCont,
      LookShiftLeft,
      LookShiftRight,
      LookShiftUp,
      LookShiftDown,
      LookShiftForward,
      LookShiftBack,
      LookRollLeft,
      LookRollRight,
      LookShiftCenter,
      FreeHeadMove,

      PrevChannel,
      NextChannel,
      Chat,
      VoiceOverNet,
      PushToTalk,
      PushToTalkAll,
      PushToTalkSide,
      PushToTalkCommand,
      PushToTalkGroup,
      PushToTalkVehicle,
      PushToTalkDirect,

      CommandingMenu1,
      CommandingMenu2,
      CommandingMenu3,
      CommandingMenu4,
      CommandingMenu5,
      CommandingMenu6,
      CommandingMenu7,
      CommandingMenu8,
      CommandingMenu9,
      CommandingMenu0,

      SelectGroupUnit1,
      SelectGroupUnit2,
      SelectGroupUnit3,
      SelectGroupUnit4,
      SelectGroupUnit5,
      SelectGroupUnit6,
      SelectGroupUnit7,
      SelectGroupUnit8,
      SelectGroupUnit9,
      SelectGroupUnit0,

      GroupPagePrev,
      GroupPageNext,

      SelectTeamRed,
      SelectTeamGreen,
      SelectTeamBlue,
      SelectTeamYellow,
      SelectTeamWhite,

      SetTeamRed,
      SetTeamGreen,
      SetTeamBlue,
      SetTeamYellow,
      SetTeamWhite,

      NetworkStats,
      SelectAll,
      Turbo,
      TurboToggle,
      VehicleTurbo,
      Slow,

      HoldBreath,
      Salute,
      SitDown,

      AimUp,
      AimDown,
      AimLeft,
      AimRight,

      AimHeadUp,
      AimHeadDown,
      AimHeadLeft,
      AimHeadRight,

      IngamePause,

      MenuSelect,
      NavigateMenu,
      CloseContext,
      ForceCommandingMode,
      SwitchCommand,
      // Helicopter control
      HeliThrottlePos,
      HeliThrottleNeg,
      HeliUp,
      HeliDown,
      HeliLeft,
      HeliRight,
      AirBankLeft,
      AirBankRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,

      HeliCollectiveRaise,
      HeliCollectiveLower,
      HeliCollectiveRaiseCont,
      HeliCollectiveLowerCont,
      HeliCyclicLeft,
      HeliCyclicRight,
      CyclicForward,
      CyclicBack,

      AutoHover,
      AutoHoverCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,
      HelicopterTrimOn,
      HelicopterTrimOff,

      heliWheelsBrake,
      HeliTrimLeft,
      HeliTrimRight,
      HeliTrimForward,
      HeliTrimBackward,
      HeliTrimRudderLeft,
      HeliTrimRudderRight,
      HeliRopeAction,
      AirPlaneBrake,
      // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward,

      // Car control
      CarLeft,
      CarRight,
      CarLinearLeft,
      CarLinearRight,
      CarWheelLeft,
      CarWheelRight,
      CarForward,
      CarBack,
      CarHandBrake,
      CarFastForward,
      CarSlowForward,
/*
      IndicateLeft,
      IndicateRight,
      IndicateHazard,
*/
      CarAimUp,
      CarAimDown,
      CarAimLeft,
      CarAimRight,

      // Vehicle commands
      CommandLeft,
      CommandRight,
      CommandForward,
      CommandBack,
      CommandFast,
      CommandSlow,
      SwitchGunnerWeapon,

      // next / prev target in vehicles
	  VehLockTargets,
      VehLockEmptyTargets,

      SwapGunner,
      HeliManualFire,
      TurnIn,
      TurnOut,
/*  VBS_3_TI
      InteractVeh,
      PersItems,
      QuickEnter,
*/
      GetOut,
      Eject,
/*  VBS_3_TI
      CommanderOverride,

      TI_Brightness_Inc,
      TI_Brightness_Dec,
      TI_Contrast_Inc,
      TI_Contrast_Dec,
      TI_AutoContrast_Toggle,
*/
      CancelAction,

      CommandWatch,

      TeamSwitch,
      TeamSwitchPrev,
      TeamSwitchNext,
      Gear,

      Cheat1,
      Cheat2,

      Diary,

      Surrender,
      GetOver,
      TurretElevationUp,
      TurretElevationDown,
    };
  };
  class BasicInfantryControls
  {
    name = $STR_USRACT_GROUP_INFANTRY;
    group[] = {
        SwimUp,
        SwimDown,
        AdjustUp,
        AdjustLeft,
        AdjustDown,
        AdjustRight,
        MoveForward,
        MoveBack,
        TurnLeft,
        TurnRight,
        MoveFastForward,
        MoveSlowForward,
        MoveLeft,
        MoveRight,
        EvasiveLeft,
        EvasiveRight,
        Stand,
        Crouch,
        Prone,
        LeanLeft,
        LeanRight,
        LeanLeftToggle,
        LeanRightToggle,
        WalkRunToggle,
        WalkRunTemp,

        ToggleWeapons,
        SwitchWeapon,
        DefaultAction,
        ReloadMagazine,
        Throw,
        CycleThrownItems,

        LockTargets,  // next / prev target - DIK_TAB
        LockEmptyTargets,
        LockTarget,   // lock target - RIGHT MOUSE BUTTON
        RevealTarget,
        TacticalPing,
        TempRaiseWeapon,
        ToggleRaiseWeapon,
        PrevAction,
        NextAction,
        NavigateMenu,
        CloseContext,
        Action,
        ActionContext,
        ActionFreeLook,

        Optics,
        LookAround,
        LookAroundToggle,

        TeamSwitch,
        TeamSwitchPrev,
        TeamSwitchNext,

        Gear,
        Compass,
        CompassToggle,
        uavView,
        uavViewToggle,
        Watch,
        WatchToggle,
        MiniMap,
        MiniMapToggle,

        ForceCommandingMode,
        Diary,

        Headlights,
        NightVision,
        Binocular,
        Handgun,
        ShowMap,
        HideMap,

        PersonView,
        TacticalView,

        ZoomIn,
        ZoomInToggle,
        ZoomOut,
        zoomOutToggle,
        ZeroingUp,
        ZeroingDown,

        GunElevUp,
        GunElevDown,
        GunElevSlow,
        GunElevAuto,

        HoldBreath,
        Salute,
        SitDown,
        Surrender,
        GetOver,

        VoiceOverNet,
        PrevChannel,
        NextChannel,
        Chat,
        PushToTalk,
        PushToTalkAll,
        PushToTalkSide,
        PushToTalkCommand,
        PushToTalkGroup,
        PushToTalkVehicle,
        PushToTalkDirect,

        CommandingMenu1,
        CommandingMenu2,
        CommandingMenu3,
        CommandingMenu4,
        CommandingMenu5,
        CommandingMenu6,
        CommandingMenu7,
        CommandingMenu8,
        CommandingMenu9,
        CommandingMenu0,

        SelectGroupUnit1,
        SelectGroupUnit2,
        SelectGroupUnit3,
        SelectGroupUnit4,
        SelectGroupUnit5,
        SelectGroupUnit6,
        SelectGroupUnit7,
        SelectGroupUnit8,
        SelectGroupUnit9,
        SelectGroupUnit0,

        GroupPagePrev,
        GroupPageNext,

        SelectTeamRed,
        SelectTeamGreen,
        SelectTeamBlue,
        SelectTeamYellow,
        SelectTeamWhite,

        SetTeamRed,
        SetTeamGreen,
        SetTeamBlue,
        SetTeamYellow,
        SetTeamWhite,

        AimUp,
        AimDown,
        AimLeft,
        AimRight,

        AimHeadUp,
        AimHeadDown,
        AimHeadLeft,
        AimHeadRight,

        LookLeftDown,
        LookDown,
        LookRightDown,
        LookLeft,
        LookCenter,
        LookRight,
        LookLeftUp,
        LookUp,
        LookRightUp,
        LookLeftCont,
        LookRightCont,
        LookDownCont,
        LookUpCont
    };
  };
  class Car
  {
    name = $STR_USRACT_GROUP_VEHICLE;
    group[] = {
        // Car control
        CarLeft,
        CarRight,
        CarLinearLeft,
        CarLinearRight,
        CarWheelLeft,
        CarWheelRight,
        CarForward,
        CarBack,
        CarHandBrake,
        CarFastForward,
        CarSlowForward,
/*
        IndicateLeft,
        IndicateRight,
        IndicateHazard,
*/
        CarAimUp,
        CarAimDown,
        CarAimLeft,
        CarAimRight,

//we want only full-auto gearbox
//        CarGearUp,
//        CarGearDwn,

        TurnIn,
        TurnOut,
/* VBS_3_TI
        InteractVeh,
        PersItems,
        QuickEnter,
        CommanderOverride,
*/
        GetOut,
        Eject,

        Fire,
        SwitchGunnerWeapon,

        TransportNightVision
    };
  };
  class Air
  {
    name = $STR_USRACT_GROUP_FLYING;
    group[] = {
      // Helicopter control
      HeliUp,
      HeliDown,
      HeliThrottlePos,
      HeliThrottleNeg,
      HeliLeft,
      HeliRight,
      AirBankLeft,
      AirBankRight,
      HeliRudderLeft,
      HeliRudderRight,
      HeliForward,
      HeliBack,
      HeliFastForward,
      HeliManualFire,
      VTOLVectoring,
      VTOLVectoringCancel,
      LandGear,
      LandGearUp,
      FlapsDown,
      FlapsUp,

/* VBS_3_TI
      InteractVeh,
      PersItems,
      QuickEnter,
      CommanderOverride,
*/
      GetOut,
      Eject,
      // Seagull control
      SeagullUp,
      SeagullDown,
      SeagullForward,
      SeagullBack,
      SeagullFastForward,

      Fire,
      SwitchGunnerWeapon,

      LookShiftLeftCont,
      LookShiftRightCont,
      LookShiftUpCont,
      LookShiftDownCont,
      LookShiftForwardCont,
      LookShiftBackCont,
      LookRollLeftCont,
      LookRollRightCont,
      LookShiftLeft,
      LookShiftRight,
      LookShiftUp,
      LookShiftDown,
      LookShiftForward,
      LookShiftBack,
      LookRollLeft,
      LookRollRight,
      LookShiftCenter,
      FreeHeadMove,
      AirPlaneBrake
    };
  };

  //Adding a dedicated group for helicopters
  class Helicopter
  {
    name = $STR_USRACT_GROUP_HELI;
    group[] =
    {
      HeliCyclicForward,
      HeliCyclicBack,
      HeliCyclicLeft,
      HeliCyclicRight,
      HeliCollectiveRaiseCont,
      HeliCollectiveLowerCont,
      HeliCollectiveRaise,
      HeliCollectiveLower,
      HeliRudderLeft,
      HeliRudderRight,
      HeliLeft,
      HeliRight,
      //HeliFastForward, ? Not relevant for TKOH?
      AutoHover,
      AutoHoverCancel,

      heliWheelsBrake,
      LandGear,
      LandGearUp,
      HelicopterTrimOn,
      HelicopterTrimOff,
      HeliTrimLeft,
      HeliTrimRight,
      HeliTrimForward,
      HeliTrimBackward,
      HeliTrimRudderLeft,
      HeliTrimRudderRight,
      HeliRopeAction,

      minimap,
      minimapToggle,
      uavView,
      uavViewToggle,

      GetOut,
      Eject,

      LockTarget,
      VehLockTargets,
      VehLockEmptyTargets,
      DefaultAction,
      Fire,
      SwitchGunnerWeapon,
      launchCM,

      FreeHeadMove,
      LookShiftLeftCont,
      LookShiftRightCont,
      LookShiftUpCont,
      LookShiftDownCont,
      LookShiftForwardCont,
      LookShiftBackCont,
      LookRollLeftCont,
      LookRollRightCont,
      LookShiftLeft,
      LookShiftRight,
      LookShiftUp,
      LookShiftDown,
      LookShiftForward,
      LookShiftBack,
      LookRollLeft,
      LookRollRight,
      LookShiftCenter
    };
  };

  //Adding a dedicated group for submarines
  class Submarine
  {
    name = $STR_USRACT_GROUP_SUBMARINE;
    group[] =
    {
      submarineUp,
      submarineDown,
      submarineLeft,
      submarineRight,
      submarineForward,
      submarineBack,
      submarineCyclicForward,
      submarineCyclicBack,

      GetOut,
      Eject,

      FreeHeadMove,
      LookShiftLeftCont,
      LookShiftRightCont,
      LookShiftUpCont,
      LookShiftDownCont,
      LookShiftForwardCont,
      LookShiftBackCont,
      LookRollLeftCont,
      LookRollRightCont,
      LookShiftLeft,
      LookShiftRight,
      LookShiftUp,
      LookShiftDown,
      LookShiftForward,
      LookShiftBack,
      LookRollLeft,
      LookRollRight,
      LookShiftCenter
    };
  };

  class Buldozer
  {
    name = $STR_USRACT_GROUP_BULDOZER;
    group[] = {
      // Buldozer actions
      BuldSwitchCamera,
      BuldFreeLook,
      BuldSelect,
      BuldResetCamera,
      BuldMagnetizePoints,
      BuldMagnetizePlanes,
      BuldMagnetizeYFixed,
      BuldTerrainRaise1m,
      BuldTerrainRaise10cm,
      BuldTerrainLower1m,
      BuldTerrainLower10cm,
      BuldTerrainRaise5m,
      BuldTerrainRaise50cm,
      BuldTerrainLower5m,
      BuldTerrainLower50cm,
      BuldTerrainShowNode,
      BuldSelectionType,
      BuldLeft,
      BuldRight,
      BuldForward,
      BuldBack,
      BuldMoveLeft,
      BuldMoveRight,
      BuldMoveForward,
      BuldMoveBack,
      BuldTurbo,
      BuldUp,
      BuldDown,
      BuldLookLeft,
      BuldLookRight,
      BuldLookUp,
      BuldLookDown,
      BuldZoomIn,
      BuldZoomOut,
      BuldTextureInfo,
      //////// Brush actions
      BuldBrushRatio,
      BuldBrushStrength,
      BuldBrushSmooth,
      BuldBrushRandomize,
      BuldBrushSetHeight,
      BuldBrushOuter,
      //////// Undo Redo
      BuldUndo,
      BuldRedo,
      // objects tools
      BuldCreateObj,
      BuldDuplicateSel,
      BuldRemoveSel,
      BuldRotateSelX,// rotate around Y is default
      BuldRotateSelZ,
      BuldScaleSel,
      BuldElevateSel,
      BuldKeepAbsoluteElevationSel,
      BuldClearAllElevationLocks
    };
  };
  class UserActions
  {
    name = $STR_USRACT_GROUP_USER;
    group[] = {
      // Specific User actions used in addons
      User1,
      User2,
      User3,
      User4,
      User5,
      User6,
      User7,
      User8,
      User9,
      User10,
      User11,
      User12,
      User13,
      User14,
      User15,
      User16,
      User17,
      User18,
      User19,
      User20
    };
  };
};
