class PhysXMaterials
{
  // for more see:
  //http://www.physxforquest.com/onlineHelp/DynamXChannels/Channels/DynamX_Materials/Material_Description.htm

  // base material - just for inheritance purposed
  class PhysXMaterialBase
  {
    // sets if this is the default material (can be only one)
    isDefault = false;

    restitution =  0.0;
    staticFriction = 1.5;
    dynamicFriction = 1.5;
  };

  // default material
  class Default: PhysXMaterialBase
  {
    isDefault = true;
    restitution =  0.0;
    staticFriction = 1.0;
    dynamicFriction = 0.6;
  };

  // Make the terrain with very low friction, so that wheels can slide on it well (the real friction must be thus used on the objects)
  class Terrain: PhysXMaterialBase
  {
    restitution = 0.1;
    staticFriction = 0.1;
    dynamicFriction = 0.1;
  };

  // Material for car wheels
  class Wheel: PhysXMaterialBase
  {
    restitution = 0.0;
    staticFriction = 3.5;
    dynamicFriction = 3.5;
  };

  // Material for DriveOn parts (also for Airplane/heli wheels)
  class DriveOn: PhysXMaterialBase
  {
    restitution = 0.0;
    staticFriction = 0.3;
    dynamicFriction = 0.3;
  };

  // Set the destroyed wheel material
  class WheelDestroyed: PhysXMaterialBase
  {
    restitution = 0.0;
    staticFriction = 2.0;
    dynamicFriction = 2.0;
  };

  // material for ragdoll shapes
  class Ragdoll: PhysXMaterialBase
  {
    restitution = 0.3;
    staticFriction = 3.0;
    dynamicFriction = 3.0;
  };

  // default material
  class Grenade: PhysXMaterialBase
  {
    restitution =  0.1;
    staticFriction = 3.0;
    dynamicFriction = 1.5;
  };
};

/// general parameters for physx
class PhysXParams
{
  /// coefficient for epe contacts on applying impulse damage
  epeImpulseDamageCoef = 30.0;

  /// threshold angle used when comparing the angle between collision point direction and suspension direction. Value must be in range (0, Pi).
  wheelPointRejectAngle = Pi/4.0;
  /// Threshold angle used when comparing the angle between negative surface normal and suspension direction. Value must be in range (0, Pi).
  wheelNormalRejectAngle = Pi/4.0;

  /// coefficient used to multiply impulse force when adding force to ragdoll (impulse force is force from shell hits, explosion hits, etc.)
  impulseForceRagdollCoef = 200;
  /// coefficient used to multiply impulse torque when adding torque to ragdoll (impulse torque is torque from shell hits, explosion hits, etc.)
  impulseTorqueRagdollCoef = 100;
  /// maximal possible magnitude of force added tor ragdoll
  maxRagdollImpulseForceMagnitude = 500;
  /// maximal possible magnitude of torque added tor ragdoll
  maxRagdollImpulseTorqueMagnitude = 150;

  /// coefficient used to ragdoll buoyancy force computation (this should be sligthly smaller than gravity constant 9.81)
  ragdollUnderwaterBuoyancyCoef = 9.7;
  /// coefficient used to for ragdoll water resistance force
  ragdollUnderwaterResistanceCoef = 0.005;

  /// when the soldier collides with the object, that has speed larger then this limit, it will start ragdoll (speed is in m/s)
  ragdollOnCollideSpeedLimit = 4.0;
  /// when the soldier collides with the object, that has mass larger then this limit, it will start ragdoll 
  ragdollOnCollideMassLimit = 200.0;
  /// coefficient, that is used to multiply speed of the object to get the force, that is applied to ragdoll on object collision
  ragdollOnCollideForceCoef = 20.0;
  /// maximal possible force applied to ragdoll at collision with object
  ragdollOnCollideMaxForce = 50.0;
  /// max distance that the soldier can be shifted when it collides with object (in m)
  ragdollOnCollideMaxOffset = 2.0;
  /// speed of the colliding object at which the offset will gain its max value (that is ragdollOnCollideMaxOffset) - in m/s
  ragdollOnCollideMaxOffsetSpeed = 50.0;
  /// coefficient that is used to multiply impulse that is applied to a vehicle when colliding with ragdoll (this is used only when ragdollVehicleCollision is false)
  ragdollOnCollideVehicleImpulseCoef = 2.0;

  /// coefficient used for sleep linear velocity when soldier is unconscious (not dead) (higher coef -> ragdoll will sleep sooner)
  /// we want to be this higher then normal (1.0), because we want the ragdoll to end sooner when soldier is not dead
  ragdollUnconsciousSleepCoef = 1.2;


  /// time of hit ragdoll animation (in s)
  ragdollHitTime = 0.2;
  /// coef used to multiply force of hit
  ragdollHitForceCoef = 10.0;
  /// damage limit for hit ragdoll animation to start (set to <0 to disable)
  ragdollHitDmgLimit = 0.0;

  /// collision of dynamic ragdoll parts with vehicles
  ragdollVehicleCollision = false;
};


// general limits class
class RagDollDefaultLimit
{
  // The angle / position beyond which the limit is active
  // angle in degrees (-180, 180)
  // or position (-inf, inf)
  value = 0;
  // limit bounce [0,1]
  restitution = 0.9;
  // limit can be made softer by setting this to less than 1
  // probably not implemented yet in PhysX!
  hardness = 0.5;
};

// general spring class
class RagDollDefaultSpring
{
  // if the spring is enabled
  enabled = false;
  // spring coefficient [0, inf)
  value = 0.5;
  // damper coefficient [0, inf)
  damper = 1;
  // target value (angle/position) of spring where the spring force is zero
  // angle in degrees (-180, 180]
  targetValue = 0;
};

// general values for spherical joint
class RagDollSphericalJoint
{
  // low twist limit
  class TwistLimitLow: RagDollDefaultLimit {};
  // high twist limit
  class TwistLimitHigh: RagDollDefaultLimit {};
  // swing limit
  class SwingLimit: RagDollDefaultLimit {};
  // twist spring
  class TwistSpring: RagDollDefaultSpring 
  {
    enabled = true;
  };
  // swing spring
  class SwingSpring: RagDollDefaultSpring
  {
    enabled = true;
	// damper coefficient [0, inf)
	damper = 2;	
  };
  // joint spring
  class JointSpring: RagDollDefaultSpring
  {
    enabled = false;
  };
 
  // type
  type = "spherical";
  // collision
  enableCollision = false;
  // projection distance
  projectionDistance = 0.05;
  // projection mode
  projectionMode = "point";
};

// general valuies for revolute joint
class RagDollRevoluteJoint
{
  // low limit
  class LimitLow: RagDollDefaultLimit {};
  // high limit
  class LimitHigh: RagDollDefaultLimit {};
  // spring
  class Spring: RagDollDefaultSpring 
  {
    enabled = false;
  };

  // type
  type = "revolute";
  // collision
  enableCollision = false;
  // projection distance
  projectionDistance = 0.05;
  // projection mode
  projectionMode = "point";
};

/// Ragdoll D6 joint - used for PhysX3 ragdoll joints
class RagDollD6Joint_PX3
{
  /// type
  type = "D6";
  /// collision
  enableCollision = false;
  /// projection distance
  projectionDistance = 0.05;
  // projection mode
  projectionMode = "point";


  /// swing limit around y-axis (in degrees) (if 0, then swing is disabled)
  swingLimitY = 0.0;
  /// swing limit around z-axis (in degrees) (if 0, then swing is disabled)
  swingLimitZ = 0.0;
  /// swing spring - when enabled, limit is soft (by default disabled)
  swingSpring = 0.0;
  /// swing spring damping
  swingDamping = 0.0;
  /// swing restitution [0,1] - 0 = actor stops motion when reaching limit, 1 = actor bounces with the same speed when he reaches limit
  swingRestitution = 0.6;
  /// swing contact distance - distance from limit, where limit becomes active (must be > 0 and lower than actual limit)
  swingContactDistance = 0.05;

  /// twist limit (rotation around x-axis) (in degrees) (if 0, then twist is disabled)
  twistLimitLower = 0.0;
  twistLimitUpper = 0.0;
  /// twist spring - when enabled, limit is soft (by default disabled)
  twistSpring = 0.0;
  /// twist spring damping
  twistDamping = 0.0;
  /// twist restitution [0,1] - 0 = actor stops motion when reaching limit, 1 = actor bounces with the same speed when he reaches limit
  twistRestitution = 0.6;
  /// twist contact distance - distance from limit, where limit becomes active (must be > 0 and lower than actual limit)
  twistContactDistance = 0.05;

  /// parameters for drive -> drive is used to force the actors to their default position
  /// drive spring
  driveSpring = 20.0;
  /// drive damping
  driveDamping = 20.0;
  /// drive max force
  driveMaxForce = 1000000.0;
  /// drive spring is for the acceleration at the joint (rather than the force) 
  driveUseAcceleration = true;

  /* drive spring values if joint is in water. 
   * If not defined, normal values are taken instead
  driveSpringWater = 20.0;
  /// drive damping
  driveDampingWater = 20.0;
  /// drive max force
  driveMaxForceWater = 1000000.0;
  /// drive spring is for the acceleration at the joint (rather than the force) 
  driveUseAccelerationWater = true;
  */

  /// target goal linear velocity for joint drive
  driveLinearVelocity[] = {0,0,0};
  /// target goal angular velocity for joint drive
  driveAngularVelocity[] = {0,0,0};
};

/// skeletons for ragdoll
class CfgRagDollSkeletons
{
  class BaseRagdoll
  {
    /// name of idle animation (used for hands)
    idleAnim = "";

    ///----------------------------------------------------------
    // weapon bones
    ///----------------------------------------------------------
    /// bone of the ragdoll that represents primary weapon
    primaryWeaponBone = "";
    /// bone of the ragdoll that represents secondary weapon
    secondaryWeaponBone = "";
    /// bone synchronized over network
    networkBonePrimary = "";
    networkBoneSecondary = "";

    ///----------------------------------------------------------
    // Weapon sleep params
    // - this params are  used for dropped weapons - weapon is being simulated by PhysX - when the weapon stopped moving, it is converted to weapon holder
    ///----------------------------------------------------------
    /// weapon linear velocity limit - when the weapon actor reaches this value, we suppose the weapon stopped moving 
    weaponSleepLinearVelocity = 0.1;
    /// weapon angular velocity limit - when the weapon actor reaches this value, we suppose the weapon stopped moving 
    weaponSleepAngularVelocity = 0.1;
    /// minimum time the dropped weapon is being simulated, before it can be put to sleep (in seconds)
    weaponDropMinTime = 1.0;
    /// maximum time the dropped weapon is being simulated - after this time it is put to sleep (in seconds)
    weaponDropMaxTime = 100.0;
    /// distance limit for weapon simulation end (im meters) 
    weaponDistanceLimit = 0.05;
    /// time in seconds for distance limit testing (when the weapon does not move for more than weaponDistanceLimit length during this time, simulation ends)
    weaponDistanceLimitTime = 5.0;

    ///----------------------------------------------------------
    // Ragdoll sleep params
    // Ragdoll (the root item of ragdoll) is being tested for velocities - when the velocity reaches some value,
    // we stop ragdoll moving
    ///----------------------------------------------------------
    /// ragdoll linear velocity limit - when the ragdoll actor reaches this value, we suppose the body stopped moving 
    sleepLinearVelocity = 0.05;
    /// ragdoll angular velocity limit - when the ragdoll actor reaches this value, we suppose the body stopped moving 
    sleepAngularVelocity = 0.05;
    /// minimum time the ragdoll is simulated (before this time we do not test for sleep) - in seconds
    simulateMinTime = 1.0;
    /// maximum time the ragdoll being simulated - after this time it is put to sleep - in seconds
    simulateMaxTime = 100.0;
    /// distance limit for ragdoll simulation end (im meters) 
    simulateDistanceLimit = 0.05;
    /// time in seconds for distance limit testing (when the ragdoll does not move for more than weaponDistanceLimit length during this time, simulation ends)
    simulateDistanceLimitTime = 5.0;

    ///----------------------------------------------------------
    /// blending constants
    ///----------------------------------------------------------
    /// time of ragdoll recovery blending (in s) (that means recovery from ragdoll to animation)
    recoveryBlendTime = 0.3;
    /// cosinus of limiting angle for ragdoll recovery blending (-1...1) - we can blend only when cos of angle between ragdoll and animation direction is higher than this value
    recoveryCosLimit = 0.3;
    /// distance limit for ragdoll recovery blending (iin m) - we can blend only when distance of ragdoll and animation is lower than this value
    recoveryDistLimit = 0.7;
    /// time (in s) of blending between animation and ragdoll (when ragdoll starts simulating)
    animBlendTime = 0.05;
  };


  class Soldier : BaseRagdoll
  {
    //----------------------------------------------------
    //----------------------------------------------------
    // General
    //----------------------------------------------------
    //----------------------------------------------------
    
    /// name of idle animation (used for hands)
    //idleAnim = "a3\anims_f\data\anim\sdr\idl\erc\stp\non\non\aidlpercmstpsnonwnondnon_g01.rtm";

    /// bone of the ragdoll that represents primary weapon
    primaryWeaponBone = "weapon";
    /// bone of the ragdoll that represents secondary weapon
    secondaryWeaponBone = "launcher";
    /// primary bone synchronized over network
    networkBonePrimary = "chest";
    /// secondary bone synchronized over network
    networkBoneSecondary = "pelvis";

    /// mask used when dragging and carrying
    draggingMask = "dragging";
    /// mask used when the soldier is hit
    hitMask = "hit";
    hitMaskUnderwater = "hitUnderwater";

    /// all bones the weapon bones can be linked to
    class WeaponLinkBones
    {
      class LinkBone1
      {
        // ragdoll bone name
        bone = "leftHand";
        // can weapon be dropped if it is linked to this bone?
        canBeDropped = true;
        // prefference coefficient for this link (used to determine which bone the weapon should be linked to)
        prefference = 1.0;
      };
      class LinkBone2
      {
        // ragdoll bone name
        bone = "rightHand";
        // can weapon be dropped if it is linked to this bone?
        canBeDropped = true;
        // prefference coefficient for this link (used to determine which bone the weapon should be linked to)
        prefference = 2.0;
      };
      class LinkBone3
      {
        // ragdoll bone name
        bone = "chest";
        // can weapon be dropped if it is linked to this bone?
        canBeDropped = true;
        // prefference coefficient for this link (used to determine which bone the weapon should be linked to)
        prefference = 1.0;
      };
    };

    class Masks
    {
      class DraggingMask
      {
        name = "dragging";
        mask[] = {
          // name         blend   anim  
          {"pelvis"       ,0,     true},
          {"chest"        ,0,     true},
          {"head"         ,0.6,  false},
          {"leftArm"      ,1,     false},
          {"leftForeArm"  ,1,     false},
          {"leftHand"     ,1,     false},
          {"rightArm"     ,1,     false},
          {"rightForeArm" ,1,     false},
          {"rightHand"    ,1,     false},
          {"leftUpLeg"    ,1,     false},
          {"leftLeg"      ,1,     false},
          {"leftFoot"     ,1,     false},
          {"rightUpLeg"   ,1,     false},
          {"rightLeg"     ,1,     false},
          {"rightFoot"    ,1,     false},
          {"weapon"       ,0,     true},
          {"launcher"     ,0,     true}
        };
      };

      class HitMask
      {
        name = "hit";
        mask[] = {
          // name         blend   anim   
          {"pelvis"       ,1,  false},
          {"chest"        ,1,  false},
          {"head"         ,1,  false},
          {"leftArm"      ,1,  false},
          {"leftForeArm"  ,1,  false},
          {"leftHand"     ,1,  false},
          {"rightArm"     ,1,  false},
          {"rightForeArm" ,1,  false},
          {"rightHand"    ,1,  false},
          {"leftUpLeg"    ,1,  false},
          {"leftLeg"      ,1,  false},
          {"leftFoot"     ,1,  true},
          {"rightUpLeg"   ,1,  false},
          {"rightLeg"     ,1,  false},
          {"rightFoot"    ,1,  true},
          {"weapon"       ,0,  false},
          {"launcher"     ,1,  false}
        };
      };

      class HitMaskUnderwater
      {
        name = "hitUnderwater";
        mask[] = {
          // name         blend   anim   
          {"pelvis"       ,1,  true},
          {"chest"        ,1,  true},
          {"head"         ,1,  false},
          {"leftArm"      ,1,  false},
          {"leftForeArm"  ,1,  false},
          {"leftHand"     ,1,  false},
          {"rightArm"     ,1,  false},
          {"rightForeArm" ,1,  false},
          {"rightHand"    ,1,  false},
          {"leftUpLeg"    ,1,  false},
          {"leftLeg"      ,1,  false},
          {"leftFoot"     ,1,  false},
          {"rightUpLeg"   ,1,  false},
          {"rightLeg"     ,1,  false},
          {"rightFoot"    ,1,  false},
          {"weapon"       ,1,  false},
          {"launcher"     ,1,  false}
        };
      };


    };


    //----------------------------------------------------
    //----------------------------------------------------
    // Bones
    //----------------------------------------------------
    //----------------------------------------------------

    class BaseRagdollBone
    {
      // name of material in PhysXMaterials
      material = "Ragdoll";
      // if animation (not ragdoll!) bones, that are "children" of this bone should use the position in which they were during ragdoll start
      childrenUseStartTrans = true;
      // if animation (not ragdoll!) bones, that are "children" of this bone should use the transformation from idle anim
      childrenUseIdleAnim = false;
    };

    class Bones
    {
      class Pelvis: BaseRagdollBone
      {
        name = "pelvis";
        type = "capsule";
        startBone = "pelvis";
        endBone = "spine2";
        mass = 15;
		radius= 0.12;
        networkType = "root";
      };
      class Chest: BaseRagdollBone
      {
        name = "chest";
        type = "capsule";
        startBone = "spine1";
        endBone = "neck";
		radius= 0.16;
        mass = 15;
      };
      class Head: BaseRagdollBone
      {
        name = "head";
        type = "sphere";
        startBone = "head";
        mass = 8;
        radius = 0.16;
      };
      //--------------------------------
      class LeftArm: BaseRagdollBone
      {
        name = "leftArm";
        type = "capsule";
        startBone = "leftArm";
        endBone = "leftForeArm";
        mass = 8;
      };
      class LeftForeArm: BaseRagdollBone
      {
        name = "leftForeArm";
        type = "capsule";
        startBone = "leftForeArm";
        endBone = "leftHand";
        mass = 6;
      };
      class LeftHand: BaseRagdollBone
      {
        name = "leftHand";
        type = "sphere";
        startBone = "leftHand";
        mass = 6;
        radius = 0.08;
        childrenUseStartTrans = false;
        childrenUseIdleAnim = true;
        networkType = "leftHand";
      };
      //--------------------------------
      class RightArm: BaseRagdollBone
      {
        name = "rightArm";
        type = "capsule";
        startBone = "rightArm";
        endBone = "rightForeArm";
        mass = 8;
      };
      class RightForeArm: BaseRagdollBone
      {
        name = "rightForeArm";
        type = "capsule";
        startBone = "rightForeArm";
        endBone = "rightHand";
        mass = 6;
      };
      class RightHand: BaseRagdollBone
      {
        name = "rightHand";
        type = "sphere";
        startBone = "rightHand";
        mass = 6;
        radius = 0.08;
        childrenUseStartTrans = false;
        childrenUseIdleAnim = true;
        networkType = "rightHand";
      };
      //--------------------------------
      class LeftUpLeg: BaseRagdollBone
      {
        name = "leftUpLeg";
        type = "capsule";
        startBone = "leftUpLeg";
        endBone = "leftLeg";
        mass = 15;
      };
      class LeftLeg: BaseRagdollBone
      {
        name = "leftLeg";
        type = "capsule";
        startBone = "leftLeg";
        endBone = "leftFoot";
        mass = 10;
      };
      class LeftFoot: BaseRagdollBone
      {
        name = "leftFoot";
        type = "box";
        startBone = "leftFoot";
        size[] = {0.15,0.035,0.07};
        mass = 8;
        networkType = "leftFoot";
      };
      //--------------------------------
      class RightUpLeg: BaseRagdollBone
      {
        name = "rightUpLeg";
        type = "capsule";
        startBone = "rightUpLeg";
        endBone = "rightLeg";
        mass = 15;
      };
      class RightLeg: BaseRagdollBone
      {
        name = "rightLeg";
        type = "capsule";
        startBone = "rightLeg";
        endBone = "rightFoot";
        mass = 10;
      };
      class RightFoot: BaseRagdollBone
      {
        name = "rightFoot";
        type = "box";
        startBone = "rightFoot";
        size[] = {0.15,0.035,0.07};
        mass = 8;
        networkType = "rightFoot";
      };

      //--------------------------------
      class Weapon: BaseRagdollBone
      {
        name = "weapon";
        type = "weapon";
        startBone = "weapon";
        endPosRelToStart[] = {0.0, 1.0, 0.0};
        mass = 3;
      };
      class Launcher: BaseRagdollBone
      {
        name = "launcher";
        type = "weapon";
        startBone = "launcher";
        endPosRelToStart[] = {1.0, 0.0, 0.0};
        mass = 3;
      };
    };

    //----------------------------------------------------
    //----------------------------------------------------
    // Joints PhysX2
    //----------------------------------------------------
    //----------------------------------------------------

    class JointsPX2
    {
      class Pelvis_Chest_PX2: RagDollSphericalJoint
      {
        name = "pelvis_chest";
        bone1 = "pelvis";
        bone2 = "chest";
        axis[] = {0,1,0.3};

        class SwingLimit: SwingLimit {value = 25;};
        class TwistLimitLow: TwistLimitLow { value = -15; };
        class TwistLimitHigh: TwistLimitHigh { value = 25; };
      };

      class Chest_Head_PX2: RagDollSphericalJoint
      {
        name = "chest_head";
        bone1 = "chest";
        bone2 = "head";

        class SwingLimit: SwingLimit {value = 20;};
        class TwistLimitLow: TwistLimitLow { value = -15; };
        class TwistLimitHigh: TwistLimitHigh { value = 15; };
      };

      //----------------------------------------------------
      class Chest_LeftArm_PX2: RagDollSphericalJoint
      {
        name = "chest_leftArm";
        bone1 = "chest";
        bone2 = "leftArm";
        axis[] = {-1, -0.0, 0.5};
        enableCollision = true;

        class SwingLimit: SwingLimit {value = 60;};
        class TwistLimitLow: TwistLimitLow { value = -20; };
        class TwistLimitHigh: TwistLimitHigh { value = 20; };
      };

      class LeftArm_LeftForeArm_PX2: RagDollRevoluteJoint
      {
        name = "leftArm_leftForeArm";
        bone1 = "leftArm";
        bone2 = "leftForeArm";
        axis[] = {1,-1,0.2};

        class LimitLow: LimitLow {value = -2;};
        class LimitHigh: LimitHigh { value = 60; };
      };

      class LeftForeArm_LeftHand_PX2: RagDollSphericalJoint
      {
        name = "leftForeArm_leftHand";
        bone1 = "leftForeArm";
        bone2 = "leftHand";

        class SwingLimit: SwingLimit {value = 20;};
        class TwistLimitLow: TwistLimitLow { value = -5; };
        class TwistLimitHigh: TwistLimitHigh { value = 5; };
      };

      //----------------------------------------------------
      class Chest_RightArm_PX2: RagDollSphericalJoint
      {
        name = "chest_rightArm";
        bone1 = "chest";
        bone2 = "rightArm";
        axis[] = {1, -0.0, 0.5};
        enableCollision = true;

        class SwingLimit: SwingLimit {value = 60;};
        class TwistLimitLow: TwistLimitLow { value = -20; };
        class TwistLimitHigh: TwistLimitHigh { value = 20; };
      };

      class RightArm_RightForeArm_PX2: RagDollRevoluteJoint
      {
        name = "rightArm_rightForeArm";
        bone1 = "rightArm";
        bone2 = "rightForeArm";
        axis[] = {1,1,-0.2};

        class LimitLow: LimitLow {value = -2;};
        class LimitHigh: LimitHigh { value = 60; };
      };

      class RightForeArm_RightHand_PX2: RagDollSphericalJoint
      {
        name = "rightForeArm_rightHand";
        bone1 = "rightForeArm";
        bone2 = "rightHand";

        class SwingLimit: SwingLimit {value = 20;};
        class TwistLimitLow: TwistLimitLow { value = -5; };
        class TwistLimitHigh: TwistLimitHigh { value = 5; };
      };

      //----------------------------------------------------

      class Pelvis_LeftUpLeg_PX2: RagDollSphericalJoint
      {
        name = "pelvis_leftUpLeg";
        bone1 = "pelvis";
        bone2 = "leftUpLeg";
        axis[] = {-1.5, -1.1, 2};
        enableCollision = true;

        class SwingLimit: SwingLimit {value = 45;};
        class TwistLimitLow: TwistLimitLow { value = -10; };
        class TwistLimitHigh: TwistLimitHigh { value = 20; };
      };

      class LeftUpLeg_LeftLeg_PX2: RagDollRevoluteJoint
      {
        name = "leftUpLeg_leftLeg";
        bone1 = "leftUpLeg";
        bone2 = "leftLeg";
        axis[] = {-1,0,0};

        class LimitLow: LimitLow {value = -5;};
        class LimitHigh: LimitHigh { value = 110; };
      };

      class LeftLeg_LeftFoot_PX2: RagDollRevoluteJoint
      {
        name = "leftLeg_leftFoot";
        bone1 = "leftLeg";
        bone2 = "leftFoot";
        axis[] = {-1,0,0};

        class LimitLow: LimitLow {value = -15;};
        class LimitHigh: LimitHigh { value = 45; };
      };

      //----------------------------------------------------

      class Pelvis_RightUpLeg_PX2: RagDollSphericalJoint
      {
        name = "pelvis_rightUpLeg";
        bone1 = "pelvis";
        bone2 = "rightUpLeg";
        axis[] = {1.5, -1.1, 2};
        enableCollision = true;

        class SwingLimit: SwingLimit {value = 45;};
        class TwistLimitLow: TwistLimitLow { value = -10; };
        class TwistLimitHigh: TwistLimitHigh { value = 20; };
      };

      class RightUpLeg_RightLeg_PX2: RagDollRevoluteJoint
      {
        name = "rightUpLeg_rightLeg";
        bone1 = "rightUpLeg";
        bone2 = "rightLeg";
        axis[] = {-1,0,0};

        class LimitLow: LimitLow {value = -5;};
        class LimitHigh: LimitHigh { value = 110; };
      };

      class RightLeg_RightFoot_PX2: RagDollRevoluteJoint
      {
        name = "rightLeg_rightFoot";
        bone1 = "rightLeg";
        bone2 = "rightFoot";
        axis[] = {-1,0,0};

        class LimitLow: LimitLow {value = -15;};
        class LimitHigh: LimitHigh { value = 45; };
      };
    };


    //----------------------------------------------------
    //----------------------------------------------------
    // Joints PhysX 3
    //----------------------------------------------------
    //----------------------------------------------------

    class JointsPX3
    {
      class Pelvis_Chest_PX3: RagDollD6Joint_PX3
      {
        name = "pelvis_chest";
        bone1 = "pelvis";
        bone2 = "chest";
        axis[] = {0,1,0.3};
		enableCollision = false;

        swingLimitY = 30;
        swingLimitZ = 30;
        twistLimitLower = -25;
        twistLimitUpper = 25;

        driveSpring = 30;
        driveDamping = 30;
        driveSpringWater = 5;
        driveDampingWater = 5;
      };

      class Chest_Head_PX3: RagDollD6Joint_PX3
      {
        name = "chest_head";
        bone1 = "chest";
        bone2 = "head";

        swingLimitY = 45;
        swingLimitZ = 45;
        twistLimitLower = -40;
        twistLimitUpper = 40;

        driveSpring = 15.0;
        driveDamping = 30;
        driveSpringWater = 1.5;
        driveDampingWater = 03.0;
		twistSpring = 15.0;
		twistDamping = 30.0;		
      };

      //----------------------------------------------------
      class Chest_LeftArm_PX3: RagDollD6Joint_PX3
      {
        name = "chest_leftArm";
        bone1 = "chest";
        bone2 = "leftArm";
        //axis[] = {-1, -0.0, 0.5};
        enableCollision = true;

        swingLimitY = 85;
        swingLimitZ = 85;
        twistLimitLower = -60;
        twistLimitUpper = 60;

        driveSpring = 30;
        driveDamping = 30;
        driveSpringWater = 3;
        driveDampingWater = 3;
      };

      class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
      {
        name = "leftArm_leftForeArm";
        bone1 = "leftArm";
        bone2 = "leftForeArm";
        axis[] = {-1,1,-0.2};
        
        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -5;
        twistLimitUpper = 150;

        driveSpring = 10;
        driveDamping = 10;
        driveSpringWater = 1;
        driveDampingWater = 1;
      };

      class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
      {
        name = "leftForeArm_leftHand";
        bone1 = "leftForeArm";
        bone2 = "leftHand";

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -20;
        twistLimitUpper = 20;

        driveSpring = 10;
        driveDamping = 10;
        driveSpringWater = 1;
        driveDampingWater = 1;
      };

      //----------------------------------------------------
      class Chest_RightArm_PX3: RagDollD6Joint_PX3
      {
        name = "chest_rightArm";
        bone1 = "chest";
        bone2 = "rightArm";
        //axis[] = {1, -0.0, 0.5};
        enableCollision = true;

        swingLimitY = 85;
        swingLimitZ = 85;
        twistLimitLower = -60;
        twistLimitUpper = 60;

        driveSpring = 30;
        driveDamping = 30;
        driveSpringWater = 3;
        driveDampingWater = 3;
      };

      class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
      {
        name = "rightArm_rightForeArm";
        bone1 = "rightArm";
        bone2 = "rightForeArm";
        axis[] = {-1,-1,0.2};

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -5;
        twistLimitUpper = 150;

        driveSpring = 10;
        driveDamping = 10;
        driveSpringWater = 1;
        driveDampingWater = 1;
      };

      class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
      {
        name = "rightForeArm_rightHand";
        bone1 = "rightForeArm";
        bone2 = "rightHand";

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -20;
        twistLimitUpper = 20;

        driveSpring = 10;
        driveDamping = 10;
        driveSpringWater = 1;
        driveDampingWater = 1;
      };

      //----------------------------------------------------
      
      class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
      {
        name = "pelvis_leftUpLeg";
        bone1 = "pelvis";
        bone2 = "leftUpLeg";
        //axis[] = {-1.5, -1.1, 2};
        enableCollision = true;

        swingLimitY = 35;
        swingLimitZ = 35;
        twistLimitLower = -10;
        twistLimitUpper = 60;

        driveSpring = 30;
        driveDamping = 30;
        driveSpringWater = 3;
        driveDampingWater = 3;
		twistDamping = 30.0;			
      };

      class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
      {
        name = "leftUpLeg_leftLeg";
        bone1 = "leftUpLeg";
        bone2 = "leftLeg";
        axis[] = {1,0,0};

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -5;
        twistLimitUpper = 120;

        driveSpring = 20;
        driveDamping = 20;
        driveSpringWater = 2;
        driveDampingWater = 2;
      };

      class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
      {
        name = "leftLeg_leftFoot";
        bone1 = "leftLeg";
        bone2 = "leftFoot";
        axis[] = {1,0,0};

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -15;
        twistLimitUpper = 45;

        driveSpring = 20;
        driveDamping = 20;
        driveSpringWater = 2;
        driveDampingWater = 2;
      };

      //----------------------------------------------------

      class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
      {
        name = "pelvis_rightUpLeg";
        bone1 = "pelvis";
        bone2 = "rightUpLeg";
        //axis[] = {1.5, -1.1, 2};
        enableCollision = true;

		swingLimitY = 35;
        swingLimitZ = 35;
        twistLimitLower = -10;
        twistLimitUpper = 60;

        driveSpring = 30;
        driveDamping = 30;
        driveSpringWater = 3;
        driveDampingWater = 3;
		twistDamping = 30.0;			
      };

      class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
      {
        name = "rightUpLeg_rightLeg";
        bone1 = "rightUpLeg";
        bone2 = "rightLeg";
        axis[] = {1,0,0};

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -5;
        twistLimitUpper = 120;

        driveSpring = 20;
        driveDamping = 20;
        driveSpringWater = 2;
        driveDampingWater = 2;
      };

      class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
      {
        name = "rightLeg_rightFoot";
        bone1 = "rightLeg";
        bone2 = "rightFoot";
        axis[] = {1,0,0};

        swingLimitY = 10;
        swingLimitZ = 10;
        twistLimitLower = -15;
        twistLimitUpper = 45;

        driveSpring = 20;
        driveDamping = 20;
        driveSpringWater = 2;
        driveDampingWater = 2;
      };

  
    };
  };

};