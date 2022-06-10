
class CfgWeaponCursors
{
	class RifleCursorCore
	{
		texture = "";
		// alpha for max. inaccuracy
		fade = 0.19;
    fadeRatioDamage = 0.5;
    fadeRatioFatigue = 0.5;
		class Sections
		{
			class Section1
			{
			// area definition
				uMin = 0; 
				vMin = 0;
				uMax = 0.328125;
				vMax = 1;
				// offset definition (pixels for max. movement)
				xOffset = -20; 
				yOffset = 0;
			};
			class Section2
			{
			// area definition
				uMin = 0.65625; 
				vMin = 0;
				uMax = 1;
				vMax = 1;
				// offset definition (pixels for max. movement)
				xOffset = +20; 
				yOffset = 0;
			};
		};
	};
	class MGCursorCore
	{
		texture = "";
		// alpha for max. inaccuracy
		fade = 0.19;
    fadeRatioDamage = 0.5;
    fadeRatioFatigue = 0.5;
		class Sections
		{
			class Section1
			{
			// area definition
				uMin = 0; 
				uMax = 0.328125;
				vMin = 0.328125;
				vMax = 0.65625;
				// offset definition (pixels for max. movement)
				xOffset = -25; 
				yOffset = 0;
			};
			class Section2
			{
			// area definition
				uMin = 0.65625; 
				uMax = 1;
				vMin = 0.328125;
				vMax = 0.65625;
				// offset definition (pixels for max. movement)
				xOffset = +25; 
				yOffset = 0;
			};
			class Section3
			{
			// area definition
				uMin = 0.328125; 
				uMax = 0.65625;
				vMin = 0.65625;
				vMax = 1;
				// offset definition (pixels for max. movement)
				xOffset = 0; 
				yOffset = +25;
			};
		};
	};
	class LawCursorCore
	{
		texture = "";
		// alpha for max. inaccuracy
		fade = 0.19;
    fadeRatioDamage = 0.5;
    fadeRatioFatigue = 0.5;
		class Sections
		{
			class Section1
			{
			// area definition
				uMin = 0; 
				uMax = 0.328125;
				vMin = 0.328125;
				vMax = 0.65625;
				// offset definition (pixels for max. movement)
				xOffset = -30; 
				yOffset = 0;
			};
			class Section2
			{
			// area definition
				uMin = 0.65625; 
				uMax = 1;
				vMin = 0.328125;
				vMax = 0.65625;
				// offset definition (pixels for max. movement)
				xOffset = +30; 
				yOffset = 0;
			};
			class Section3
			{
			// area definition
				uMin = 0.328125; 
				uMax = 0.65625;
				vMin = 0;
				vMax = 0.328125;
				// offset definition (pixels for max. movement)
				xOffset = 0; 
				yOffset = -30;
			};
			class Section4
			{
			// area definition
				uMin = 0.328125; 
				uMax = 0.65625;
				vMin = 0.65625;
				vMax = 1;
				// offset definition (pixels for max. movement)
				xOffset = 0; 
				yOffset = +30;
			};
		};
	};
};

class CfgMineTriggers
{
  access = ReadAndCreate;

  class Default
  {
    scope= 0;
    // parameters for mines
    mineTriggerType = radius; // type of the trigger. Possible options: wire, radius
    mineTriggerRange = 2; // size of the radius trigger
    //mineTriggerActivationRange = 4; // default value is mineTriggerRange (if mineTriggerActivationRange not defined)
    mineTriggerMass = 30; // check only objects with mass grater than this value;
    mineDelay = 0.2; // delay explosion for x seconds after trigger action
    mineMagnetic = false; // detect only boats, vehicles, armor, planes.... ignore humans and animals
    mineUnderwaterOnly = false; // detect only objects that are under water surface
    mineWireStart[] = {0.0, 1.0, 0.0};
    mineWireEnd[] = {0.0, 1.0, 5.0};
    restrictZoneCenter[] = {0,0,0};
    restrictZoneRadius = 3;
    timerStep = -1;
  };

  class RangeTrigger : Default
  {
    // parameters for mines
    mineTriggerType = radius; // type of the trigger. Possible options: wire, radius
    mineTriggerRange = 2; // size of the radius trigger
    mineTriggerMass = 30; // check only objects with mass grater than this value;
    mineMagnetic = false; // detect only boats, vehicles, armor, planes.... ignore humans and animals
  };

  class TimeTrigger : Default
  {
    // parameters for mines
    mineTriggerType = timer; // type of the trigger. Possible options: wire, radius, remote
    timerStep = 30; // time step when setting the timer
  };

  class RemoteTrigger : Default
  {
    // parameters for mines
    mineTriggerType = remote; // type of the trigger. Possible options: wire, radius
    restrictZoneRadius = 3;
    mineTriggerMass = 0; // check only objects with mass grater than this value;	
    timerStep = 40.0; // remote trigger could be timed
  };

  class WireTrigger : Default
  {
    // parameters for mines
    mineTriggerType = wire; // type of the trigger. Possible options: wire, radius
    restrictZoneCenter[] = {0.1,0,0};
    restrictZoneRadius = 3.0;
    mineWireStart[] = {-1.4, 0.1, 0.0};
    mineWireEnd[] = {1.6, 0.1, 0.0};
	mineTriggerMass = 14; // check only objects with mass grater than this value;	
  };    
};

class CfgAmmo
{
	access = ReadAndCreate;
	class Default
	{
		access = ReadOnlyVerified;

		hit=0;indirectHit=0;indirectHitRange=1;
    underwaterHitRangeCoef=1.0;
		typicalSpeed=900;
    explosionForceCoef = 1.0;

		isCraterOriented = false;
    model= "";
		proxyShape = "";
    craterShape = "";
		simulation = "";
		weaponType = "Default"; // also possible: mGun, cannon, rocket, missileAA, missileAT, missileAAAT, bomb, special
		// almost no ammo model are animated
		animated=false; 
		// ammo shadows disabled by default
		shadow=false; 
		cost=0;
		maxSpeed=0;
		cartridge="";
		simulationStep=0.05;
		// default: yellow tracer
		tracerColor[]=TracerGColorF; 
		// default realistic: yellow tracer
		tracerColorR[]=TracerGColorF; 

		soundFly[]={,1,1};
		soundEngine[]={,1,1};
		soundHit[]={,1,1};
		// supersonic crack sound is played only when shot is traveling faster than speed of sound
		// near is used for 0..10 m, far for 50+m, cross-blending is done in between
		supersonicCrackNear[]={"",1,1};
		supersonicCrackFar[]={"",1,1};
    // list of fake bomb falling sound
    soundFall[]={,1,1};
    soundFakeFall[]={soundFall,1};

		// list of sounds with probabilities
		hitGroundSoft[]={soundHit,1};
		hitGroundHard[]={soundHit,1};
		hitMan[]={soundHit,1};
		hitArmor[]={soundHit,1};
		hitIron[]={soundHit,1};
		hitBuilding[]={soundHit,1};
		hitFoliage[]={soundHit,1};
		hitWood[]={soundHit,1};
		hitGlass[]={soundHit,1};
		hitGlassArmored[]={soundHit,1};
		hitConcrete[]={soundHit,1};
		hitRubber[]={soundHit,1};
		hitPlastic[]={soundHit,1};
		hitDefault[]={soundHit,1};
		hitMetal[]={soundHit,1};
		hitMetalplate[]={soundHit,1};
    hitTyre[]={soundHit,1};
		hitWater[]={soundHit,1};		

    // Ammo impact sound - used for grenade
    soundImpact[]={,1,1};
    impactGroundSoft[]={soundImpact,1};
    impactGroundHard[]={soundImpact,1};
    impactMan[]={soundImpact,1};
    impactIron[]={soundImpact,1};
    impactArmor[]={soundImpact,1};   
    impactBuilding[]={soundImpact,1};
    impactFoliage[]={soundImpact,1};
    impactWood[]={soundImpact,1};
    impactGlass[]={soundImpact,1};
    impactGlassArmored[]={soundImpact,1};
    impactConcrete[]={soundImpact,1};
    impactRubber[]={soundImpact,1};
    impactPlastic[]={soundImpact,1};
    impactDefault[]={soundImpact,1};
    impactMetal[]={soundImpact,1};
    impactMetalplate[]={soundImpact,1};
    impactTyre[]={soundImpact,1};
    impactWater[]={soundImpact,1};	

    // initial sound, used for flare & smoke grenades
    grenadeFireSound[]={};
    // looped sound, used for flare & smoke grenades
    grenadeBurningSound[]={};

		// max. angle at which the bullet will be deflected - 0 means no deflection
		deflecting=0;
		/// slowdown coefficient for deflection (speed will be multiplied by this coef after the ammo deflects from some surface)
		deflectionSlowDown=0.8;
		explosive=1;
		/// name of config class describing the explosion effects ("" for none);
		explosionEffects = "ExplosionEffects";
		/// name of config class describing the crater effects ("" for none);
		craterEffects = "ImpactEffectsMedium";
    /// name of config class describing the crater effects ("" for none);
    craterWaterEffects = "ImpactEffectsWater";
		/// name of config class describing the tak na smoke trails ("" for none);
		effectsMissile = "ExplosionEffects";
    /// name of config class describing the missile smoke trails in init phase, until ignition ("" for none);
    effectsMissileInit = "";
		/// name of config class describing the smokeshell effects ("" for none);
		effectsSmoke = "SmokeShellWhite";
		/// effects from muzzle (for missiles, ShotShell, ShotBullet)
		effectsFire = "CannonFire";
    /// name of config class describing the flare effects ("" for none);
    effectFlare = "FlareShell";
    /// name of the config class describing the trails behind the shell ("" for none)
    effectFly = "";
    /// name of the config class describing the effects for bounding mine
    mineJumpEffects = "";

    /// water impact effects on ground are applied if Y of the impact is less than waterSurface + this offset.
    waterEffectOffset = 0.45;

		/* values to directional explosions */
		directionalExplosion = false;
		explosionAngle = 60;
		explosionDir = "explosionDir";
		explosionPos = "explosionPos";
    explosionEffectsDir = "explosionDir";
		minimumSafeZone = 0.1;
    // sound played when mine trigger is activated
    soundTrigger[]={};
    soundActivation[]={};
    soundDeactivation[]={};
    // define name of effect filter applied to explosion sound, effects are defined in class CfgSoundEffects::WeaponsEffects
    explosionSoundEffect = "";

		// unless overridden, the ammo in annihilated if it does not hit anything soon
		timeToLive=10;
		// minimum time that ammo exists.
		minTimeToLive=0;

		irLock=false;			// 0 - lock on soldier, 1 - doesn't lock on soldier
		airLock= lockGroundTT; 	// 0 - only ground, 1 ground and air, 2 only air 
		laserLock=false;		// 0 - doesn't lock on laserTarget (vehicle with laserTarget = true), 1 - AI attacks laserTarget if vehicle has laserScanner = 1 and AI knowsAbout laserTarget, works the same way for player
		nvLock = false;			// 0 - doesn't lock on vehicles with NVTarget = true, 1 - does lock on vehicles with NVTarget = 1 (eg. Strobes)
		artilleryLock = false;	// applies artillery dispersion on the projectile, locks on artilleryTarget (artilleryTarget = true)
    hitOnWater = false;
    lockSeekRadius = 100;
		manualControl=false;
		// max range for manual control
		maxControlRange=350;
		// missile control maneuvrability		
		maneuvrability=1.0; 
		/// how much of the tracking is done using computed leading of the target (more accurate)
		//Range 0-1 1 = perfect movement lead
		trackLead=1.0; 
		/// how much the missile oversteers (realistic - really used in simple missiles)
		//1 = no oversteer
		trackOversteer=1.0; 

    //missile lock cone angle (degrees)
    missileLockCone = 0;

		//used for counterMeasures,
		weaponLockSystem = 0;
		// 1.0 immnune to CM
		cmImmunity = 1.0;
    lockType = fireAndForgetLT; 

    //defines proxi ID offset for missiles (proxy index == ammo count + maverickweaponIndexOffset)
    maverickweaponIndexOffset = 0;

    // maverickweapon proxies will be used even if maxControlRange is < 10
    // maverickweapon = true; // default value is maxControlRange > 10 

    // how ammo is supposed to be used
    // default all offensive would be 0x3C0 (960)
    /*    AIAmmoUsageNone = 0,            //0x00
          AIAmmoUsageLight = 1,           //0x01
          AIAmmoUsageMarking = 2,         //0x02
          AIAmmoUsageConcealment = 4,     //0x04
          AIAmmoUsageCountermeasures = 8, //0x08
          AIAmmoUsageMine = 16,           //0x10
          ///...
          AIAmmoUsageUnderwater = 32,     //0x20
          AIAmmoUsageOffensiveInf = 64,   //0x40
          AIAmmoUsageOffensiveVeh = 128,  //0x80
          AIAmmoUsageOffensiveAir = 256,  //0x100
          AIAmmoUsageOffensiveArmour = 512, //0x200  
          AIAmmoUsageOffensiveArtillery = 1024, //0x400 (also based on artilleryLock)  */
    //no default, we need to read possible old parameters before
    //aiAmmoUsageFlags = 0x3C0;

		sideAirFriction=1;

		//multiplier of artillery dispersion, when 1, there is  1 meter dispersion with every second of flight
		artilleryDispersion = 1;
		artilleryCharge = 1;
    autoSeekTarget = false;

		// how much is visible when this weapon is fired
		visibleFire=0; 
		audibleFire=0;
    /// how much the weapon distracts AI when shot by him, -1 means value will be calculated dynamically
    /// from visibleFire and audibleFire (vf^2 + af^2) * 0.1
    shootDistraction = -1;
		// how long is it visible
		visibleFireTime=0; 

		// by default there is no timer
		explosionTime=0;
		// by default anything can explode immediately		
		fuseDistance=0; 
		initTime=0;
		thrustTime=1.5;
		thrust=210;
		/*
		default thrust calculation was: maxSpeed*0.7;
		due to bug it was increased to maxSpeed*0.7*thurstTime
		normal missile speed is about 200 m/s
		*/
		airFriction = -0.0005;
    icon = "";

    submunitionAmmo = "";

    explosionType = "explosive";

    mineTrigger = RangeTrigger;
    mineBoundingTime = 3.0;
    mineBoundingDist = 3.0;
    mineInconspicuousness = 10;
    mineFloating = -1.0;
    mineDiveSpeed = 1.0;
    minePlaceDist = 0.5;

		class HitEffects
		{
			// There can be defined impacts effects for different materials.
			// Example:  Impact_Metal = "ImpactEffectsMetal";
			vehicle = "ImpactMetal";
			object = "ImpactConcrete";
		};

    // distance at which we can hear bullet flying near by
    suppressionRadiusBulletClose = -1.0;
    // distance at which we can hear bullet hitting ground/object
    suppressionRadiusHit = -1.0;

    // distance at which we can hear bullet flying near by
    dangerRadiusBulletClose = -1.0;
    // distance at which we can hear bullet hitting ground/object
    dangerRadiusHit = -1.0;

		//multiplier of default caliber, 1 mean 7,62
		//used for kinetic power
		caliber = 1;
		// value > 0 enable whistling, distance from source
		whistleDist = 0; 
		// // 0 when fired, 1 when explode, 2 - both
		whistleOnFire = 0; 
		class NVGMarkers{};

    minDamageForCamShakeHit = 0.55;

	};
	class MissileCore : Default
	{
		simulation=shotMissile;
		simulationStep=0.05;
		timeToLive=20;

		manualControl=true;
		// max range for manual control
		maxControlRange=250; 

		initTime=0.15;
		thrustTime=2.5;
		thrust=350;
		maneuvrability=3.0;

    //missile lock cone angle (degrees)
    missileLockCone = 50;

		// how much is visible when this weapon is fired
		visibleFire=32; 
		audibleFire=32;
		// how long is it visible
		visibleFireTime=20; 

		soundHit[]={,db40,1};
		soundFly[]={,db-40,2};
		soundEngine[]={,db-60,1};

		cost=10000;
		deflecting=5;
	};
	/// free fall bomb
	class BombCore: Default
	{
		hit=50;indirectHit=40;indirectHitRange=10;

		cost=200;

		irLock=false;
		laserLock=false;
		// no control (passive weapon)
		maxControlRange=0; 
		maneuvrability=16.0;
		sideAirFriction=0.1;
		simulation=shotMissile;
		maxSpeed=100;

		timeToLive=120;
		initTime=0;
		thrustTime=0;
		thrust=0;
	};
	/// laser guided bomb
	class LaserBombCore: BombCore
	{
		hit=5000;indirectHit=3500;indirectHitRange=15;
		cost=20000;
		irLock=false;
		laserLock=true;
		// unlimited control (active weapon)
		maxControlRange=100000; 
		maneuvrability=16.0;
		sideAirFriction=0.1;
		simulation=shotMissile;
		maxSpeed=100;
		timeToLive=120;

		initTime=0;
		thrustTime=0;
		thrust=0;

    missileLockCone = 50;
	};

	class RocketCore : Default
	{
		simulation=shotRocket;
		simulationStep=0.05;
		timeToLive=20;

		maneuvrability=0.0;
		maxControlRange=0;
		initTime=0.05;
		thrustTime=1;
		thrust=1500;

		visibleFire=32;
		audibleFire=32;
		visibleFireTime=20;

		cost=2000;
		deflecting=5;
	};

  class ArtilleryRocketCore : RocketCore
  {
    artilleryLock = true;
  };

	class BulletCore : Default
	{
		simulation=shotBullet;
		simulationStep=0.05;
		// how long does the fired object live before annihilating
		timeToLive=3; 

		soundFly[]={,db-12,0.7};

		explosive=0;

		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;

		soundHit1[]={,db-30,1};
		soundHit2[]={,db-30,1};
		soundHit3[]={,db-30,1};
		soundHitMan1[]={,db-38,1};
		soundHitMan2[]={,db-38,1};
		soundHitArmor1[]={,db-30,1};
		soundHitArmor2[]={,db-30,1};
		soundHitBuilding1[]={,db-30,1};
		soundHitBuilding2[]={,db-30,1};
		hitGround[]={soundHit1,0.33,soundHit2,0.33,soundHit3,0.33};
		hitMan[]={soundHitMan1,0.5,soundHitMan2,0.5};
		hitArmor[]={soundHitArmor1,0.7, soundHitArmor2, 0.3};
		hitBuilding[]={soundHitBuilding1,0.5,soundHitBuilding2,0.5};

		cost = 0.7;
	};
  class ShotgunCore: Default
  {
    simulation = shotSpread;
    simulationStep=0.05;
    timeToLive=3; // how long does the fired object live before annihilating

    soundFly[]={,db-12,0.7};

    explosive=0;

    visibleFire=16;
    audibleFire=16;
    visibleFireTime=3;

    soundHit1[]={,db-30,1};
    soundHit2[]={,db-30,1};
    soundHit3[]={,db-30,1};
    soundHitMan1[]={,db-38,1};
    soundHitMan2[]={,db-38,1};
    soundHitArmor1[]={,db-30,1};
    soundHitArmor2[]={,db-30,1};
    soundHitBuilding1[]={,db-30,1};
    soundHitBuilding2[]={,db-30,1};
    hitGround[]={soundHit1,0.33,soundHit2,0.33,soundHit3,0.33};
    hitMan[]={soundHitMan1,0.5,soundHitMan2,0.5};
    hitArmor[]={soundHitArmor1,0.7, soundHitArmor2, 0.3};
    hitBuilding[]={soundHitBuilding1,0.5,soundHitBuilding2,0.5};

    cost = 0.7;
  };

	class ShellCore : Default
	{
		simulation=shotShell;
		simulationStep=0.05;
		// how long does the fired object live before annihilating
		timeToLive=20; 
		cost=1000;
		soundHit[]={,db50,1};
		soundFly[]={,db-30,4};

		indirectHitRange=8;
		// how much is visible when this weapon is fired
		visibleFire=16; 
		audibleFire=16;
		// how long is it visible
		visibleFireTime=10; 
		deflecting=5;
	};
  class SubmunitionCore : Default
  {
    simulation=shotSubmunitions;
    simulationStep=0.05;
    // how long does the fired object live before annihilating
    timeToLive=180; 
    cost=1000;
    soundHit[]={,db50,1};
    soundFly[]={,db-30,4};

    hitOnWater = true;
    artilleryLock = 1;
    indirectHitRange=8;
    // how much is visible when this weapon is fired
    visibleFire=16; 
    audibleFire=16;
    // how long is it visible
    visibleFireTime=10; 
    deflecting=5;
  };
  class ShotDeployCore : Default
  {
    simulation=shotDeploy;
    simulationStep=0.05;
    // how long does the fired object live before annihilating
    timeToLive=180; 
    cost=1000;
    soundHit[]={,db50,1};
    soundFly[]={,db-30,4};

    hitOnWater = true;
    artilleryLock = 1;
    indirectHitRange=8;
    // how much is visible when this weapon is fired
    visibleFire=16; 
    audibleFire=16;
    // how long is it visible
    visibleFireTime=10; 
    deflecting=5;
  };
  class GrenadeCore: Default
	{
		explosive=1;
		hit=20;indirectHit=18;indirectHitRange=7;
		cost=40;
		simulation=shotShell;
		simulationStep=0.05;
		soundHit[]={,db20,1};
		soundFly[]={,db-90,1};
		soundEngine[]={,db-80,4};

		// how much is visible when this weapon is fired
		visibleFire=2; 
		audibleFire=0.25;
		// how long is it visible
		visibleFireTime=0; 
		// how long does the fired object live before annihilating
		timeToLive=20; 
		deflecting=60;
	};
	class TimeBombCore : Default
	{
		hit=700;indirectHit=700;indirectHitRange=7;
		model="";
		cost=2000;
		simulation=shotTimeBomb;
		simulationStep=0.1;
		soundHit[]={,db40,1};
		soundFly[]={,0,1};
		soundEngine[]={,0,1};

		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		// unlimited
		timeToLive=0; 
    triggerWhenDestroyed = true;
    mineCanBeReactivated = true;
	};

  class LaserCore : Default
  {
    simulation=shotLaser;
    simulationStep=0.05; 
	// how long does the fired object live before annihilating
    timeToLive=1; 

    soundFly[]={,db-12,0.7};

    explosive=0;

    visibleFire=32;
    audibleFire=32;
    visibleFireTime=1;

    recoil = Empty;
    recoilProne = Empty;

    soundHit1[]={,db-30,1};
    soundHit2[]={,db-30,1};
    soundHit3[]={,db-30,1};
    soundHitMan1[]={,db-38,1};
    soundHitMan2[]={,db-38,1};
    soundHitArmor1[]={,db-30,1};
    soundHitArmor2[]={,db-30,1};
    soundHitBuilding1[]={,db-30,1};
    soundHitBuilding2[]={,db-30,1};
    hitGround[]={soundHit1,0.33,soundHit2,0.33,soundHit3,0.33};
    hitMan[]={soundHitMan1,0.5,soundHitMan2,0.5};
    hitArmor[]={soundHitArmor1,0.7, soundHitArmor2, 0.3};
    hitBuilding[]={soundHitBuilding1,0.5,soundHitBuilding2,0.5};

    cost = 0.7;
  };
  
	class PipeBombCore : TimeBombCore
	{
		simulation=shotMine;
    mineTrigger = RemoteTrigger;
	};

  class DirectionalBombCore : TimeBombCore
  {
    hit=750;indirectHit=750;indirectHitRange=10;
    simulation=shotDirectionalBomb;
    directionalExplosion = true;
    explosionAngle = 80;
  };
  class BoundingMineCore : TimeBombCore
  {
    hit=750;indirectHit=750;indirectHitRange=5;
    simulation=shotBoundingMine;
    mineBoundingTime = 0.2;
    mineBoundingDist = 3.0;
  };
  class MineCore : TimeBombCore
	{
		hit=750;indirectHit=750;indirectHitRange=5;
		simulation=shotMine;
		model = "";
		defaultMagazine = "";
  };
	class FlareCore : GrenadeCore
	{
	// how long does the fired object live before annihilating
		timeToLive=30; 

		hit=5;indirectHit=2;indirectHitRange=0.2;
		cost=100;
		simulation=shotIlluminating;
		simulationStep=0.05;
		explosive = 0;
		soundHit[]={,0,1};
		lightColor[] = {1, 1, 1, 0};
    brightness = 2;
    size = 1;
		deflecting=60;
    thrust = 0;
    airFriction = 0;
    sideairFriction = 0.0;
    artilleryLock = 1;
  };
	class SmokeShellCore : GrenadeCore
	{
	// how long does the fired object live before annihilating
		timeToLive=60; 
		// how much is visible when this weapon is fired
		visibleFire=2; 
		audibleFire=0.25;
		visibleFireTime=1;
		hit=5;indirectHit=2;indirectHitRange=0.2;
		cost=100;

		simulation=shotSmokeX;
		explosive = 0;
		soundHit[]={,0,1};
		smokeColor[] = {1, 1, 1, 0};

		deflecting=60;
	};
	//Used to give a fake threatlevel to a unit
	class FakeAmmo : BulletCore
	{
		hit=13;indirectHit=4;indirectHitRange=0.2;
		cost=6;
		airlock = lockAirGroundTT;
		explosive=0;

		// how much is visible when this weapon is fired
		visibleFire=16; 
		audibleFire=16;
		 // how long is it visible
		visibleFireTime=3;
	};
};

class CfgRecoils
{
	access = ReadAndWrite;

	empty[]={};
	// time, offset, angle
	impulse[]=
	{
		0.03,0.02,0.2,
		0.08,0.08,0.8,
		0.10,0.03,-0.1,
		0.30,0,0
	};

  class Default
  {
    //! Ellipses that define area for generating recoil impulses
    muzzleOuter[] = { 0, 0.4, 0.5, 0.6 };

    //! Area for weapon "kick" impulse (in meters)
    kickBack[] = { 0.05, 0.1 };

    //! Multiplier for applying recoil on aiming (in radians per seconds)
    permanent = 0.1;

    //! Multiplier for temporary weapon glitch (in radians)
    temporary = 0.01;
  };
};

class CfgMagazines
{
	class Default
	{
		scope= 0;
		value = 2;
		type = WeaponNoSlot;
		//Might be needed for count and other magazine specific values.
		simulation = ProxyMagazines; 
		model="";
		picture="";
		ammo="";
		count=1;
		displayName="";
		displayNameShort=""; 
		nameSound="";
		weight = 0;
		// max estimated speed km/h
		maxLeadSpeed=50; 
		initSpeed = 100;
		reloadAction = "";
		useAction = false;
		useActionTitle = "";
		modelSpecial = "";
		class InventoryPlacements {};
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort="";
    /// max. time of holding throw button
    maxThrowHoldTime = 2.0;
    /// min. coef for throwing (to multiply initSpeed)
    minThrowIntensityCoef = 0.3;
    /// max. coef for throwing (to multiply initSpeed)
    maxThrowIntensityCoef = 1.4; 
    /// when magazine is changed, weapon is ready to fire
    quickReload = false;
	};
	class FakeMagazine: Default
	{
		scope= 1;
		ammo = FakeAmmo;
	};
	class FakeWeapon: FakeMagazine {};
};
//Weapon firing modes
class Mode_SemiAuto
{
	multiplier = 1;
	burst = 1;

  // when >0 then AI will randomize burst in range{burst, burstRangeMax} 
  burstRangeMax = -1;

	displayName = "";
	textureType = "default"; // points to a texture in CfgInGameUI >> CfgWeaponModeTextures
	dispersion = 0.0002;
	sound[] = {, db+20, 1};
	// diff variants for single shot
	soundBegin[] = {sound, 1}; 
  soundBeginWater[]={sound, 1};
	soundClosure[] = {sound, 1}; // sound of weapon closure after shooting
	soundEnd[] = {};
	soundLoop[] = {};
	soundContinuous = 0;
  weaponSoundEffect="";
	soundBurst = true;
	reloadTime = 0.100000;
	ffCount = 1;
	ffMagnitude = 0.5;
	ffFrequency = 11;
	flash = gunfire;
	flashSize = 0.1;
	recoil = Empty;
	recoilProne = Empty;
	autoFire = 0;
	aiRateOfFire = 0.500000;
	aiRateOfFireDistance = 500;
	useAction = 0;
	useActionTitle = "";
	showToPlayer = true;
	minRange=30;minRangeProbab=0.25;
	midRange=300;midRangeProbab=0.58;
	maxRange=600;maxRangeProbab=0.04;
	artilleryDispersion = 1;
	artilleryCharge = 1;
	canShootInWater = false;  
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "";
	sound[] = {,db+20,1};
  // shot for burst are split into 3 parts:
  // soundBegin = first shot, soundLoop = [2, burst - 1], soundEnd = last shot + echo
	soundLoop[] = {sound, 1};
	soundEnd[] = {sound, 1};
	soundBurst = true;

  burst=3;

	dispersion = 0.0005;
	minRange=10;minRangeProbab=0.30;
	midRange=60;midRangeProbab=0.58;
	maxRange=150;maxRangeProbab=0.04;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "";
	dispersion = 0.0005;
	sound[] = {,db+20,1};
	soundEnd[] = {sound, 1};
	soundContinuous = 0;
	reloadTime = 0.080000;
	autoFire = true;
	minRange=1;minRangeProbab=0.20;
	midRange=30;midRangeProbab=0.58;
	maxRange=80;maxRangeProbab=0.04;
};
// weapons
class CfgWeapons
{
	//-->Weapons and magazines
	access = ReadAndCreate;

	// define weapons
	// weapon: ammo name, max count, reload time
	class Default
	{
		access = ReadOnlyVerified;
		
		scope = private;

		value = 2;

		// default picture name is class name
		picture=""; 
		uiPicture=;
		ammo= "";
		cursor = "";
		cursorAim = "";
		// relative cursor size, 1 is normal
		cursorSize = 1.0;
		// aim cursor is shown in internal view
		showAimCursorInternal = true; 
		// cursor used when laser is on
		cursorAimOn = ""; 
		// laser designator
		laser = false; 

		// selections, where texture can be redefined
		hiddenSelections[] = {};
		// initial texture in hidden selections
		hiddenSelectionsTextures[] = {};
		/// selections to hide underwater on the model
		hiddenUnderwaterSelections[] = {};
		/// selections to show underwater and hide on surface for the model
		shownUnderwaterSelections[] = {};
		/// textures of these selections, hidden first and shown later as one array eg. {"hiddenTexture.tmp", "hidden2texture.tmp", "shownTexture.tmp"}
		hiddenUnderwaterSelectionsTextures[] = {};						
			
		// default: regular weapon (special items such a Binocular, Radio, GPS etc. have different simulation)
		simulation = "Weapon"; 
		// default: hard mounted
		type=WeaponHardMounted; 
		displayName = "";
		nameSound="";
		count=0;
		// convert from internal to display
		multiplier=1; 
		burst=1;
		magazineReloadTime=0;
		reloadTime=1.0;
    magazineReloadSwitchPhase = 1; /// what phase of reload animation should be the magazine switched for the next one, by default never
		sound[]={,1,1};
		soundBegin[]={sound, 1};
    soundBeginWater[]={sound, 1};
		soundClosure[] = {sound, 1}; // sound of weapon closure after shooting
		soundEnd[]={sound, 1};
		soundLoop[]={sound, 1};
		soundContinuous=false;
    weaponSoundEffect="";
		/// is the sound for the whole burst (true) or for individual bullets (false)
		/** Note: When there is no burst (burst=1), the value has no effect */
		soundBurst=true;
		drySound[]={,1,1};
		zeroingSound[]={,1,1};
		reloadSound[]={,1,1};
    changeFiremodeSound[]= {,1,1};
		reloadMagazineSound[]={,1,1};
		emptySound[]={"",1,1};
		soundBullet[]={emptySound, 1};
		initSpeed=0;
    ballisticsComputer = 0;   //  AutoZeroing = 1, SimpleZeroing = 2, HitPrediction = 4, ImpactPoint = 8, laser based zeroing (4+8=12 show both HitPrediction and ImpactPoint)
		irDistance = 0;//infrared laser beam, 0 - no IR
    irDotIntensity = 0.001;//infrared laser dot intensity

		dispersion=0.002;
		aiDispersionCoefX=1.0;
		aiDispersionCoefY=1.0;
		canLock=LockYes;
    lockAcquire = automaticLA;
		enableAttack=true;
		ffMagnitude=0;
		ffFrequency=1;
		ffCount=1;
		recoil= "empty";
		// recoil prone is used when animation aimPrecision is lower than 0.4 (prone is usualy 0.3)
		// when empty, using the same recoil when prone, only modified using animation aimPrecision
		recoilProne= "";
    // Maximum amount of recoil to add to aim imprecision (weapon sway)
    maxRecoilSway=0.008;
    // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
    swayDecaySpeed=2;
		model="";
		modelSpecial="";
		modelMagazine="";
		// position and direction of muzzle
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		// position and direction of ir laser
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		// position and velocity of outgoing empty cartridge
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";

		selectionFireAnim = "zasleh";
		memoryPointCamera = "eye";

		// shot spread for shotguns (SpreadShot fires)
		fireSpreadAngle = 3.0;

		//multiple optics modes
		useModelOptics = true; //use model if present (one is used for all modes)
		opticsID = 0; //optics ID - allows to disable for some fire mod 

		modelOptics="";
		opticsPPEffects[] = {};
		opticsFlare = true;
		optics = true;
		// 0 = never force optics
		// 1 = force optics both in internal and external view
		// 2 = force optics only in internal view, external need not use them
		forceOptics = 0;

		// some weapons need to use binocular animations (currently works for laser designators only)
		useAsBinocular = false;
		// optics normally reduce peripheral vision, but keep it to some extent
		opticsDisablePeripherialVision = 0.67;

		opticsZoomMin = 0.25; //to match the clarity of human eye
		opticsZoomMax = 1.25; //for situation awareness
		opticsZoomInit = 0.75; //current default value
		distanceZoomMin=400;
		distanceZoomMax=400;

		primary = 10;
		showSwitchAction = false;
		showEmpty = true;
		autoFire = false;
		autoReload = true;

		showToPlayer = true;
		canShootInWater = false;

		// delay between shots at given distance
		aiRateOfFire=5.0; 
		// at shorter distance delay goes lineary to zero
		aiRateOfFireDistance=500; 
    // randomized delay after shot (timeToShot = aiRateOfFire + aiRateOfFireDispersion * Random<0,1>)
    aiRateOfFireDispersion = 0;

		// duration of light flash
		fireLightDuration = 0.05; 
		// intensity of light flash
		fireLightIntensity = 0.2; 
    /// diffuse color of the light flash
    fireLightDiffuse[] = {0.937, 0.631, 0.259};
    /// ambient color of the light flash
    fireLightAmbient[] = {0, 0, 0};


		backgroundReload = false;
		reloadAction = "";
		// class is used for weapon, muzzle, magazine and mode
		// weapon level
		// muzzles on weapon
		muzzles[] = {this};		
		// muzzle level
		// available magazines for muzzle
		magazines[] = {};	
		// magazine level
		// modes of magazine (muzzle)
		modes[] = {this};			
		// mode level

		useAction = false;
		useActionTitle = "";

		canDrop = true;

		weaponLockDelay = 0.0;
		weaponLockSystem = 0;
		cmImmunity = 1.0;

    weight = 0;

		minRange=1;minRangeProbab=0.30;
		midRange=150;midRangeProbab=0.58;
		maxRange=500;maxRangeProbab=0.04;

		// animations files for Inverse Kinematics (Hands)
		// handAnim[]={skeletonname, rtmfile,skeletonname2, rtmfile2,...};
		handAnim[]={};

		lockingTargetSound[] = {"", db-70, 2}; /// path should be redefined in project specific configs
		lockedTargetSound[] = {"", db-70, 6}; /// path should be redefined in project specific configs

		detectRange = 0;

		artilleryDispersion = 1;
		artilleryCharge = 1;

    fireAnims[]={};

		class Library
		{
			libTextDesc = "";
		};
		descriptionShort="";

		class GunFire
		{
		  access = ReadAndWrite;
		  // single cloudlet parameters
		  // time to live (not including fades)
		  cloudletDuration = 0.2;   
		  // animation speed
		  cloudletAnimPeriod = 1.0; 
		  cloudletSize = 1.0;
		  cloudletAlpha = 1.0;
		  // grow-up time
		  cloudletGrowUp = 0.2;     
		  // fade-in time
		  cloudletFadeIn = 0.01;    
		  // fade-out time
		  cloudletFadeOut = 0.5;    
		  // vertical acceleration
		  cloudletAccY = 0;         
		  // vertical speed range
		  cloudletMinYSpeed = -100; 
		  cloudletMaxYSpeed = 100;
		  cloudletShape = cloudletFire;
		  cloudletColor[] = {1, 1, 1, 0};
		  // density of the cloudlet (affects size), value <= 0 disables GunFire effects
		  cloudletDensityCoef = -1.0;
		  // source parameters
		  // negative value will disable the effect
		  interval = -0.01;
		  size = 3;
		  sourceSize = 0.5;
		  timeToLive = 0;

		  initT = 4500;
		  deltaT = -3000;
		  class Table
		  {
			class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
			class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
			class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
			class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
			class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
			class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
			class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
			class T7 {maxT = 2000; color[] = {0.19, 0.23, 0.21, 0};}
			class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
			class T9 {maxT = 2500; color[] = {0.35, 0.2, 0.02, 0};}
			class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
			class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
			class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
			class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
			class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
			class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
			class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
			class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
			class T18 {maxT = 3000; color[] = {0.98, 0.91, 0.54, 0};}
			class T19 {maxT = 3100; color[] = {0.98, 0.99, 0.6, 0};}
			class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.72, 0};}
			class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
			class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
		  }
		};

		// gun clouds 
		class GunClouds
		{
		  
		  access = ReadAndWrite;
		  // grow-up time
		  cloudletGrowUp = 0.05;      
		  // fade-in time
		  cloudletFadeIn = 0;   
		  // fade-out time
		  cloudletFadeOut = 0.1;    
		  // time to live (not including fades)
		  cloudletDuration = 0.05;    

		  cloudletAlpha = 0.3;

		  // vertical acceleration
		  cloudletAccY = 0;         
		  // vertical speed range
		  cloudletMinYSpeed = -100; 
		  cloudletMaxYSpeed = 100;

		  // negative value will disable the effect
		  interval = -0.02;
		  size = 0.3;
		  sourceSize = 0.02;

		  // single cloudlet parameters
		  // animation speed
		  cloudletAnimPeriod = 1.0; 
		  cloudletSize = 1.0;
		  cloudletShape = cloudletClouds;
		  cloudletColor[] = {1, 1, 1, 0};
		  timeToLive = 0;

		  initT = 0;
		  deltaT = 0;
		  class Table
		  {
			class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
		  }	
		};
		textureType = "default"; // points to a texture in CfgInGameUI >> CfgWeaponModeTextures
		/// inertia coefficient of the weapon
    inertia = 0.5;
    aimTransitionSpeed = 1;
	};

	class PistolCore: Default
	{
	//Ingame weapon handling value, lower value = takes more time to traverse a weapon
		dexterity = 2; 
		type = WeaponSlotHandGun;
		canLock=LockNo;
		/// inertia coefficient of the weapon
		inertia = 0.1;	
	};
	class RifleCore: Default
	{
		type = WeaponSlotPrimary;
		dexterity = 1.7;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 500;
		canLock=LockNo;
		/// inertia coefficient of the weapon
		inertia = 0.5;	
	};
	class MGunCore: Default
	{
		type = WeaponSlotPrimary+WeaponSlotSecondary;
		dexterity = 0.5;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 400;
		/// inertia coefficient of the weapon
		inertia = 0.7;	
	};
	class LauncherCore: Default
	{
		type = WeaponSlotSecondary;
		dexterity = 0.5;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 300;
		count = 1;
		/// inertia coefficient of the weapon
		inertia = 1.0;	
	};
	class GrenadeCore: Default
	{
		type = WeaponNoSlot;
		dexterity = 3;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 40;
		count = 1;
		canLock=LockNo;
	};
	class CannonCore: Default
	{
		type = WeaponHardMounted;
		class GunClouds {};
	};
	class FakeWeapon : MGunCore
	{
		scope = protected;
		type=WeaponNoSlot;
		cursor =;
		cursoraim =;
		sound[]={};
		magazines[]= {FakeMagazine};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"",0.000316228,1};
			soundBegin[] = {"begin1",1};
			closure1[] = {"",1,1,10};
			closure2[] = {"",1,1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};		
	};
	class DetectorCore : Default
	{
		type = WeaponSlotSecondary;
		simulation = "ItemMineDetector";
		model=""; /// path should be redefined in project specific configs
		picture=""; /// path should be redefined in project specific configs
		muzzles[]={};
		class Armory {disabled = 1;}; //Disable special items in Armory.
		detectRange = 100;
	};
};

/// Slotable weapons, see https://wiki.bistudio.com/index.php/Modifiable_Personal_Weapons_-_implementation for more info
class SlotInfo
{
	access = ReadAndCreate;
	scope=0;
	// targetProxy
	linkProxy = "defaultProxy";
	// class names with items supported by weapon  
	compatibleItems[] = {"defaultItem1","defaultItem2"};
	///	used for positioning attachment icon in weapon icon for inventory, relative to weapon icon size
	iconPosition[] = {0.0, 0.0};
	/// setting this to zero reverts to old behaviour, any positive value scales the icon
	iconScale = 0.0;
	/// path to attachment icon texture
	iconPicture = "";
	/// alignment of the icon on pinpoint (Center, Top, Bottom, Left, Right)
	iconPinpoint = "Center";	
};