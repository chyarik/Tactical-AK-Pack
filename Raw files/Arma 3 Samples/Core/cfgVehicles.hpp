#include "cfgVehicleSystemDisplay.hpp"

// vehicles and ammo definition

// show all targets
#define showAllNo		  0
#define showAllCadet	1
#define showAllYes		2

class CfgInventoryGlobalVariable
{
  maxSoldierLoad = 50;
};

// destroy sounds for configless models only: poles, trees, traffic signs, fences
class CfgDestroySounds{};

class CfgCloudlets
{
  access=ReadAndWrite;

  // Ancestor of all cloudlet classes
  class Default
  {
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1;
    particleFSLoop = 1;
    angle = 0;
    angleVar = 0;
  };

  class Explosion
  {
    access = ReadAndWrite;
    // single cloudlet parameters
	// time to live (not including fades)
    cloudletDuration = 0.2; 
	// animation speed
    cloudletAnimPeriod = 0.5; 
    cloudletSize = 1.0;
    cloudletAlpha = 1.0;
	// grow-up time
    cloudletGrowUp = 0.05; 
	// fade-in time
    cloudletFadeIn = 0.01;
	// fade-out time 	
    cloudletFadeOut = 0.2;
    // vertical acceleration
    cloudletMinYSpeed = 0; // vertical speed range
	cloudletAccY = -0.2; 
    cloudletMaxYSpeed = 6;
    cloudletShape = cloudletExplosion;
    cloudletColor[] = {1, 1, 1, 0};
    // source parameters
    interval = 0.001;
    // particle size
	size = 4.0; 
    // size of area from which particles are emitted
	sourceSize = 3.0; 
    timeToLive = 0;

    initT = 2500;
    deltaT = -4000;
    class Table
    {
      class T14 {maxT = 1400; color[] = {0.91, 0.5, 0.17, 0};}
      class T15 {maxT = 1500; color[] = {1, 0.6, 0.2, 0};}
      class T16 {maxT = 1600; color[] = {1, 0.71, 0.3, 0};}
      class T17 {maxT = 1700; color[] = {0.98, 0.83, 0.41, 0};}
      class T18 {maxT = 1800; color[] = {0.98, 0.91, 0.54, 0};}
      class T19 {maxT = 1900; color[] = {0.98, 0.99, 0.6, 0};}
      class T20 {maxT = 2000; color[] = {0.96, 0.99, 0.72, 0};}
      class T21 {maxT = 2100; color[] = {1, 0.98, 0.91, 0};}
      class T22 {maxT = 2200; color[] = {1, 1, 1, 0};}
    }
  };

#define CS_SPEED  0.8
  class CraterSmoke1
  {
    access = ReadAndWrite;
    interval = 0.05 / CS_SPEED;
    cloudletAnimPeriod = 1 * CS_SPEED;
    cloudletSize = 2.0;
    // not used
	cloudletAlpha = 1.0; 
    cloudletGrowUp = 1.0 * CS_SPEED;
    cloudletFadeIn = 0.1 * CS_SPEED;
    cloudletDuration = 3.0 * CS_SPEED;
    cloudletFadeOut = 1.5 * CS_SPEED;
    cloudletAccY = -0.1;
    cloudletMinYSpeed = 0.0 / CS_SPEED;
    cloudletMaxYSpeed = 5.0 / CS_SPEED;
    cloudletColor[] = {1, 1, 1, 0};
    initT = 500;
    deltaT = -50 * CS_SPEED;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
      class T1 {maxT = 500; color[] = {0.5, 0.5, 0.5, 0};}
    }
    cloudletShape = cloudletSmoke;
    // used for alpha
	density = 1.0 / 0.7;    
    // source size
	size = 1.0;         
    timeToLive = 0.4 * CS_SPEED;
    in = 0.0 * CS_SPEED;
    out = 0.0 * CS_SPEED;
    initYSpeed = 5.0 / CS_SPEED;
  };
  class CraterSmoke2
  {
    access = ReadAndWrite;
    interval = 0.1 / CS_SPEED;
    cloudletAnimPeriod = 1 * CS_SPEED;
    cloudletSize = 2.0;
    // not used
	cloudletAlpha = 1.0; 
    cloudletGrowUp = 1.0 * CS_SPEED;
    cloudletFadeIn = 0.1 * CS_SPEED;
    cloudletDuration = 2.5 * CS_SPEED;
    cloudletFadeOut = 1.5 * CS_SPEED;
    cloudletAccY = -0.1;
    cloudletMinYSpeed = 0.0 / CS_SPEED;
    cloudletMaxYSpeed = 2.0 / CS_SPEED;
    cloudletColor[] = {1, 1, 1, 0};
    initT = 0;
    deltaT = 0 * CS_SPEED;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
    }
    cloudletShape = cloudletSmoke;
    // used for alpha
	density = 1.0 / 0.7;    
    // source size
	size = 1.0;         
    timeToLive = 1.0 * CS_SPEED;
    in = 0.0 * CS_SPEED;
    out = 2.0 * CS_SPEED;
    initYSpeed = 0 / CS_SPEED;
  };
  class CraterSmoke3
  {
    access = ReadAndWrite;
    interval = 0.1 / CS_SPEED;
    cloudletAnimPeriod = 1 * CS_SPEED;
    cloudletSize = 1.0;
    // not used
	cloudletAlpha = 0.3; 
    cloudletGrowUp = 1.0 * CS_SPEED;
    cloudletFadeIn = 0.5 * CS_SPEED;
    cloudletDuration = 3 * CS_SPEED;
    cloudletFadeOut = 1 * CS_SPEED;
    cloudletAccY = -0.1 * CS_SPEED;
    cloudletMinYSpeed = 0.0 / CS_SPEED;
    cloudletMaxYSpeed = 5.0 / CS_SPEED;
    cloudletColor[] = {1, 1, 1, 0};
    initT = 500;
    deltaT = -80 * CS_SPEED;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
    }
    cloudletShape = cloudletSmoke;
    // used for alpha
	density = 0.5 / 0.7;    
    // source size
	size = 1.0;         
    timeToLive = 2.0 * CS_SPEED;
    in = 0.2 * CS_SPEED;
    out = 0.0 * CS_SPEED;
    initYSpeed = 5.0 / CS_SPEED;
  };
  class CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.01;
    // not used
	cloudletSize = 1; 
    cloudletAlpha = 0.6;
    cloudletDuration = 0.2;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.6;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.6;
    cloudletAccY = -3.5;
    cloudletMinYSpeed = -20;
    cloudletMaxYSpeed = 10;
    cloudletColor[] = {0.25, 0.23, 0.16, 0};
    initT = 0;
    deltaT = 0;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
    }
    cloudletShape = cloudletDust;
    size = 0.2;
    sourceSize = 0.02;
  };
  class CraterBlood : CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.005;
    cloudletAlpha = 0.5;
    cloudletDuration = 0.1;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.3;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.3;
    cloudletAccY = -1;
    cloudletMinYSpeed = -10;
    cloudletMaxYSpeed = 10;

    cloudletShape = cloudletBlood;
    cloudletColor[] = {0.35, 0.00, 0.05, 0};

    size = 0.15;
    sourceSize = 0.05;
  };
  class CraterWater : CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.01;
    cloudletAlpha = 1;
    cloudletDuration = 0.3;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.3;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.2;
    cloudletAccY = -10;
    cloudletMinYSpeed = -100;
    cloudletMaxYSpeed = 100;

    cloudletShape = cloudletWater;
    cloudletColor[] = {0.54, 0.69, 0.645, 0};

    size = 0.02;
    sourceSize = 0.02;
  };
  class CraterDustBig : CraterDustSmall
  {
    access = ReadAndWrite;
    cloudletDuration = 2;
    cloudletGrowUp = 0.2;
    cloudletFadeIn = 0.2;
    cloudletFadeOut = 1.5;
    cloudletAccY = -8;
    cloudletMinYSpeed = -20;
    cloudletMaxYSpeed = 10;
  };
  class CloudletsMissile
  {
    access = ReadAndWrite;
    interval = 0.005;
    cloudletSize = 1.7;
    cloudletAlpha = 0.5;
    cloudletDuration = 0.45;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.05;
    cloudletFadeIn = 0.0;
    cloudletFadeOut = 0.5;
    cloudletAccY = 0;
    cloudletMinYSpeed = -10;
    cloudletMaxYSpeed = 10;
    cloudletColor[] = {1, 1, 1, 0};
    initT = 0;
    deltaT = 0;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
    }
    cloudletShape = cloudletMissile;
  };
  class CloudletsMissileManual: CloudletsMissile
  {
    cloudletSize = 0.3;
    cloudletAlpha = 0.4;
  };
  class CloudletsDebugTrace: CloudletsMissile
  {
    cloudletSize = 0.02;
    cloudletAlpha = 0.5;
    cloudletDuration = 1.0;
    cloudletColor[] = {0.5, 0.5, 0, 0};
  };
  class CloudletsScud: CloudletsMissile
  {
    cloudletSize = 5;
    cloudletAlpha = 0.5;
    cloudletColor[] = {1, 1, 1, 0};

    cloudletFadeIn = 0;
    cloudletDuration = 1.5;
    cloudletFadeOut = 0.5;

    cloudletGrowUp = 1;

    cloudletAccY = 0;
    cloudletMinYSpeed = -1000;
    cloudletMaxYSpeed = 1000;

    interval = 0.02;
    size = 8.0;
    sourceSize = 1.0;
  };
  class DefaultSmoke
  {
    // sometimes overridden by program
	interval = 0.3; 
    cloudletDuration = 1;
    cloudletAnimPeriod = 3;
    // sometimes overridden by program
	cloudletSize = 1; 
    cloudletAlpha = 1;
    cloudletGrowUp = 0.3;
    cloudletFadeIn = 0.5;
    cloudletFadeOut = 2.0;
    cloudletAccY = 0;
    cloudletMinYSpeed = -10;
    cloudletMaxYSpeed = 10;
    cloudletColor[] = {1, 1, 1, 1};

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    // sometimes overridden by program
	density = 1;
	// sometimes overridden by program
    size = 1; 
    timeToLive = 30;
    in = 1;
    out = 1;
	// sometimes overridden by program
    initYSpeed = 3.5; 
  };
  class DestructedObjectDust
  {
    interval = 0.15;
    cloudletDuration = 0.5;
    cloudletAnimPeriod = 1;
	// sometimes overridden by program
    cloudletSize = 0.5; 
    cloudletAlpha = 1;
    cloudletGrowUp = 0.4;
    cloudletFadeIn = 0.2;
    cloudletFadeOut = 1.5;
    cloudletAccY = -0.5;
    cloudletMinYSpeed = -1;
    cloudletMaxYSpeed = 1;
    cloudletColor[] = {0.25,0.23,0.16, 1};

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    density = 2;
	// sometimes overridden by program
    size = 0.5; 
	// sometimes overridden by program
    timeToLive = 0.4;
	// sometimes overridden by program
    in = 0.8;
	// sometimes overridden by program
    out = 0.8; 
	// sometimes overridden by program
    initYSpeed = 2.5; 
  };
  class DestructedEngineSmoke
  {
	// overridden by program
    interval = 0.3; 
    cloudletDuration = 0.5;
    cloudletAnimPeriod = 3;
	// overridden by program
    cloudletSize = 1; 
    cloudletAlpha = 1;
    cloudletGrowUp = 0.5;
    cloudletFadeIn = 0.5;
    cloudletFadeOut = 3.0;
    cloudletAccY = -0.8;
    cloudletMinYSpeed = 0;
    cloudletMaxYSpeed = 5;
	// overridden by program
    cloudletColor[] = {0.15, 0.15, 0.10, 1}; 

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    // overridden by program
	density = 1; 
	// overridden by program
    size = 1; 
	// overridden by program
    timeToLive = 6; 
	// overridden by program
    in = 1; 
	// overridden by program
    out = 6;
	// overridden by program
    initYSpeed = 3.5; 
  };
	class ObjectDestructionFire1 : Default
	{
		damageType="Fire";
	};
	class ObjectDestructionFire2 : Default
	{
		damageType="Fire";
	};	
	class SmallFireF : Default
	{
		damageType="Fire";
	};   
};

class CfgOpticsEffect {};

class MissileManualEffects
{};
class MissileEffects
{};
class ImpactEffectsBig
{};
class ImpactEffectsSmall
{};
class ImpactEffectsBlood
{};
class ImpactEffectsWater
{};
class ExplosionEffects
{};
class ExhaustsEffect
{};
class ExhaustsEffectBig
{};
class LDustEffects
{};
class RDustEffects
{};
class LWaterEffects
{};
class RWaterEffects
{};
class LEngEffects
{};
class REngEffects
{};
class FDustEffects
{};
class HeliDust
{};
class HeliWater
{};
class DamageSmokeHeli
{};
class DamageSmokePlane
{};
class ScudEffect
{};


/// effect controlled destruction
class CfgDestructPos
{
  class DelayedDestruction
  {
    // we can use lifetime here if desired
    timeBeforeHiding = "0.2";
    hideDuration = "0.65+lifeTime*0.05";
  };
};

/// effect controlled indirect damage around destructed object
class CfgDamageAround
{
  class DamageAroundHouse
  {
    radiusRatio = "1.0";
    //indirectHit = "30*intensity";
    indirectHit = "11";
  };
};

// gun fire (used in tanks, ships etc.)
class WeaponFireGun
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
  // source parameters
  interval = 0.01;
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

// machine gun fire (used in tanks, ships etc.)
class WeaponFireMGun : WeaponFireGun
{
  // time to live (not including fades)
  cloudletDuration = 0;     
  // grow-up time
  cloudletGrowUp = 0.06;    
  // fade-in time
  cloudletFadeIn = 0;       
  // fade-out time
  cloudletFadeOut = 0.12;   

  interval = 0.005;
  size = 0.12;
  sourceSize = 0.01;

  initT = 3200;
  deltaT = -4000;
};

// gun clouds (used in tanks, ships etc.)
class WeaponCloudsGun
{
  access = ReadAndWrite;
  // single cloudlet parameters
  // time to live (not including fades)
  cloudletDuration = 0.3;   
  // animation speed
  cloudletAnimPeriod = 1.0; 
  cloudletSize = 1.0;
  cloudletAlpha = 1.0;
  // grow-up time
  cloudletGrowUp = 1;       
  // fade-in time
  cloudletFadeIn = 0.01;    
  // fade-out time
  cloudletFadeOut = 1;      
  // vertical acceleration
  cloudletAccY = 0.4;       
  // vertical speed range
  cloudletMinYSpeed = 0.2;  
  cloudletMaxYSpeed = 0.8;
  cloudletShape = cloudletClouds;
  cloudletColor[] = {1, 1, 1, 0};
  // source parameters
  interval = 0.05;
  size = 3;
  sourceSize = 0.5;
  timeToLive = 0;

  initT = 0;
  deltaT = 0;
  class Table
  {
    class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
  }
};

// gun clouds (used in tanks, ships etc.)
class WeaponCloudsMGun : WeaponCloudsGun
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

  interval = 0.02;
  size = 0.3;
  sourceSize = 0.02;
};

//Used for destruction effects.
class CfgLights
{
  class ObjectDestructionLight
  {
    color[] = {1.5, 0.75, 0};
    ambient[] = {0.45, 0.22, 0};
    brightness[] = {"fireIntensity", 0, 0.01};
  };
  class ExplosionLight
  {
    color[] = {1, 1, 1};
    ambient[] = {0.45, 0.22, 0};
    brightness[] = {"fireIntensity", 0, 0.01};
  };
};

/*!
\patch 1.14 Date 8/9/2001 by Ondra
- Fixed: Texture mapping on flags (about 1/8 of texture was skipped).
*/
class CfgCloth
{
  class Flag
  {
    //stepSize = 0.002; // high end - perfect stable
    // stable
	stepSize = 0.005; 
    //stepSize = 0.01; // nearly stable
    //stepSize = 0.02; // slightly unstable
    // number of knots in x-direction
	colPoints = 9; 
    // number of knots in y-direction
	rowPoints = 9; 

    // stretch force coeficien
	stretchCoef = 1000;  
    // friction coeficient
	fricCoef = 1; 
    // wind coeficient
	windCoef = 10; 
    // gravity coeficient
	gravCoef = 1; 
  };
};


class CfgVehicleClasses
{
  access = ReadAndCreate;
  class Men
  {
    displayName = $STR_DN_MEN;
  };
  class Animals
  {
    displayName = $STR_DN_ANIMALS;
  };
  class Car
  {
    displayName = $STR_DN_CARS;
  };
  class Armored
  {
    displayName = $STR_DN_ARMORED;
  };
  class Air
  {
    displayName = $STR_DN_AIR;
  };
  class Support
  {
    displayName = $STR_DN_SUPPORTS;
  };
  class Camera
  {
    displayName = $STR_DN_CAMERAS;
  };
  class Objects
  {
    displayName = $STR_DN_OBJECTS;
  };
  class Ammo
  {
    displayName = $STR_DN_AMMO;
  };
  class Sounds
  {
    displayName = $STR_DN_SOUNDS;
  };
  class Mines
  {
    displayName = $STR_DN_MINES;
  };
  class Ship
  {
    displayName = $STR_DN_SHIPS;
  };
};

class CfgFactionClasses
{
        access = ReadAndCreate;
        class Default{displayName = $STR_disp_other;priority =10000;side=-1;};
};
/// HUD used for typical planes and helicopters
class AirplaneHUD
{
  /// HUD location memory points
  topLeft = "HUD LH";
  topRight = "HUD PH";
  bottomLeft = "HUD LD";
  /// adjust position inside of memory points LOD
  borderLeft = 0;
  borderRight = 0;
  borderTop = 0;
  borderBottom = 0;

  // master color
  color[]={0,1,0,0.1}; 
  //font<=fontHelicopterHUD;
  //font<="FontConfig/HUD";

#define Pos0Center 0.27
  /// common definition for all vectors projected into HUD space
  class Pos10Vector
  {
    type=vector;
    // position of 0-degree dive line
    pos0[]={0.5,Pos0Center};
    // position of 10 degree bank and 10-degree dive (used to adjust scale)
    //pos10[]={2.0,Pos0Center+1.3};
    pos10[]={0.5+0.9,Pos0Center+0.7};
  };

  class Bones
  {
    class AGLMove1
    {
      type=linear;
      // above ground level
	  source=altitudeAGL; 
      min=0;
      max=100;
      minPos[]={0.05,0.1};
      maxPos[]={0.05,0.8};
    };
    class AGLMove2
    {
      type=fixed;
      pos[]={0.05,0.8};
    };
    class ASLMove1
    {
      type=linear;
      // above sea level
	  source=altitudeASL; 
      min=0;
      max=500;
      minPos[]={0.1,0.1};
      maxPos[]={0.1,0.8};
    };
    class ASLMove2
    {
      type=fixed;
      pos[]={0.1,0.8};
    };
    class VertSpeed
    {
      type=linear;
      source=vSpeed;
      min=-25;
      max=25;
      minPos[]={0,-0.4};
      maxPos[]={0,0.4};
    };
    class SpdMove2
    {
      source=speed;
      min=33;
      max=200;
      type=linear;
      minPos[]={0.94,0.1};
      maxPos[]={0.94,0.87};
    };
    class ILS
    {
      type=ils;
      // position when centered
      pos0[]={0.5,0.4};
      // position when 3-degree off in both directions
      pos3[]={0.7,0.6};
    };
    class WeaponAim: Pos10Vector
    {
      source=weapon;
    };
    class Target: Pos10Vector
    {
      source=target;
    };
    class TargetDistanceMissile
    {
      type=rotational;
      source=targetDist;
      center[]={0,0};
      min=100;
      max=3000;
      minAngle=-120;
      maxAngle=+120;
    };
    class TargetDistanceMGun
    {
      type=rotational;
      source=targetDist;
      center[]={0,0};
      min=100;
      max=1000;
      minAngle=-180;
      maxAngle=+90;
    };
    class Level0: Pos10Vector
    {
      type=horizon;
      // horizon angle to which this line corresponds to
      angle=0;
    };
    class LevelP5: Level0 {angle=+5;};
    class LevelM5: Level0 {angle=-5;};
    class LevelP10: Level0 {angle=+10;};
    class LevelM10: Level0 {angle=-10;};
    class LevelP15: Level0 {angle=+15;};
    class LevelM15: Level0 {angle=-15;};
    class Velocity: Pos10Vector
    {
      type=vector;
      source=velocity;
    };
    class PlaneW
    {
      type=fixed;
      pos[]={0.5,Pos0Center};
    };
  };
  class Draw
  {
    alpha=0.8;
    color[]={0.1,0.5,0.05};
    clipTL[]={0.0,0.05};
    clipBR[]={1.0,0.90};
    condition="on";
    class Altitude
    {
      type=line;
      points[]={
        {AGLMove1,1},{AGLMove2,1},{},
        {ASLMove2,1},{ASLMove1,1},
        // climb rate shown here as well
        {ASLMove1,{0.02,0},1},{ASLMove1,{0.02,0},1,VertSpeed,1}
      };
    };
    class DimmedBase
    {
      alpha=0.3;
      class AltitudeBase
      {
        type=line;
        points[]={{AGLMove2,1},{ASLMove2,1}};
      };
    };
    class Speed
    {
      type=line;
      points[]={
        {{0.95,0.87},1},{{0.95,0.1},1},{},
        {SpdMove2,{-0.05,0},1},{SpdMove2,1}
      };
    };
    class SpeedNumber
    {
      type=text;
      align=left;
      // text size
	  scale=1; 
      source=speed;
      // convert from m/s to km/h
	  sourceScale=3.6; 
      pos[]={SpdMove2,{-0.05,-0.03},1};
      right[]={SpdMove2,{0.01,-0.03},1};
      down[]={SpdMove2,{-0.05,0.03},1};
    };
    class PlaneW
    {
      clipTL[]={0.0,0.1};
      clipBR[]={1.0,0.90};
      class LineHL
      {
        type=line;
        points[]={
          /*{{0.43,Pos0Center},1},{{0.48,Pos0Center},1},
          {{0.5,Pos0Center-0.02},1},{{0.52,Pos0Center},1},
          {{0.5,Pos0Center+0.02},1},{{0.48,Pos0Center},1},{},
          {{0.52,Pos0Center},1},{{0.57,Pos0Center},1}*/
          {PlaneW, {-0.07, 0}, 1}, {PlaneW, {-0.02, 0}, 1},
          {PlaneW, {0, -0.02}, 1}, {PlaneW, {+0.02, 0}, 1},
          {PlaneW, {0, +0.02}, 1}, {PlaneW, {-0.02, 0}, 1}, {},
          {PlaneW, {+0.02, 0}, 1}, {PlaneW, {+0.07, 0}, 1}
        };
      };
      class Velocity
      {
        type=line;
        points[]={
          {Velocity,{0,-0.02},1},{Velocity,{0.02,0},1},
          {Velocity,{0,+0.02},1},{Velocity,{-0.02,0},1},
          {Velocity,{0,-0.02},1}
        };
      };
    };
    class MGun
    {
      condition="mgun";
      class Circle
      {
        type=line;
        points[]={
          CIRCLE(WeaponAim,0.07),{},
          CIRCLE(WeaponAim,0.01),{},
          CIRCLE_MARK(WeaponAim,0.03,0.07,-180),{},
          CIRCLE_MARK(WeaponAim,0.03,0.07,+90),{},
          {WeaponAim,1,TargetDistanceMGun,{0,0.04},1},
          {WeaponAim,1,TargetDistanceMGun,{0,0.07},1}
        };
      };
    };
    class Missile
    {
      condition="missile";
      class Circle
      {
        type=line;
        points[]={
          CIRCLE(WeaponAim,0.1),{},
          CIRCLE_MARK(WeaponAim,0.1*0.8,0.1*1.2,-120),{},
          CIRCLE_MARK(WeaponAim,0.1*0.8,0.1*1.2,+120),{},
          {WeaponAim,1,TargetDistanceMissile,{0,0.1*0.8},1},
          {WeaponAim,1,TargetDistanceMissile,{0,0.1*1.2},1}
        };
      };
      class Target
      {
        type=line;
        points[]={
          {Target,{-0.05,-0.05},1},
          {Target,{+0.05,-0.05},1},
          {Target,{+0.05,+0.05},1},
          {Target,{-0.05,+0.05},1},
          {Target,{-0.05,-0.05},1}
        };
      };
    };
    class Horizont
    {
      clipTL[]={0.2,0.1};
      clipBR[]={0.8,0.9};
      class Dimmed
      {
        alpha=0.6;
        class Level0
        {
          type=line;
          points[]={
            {Level0,{-0.40,0},1},{Level0,{-0.13,0},1},{},
            {Level0,{+0.13,0},1},{Level0,{+0.40,0},1}
          };
        };
      };
      class LevelP5
      {
        type=line;
        points[]={
          {LevelP5,{-0.15,+0.03},1},
          {LevelP5,{-0.15,0},1},{LevelP5,{+0.15,0},1},
          {LevelP5,{+0.15,+0.03},1}
        };
      };
      class LevelM5
      {
        type=line;
        points[]={
          {LevelM5,{-0.15,-0.03},1},
          {LevelM5,{-0.15,0},1},{LevelM5,{+0.15,0},1},
          {LevelM5,{+0.15,-0.03},1}
        };
      };
      class LevelP10
      {
        type=line;
        points[]={
          {LevelP10,{-0.20,+0.05},1},
          {LevelP10,{-0.20,0},1},{LevelP10,{+0.20,0},1},
          {LevelP10,{+0.20,+0.05},1}
        };
      };
      class LevelM10
      {
        type=line;
        points[]={
          {LevelM10,{-0.20,-0.05},1},
          {LevelM10,{-0.20,0},1},{LevelM10,{+0.20,0},1},
          {LevelM10,{+0.20,-0.05},1}
        };
      };
      class LevelP15
      {
        type=line;
        points[]={
          {LevelP15,{-0.20,+0.07},1},
          {LevelP15,{-0.20,0},1},{LevelP15,{+0.20,0},1},
          {LevelP15,{+0.20,+0.07},1}
        };
      };
      class LevelM15
      {
        type=line;
        points[]={
          {LevelM15,{-0.20,-0.07},1},
          {LevelM15,{-0.20,0},1},{LevelM15,{+0.20,0},1},
          {LevelM15,{+0.20,-0.07},1}
        };
      };
    };
    class ILS
    {
      condition="ils";
      class Glideslope
      {
        clipTL[]={0.29,0.29};
        clipBR[]={0.71,0.71};
        class ILS
        {
          type=line;
          points[]={
            {ILS,{-10,0},1},{ILS,{+10,0},1},{},
            {ILS,{0,-10},1},{ILS,{0,+10},1}
          };
        };
      };
      class AOABracket
      {
        type=line;
        points[]={
          {{0.42,0.78},1},{{0.4,0.78},1},
          {{0.4,0.88},1},{{0.42,0.88},1}
        };
      };
    };
  };
}; // HUD

enum {CPDriver, CPGunner, CPCommander, CPCargo};

// vehicle types
class CfgVehicles
{
  // define enum value for XML docs
  //-->Vehicle
  access = ReadAndCreate;
  //default definitions valid for all units
  // NOTE: DO NOT enter any classes other than vehicle types

  /*!
  \patch 1.28 Date 10/22/2001 by Ondra
  - Fixed: Tank drivers were not able to see enemy.
  */
  class All
  {

	  //-- any vehicle
    access = ReadAndWrite;

    scope=private;
	  // all vehicles are reversed - except static
    reversed=true; 
	  // normal vehicle are autocentered
    autocenter=true; 
	  // model is animated and cannot be assumed static
    animated=true; 
    // by default shadows are enabled
	  shadow=true; 

    mapSize = 10;

    // zero for default(engine drived), 1 object is always visible to object view distance, 2 - object is visible to terrain view distance
    featureType = 0;

    vehicleClass="";

    icon = iconObject;

    side=TSideUnknown;
    faction = "Default";
    displayName=$STR_DN_UNKNOWN;
    nameSound="unknown";
    speechSingular[] = {};
    speechPlural[] = {};
    textSingular = "";
    textPlural = "";

    maxDetectRange = 20;
    detectSkill = 20;
    mineAlertIconRange = 200;
    killFriendlyExpCoef = 1;

    weaponSlots = 0;

    // targets recognition
    // how difficult to spot - bigger - better spotable
	  camouflage=2; 
	  // audible - bigger - better heard
    audible=1; 
    // accuracy needed to recognize type of this target
	  accuracy=0; 

    // night spotability coefficients
	  spotableDarkNightLightsOff=0.001; 
    spotableNightLightsOff=0.02;
    spotableNightLightsOn=4;

    // night target recognition 
    accuracyDarkNightLightsOff = 0.001;
    accuracyNightLightsOff = 0.006;
    accuracyNightLightsOn = 0.1;

    // reference to class CfgSoundEffects::AttenuationsEffects, used for external sounds attenuation
    attenuationEffectType="";
    // how is the volume of the vehicle engine/movement changed when sitting inside that vehicle
    // by default we play our own voices with half volume
    insideSoundCoef = 0.5;//db-30;
    // enable low pass filter to surrounding samples when camera is located inside vehicle, false = disabled
    outsideSoundFilter = false;

    // coefficient for how much is detection skill reduced if unit is in the vehicle
    insideDetectCoef = 0.5;

    /**a vehicle can occlude / obstruct sounds when sound is outside of the vehicle
    and listener inside, or the other way around
    obstruction: how much is the direct path free
    there is some indirect way how can the sound reach the vehicle (open vehicle window),
    but the direct path is not available (obstruction leaves echoed sound unfiltered)
    occlusion: how much is both the direct and indirect path free
    describes how much the vehicle is sealed (echoed sound is filtered as well)
    1 means not occluded, 0 means fully occluded (db-XX can also be used)
    See also EAX documentation.
    */

    occludeSoundsWhenIn = db-10;
    obstructSoundsWhenIn = db-5;
    /**
    How much are low frequencies attenuated by obstruction and occlusion.
    0 = no attenuation (LF goes through), 1 = full attenuation (LF attenuated the same way as HF)
    Note: not implemented yet, 0 and 0.25 is currently used.
    */
    obstructSoundLFRatio = 0;
    occludeSoundLFRatio = 0.25;

    unloadInCombat = false;

    // antiRollbar force coef, 0 = disabled.
    antiRollbarForceCoef = 0.0;//100.0 is a nice value;
    // maximum size of the antiRollbar force (to avoid jumping)
    antiRollbarForceLimit = 5.0;
    // from which speed the antiRollbar speed should be applied 
    antiRollbarSpeedMin = 20;
    // from what speed the effect is fully applied
    antiRollbarSpeedMax = 60;

    // Coef for slow vehicle movement
    slowSpeedForwardCoef = 0.3;
    // Coef for normal vehicle movement
    normalSpeedForwardCoef = 0.85;
    // Coef for fast is 1.0

    /// coefficient for epe contacts on applying impulse damage
    epeImpulseDamageCoef = 30.0;

    // required parameter for tanks
	gunnerHasFlares = true; 
    // required parameter for transports - Manual Fire action is available
	enableManualFire = true; 

    // vehicle sensitivity, most vehicles see and hear less than man
    sensitivity=2.5; // sensor sensitivity

    sensitivityEar=0.0075;

    // default properties
    // typical size vehicle
	model=bmp; 
    // use picture from model
	picture=; 
    // Picture in Command Bar
	portrait=; 

    // Special object for COIN constructing module
	ghostPreview=; 

    simulation=;
    destrType=DestructDefault;
    armor=100;
    armorLights=0.4;
    // structural damage
	armorStructural=1.0; 
    crewVulnerable = true;
    damageResistance = 0.004;
    //multiplier of damage that crew receives when vehicle crashes to object (0.25 - 25%)
    crewCrashProtection = 1.0;

    // destruction of buildings
    // what object will be building replaced by
    replaceDamaged = ""; 
    // limit for damage of hitpoint from the list below when the building is replaced
    replaceDamagedLimit = 0.9; 
    // list of hitpoints to check for limit
    replaceDamagedHitpoints[] = {}; 

    //Don't remove building from epe scene after death
    keepInEPESceneAfterDeath = false;

    cost=500000;
    fuelCapacity=0;
    //ammount of fuel needed for 1 second, so far used only for RTD heli
    fuelConsumptionRate = 0.01;

    extCameraPosition[]={0,2,-20};
    groupCameraPosition[]={0,5,-30};

    extCameraParams[] = {1};


    // steer point on path properties
	steerAheadSimul=0.3; 
    steerAheadPlan=0.4;

    // camera smooth speed factor
    cameraSmoothSpeed=5.0;

    // minimal time spent firing on single target
    minFireTime=20; 

    // brake before turns
    predictTurnSimul=1.2; 
    predictTurnPlan=1.0;

    // AI coefficient for using explosives to damage more targets
    indirectHitEnemyCoefAI = 10.0;
    indirectHitFriendlyCoefAI = -20.0;
    indirectHitCivilianCoefAI = -20.0;
    indirectHitUnknownCoefAI = -0.5;

    
	precision=5; 
    
	brakeDistance=5; 
    // formation spacing
	formationX=10; 
    formationZ=20;

    formationTime=5;

    alwaysTarget = false;

    irTarget = true;

    irScanRangeMin=0;
    irScanRangeMax=0;
    irScanToEyeFactor=1;
    irScanGround=1; // irScanGround (0 = only air, 1 = ground and air, 2 = only ground).

    laserTarget = false;
    laserScanner = false;
    nvTarget = false;
    nvScanner = false;
    artilleryTarget = false;
    artilleryScanner = false;
    // flag if current position (driver) can use scanners for target marking
    canUseScanners = true;

    // never used value, engine don't use it
	preferRoads=false; 
    unitInfoType=RscUnitInfoTank;
    unitInfoTypeLite = 0;  //unitInfoTypelite = RscUnitInfoTankLite; if unitInfoTypeLite = 0, unitInfoType will be used
    hideUnitInfo=false;
    nightVision=false;

    //0 - none, 1 - tactical display, 2 - vehicle radar, 4 - air radar, 8 - only as compass
    commanderCanSee = CanSeeAll;
    gunnerCanSee = CanSeeOptics+CanSeeEar+CanSeeCompass;
    driverCanSee = CanSeeEye+CanSeeEar+CanSeeCompass;

    showCrewAim = 7; // 1 - show primary gunner, 2 - show commander, 4 - others (1+2+4=7 - show gunner+commander+others)
    radarType = 0;

    // max speed on level road, km/h
	maxSpeed=80; 
    /// how fast to move when speed mode is SpeedLimited (relative to _maxSpeed)
    limitedSpeedCoef = 0.22;
    // value<0: calculate from fuel/ammo cargo + tanks and multiply with abs(value)
    // value>0: use value directly as hit in FuelExplosion
    secondaryExplosion=-1;


    hasDriver=true;
    driverForceOptics=false;

    // hide weapons when unit is sitting on given position
    hideWeaponsDriver = true;
    hideWeaponsCargo = false;

    getInRadius = 2.5;

    selectionClan = "";
    selectionDashboard = "";
    selectionShowDamage = "";
    selectionBackLights = "";

    memoryPointSupply = "doplnovani";
    /** when supplyRadius is positive, it is directly the radius of the supply circle
    when it is negative, the radius is calculated as geometry lod radius * -supplyRadius
    */
    supplyRadius = -1;

    // Notice: When showGPS in mission is true, the GPS is enabled in any case
    // default vehicle has not GPS miniMap enabled
	enableGPS = false; 
    // watch device is not present by default
	enableWatch = false; 
    // radio station is not present by default
	enableRadio = false; 

    //which weapons lock can vehicle detect
    lockDetectionSystem = 0;
    incomingMissileDetectionSystem = 0;

    headGforceLeaningFactor[] = {0.01, 0.002, 0.01};

    //if precise action interaction test. should be uset for getInXX actions
    usePreciseGetInAction = false;
    allowTabLock = true;
    showAllTargets = showAllNo;

    dustFrontLeftPos = "dustFrontLeft";
    dustFrontRightPos = "dustFrontRight";
    dustBackLeftPos = "dustBackLeft";
    dustBackRightPos = "dustBackRight";

    wheelCircumference = 1;
    
    // https://wiki.bistudio.com/index.php/A3_Buoyancy
    waterLeakiness = 0.5;
    waterResistanceCoef = 0.5;
    waterLinearDampingCoefX = 0.0;
    waterLinearDampingCoefY = 0.0;
    waterAngularDampingCoef = 0.0;

    // NVGs can be hidden for individual vehicle positions
    showNVGDriver = false;
    showNVGCommander = false;
    showNVGGunner = false;
    showNVGCargo[] = {false}; // if there are more cargo positions the last item will be used to fill up

    // TRUE allow sound filtering (attenuation) for individual vehicle positions
    soundAttenuationCargo[] = {true}; // if there are more cargo positions the last item will be used to fill up

    // defines if destroyed unit add score to MP table
    countsForScoreboard = true;

    // hull damage > 0.9 will cause explosion
    hullDamageCauseExplosion = false;

    class EventHandlers{};

    class MarkerLights
    {
    };

    // light sources - not targets
    class NVGMarkers {}

    // define Strobe/IRStrobe target pars
    class NVGMarker
    {
      diffuse[] = {1, 1, 1, 1};
      ambient[] = {1, 1, 1, 1};
      brightness = 1;
      blinking = false;
      onlyInNvg = false;
    };

    // new style of turrets definition - structure description
    // no turrets by default
	class Turrets 
    {
    };

    class HeadLimits
    {
      initAngleX=5; minAngleX=-30; maxAngleX=+40;
      initAngleY=0; minAngleY=-90; maxAngleY=+90;
      minAngleZ=-45; maxAngleZ=+45; 
      rotZRadius=0.2; //distance from neck to eye to rotate camera with shifted center of rotation
    };
    class ViewPilot
    {
      initAngleX=5; minAngleX=-55; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    class ViewCargo
    {
      initAngleX=5; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    class ViewOptics
    {
      initAngleX=0; minAngleX=-30; maxAngleX=+30;
      initAngleY=0; minAngleY=-100; maxAngleY=+100;
      initFov=0.7; minFov=0.42; maxFov=0.85;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    // specific data for person relative to given vehicle position (can differ for standalone Person, Car, Tank, Helicopter, Ship, Parachute, ...)
    class PilotSpec
    {
      showHeadPhones = false;
    };
    class CargoSpec
    {
      class Cargo1
      {
        showHeadPhones = false;
      };
    };

    // other properties
    transportSoldier = 0;
    transportAmmo = 0;

    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;

    isbackpack = false;

    transportFuel = 0;
    transportRepair = 0;
    transportVehiclesCount = 0;
    transportVehiclesMass = 0;
    class TransportWeapons {};
    class TransportMagazines {};
    attendant = false;
    engineer = false;
    uavHacker = false;

    soundEngine[] = {"", 1, 1};
    soundEnviron[] = {"", 1, 1};
    class SoundEnvironExt
    {
      // use soundEnviron as default
    };

    class SoundEquipment {};
    class SoundGear {};

    class SoundBreath {};
    class SoundBreathSwimming {};
    class SoundBreathInjured {};
    class SoundHitScream {};
    class SoundInjured {};
    class SoundBreathAutomatic {};
    class SoundDrown {};
    class SoundChoke {};
    class SoundRecovered {};
    class SoundBurning {};

    class PulsationSound {};

    class SoundDrowning {};

    soundCrash[] = {"", db-10, 1};
    soundLandCrash[] = {"", db-0, 1};
    soundWaterCrash[] = {"", db-15, 1};
    soundGetIn[] = {"", db-70, 1};
    soundGetOut[] = {"", db-70, 1};
    soundServo[] = {"", db-50, 0.5};
    soundElevation[] = { "", db-50, 0.5 };
    sounddamage[] = {"", 1, 1};
    soundEngineOnInt[] = {"", 1, 1};
    soundEngineOffInt[] = {"", 1, 1};
    soundEngineOnExt[] = {"", 1, 1};
    soundEngineOffExt[] = {"", 1, 1};
    soundGearUp[] = {"", 1, 1};
    soundGearDown[] = {"", 1, 1};
    soundFlapsUp[] = {"", 1, 1};
    soundFlapsDown[] = {"", 1, 1};


    cabinOpenSound[] = {"", 1, 1};
    cabinCloseSound[] = {"", 1, 1};
    cabinOpenSoundInternal[] = {"", 1, 1};
    cabinCloseSoundInternal[] = {"", 1, 1};

    soundCrashes[] = {soundCrash,1};
    soundLandCrashes[] = {soundLandCrash,1};
    soundWaterCrashes[] = {soundWaterCrash,1};
    emptySound[]={"",0,1};
    soundWoodCrash[] = {emptySound,0};
    soundBushCrash[] = {emptySound,0};
    soundBuildingCrash[] = {emptySound,0};
    soundArmorCrash[] = {emptySound,0};

    soundLocked[] = {"", 1, 1};
    soundIncommingMissile[] = {"", 1, 1};
    soundDammage[] = {"", 1, 1};

    // default vehicle has no weapons
    weapons[]={};
    magazines[]={};

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.7, 0.5, 0.3};

    typicalCargo[]={};

    class Reflectors {};
    aggregateReflectors[] = {};

    // get in / out actions for the driver / pilot
    getInAction = "";
    getOutAction = "";

    driverAction = "";
    driverInAction = "";

    // get in / out actions for cargo
    cargoGetInAction[] = {};
    cargoGetOutAction[] = {};

    cargoAction[] = {};
    cargoIsCoDriver[] = {false};

    driverCompartments = Compartment1;
    cargoCompartments[] = {Compartment1};

    driverOpticsModel = "";
    driverOpticsEffect[] = {};

    driverOpticsColor[] = {1, 1, 1, 1};

    // should AI turn in when in Combat mode
    hideProxyInCombat = false;
    // should driver be forced into turn-in position
    forceHideDriver = false;
    // if driver has ability to turnin/turnout
    // by default take from hideProxyInCombat
    canHideDriver = -1;

    //@{ some proxies should cast shadows
    castDriverShadow = false;
    castCargoShadow = false;
    //@}

    //@{ shadows should be casted in some special internal (cockpit) views
    // diffuse light may be attenuated when rendering interior
    // ambient light attenuation not implemented yet
    /// used for VIEW_PILOT
    viewDriverShadow = 1;
    viewDriverShadowDiff = 1.0;
    viewDriverShadowAmb = 1.0;

    /// used for VIEW_CARGO
    viewCargoShadow = 1;
    viewCargoShadowDiff = 1.0;
    viewCargoShadowAmb = 1.0;
    //@}

    //@{ some crew position should be ejected when killed
    ejectDeadDriver = false;
    ejectDeadCargo = false;
    //@}

    crew = "Civilian";

    // selections, where texture can be redefined
    hiddenSelections[] = {};
    // initial texture in hidden selections
    hiddenSelectionsTextures[] = {};
    // initial material in hidden selections
    hiddenSelectionsMaterials[] = {};

    // selections, where texture can be redefined
    hiddenUnderwaterSelections[] = {};
    shownUnderWaterSelections[] = {};
    // initial textures in hidden underwater selections
    hiddenUnderwaterSelectionsTextures[] = {};

    /// definition of explosion effects
    class FxExplo
    {
      access = ReadAndCreate;
    };

    class AnimationSources {};
    selectionFireAnim = "";
    class GunFire : WeaponFireGun {};
    class GunClouds : WeaponCloudsGun {};
    class MGunClouds : WeaponCloudsMGun {};

    /// material animation based on total (structural) vehicle damage
    class Damage
    {
      tex[]={};
      mat[]={};
    };
    /// selection used for total damage (parts of the model connected to no hitzone)
    selectionDamage="zbytek";

   // if is driver and in cocpit force view down by headAimDown
    HeadAimDown = 0;

    class DestructionEffects
    {
      class Light1
      {
        simulation = "light";
        type = "ObjectDestructionLight";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
      class Smoke1
      {
        simulation = "particles";
        type = "ObjectDestructionSmoke";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
      class Fire1
      {
        simulation = "particles";
        type = "ObjectDestructionFire";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
      class Sparks1
      {
        simulation = "particles";
        type = "ObjectDestructionSparks";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
      class Sound
      {
        simulation = "sound";
        type = "";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    // cargo and driver can eject by default
    cargoCanEject = 1;
    driverCanEject = 1;
    // time in seconds for hurting fire to start its effect on vehicle
    fireResistance = 10;

    airCapacity = 10;
    /// time in seconds vehicle is ok under water
    waterResistance = 10;
    /// damage per second after waterResistance caused to engine
    waterDamageEngine = 0.2;
    /// damage starts for vehicle deeper than maxFordingDepth
    maxFordingDepth = 1;
    /// effect of hitting the water surface
    impactEffectsSea = "ImpactEffectsSea";
    /// time to change textures from normal to destroyed
    damageTexDelay = 0.0000;

    // cost of way inside building for AI (multiplier for minCost)	
    coefInside = 2;
    // no more used
    coefInsideHeur = 2;
    // speed coef. inside buildings (do not run inside) 
    coefSpeedInside = 2;
    windSockExist = 0;

    /// No memory points for sling loading by default
    slingLoadCargoMemoryPoints[] = {};
    slingLoadCargoMemoryPointsDir[] = {};
    /// number of wheels the vehicle has
    numberPhysicalWheels = 0;

    damageHalf[] = {};
    damageFull[] = {};

    class camShakeGForce	/// camera shake caused by the G force
    {
      power = 1;	/// power of the shake
      frequency = 20;
      distance = 0;	/// how far from the vehicle does the shake appear
      minSpeed = 1;	/// minimum speed of the vehicle to start the shake
      duration = 3;	/// duration of the shake, does cross-fade if higher than 1
    };
    minGForce = 0.2;	/// minimum G-force required for the shake
    maxGForce = 2;	/// strength interpolates between min and max
    gForceShakeAttenuation = 0.5;	/// multiplies strength of the shake

    class camShakeDamage 	/// camera shake in damaged vehicle
    {
      power = 0.5;	/// power of the shake
      frequency = 60;
      distance = -1;	/// how far from the vehicle does the shake appear
      minSpeed = 1;	/// minimum speed of the vehicle to start the shake
      attenuation = 0.5;	/// multiplies strength of the shake
      duration = 3;	/// duration of the shake, does cross-fade if higher than 1
    };

#define CANNONS      1
#define MGUNS        2
#define ROCKETS      4
#define AAMISSILES   8
#define ATMISSILES   16
#define MISSILES     32
#define BOMBS        64
#define SPECIAL      128

    weaponsGroup1 = CANNONS + MGUNS;
    weaponsGroup2 = ROCKETS;
    weaponsGroup3 = AAMISSILES + ATMISSILES + MISSILES;
    weaponsGroup4 = BOMBS + SPECIAL;

    soundTurnIn[] = { "", db-70, 1 };
    soundTurnOut[] = { "", db-70, 1 };
    soundTurnInInternal[] = { "", db-70, 1 };
    soundTurnOutInternal[] = { "", db-70, 1 };

  };

  class Logic : All
  {
    //-- game logic invisible unit
    displayName = $STR_DN_LOGIC;
    nameSound = "unknown";
    scope = public;
    vehicleClass = "Objects";
    simulation = "invisible";
    side = TLogic;
    icon = "#(argb,8,8,3)color(1,1,1,1)";
    model = "\core\default\default.p3d";
    picture = "#(argb,8,8,3)color(1,1,1,1)";

    fsmFormation = "";
    fsmDanger = "";
  };

  class AllVehicles: All
  {
    icon = iconVehicle;
    nameSound="unknown";

    class SquadTitles {name="clan_sign"; color[]={0,0,0,0.75};}

    memoryPointDriverOptics[] = {"driverview", "pilot"};

    //if precise GetIn action is enabled, these are used for AI
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
    memoryPointsGetInCoDriver = "pos codriver";
    memoryPointsGetInCoDriverDir = "pos codriver dir";

    //if precise GetIn action is enabled, these are used for player (dor handle position)
    memoryPointsGetInDriverPrecise = "pos driver";
    // precise get in cargo allows only array (memoryPointsGetInCoDriver is not supported)
    memoryPointsGetInCargoPrecise[] = {"pos cargo"};

	  //memory points for car, tank or ship water effects leftWaterEffect and rightWaterEffect
    memoryPointsLeftWaterEffect = "waterEffectL";
    memoryPointsRightWaterEffect = "waterEffectR";
    memoryPointTaskMarker = "";
    memoryPointTaskMarkerOffset[] = {0, 0, 0};
    selectionClan = "clan";
    selectionDashboard = "podsvit pristroju";
    selectionShowDamage = "poskozeni";
    selectionBackLights = "zadni svetlo";

    class NewTurret
    {
      body = "mainTurret";
      gun = "mainGun";
      animationSourceBody = "mainTurret";
      animationSourceGun = "mainGun";
      animationSourceHatch = "hatchGunner";
      animationSourceCamElev = "camElev";

      proxyType = CPGunner;
      proxyIndex = 1;
      gunnerName = $STR_POSITION_GUNNER;
      //! What vehicle class will be used as crew in this turret. If empty it is defaulted to crew type of parent vehicle
      gunnerType = "";

      primaryGunner = 1;
      primaryObserver = 0;

      weapons[]= {};
      magazines[]= {};


      soundServo[] = {"", db-50, 1.0};
      soundElevation[] = { "", db-50, 1.0 };

      //gunBeg = endpoint of the gun
	    gunBeg = ""; 
	    //gunEnd = chamber of the gun
      gunEnd = ""; 

      minElev=-4; maxElev=+20; initElev=0;
      minTurn=-360; maxTurn=+360; initTurn=0;
	  /// added limits for turned out gunner
      minOutElev=-4; maxOutElev=+20; initOutElev=0;
      minOutTurn=-60; maxOutTurn=+60; initOutTurn=0;
      maxHorizontalRotSpeed = 1.2; maxVerticalRotSpeed = 1.2;

      // have effect on turret anim. source connected by "animationSourceCamElev' and on turret info IGUI_WEAPON_OPTICS_PITCH 182
      minCamElev = -90;
      maxCamElev = 90;
      initCamElev = 0;

      stabilizedInAxes = 3; /// Stabilized in axes both

      //Commander can take over with "manual fire"
	  primary = true; 
      //gunner position is accessible by Get In
	  hasGunner = true; 
	  // how much gunner commands the vehicle
      commanding = true; 

      // get in / out actions for the gunner
      gunnerGetInAction = "";
      gunnerGetOutAction = "";

      gunnerAction = "";
      gunnerInAction = "";

      //0 - none, 1 - tactical display, 2 - vehicle radar, 4 - air radar, 8 - only as compass
      // !!!for main gunner gunnerCanSee is used !!!
      turretCanSee = 0;
      showCrewAim = 7; // 1 - show primary gunner, 2 - show commander, 4 - others (1+2+4=7 - show gunner+commander+others)

      // flag if current position (gunner) can use scanners for target marking
      canUseScanners = true;

      class ViewGunner: ViewOptics
      {
        initAngleX=5; minAngleX=-75; maxAngleX=+85; 
        initAngleY=0; minAngleY=-150; maxAngleY=+150; 
        minFov = 0.25; maxFov = 1.25; initFov = 0.75;
        minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
        continuous = 0; //no zoom by default. The value 8 means the FOV is 8x zoomed in 1 second (in ArmA the 8 is engine default for continuous CameraTypes)
      };
      class TurretSpec
      {
        showHeadPhones = false;
      };

      gunnerOpticsModel = "";
      gunnerOpticsColor[] = {0, 0, 0, 1};
      memoryPointGunnerOptics= "";
      gunnerForceOptics = true;
      gunnerOpticsShowCursor = 0;
      turretInfoType = "";

      gunnerOutOpticsModel = "";
      gunnerOutOpticsColor[] = {0, 0, 0, 1};
      gunnerOpticsEffect[] = {};
      gunnerOutOpticsEffect[] = {};

      memoryPointGunnerOutOptics= "";
      gunnerOutForceOptics = 0;
      gunnerOutOpticsShowCursor = 0;
      gunnerFireAlsoInInternalCamera = 1;
      gunnerOutFireAlsoInInternalCamera = 1;


      gunnerUsesPilotView = 0;
      castGunnerShadow = 0;

      viewGunnerShadow = 1;
      viewGunnerShadowDiff = 1.0;
      viewGunnerShadowAmb = 1.0;

      ejectDeadGunner = 0;
      hideWeaponsGunner = true;
      /// gunner can hide when forceHideGunner set or hideProxyInCombat set and combat mode present
      /// by default taken from hideProxyInCombat
      canHideGunner = -1;
      forceHideGunner = 0;
      outGunnerMayFire = 0;
      inGunnerMayFire = true;

      //show head mounted display to gunner (if HDM is present)
      showHMD = false;
      /*
      Requires hideProxyInCombat=1;
      Renders gunner also in external view even when turned in.

      Caution: Used to simulate the gunners which cannot be turned in, ued also for sound occlusion decision.
      */    viewGunnerInExternal = 0;

      lockWhenDriverOut = 0;

      // when speed of vehicle is higher that this value then gunner cannot control movement of his turret, -1 for disable
      lockWhenVehicleSpeed = -1;

      gunnerCompartments = Compartment1;

      LODTurnedIn = -1;
      LODTurnedOut = -1;

      /// switch vehicle engine on when this turret moved
      startEngine = true;

      memoryPointsGetInGunner= "";
      memoryPointsGetInGunnerDir= "";
      memoryPointsGetInGunnerPrecise= "";

      memoryPointGun = "";
      selectionFireAnim = "";

      missileBeg = "spice rakety";
      missileEnd = "konec rakety";

      armorLights=0.4;
      class Reflectors {};
      aggregateReflectors[] = {};

      class GunFire : WeaponFireGun {};
      class GunClouds : WeaponCloudsGun {};
      class MGunClouds : WeaponCloudsMGun {};

      class HitPoints
      {
        class HitTurret {armor=0.8;material=51;name=turret;visual="turret";passThrough=1; explosionShielding=1;};
        class HitGun {armor=0.6;material=52;name=gun;visual="gun";passThrough=1; explosionShielding=1;};
      };
      class Turrets {};
      class ViewOptics
      {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.3; minFov=0.07; maxFov=0.35;
        minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
        speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
      };

      // set to TRUE disable using vision modes when player has NVG on
      forceNVG = false;
	  // if true, unit can take control over vehicle
	  isCopilot = false;
	  // if false, unit cannot eject from the turret
	  canEject = true;
	  
      
      gunnerLeftHandAnimName = "";
      gunnerRightHandAnimName = "";
      gunnerLeftLegAnimName = "";
      gunnerRightLegAnimName = "";

      gunnerDoor = "";
      preciseGetInOut = 0;
      turretFollowFreeLook = false;

      allowTabLock = true;
      showAllTargets = showAllNo;
	  
	    /// Option for UAVs to not create AI inside by default
	    dontCreateAI = false;
      // Disable sound attenuation for turret => external sound in turret
      disableSoundAttenuation = false;
      // Enable option to control sling loading in this turret
      slingLoadOperator = false;
	  /// default player position for sounds
	  playerPosition = 0;  

	  /// Turrets don't allow launcher use by default
	  allowLauncherIn = false;
	  allowLauncherOut = false;

    /// new FFV limits
    /// class TurnIn and TurnOut defines, encapsulates few new parameters
    class TurnIn
    {
      /// how much hatch animation change the orientation of proxy during switching to other state
      /// in degrees.
      turnOffset = 0;

      /// by default undefined, means we take limits as defined in minTurn, minElev etc
      /// can be defined by using diag_recordTurretLimits command with diagnostic version
      /// Line strip, defined using angles in degrees where { turn, elev }
      /// bottom line defines left-right range of rotation, should be bigger than top line
      //limitsArrayTop = { { 0, 0 } };
      //limitsArrayBottom = { { 0, 0 } };
    };
    class TurnOut : TurnIn
    {
    };

    };
    class ViewPilot
    {
      initAngleX=5; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    class ViewCargo
    {
      initAngleX=5; minAngleX=-75; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    class ViewOptics
    {
      initAngleX=0; minAngleX=-30; maxAngleX=+30;
      initAngleY=0; minAngleY=-100; maxAngleY=+100;
      initFov=0.7; minFov=0.42; maxFov=0.85;
      minMoveX=0; maxMoveX=0; minMoveY=0; maxMoveY=0; minMoveZ=0; maxMoveZ=0;
      speedZoomMaxSpeed = 1e10; speedZoomMaxFOV = 0;
    };
    class PilotSpec
    {
      showHeadPhones = false;
    };
    class CargoSpec
    {
      class Cargo1
      {
        showHeadPhones = false;
      };
    };

    // by default there is no MFD/HUD
    class MFD
    {
    };

    class Sounds
    {
      class Engine
      {
        sound = "soundEngine";
        frequency = "rpm";
        volume = "rpm + speed";
      };
      class Movement
      {
        sound = "soundEnviron";
        frequency = "speed";
        volume = "speed";
      };
    };

    class SoundEvents {};

    tracksSpeed = 0; // car mostly don't have tracks, to  enable half-truck set bigger then 1
    selectionLeftOffset = "";
    selectionRightOffset = "";

    class RenderTargets {};

    cargoProxyIndexes[] = {};
    driverLeftHandAnimName = "";
    driverRightHandAnimName = "";
    driverLeftLegAnimName = "";
    driverRightLegAnimName = "";

    driverDoor = ;
    cargoDoors[] = {};

    hasTerminal = 0;

    getInOutOnProxy = false;
    preciseGetInOut = 0;
    cargoPreciseGetInOut[] = {0};
	
	  availableForSupportTypes[] = {}; /// vehicle is available for these kinds of support eg: Artillery, Drop, Transport, etc. See news:jn5nvg$i76$1@new-server.localdomain
    waterPPInVehicle = true;

  };

  class Land: AllVehicles
  {
    //-- ground vehicle
    displayName=$STR_DN_VEHICLE;
    nameSound="unknown";
    accuracy=0.0005;
    armor=30;
    cost=100000;
    fuelCapacity=0;
    //weapons[]={Gun120,GunHeat120,MachineGun12_7}; // be carefull - rather expect good tank
    // if we do not know what it is, it is probably soldier
	weapons[]={FakeWeapon}; 
    magazines[]={FakeWeapon};
    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.8, 0.8, 0.3};

    wheelDamageThreshold = 0.2;
    wheelDestroyThreshold = 0.99;
    wheelDamageRadiusCoef = 0.9;
    wheelDestroyRadiusCoef = 0.4;
  };
  class LandVehicle: Land
  {
    displayName=$STR_DN_VEHICLE;
    accuracy=0.02;

    cost=500000;
	
    class Components
    {
      class TransportCountermeasuresComponent
      {
      }
    }

    selectionBrakeLights = "brzdove svetlo";

    //1st value is name of point in memory LOD, if this point doesn't exist use 2nd one //used only in TankOrCar
    memoryPointMissile[] = {"spice rakety", "usti hlavne"};
    memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};

    class Exhausts
    {
      class Exhaust1
      {
        position = "exhaust";
        direction = "exhaust_dir";
        effect = "ExhaustsEffect";
      };
    };
	/// default value of duration of exhaust effect after starting vehicle
	engineStartSpeed = 1.5;

    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";

    leftWaterEffect = "LWaterEffects";
    rightWaterEffect = "RWaterEffects";

    leftFastWaterEffect = "LWaterEffects";
    rightFastWaterEffect = "RWaterEffects";


    class Reflectors
    {
      class Left
      {
        color[] = {0.9, 0.8, 0.8, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 0.5;
        brightness =0.5;
      };
      class Right
      {
        color[] = {0.9, 0.8, 0.8, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 0.5;
        brightness = 0.5;
      };
    };
    aggregateReflectors[] = {{"Left", "Right"}};

    /// how fast tracks are moving relative to wheels
    tracksSpeed = 0; // car mostly don't have tracks, to  enable half-truck set bigger then 1
    selectionLeftOffset = "PasOffsetL";
    selectionRightOffset = "PasOffsetP";
	/// Default value for vehicle's explosions effect
	explosionEffect = "FuelExplosion"; 
/*** /// Disabled until set
	/// Gearbox and transmission  via PhysX merge 9/2011, comments by DM, see (news:ipdu62$j77$1@new-server.localdomain - BISim NG) for details
	idleRpm = 600; // RPM at which the engine idles.
	redRpm = 2300; // RPM at which the engine redlines.

	engineLosses = 10; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
	transmissionLosses = 500; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

	class complexGearbox
	{
        GearboxRatios[] = {"R2",-6,"R1",-21,"N",0,"1",30,"2",20,"3",14,"4",9,"5",6,"6",4}; // defines all the gears available in the gearbox. Total number of gears is "unlimited" (tho Wassik might want to clarify that). In matched pairs: "Name", <ratio>
        TransmissionRatios[] = {"High",4.1176,"Low",5.85}; // Optional: defines transmission ratios (for example, High and Low range as commonly found in offroad vehicles)
        gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
        moveOffGear        = 2; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
        driveString        = "D"; // string to display in the HUD for forward gears.
        neutralString      = "N"; // string to display in the HUD for neutral gear.
        reverseString      = "R"; // string to display in the HUD for reverse gears.
        gearUpMaxCoef      = 0.95;          //(0.95 by default) before redRPM on actual gear
											// coef for changing up in automatic or semi-automatic gearboxes with full throttle
        gearDownMaxCoef    = 0.85;          //(0.85 by default) before redRPM on lower gear
											// coef for changing down in automatic or semi-automatic gearboxes with full throttle
        gearUpMinCoef      = 0.95;          //(0.65 by default) before redRPM on actual gear
											// coef for changing up in automatic or semi-automatic gearboxes with no throttle
        gearDownMinCoef    = 0.85;          //(0.55 by default) before redRPM on lower gear
											// coef for changing down in automatic or semi-automatic gearboxes with no throttle
	}; 	
*/
  };
  class Car: LandVehicle
  {
    //--

    class Components : Components
    {
      class AICarSteeringComponent
      {
        steeringPIDWeights[] = { 2.9, 0.1, 0.2 };
        speedPIDWeights[] = { 0.7, 0.2, 0.0 };
        convoyPIDWeights[] = { 1.0, 0.01, 0.01 };

        doRemapSpeed = true;
        remapSpeedRange[] = { 30.0, 70.0 };
        remapSpeedScalar[] = { 1.0, 0.35 };

        doPredictForward = true;
        predictForwardRange[] = { 1, 20 };
        steerAheadSaturation[] = { 0.01, 0.4 };

        speedPredictionMethod = 2;

        wheelAngleCoef = 0.7;
        forwardAngleCoef = 0.7;
        steeringAngleCoef = 1.0;
        differenceAngleCoef = 0.4;

        stuckMaxTime = 3.0;

        allowOvertaking = true;
        allowDrifting = false;
        allowCollisionAvoidance = true;

        maxWheelAngleDiff = 0.2616;
        minSpeedToKeep = 0.1;

        // radians per second
        commandTurnFactor = 1.0;
      };
    };

    mapSize = 5;

    fuelExplosionPower = 100;

    icon = iconCar;
    displayName=$STR_DN_CAR;
    nameSound="veh_car";
    accuracy=0.20;
    cost=40000;
    fuelCapacity=100;

    unloadInCombat = true;
    canFloat=false;

    collisionEffect = "";

    /// how fast to move when speed mode is SpeedLimited (relative to _maxSpeed)
    limitedSpeedCoef = 0.5;

    // total armor
	armor=20; 
	// very low structural damage
    armorStructural=4.0; 

    driverCanSee = CanSeeOptics+CanSeeEar+CanSeeEye+CanSeePeripheral;
    gunnerCanSee = CanSeeOptics+CanSeeEye+CanSeeEar+CanSeePeripheral;

	//evean if aware, cars stay on road
    holdOffroadFormation = false;

    // hull damage > 0.9 will cause explosion
    hullDamageCauseExplosion = true;

    class PlateInfos {name="spz"; color[]={0,0,0,0.75};}

    class HitPoints
    {
      class HitEngine {armor=1.2;material=60;name="engine";visual="engine";passThrough=1; explosionShielding=1;}

      // note: glass is using other config entry (historical reasons)
      // use visual="" unless you want to animate material
      class HitRGlass {armor=0.5;material=-1;name="sklo predni P";convexComponent="sklo predni P";visual="";passThrough=1; explosionShielding=1;}
      class HitLGlass {armor=0.5;material=-1;name="sklo predni L";convexComponent="sklo predni L";visual="";passThrough=1; explosionShielding=1;}

      class HitBody {armor=0.4;material=50;name="karoserie";visual="karoserie";passThrough=1; explosionShielding=1;}
      class HitFuel {armor=1.4;material=-1;name="palivo";visual="palivo";passThrough=1; explosionShielding=1;}

      class HitLFWheel {armor=0.05;material=-1;name="Levy predni tlumic";visual="Levy predni";passThrough=1; explosionShielding=1;}
      class HitRFWheel {armor=0.05;material=-1;name="Pravy predni tlumic";visual="Pravy predni";passThrough=1; explosionShielding=1;}

      class HitLF2Wheel {armor=0.05;material=-1;name="Levy dalsi tlumic";visual="Levy dalsi";passThrough=1; explosionShielding=1;}
      class HitRF2Wheel {armor=0.05;material=-1;name="Pravy dalsi tlumic";visual="Pravy dalsi";passThrough=1; explosionShielding=1;}

      class HitLMWheel {armor=0.05;material=-1;name="Levy prostredni tlumic";visual="Levy prostredni";passThrough=1; explosionShielding=1;}
      class HitRMWheel {armor=0.05;material=-1;name="Pravy prostredni tlumic";visual="Pravy prostredni";passThrough=1; explosionShielding=1;}

      class HitLBWheel {armor=0.05;material=-1;name="Levy zadni tlumic";visual="Levy zadni";passThrough=1; explosionShielding=1;}
      class HitRBWheel {armor=0.05;material=-1;name="Pravy zadni tlumic";visual="Pravy zadni";passThrough=1; explosionShielding=1;}
    };

    selectionFireAnim = "zasleh";

    alphaTracks = 0.2;
    // front left track, left offset
	memoryPointTrackFLL = "Stopa PLL"; 
    // front left track, right offset
	memoryPointTrackFLR = "Stopa PLP"; 
    // back left track, left offset
	memoryPointTrackBLL = "Stopa ZLL"; 
    // back left track, right offset
	memoryPointTrackBLR = "Stopa ZLP"; 
    // front right track, left offset
	memoryPointTrackFRL = "Stopa PPL"; 
    // front right track, right offset
	memoryPointTrackFRR = "Stopa PPP"; 
    // back right track, left offset
	memoryPointTrackBRL = "Stopa ZPL"; 
    // back right track, right offset
	memoryPointTrackBRR = "Stopa ZPP"; 

    // center of turning of whole vehicle
	memoryPointCirculumReference="circulumReference";  

    //the values are ratios, 3 values are at least required {reverse, neutral, 1st gear}
    gearBox[]={-8,0,+10,+6.15,+4.44,+3.33};

    Scudeffect = "ScudEffect";

    armorLights=0.4;

    vehicleClass="Car";

    wheelCircumference=2.513;
    turnCoef=2.0;
    terrainCoef=2.0;
    waterSpeedFactor=0.2;
    maxSpeed=100;

    // never used value, engine don't use it
	preferRoads=true; 
    unitInfoType=RscUnitInfo;
    hideUnitInfo=true;

    formationX=20;
    formationZ=20;

    precision=10;
    brakeDistance=7; 

    // steer point on path properties
	steerAheadSimul=0.4; 
    steerAheadPlan=0.2;

    // brake before turns
	predictTurnSimul=0.4; 
    predictTurnPlan=0.8;

    // sensor sensitivity
	sensitivity=3; 

    soundGear[] = {"", db-75, 1};

    extCameraPosition[]={0.5,2,-10};

    // internal camera viewing limitations
    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=15; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
    };

    simulation=car;

    weapons[]={};
    magazines[]={};
    type=VSoft;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.5, 0.5, 0.5};

    typicalCargo[]={Soldier};

    audible = 3;

    occludeSoundsWhenIn = db-20;
    obstructSoundsWhenIn = db-10;

    getInAction = "";
    getOutAction = "";

    // by default there is no SCUD rocket
    scudModel = "";
    // max. damper amplitude
	damperSize = 0.1; 
	// damper reaction force (bigger is more visible)
    damperForce = 1; 
    // shock absorbers bigger => more tough
	damperDamping = 1; 

    inputTurnCurve[] = {{0, {0,0,1,1}},{ 30, { 0, 0, 0.2, 0.008, 0.4, 0.032, 0.6, 0.216, 0.8, 0.512, 1, 1}}};

    transportMaxMagazines = 50;
    transportMaxWeapons = 10;

    enableGPS = false;

    soundEngine[]={"",db5,0.9};
    soundEnviron[] = {"", db-5, 1};

    class Sounds: Sounds
    {
      class Engine: Engine
      {
        sound = "soundEngine";
        frequency = "(randomizer*0.05+0.95)*rpm*1.2";
        volume = "thrust*0.5+0.5";
      };
      class Movement: Movement
      {
        sound = "soundEnviron";
        frequency = "1";
        volume = "speed*0.03334";
      };
    };


    class PlayerSteeringCoefficients
    {
      turnIncreaseConst = 0.3; //basic sensitivity value, higher value = faster steering
      turnIncreaseLinear = 1.0; //higher value means slower turning in higher speed, faster turning in lower speeds
      turnIncreaseTime = 1.0; //higher value means smoother steering around the center, faster towards the max. steering angle
      
      turnDecreaseConst = 5.0; //basic caster effect value, higher value = the faster the wheels align in the direction of travel
      turnDecreaseLinear = 3.0; //higher value means faster caster effect in higher speed, weaker in lower speeds
      turnDecreaseTime = 0.0; //higher value means stronger caster effect at the max. steering angle and slower once the wheels are closer to centered position
      
      maxTurnHundred = 0.7; //coefficient of the maximum turning angle @ 100km/h; limit goes linearly to max. turn. angle @ 0km/h
    };

	numberPhysicalWheels = 4;
  };

  class Motorcycle: LandVehicle
  {
    //--
    simulation="motorcycle";
    displayName=$STR_DN_MOTORCYCLE;
    accuracy=0.20;

    mapSize = 5;

    icon = iconMotorcycle;
    nameSound="veh_car";

    isBicycle = false;

    unloadInCombat = true;

    castDriverShadow = true;
    castCargoShadow = true;

    ejectDeadDriver = true;
    ejectDeadCargo = true;

    // total armor
	armor=10; 
    // very low structural damage
	armorStructural=4.0; 
    cost=500;
    fuelCapacity=50;

    // Damper configuration
    damperSize = 0.2;
	// larger number more stiffness dampers
    damperForce = 1; 
	// larger number less movement in dampers
    damperDamping = 3; 

    transportSoldier = 0;
    typicalCargo[]={};

    occludeSoundsWhenIn = db-0;
    obstructSoundsWhenIn = db-0;

    driverCanSee = CanSeeEar+CanSeeEye+CanSeePeripheral;
    gunnerCanSee = CanSeeEye+CanSeeEar+CanSeePeripheral;

    class PlateInfos {name="spz"; color[]={0,0,0,0.75};}

    class HitPoints
    {
      class HitEngine {armor=1.2;material=60;name=engine;visual="engine";passThrough=1; explosionShielding=1;}

      class HitRGlass {armor=0.5;material=-1;name="sklo predni P";convexComponent="sklo predni P";visual="";passThrough=1; explosionShielding=1;}
      class HitLGlass {armor=0.5;material=-1;name="sklo predni L";convexComponent="sklo predni L";visual="";passThrough=1; explosionShielding=1;}

      class HitBody {armor=0.4;material=-1;name="karoserie";visual="karoserie";passThrough=1; explosionShielding=1;}
      class HitFuel {armor=1.4;material=-1;name="palivo";visual="palivo";passThrough=1; explosionShielding=1;}

      class HitFWheel {armor=0.05;material=-1;name="Pravy predni tlumic";visual="Pravy predni";passThrough=1; explosionShielding=1;}
      class HitBWheel {armor=0.05;material=-1;name="Pravy zadni tlumic";visual="Pravy zadni";passThrough=1; explosionShielding=1;}
    };

    selectionFireAnim = "zasleh";

    alphaTracks = 0.1;
    textureTrackWheel = true;
    // front track, left offset
	memoryPointTrack1L = "Stopa PPL"; 
    // front track, right offset
	memoryPointTrack1R = "Stopa PPP"; 
    // back track, left offset
	memoryPointTrack2L = "Stopa ZPL"; 
	// back track, right offset
    memoryPointTrack2R = "Stopa ZPP"; 

    vehicleClass="Car";

    wheelCircumference=2.513;
    turnCoef=1.0;
    terrainCoef=3.0;
    maxSpeed=120;

    gearBox[]={-8,0,+10,+6.15,+4.44,+3.33};

    // never used value, engine don't use it
	preferRoads=true; 
    unitInfoType=RscUnitInfo;
    hideUnitInfo=true;

    formationX=20;
    formationZ=20;

    precision=10;
    brakeDistance=16.5; 

    // steer point on path properties
	steerAheadSimul=0.5; 
    steerAheadPlan=0.35;

	// brake before turns
    predictTurnSimul=1.2; 
    predictTurnPlan=1.2;

	// sensor sensitivity
    sensitivity=3; 

    soundGear[] = {"", db-100, 1};

    extCameraPosition[]={0,1,-10};

    // internal camera viewing limitations
    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=15; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
    };

    class Reflectors
    {
      class Right
      {
        color[] = {0.9, 0.8, 0.8, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 0.5;
        brightness = 0.5;
      };
    };

    weapons[]={};
    magazines[]={};
    type=VSoft;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.5, 0.5, 0.5};

    audible = 3;

    getInAction = "";
    getOutAction = "";

    transportMaxMagazines = 5;
    transportMaxWeapons = 0;

    class AnimationSources
    {
      class FrontDamper
      {
        source="damper";
        // landcontact selection name
		selection="pravy predni tlumic nerot"; 
      };
      class BackDamper
      {
        source="damper";
        // landcontact selection name
		selection="pravy zadni tlumic"; 
      };
    };
    // Animations moved to model.cfg
	
	numberPhysicalWheels = 2;
  };
  class Bicycle: Motorcycle
  {
    canFloat = false;
    isBicycle = true;
    hideWeaponsDriver = false;

    formationX=5;
    formationZ=5;

    precision=5;
    brakeDistance=4; 

    // steer point on path properties
	steerAheadSimul=0.5; 
    steerAheadPlan=0.7;

    // brake before turns
	predictTurnSimul=1.2; 
    predictTurnPlan=1.2;
  };


  class Tank: LandVehicle
  {
    //--
    vehicleClass="Armored";

    icon = iconTank;

    displayName=$STR_DN_TANK;
    nameSound="veh_tank";
    accuracy=0.12;

    class Components : Components
    {
      class AITankSteeringComponent
      {
        steeringPIDWeights[] = { 1.0, 0.1, 0.1};
        speedPIDWeights[] = { 1.0, 0.1, 0.1};
        convoyPIDWeights[] = { 1.0, 0.0, 0.0};

        doRemapSpeed = false;
        doPredictForward = true;
        predictForwardMaxSpeed = 15.0;
        predictForwardRange[] = { 1, 20};
        //steerAheadSaturation[] = { 0.01, 0.4 };

        speedPredictionMethod = 3;
        wheelAngleCoef = 0.3;
        //forwardAngleCoef = 0.7;
        //steeringAngleCoef = 1.0;
        //differenceAngleCoef = 0.4;

        stuckMaxTime = 3.0;

        //allowOvertaking = true;
        //allowDrifting = false;
        //allowCollisionAvoidance = true;

        maxWheelAngleDiff = 0.2616;
        minSpeedToKeep = 0.1;

        // radians per second
        //commandTurnFactor = 1.0;
        allowTurnAroundInPoint = true;
      };
    };

    getInRadius = 3.5;


    fuelCapacity=700;

    irScanRangeMin=500;
    irScanRangeMax=4000;
    irScanToEyeFactor=1;

    // overall armor
	armor=400; 
    // structural damage
	armorStructural=2.0; 
    crewVulnerable = false;

    class HitPoints
    {
      class HitEngine {armor=0.8;material=60;name=engine;visual="engine";passThrough=1; explosionShielding=1;}

      class HitHull {armor=1;material=50;name=hull;visual="hull";passThrough=1; explosionShielding=1;};
      class HitLTrack {armor=0.6;material=53;name=pasL;visual="pasL";passThrough=1; explosionShielding=1;};
      class HitRTrack {armor=0.6;material=54;name=pasP;visual="pasP";passThrough=1; explosionShielding=1;};
    };

    // hull damage > 0.9 will cause explosion
    hullDamageCauseExplosion = true;

    selectionFireAnim = "zasleh";

    memoryPointCargoLight = "cargo light";

    // selection used to extend bounding sphere / bounding box as necessary
    bounding = "usti hlavne";
    fireDustEffect = "FDustEffects";

    gearBox[]={-7,0,+11,+8,+5.7,+4.2};

    alphaTracks = 0.7;
    textureTrackWheel = false;
    // left track, left offset
	memoryPointTrack1L = "Stopa LL"; 
    // left track, right offset
	memoryPointTrack1R = "Stopa LR"; 
    // right track, left offset
	memoryPointTrack2L = "Stopa RL"; 
    // right track, right offset
	memoryPointTrack2R = "Stopa RR"; 

    extCameraPosition[]={0,1.5,-9};

    //initFov=0.7; minFov=0.42; maxFov=0.85;
    class ViewPilot: ViewPilot
    {
      initAngleX=7; minAngleX=-15; maxAngleX=+25;
      initAngleY=0; minAngleY=-90; maxAngleY=+90;
    };

    class ViewOptics : ViewOptics
    {
      initFov=0.3; minFov=0.07; maxFov=0.35;
    };

    cost=1000000;

    
	// steer point on path properties
	steerAheadSimul=0.5; 
    steerAheadPlan=0.4;

    // brake before turns
	predictTurnSimul=1.2; 
    predictTurnPlan=1.0;

    // default tank/bmp... track vehicle definition
    soundGear[] = {"", db-70, 1};

    occludeSoundsWhenIn = db-40;
    obstructSoundsWhenIn = db-15;
    outsideSoundFilter = true;

    nightVision=false;

    driverAction = "";
    driverInAction = "";

    //transportSoldier = 2;

    simulation=tank;

    formationX=20;
    formationZ=30;
    precision=5;
    brakeDistance=7; 

    maxSpeed=80;

    /// how fast tracks are moving relative to wheels
    tracksSpeed = 1;
    turnCoef = 1;

    class Turrets
    {
      class MainTurret: NewTurret
      {
        commanding = true;

        class Turrets
        {
          class CommanderOptics: NewTurret
          {
            gunnerName = $STR_POSITION_COMMANDER;
            primaryGunner = 0;
            primaryObserver = true;
            body = "obsTurret";
            gun = "obsGun";
            animationSourceBody = "obsTurret";
            animationSourceGun = "obsGun";
            animationSourceHatch = "hatchCommander";
            animationSourceCamElev = "camElev";
            commanding = 2;
          };
        };
      };
    };

    canFloat=false;
    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};
    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.7, 1, 0.3};

    //sensors
    // tank are very easy to spot
	camouflage = 8; 
    audible = 18;
	sensitivityEar = "0.0075 /3";

    hideProxyInCombat = true;

    driverOpticsModel = "optika_tank_driver";

    driverOpticsColor[] = {1, 1, 1, 1};

    class CargoLight
    {
      color[] = {0, 0, 0, 0};
      ambient[] = {0.6, 0, 0.15, 1};
      brightness = 0.007;
    };

    transportMaxMagazines = 100;
    transportMaxWeapons = 10;

    enableGPS = true;

    tankTurnForce		= 500000; /// expected to be something like 11 x mass of vehicle

    class Sounds: Sounds
    {
      class Engine: Engine
      {
        sound = "soundEngine";
        frequency = "(1-(randomizer*0.05))*rpm*1.2";
        volume = "thrust*0.5+0.5";
      };
      class Movement: Movement
      {
        sound = "soundEnviron";
        frequency = "(speed+angVelocity)*0.03334";
        volume = "((speed+angVelocity)*0.03334)+(1-((speed+angVelocity)*0.03334))*0.3";
      };
    };
	numberPhysicalWheels = 16;
  };
  class APC: Tank
  {
    //--
    icon = iconAPC;

    vehicleClass="Armored";

    displayName=$STR_DN_APC;
    nameSound="veh_apc";
    accuracy=0.12;

    fuelCapacity=700;
    armor=200;
    cost=1000000;

    // default tank/bmp... track vehicle definition
    soundGear[] = {"", db-60, 1};

    simulation=tank;

    maxSpeed=60;

    // new style of turrets definition - structure description
    // must be redefined here to let MainTurret inherit from the correct class
    class Turrets: Turrets
    {
      class MainTurret : MainTurret
      {
        minElev=-4.5;
        maxElev=+20;
      };
    };

    canFloat=false;
    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};
    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.8, 1, 0.3};
  };

  class Man: Land
  {
    //--
    mapSize = 0.5;
    vehicleClass="Men";

    icon = iconMan;
    // no autocenter - faster animation
	autocenter = false; 
    isMan = true;

    breathingBubblesPoint = "";
    breathingBubblesPointDir = "";
    breathingBubblesEffect = "ScubaEffect";
    breathingBubblesInteval = 3.0;

    /// effect of hitting the soldier
    impactEffectsBlood   = "ImpactEffectsBlood";
    impactEffectsNoBlood = "ImpactPlastic";

    // Coefficient which is used to multiply received damage of some specific types (free fall in particular)
    impactDamageMultiplier = 3.0;

    displayName=$STR_DN_MAN;
    nameSound="veh_man";

    // subclass of CfgWorlds.GenericNames, used for names
    genericNames = "EnglishMen";

    extCameraPosition[]={0,1.0,-3.5};

    aiBrainType = "DefaultSoldierBrain";

    accuracy=0.25;
    /*!
    \patch 1.27 Date 10/18/2001 by Ondra
    - Fixed: soldier movement was heard too far by AI.
    */
    audible=0.05;
    // how easy to spot -> bigger means better spotable
	camouflage=1; 

    sensitivity=3;
    sensitivityEar=0.13;

    formationX=5;
    formationZ=5;
    precision=1;
    brakeDistance=1; 

    // steer point on path properties
	steerAheadSimul=0.1; 
    steerAheadPlan=0.1;

    steerAheadSimulDiving=0.5; 
    steerAheadPlanDiving=0.5;

    maxSpeed=24;
    /// the limit for AI turn speed in rad/sec
    maxTurnAngularVelocity = 3;
    costTurnCoef = 0.025;

    lyingLimitSpeedHiding = 0.8;
    crouchProbabilityHiding = 0.8;
    lyingLimitSpeedCombat = 1.8;
    crouchProbabilityCombat = 0.4;
    crouchProbabilityEngage = 0.75;
    lyingLimitSpeedStealth = 2;

    
	// no ir lock possible
	irTarget=false; 
    canHideBodies=false;
    canDeactivateMines=false;

    useInternalLODInVehicles = true;

    unitInfoType=RscUnitInfoSoldier;
    hideUnitInfo=true;

    armor=3;
    // structural damage
	armorStructural=2.0; 

    class HitPoints
    {
      // note: use visual="", men use Wounds instead
      class HitHead {armor=0.7;material=-1;name="hlava_hit";visual="";passThrough=1; explosionShielding=1;}
      class HitBody {armor=0.8;material=-1;name="telo";visual="";passThrough=1; explosionShielding=1;}
      class HitHands {armor=0.5;material=-1;name="ruce";visual="";passThrough=1; explosionShielding=1;}
      class HitLegs {armor=0.5;material=-1;name="nohy";visual="";passThrough=1; explosionShielding=1;}
    };

    oxygenCapacity = 180.0;

    cost=100000;
    simulation=soldier;

    // by default there is nothing to talk about
    class TalkTopics {};

    /// texture/material animation based on wounding
    class Wounds {};

    minGunElev=-60;maxGunElev=+60; // + up
    /*!
    \patch 1.43 Date 01/22/2002 by Viktor
    - Changed: Soldiers can aim more down from now
    */

    // + left - player
    minGunTurn=-5;maxGunTurn=+5; 
    //minGunTurn=-30;maxGunTurn=+30; // + left - player
    // + left - AI
    minGunTurnAI=-30;maxGunTurnAI=+30;

    commanderCanSee = CanSeeAll+CanSeePeripheral;

    respawnWeapons[]={};
    respawnMagazines[]={};
    respawnItems[]={};
    respawnLinkedItems[]={};

    // the direction in which the grenade is thrown
    grenadeThrowDir[]={0.0, 0.0, 1.0};

    class HeadLimits: HeadLimits
    {
      initAngleX=5; minAngleX=-40; maxAngleX=+40;
      initAngleY=0; minAngleY=-90; maxAngleY=+90;
    };
    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=8; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
    };
    // see CfgMimics/Micro
	microMimics = Micro; 

    minHeadTurnAI = -70;
    maxHeadTurnAI = +70;

    //iron sight camera movement
    ISangleMod[]={0.005, 0.01, 0.01};
    ISrecoilMod[]={0, 0, 2.0}; //recoilMod X and Y have no effect
    ISspeedMod[]={0.0002, 0.0002, 0}; //speedMod Z has no effect
    ISmaxTurn=0.5;
    ISanimMod[]={0.002, 0.002, 0.0};

    weaponSlots = WeaponSlotPrimary + 5 * WeaponSlotItem + WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem + 12* WeaponSlotInventory;
    weapons[]={};
    magazines[]={};
    model=;
    picture=;

    backpack = "";
    canCarryBackPack = false;

    boneHead = "hlava";
    boneHeadCutScene = "hlava";

    /// List of identifiers for selection of identity items (faces, voices)
    identityTypes[] = {"Default"};

    // by default, glasses can be shown
    glassesEnabled = 1;

    // RTM animation responsible for trigger pulling finger movement
    triggerAnim = "";

    selectionHeadWound = "head injury";
    selectionBodyWound = "body injury";
    
    selectionLArmWound = "l arm injury";
    selectionRArmWound[] = {"r arm injury", "p arm injury"};
    selectionLLegWound = "l leg injury";
    selectionRLegWound[] = {"r leg injury", "p leg injury"};    
	
    selectionLArmWound1 = "l arm injury";
    selectionRArmWound1[] = {"r arm injury", "p arm injury"};
    selectionLLegWound1 = "l leg injury";
    selectionRLegWound1[] = {"r leg injury", "p leg injury"};

    selectionLArmWound2 = "l arm injury";
    selectionRArmWound2[] = {"r arm injury", "p arm injury"};
    selectionLLegWound2 = "l leg injury";
    selectionRLegWound2[] = {"r leg injury", "p leg injury"};

    selectionHeadHide = "";

    memoryPointPilot = "pilot";
    memoryPointLStep = "stopaL";
    memoryPointRStep = "stopaP";
    memoryPointAim = "zamerny";
    memoryPointCameraTarget = "zamerny";
    memoryPointAimingAxis = "osa mireni";
    memoryPointLeaningAxis = "osa naklaneni";
    memoryPointHeadAxis = "osa otaceni";
    memoryPointWaterSurface = "osa otaceni";
    memoryPointHandGrenade = "granat";

    memoryPointCommonDamage = "zamerny";

    // head selections
    selectionPersonality = "osobnost";
    selectionPersonalityHL = "hl";
    selectionGlasses = "brejle";

    // mimic
    selectionLBrow = "loboci";
    selectionMBrow = "soboci";
    selectionRBrow = "poboci";
    selectionLMouth = "lkoutek";
    selectionMMouth = "skoutek";
    selectionRMouth = "pkoutek";
    selectionEyelid = "vicka";
    selectionLip = "spodni ret";

    // say something when hit
    hitSound1[] = {"", db-25, 1};
    hitSound2[] = {"", db-25, 1};
    hitSound3[] = {"", db-25, 1};
    hitSound4[] = {"", db-25, 1};
    hitSound5[] = {"", db-25, 1};
    hitSound6[] = {"", db-25, 1};
    hitSound7[] = {"", db-25, 1};
    hitSound8[] = {"", db-25, 1};
    hitSound9[] = {"", db-25, 1};
    hitSound10[] = {"", db-25, 1};
    hitSound11[] = {"", db-25, 1};
    hitSound12[] = {"", db-25, 1};
    hitSound13[] = {"", db-25, 1};
    hitSound14[] = {"", db-25, 1};
    hitSound15[] = {"", db-25, 1};
    hitSound16[] = {"", db-25, 1};
    hitSound17[] = {"", db-25, 1};
    hitSound18[] = {"", db-25, 1};
    hitSound19[] = {"", db-25, 1};
    hitSound20[] = {"", db-25, 1};

    hitSounds[]=
    {
      hitSound1,0.05,
      hitSound2,0.05,
      hitSound3,0.05,
      hitSound4,0.05,
      hitSound5,0.05,
      hitSound6,0.05,
      hitSound7,0.05,
      hitSound8,0.05,
      hitSound9,0.05,
      hitSound10,0.05,
      hitSound11,0.05,
      hitSound12,0.05,
      hitSound13,0.05,
      hitSound14,0.05,
      hitSound15,0.05,
      hitSound16,0.05,
      hitSound17,0.05,
      hitSound18,0.05,
      hitSound19,0.05,
      hitSound20,0.05
    };

    moves=NoDefaultMoves;
    movesFatigue="";
    gestures="";

    emptySound[]={"",0,1};
    vegetationSounds[]={emptySound, 0};

    additionalSound[] = {"", db-120, 1};
    class SoundEnvironExt
    {
      normalExt[] = {{"", db-100, 1, 0}};
      normal[] = {{"", db-100, 1, 0}};
      road[] = {{"", db-100, 1, 0}};
      rock[] = {{"", db-100, 1, 0}};
      water[] = {{"", db-100, 1, 0}};
      gravel[] = {{"", db-100, 1, 0}};
      sand[] = {{"", db-100, 1, 0}};
      drygrass[] = {{"", db-100, 1, 0}};
      grass[] = {{"", db-100, 1, 0}};
      forest[] = {{"", db-100, 1, 0}};
      mud[] = {{"", db-100, 1, 0}};
      wood[] = {{"", db-100, 1, 0}};
      metal[] = {{"", db-100, 1, 0}};
      snow[] = {{"", db-100, 1, 0}};
      hallway[] = {{"", db-100, 1, 0}};
      fallbody[] = {{"", db-100, 1, 0}};
      laydown[] = {{"", db-100, 1, 0}};
      standup[] = {{"", db-100, 1, 0}};
      crawl[] = {{"", db-100, 1, 0}};
    };

    class SoundEquipment
    {
      civilian[] = {{"", {"", db-100, 1, 0}}};
      soldier[] = {{"", {"", db-100, 1, 0}}};
    };

    class SoundGear
    {
      primary[] = {{"",{"", db-100, 1, 0}}};
      secondary[] = {{"",{"", db-100, 1, 0}}};
    };

    class SoundBreath
    {
      //{{{"", db-100, 1}, 1}, {{"", db-100, 1}, 1}};
	  breath[] = {};
    };

	/// sound of bretahing while drowning
    class SoundDrown
    {
      breath[] = {};
    };
	
	/// sound of breathing while injured
    class SoundInjured
    {
      breath[] = {};
    };	

	/// sound of breathing while bleeding
    class SoundBleeding
    {
      breath[] = {};
    };	

    /// sound of breathing while getting burned
	class SoundBurning
    {
      breath[] = {};
    };

    /// sound of choking
	class SoundChoke
    {
      breath[] = {};
    };

    /// sound of relief
	class SoundRecovered
    {
      breath[] = {};
    };
	
    class HitDamage {};

    type=VSoft;
    //threat[] VSoft, VArmor, VAir
    threat[]={1, 0.8, 0.2};

    class Reflectors
    {
      /*
      class Reflector
      {
      color[] = {0.9, 0.8, 0.8, 1.0};
      ambient[] = {0.1, 0.1, 0.1, 1.0};
      position = "L svetlo";
      direction = "konec L svetla";
      hitpoint = "L svetlo";
      selection = "L svetlo";
      size = 0.2;
      brightness = 0.001;
      };
      */
    };
    class MGunClouds : WeaponCloudsMGun
    {
    };
    class GunClouds : WeaponCloudsGun
    {
      // grow-up time
      cloudletGrowUp = 0.2;
      // fade-in time
      cloudletFadeIn = 0;
      // fade-out time
      cloudletFadeOut = 0.4;
      // time to live (not including fades)
      cloudletDuration = 0.2;

      cloudletAlpha = 1;

      // vertical acceleration
      cloudletAccY = 2;
      // vertical speed range
      cloudletMinYSpeed = -10;
      cloudletMaxYSpeed = 10;

      interval = 0.02;
      size = 0.3;
      sourceSize = 0.015;
    };

    class InventorySlots
    {
    };

    fsmFormation = "";
    fsmDanger = "";
    //    fsmDanger = "bin\danger.fsm";

    enableGPS = false;

    // jmeno kosti, pomìr rotace
    leftArmToElbow[] = {}; 
    leftArmFromElbow[] = {};
    // jmeno kosti
    leftWrist = ""; 
    // jmeno kosti
    leftShoulder = ""; 
    // jmeno kosti
    leftHand[] = {}; 
    // jmena bodu v memory lod, definujicich rozsahy kosti
    leftArmPoints[] = {"","","",""}; 


    // jmeno kosti, pomìr rotace
    rightArmToElbow[] = {}; 
    rightArmFromElbow[] = {};
    // jmeno kosti
    rightWrist = ""; 
    // jmeno kosti
    rightShoulder = ""; 
    // jmeno kosti
    rightHand[] = {}; 
    // jmena bodu v memory lod, definujicich rozsahy kosti
    rightArmPoints[] = {"","","",""}; 

    leftLegToKnee[] = {}; //jmeno kosti, pomer rotace
    leftLegFromKnee[] = {};
    leftHeel = ""; //jmeno kosti
    leftHip = ""; //jmeno kosti
    leftFoot[] = {}; // jmeno kosti
    leftLegPoints[] = {"", "", "", ""}; // jmena bodu v memory lod, definujicich rosahy kosti

    rightLegToKnee[] = {}; // jmeno kosti, pomer rotace
    rightLegFromKnee[] = {};
    rightHeel = ""; // jmeno kosti
    rightHip = "";
    rightFoot[] = {}; // jmeno kosti
    rightLegPoints[] = {"", "", "", ""}; // jmena bodu v memory lod, definujicich rosahy kosti	

    weaponBone = "";
    launcherBone = "";
    handGunBone = "";

    characterID = -1;

    /// coefficient (part of initial ammo) for soldiers to report low ammo
    primaryAmmoCoef = 0.4;
    secondaryAmmoCoef = 0.2;
    handgunAmmoCoef = 0.1;	

    /// sides field for allowed uniforms and headgears (see https://wiki.bistudio.com/index.php/A3_Changing_Uniforms#Config)
    allowedUniformSides[] = {}; /// If this array is empty, unit can wear any uniform of its side and any neutral uniform. If this array is nonempty, unit can wear only uniforms from this list. 
    allowedHeadgearSides[] = {}; /// If this array is empty, unit can wear any headgear of its side and any neutral headgear. If this array is nonempty, unit can wear only headgears from this list. 

    minHeight = 0.0;
    avgHeight = 0.0;
    maxHeight = 0.0;
  };

  /// Base class for agent based animals
  class Animal : Man
  {
    vehicleClass = "Animals";
    simulation=animal;
    icon = iconAnimal;
    aiBrainType = "DefaultAnimalBrain";
    isMan = false;
    isFish = false;
    hasGeometry = false;
    killMassLimit = 200;
    killSpeedLimit = 20;

    // Coefficient which is used to multiply received damage of some specific types (free fall in particular)
    impactDamageMultiplier = 3.0;

    displayName = $STR_DN_ANIMAL;
    nameSound="veh_animal";

	/// it is easy to distinguish animal from anything else
    accuracy=0.05;

    weaponSlots = 0;
    weapons[]={};
    magazines[]={};

    type=VSoft;
    //threat[] VSoft, VArmor, VAir
    threat[]={0, 0, 0};
  };

  /*!
  \patch 1.52 Date 4/21/2002 by Ondra
  - Fixed: AI perceived volume of helicopters and planes was too low.
  */

  class Air: AllVehicles
  {
    //-- air vehicle
    icon = iconAir;
    // assume heli until sure it's plane
	displayName=$STR_DN_HELICOPTER; 
    nameSound="veh_aircraft";
    accuracy=0.005;

    formationX=50;
    formationZ=100;
    precision=100;
    brakeDistance=200; 
    formationTime=10;

    gearsUpFrictionCoef = 0.5;
    airBrakeFrictionCoef = 3.0;
    /// air friction depending on velocity 2, 1 and 0 powers
    airFrictionCoefs2[] = { 0.00100, 0.00050, 0.00006};
    airFrictionCoefs1[] = { 0.100, 0.050, 0.006 };
    airFrictionCoefs0[] = { 0.0, 0.0, 0.0 };

    class Components
    {
      class TransportCountermeasuresComponent
      {
      }
    }

	/// vertical limitation
	altFullForce  = 2000;
	altNoForce    = 6000;

    armor=20;
    cost=10000000;
    fuelCapacity=1000;

    maxSpeed=400;

    attenuationEffectType="";
    insideSoundCoef = db-30;
    outsideSoundFilter = true;
    occludeSoundsWhenIn = db-10;
    obstructSoundsWhenIn = db-10;

    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    type=VAir;
    /**
    Determine the ir scanner / radar range based on visibility.
    range is computed as visibility*irScanToEyeFactor and then clamped by min/max range.

    This should allow providing realistic values for high visibilities while still allowing
    to somewhat decrease the radar range for low visibility for gameplay balancing,
    or it can be used to simulated devices which are linked to visibility (IR trackers)
    */
    irScanRangeMin = 2000;
    irScanRangeMax = 10000;
    irScanToEyeFactor = 2;
    nightVision=false;
    // planes are very loud
	audible = 10; 

    unitInfoType=RscUnitInfoAir;

    //threat[] VSoft, VArmor, VAir
    threat[]={0.3, 1, 0.7};

    driverAction = "";

    // no switching positions for planes and helicopters
    // note: compartment are also for direct speech in vehicles, this will force pilot to talk to copilot only by radio 
	driverCompartments = 0; 
    cargoCompartments[] = {0};

    gunnerCanSee = CanSeeAll+CanSeePeripheral;
    driverCanSee = CanSeeAll+CanSeePeripheral;

    typicalCargo[]={Soldier};

    getInRadius = 5;

    transportMaxMagazines = 20;
    transportMaxWeapons = 3;

    enableGPS = true;

    class MarkerLights
    {
      class RedStill
      {
        name = "cerveny pozicni";
        color[] = {0.3, 0.03, 0.03, 1};
        ambient[] = {0.03, 0.003, 0.003, 1};
        brightness = 0.01;
        blinking = false;

      };
      class GreenStill
      {
        name = "zeleny pozicni";
        color[] = {0.03, 0.3, 0.03, 1};
        ambient[] = {0.003, 0.03, 0.003, 1};
        brightness = 0.01;
        blinking = false;
      };
      class WhiteStill
      {
        name = "bily pozicni";
        color[] = {0.3, 0.3, 0.3, 1};
        ambient[] = {0.03, 0.03, 0.03, 1};
        brightness = 0.01;
        blinking = false;
      };
      class WhiteBlinking
      {
        name = "bily pozicni blik";
        color[] = {1.0, 1.0, 1.0, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        brightness = 0.01;
        blinking = true;
      };
      class RedBlinking
      {
        name = "cerveny pozicni blik";
        color[] = {0.5, 0.05, 0.05, 1};
        ambient[] = {0.05, 0.005, 0.005, 1};
        brightness = 0.01;
        blinking = true;
      };
      /*
      class GreenBlinking
      {
        name = "zeleny pozicni blik";
        color[] = {0.1, 1.0, 0.1, 1};
        ambient[] = {0.01, 0.1, 0.01, 1};
        brightness = 0.01;
        blinking = true;
      };
      class BlueBlinking
      {
        name = "modry pozicni blik";
        color[] = {0.1, 0.1, 1.0, 1};
        ambient[] = {0.01, 0.01, 0.1, 1};
        brightness = 0.01;
        blinking = true;
      };
      */
    };
  };
  class Helicopter: Air
  {
    //-- helicopter
    vehicleClass="Air";
    icon = iconHelicopter;

    displayName=$STR_DN_HELICOPTER;
    nameSound="veh_helicopter";
    accuracy=0.08;

    simulation=helicopter;
    gearRetracting  = false;

    dustEffect = "HeliDust";
    waterEffect = "HeliWater";
	washDownStrength = 1.0; /// strength of rotor force applied to particles
	washDownDiameter = 40.0;	/// diameter of said force

    damageEffect = "DamageSmokeHeli";

    gearUpTime = 3.33;
    gearDownTime = 2.0;
    gearMinAlt = 0.5;

    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=10; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
      // CockpitHeadMovement parameters
      minMoveX=-0.35; maxMoveX=0.35; //how far can the head be moved to the sides Left and Right
      minMoveY=-0.5; maxMoveY=0.2; //how far can the head be moved Down and Up
      minMoveZ=-0.3; maxMoveZ=0.5; //how far can the head be moved Backward and Forward
    };
    class CargoSpec
    {
      class Cargo1
      {
        showHeadPhones = true;
      };
      class Cargo2
      {
        showHeadPhones = false; // only first cargo position with earPhones as default
      };
    };

    
	  // rotor animation parameters
	  mainRotorSpeed = 1.0; 
    backRotorSpeed = 1.5;

    //time required to reach  main rotor 100% RPM 
    startDuration = 20.0;
    //radius of main rotor
    mainBladeRadius = 0.0;

    // rotor diving capability
	  maxMainRotorDive = 0; 
    maxBackRotorDive = 0;
    // rotor diving capability
	  minMainRotorDive = 0; 
    minBackRotorDive = 0;
    neutralBackRotorDive = 0;
    neutralMainRotorDive = 0;

    //multiplier of lift force
    liftForceCoef = 1.0;
    //multiplier of bank force
    cyclicAsideForceCoef = 1.0;
    //multiplier of dive force
    cyclicForwardForceCoef = 1.0;
    //multiplier of back rotor force
    backRotorForceCoef = 1.0;
    //multiplier of body friction
    bodyFrictionCoef = 1.0;


    selectionHRotorStill = "velka vrtule staticka";
    selectionHRotorMove = "velka vrtule blur";
    selectionVRotorStill = "mala vrtule staticka";
    selectionVRotorMove = "mala vrtule blur";
    memoryPointLMissile = "L strela";
    memoryPointRMissile = "P strela";
    memoryPointLRocket = "L raketa";
    memoryPointRRocket = "P raketa";
    memoryPointGun = "";
    // also searching in VIEW_PILOT
	memoryPointPilot = "pilot"; 

  _mainBladeCenter = "rotor_center";

    selectionFireAnim = "zasleh";
    
    class HitPoints
    {
      class HitHull {armor=0.5;material=50;name="trup";visual="trup";passThrough=1; explosionShielding=1;}
      class HitEngine {armor=0.6;material=60;name="motor";visual="motor";passThrough=1; explosionShielding=1;}
      class HitAvionics {armor=1.4;material=-1;name="elektronika";visual="elektronika";passThrough=1; explosionShielding=1;}
      class HitVRotor {armor=0.5;material=52;name="mala vrtule";visual="mala vrtule";passThrough=1; explosionShielding=1;}
      class HitHRotor {armor=0.7;material=51;name="velka vrtule";visual="velka vrtule";passThrough=1; explosionShielding=1;}
      class HitMissiles {armor=1.6;material=-1;name="munice";visual="";passThrough=1; explosionShielding=1;}
      class HitRGlass {armor=0.5;material=-1;name="sklo predni P";convexComponent="sklo predni P";visual="";passThrough=1; explosionShielding=1;}
      class HitLGlass {armor=0.5;material=-1;name="sklo predni L";convexComponent="sklo predni L";visual="";passThrough=1; explosionShielding=1;}
    };

    // structural damage
	armorStructural=2.0; 

    maxSpeed=300;
    enableSweep=true;

    /// lift (G) based on speed
    envelope[]=
    {
      // speed relative to max. speed -> lift
      //0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1 1.2 1.3 1.4  // rel. speed
      0.0,0.2,0.9,2.1,2.5,3.3,3.5,3.6,3.7,3.8,3.8,3.0,0.9,0.7,0.5 // lift
    };

    unitInfoType=RscUnitInfoAir;

    // minimal time spent firing on single target
	minFireTime=20; 

    steerAheadSimul=0.5;
    steerAheadPlan=0.7;

    // new style of turrets definition - structure description
    class Turrets
    {
      class MainTurret : NewTurret
      {
        outGunnerMayFire = true; //Engine assumes helicopter gunner is turned out.
        commanding = -1;

        //gunnerCompartments = 0;
        startEngine = 0;

        class TurretSpec : TurretSpec
        {
          showHeadPhones = true;
        };
      };
    };

    class ViewOptics : ViewOptics
    {
      initAngleX=0; minAngleX=-40; maxAngleX=17;
      initAngleY=0; minAngleY=-100; maxAngleY=100;
      initFov=0.5; minFov=0.3; maxFov=1.2;
    };
    class MFD
    {
      class HUD: AirplaneHUD
      {
      };
    };

    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    class Reflectors
    {
      class Reflector
      {
        color[] = {0.8, 0.8, 1.0, 1.0};
        ambient[] = {0.07, 0.07, 0.07, 1.0};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 0.5;
        brightness = 2;
      };
    };

    class Sounds: Sounds
    {
      class Engine: Engine
      {
        sound = "soundEngine";
        frequency = "(1-randomizer*0.05)*rotorSpeed*(1-rotorThrust*0.1)";
        volume = "1";
      };
      class Movement: Movement
      {
        sound = "soundEnviron";
        frequency = "1";
        volume = "speed * 0.03334";
      };
    };

    soundLandingGear[] = {"", 1, 1};
    
    class Exhausts
    {
    };
	minSmokeDamage = 0.4; /// parameters matching engine defaults, fuel is added to exhauts effect of damaged heli
	maxSmokeDamage = 0.99;

    class RotorLibHelicopterProperties
    {
      RTDconfig = "";     // config for RotorLib simulation
      hasAPU = false;     //equipped with APU     
      maxTorque = 10000;  //maximum safe torque

      //for some helicopters pitch = roll = 0 is not stable orientation
      autoHoverCorrection[] = {0,0,0};

      //maximum stress levels
      maxMainRotorStress = 10000;
      maxTailRotorStress = 10000;
      maxHorizontalStabilizerLeftStress = 10000;
      maxHorizontalStabilizerRightStress = 10000;
      maxVerticalStabilizerStress = 10000;
      stressDamagePerSec = 0.01; //damage per one second when max. stress level is reached (if stress is 150%, damage is (1.5^2)*timeToBreakUP per sec.)
      retreatBladeStallWarningSpeed = 69.4; // m/s

      //collective based horizontal wing rotation (degrees)
      horizontalWingsAngleCollMin = 0;  // collective 0
      horizontalWingsAngleCollMax = 0;  // collective 1

      //collective when flying heli is placed in world
      defaultCollective = 0.7;
      //power of shaking caused by VRS
      vrsShakepowerCoef = 1.0;
    };
    /*
    hRotorAnimation = HRotor;
    vRotorAnimation = VRotor;
    */
	
	/// memory point for slingload to attach ropes to
	slingLoadMemoryPoint = "slingLoad0";
	/// maximum mass of slingloaded object
	slingLoadMaxCargoMass = 0.0;
  /// minimum mass of slingloaded object
  slingLoadMinCargoMass = 0.0;
  };
  class Plane: Air
  {
    //-- airplane
    vehicleClass="Air";

    damageEffect = "DamageSmokePlane";

    icon = iconPlane;

    displayName=$STR_DN_PLANE;
    nameSound="veh_airplane";
    accuracy=0.10;

    maxSpeed=450;
    landingSpeed = 0;
    flapsFrictionCoef = 0.5;

    formationX=200;
    formationZ=300;
    precision=200;
    brakeDistance=500; 
    steerAheadSimul=1.0;
    steerAheadPlan=2.0;
    wheelSteeringSensitivity = 1.0;

    unitInfoType=RscUnitInfoAir;
    gearRetracting = true;
    cabinOpening = true;
    durationGetIn = 0.99;
    durationGetOut = 0.99;
    flaps = true;
    airBrake = true;
    vtol=false;
    tailHook = false;
    // reflector is most often located on the landing gear and needs to be off when gear is up
    lightOnGear=true;

    gearUpTime = 3.33;
    gearDownTime = 2.0;

    ejectSpeed[]={0,40,0};
    /// units will eject once the plane is damage too much
    ejectDamageLimit = 0.45;

    // minimal time spent firing on single target
	minFireTime=60; 

    cost=2000000;
    simulation=airplanex;

	// default - fixed gun
	minGunElev=-0; 
    maxGunElev=+0;
    minGunTurn=-0;
    maxGunTurn=+0;

    /// gun down aim angle as percentile
    gunAimDown = 0; // default gun aims forwards

    //max rudder effect, value is (speed.Z() / sqrt(speed.Z()^2 + speed.X()^2)), default is cos 5 deg
    rudderInfluence = 0.9619469809;

    /// lift (G) based on speed
    envelope[]=
    {
      // speed relative to max. speed -> lift
      // 0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1 // rel. speed
      0.0,0.2,0.9,2.1,2.5,3.3,3.5,3.2,2.5,2.0,1.5,1.0 // lift
    };

    /// angle of incidence - difference between forward and airfold chord line - def. val is 3*H_PI/180;
    angleOfIndicence = 0.05235987;

    /// forces keeping plane aligned with its speed direction
    draconicForceXCoef = 7.5;
    draconicForceYCoef = 1.0;
    draconicForceZCoef = 1.0;
    draconicTorqueXCoef = 0.15;
    draconicTorqueYCoef = 1.0;


    /// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used 
    // effectiveness according to current speed and maxSpeed ratio
    // last value goes for 150% of max speed
    thrustCoef[]= {};
    elevatorCoef[]= {}; //default value is 1
    aileronCoef[]= {};  //default value is 1
    rudderCoef[]= {};   //default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));

    //! coefficient of player's controller sensitivity (does not affect AI)
    elevatorControlsSensitivityCoef = 4; 
    aileronControlsSensitivityCoef = 4;
    rudderControlsSensitivityCoef = 4;

    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    type=VAir;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.1, 1, 0.5};

     // relative aileron sensitivity
	  aileronSensitivity = 1;
    // relative elevator sensitivity
	  elevatorSensitivity = 1; 
    // noseDownCoef is no longer used

    // controls sensitivity when in VTOL mode
    VTOLYawInfluence = 2.0;
    VTOLPitchInfluence = 2.0;
    VTOLRollInfluence = 2.0;

    // angle of attack recommended for AI / landing autopilot
    landingAoa = 10*3.1415/180;

    // tresh hold value for stall warning
    stallWarningTreshold = 0.2;

    // internal camera viewing limitations
    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=6; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
    };

    class ViewOptics : ViewOptics
    {
      initAngleX=0; minAngleX=0; maxAngleX=0;
      initAngleY=0; minAngleY=0; maxAngleY=0;
      initFov=0.5; minFov=0.5; maxFov=0.5;
    };

    extCameraPosition[]={0,3.4,-25};

    selectionRotorStill = "vrtule staticka";
    selectionRotorMove = "vrtule blur";

    memoryPointLRocket = "L raketa";
    memoryPointRRocket = "P raketa";

    memoryPointLDust = "levy prach";
    memoryPointRDust = "pravy prach";

    selectionFireAnim = "zasleh";

    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";

    // hovering dust effect (used for VTOL only)
    dustEffect = "HeliDust";
    waterEffect = "HeliWater";

    class WingVortices
    {
      class WingTipLeft
      {
        effectName = "WingVortices";// name of the effect 
        position = "cerveny pozicni"; // name of the memory point in model
      };

      class WingTipRight
      {
        effectName = "WingVortices"; // name of the effect 
        position = "zeleny pozicni";// name of the memory point in model
      };
    };

    class Reflectors
    {
      class Reflector
      {
        color[] = {0.9, 0.8, 0.8, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 0.5;
        brightness = 2;
      };
    };

    class MFD
    {
      class HUD: AirplaneHUD
      {
        /// adjust position inside of memory points lod
        borderLeft = 0.09;
        borderRight = 0.02;
        borderTop = 0.02;
        borderBottom = 0.1;
      };
    }; // list of MFDs

    class GunFire : WeaponFireGun
    {
    };
    class GunClouds : WeaponCloudsGun
    {
    };
    class MGunFire : WeaponFireMGun
    {
    };
    class MGunClouds : WeaponCloudsMGun
    {
    };

    class Sounds: Sounds
    {
      class Engine: Engine
      {
        sound = "soundEngine";
        frequency = "(1-randomizer*0.05)*(thrust+0.5)*rpm";
        volume = "thrust+0.5";
      };
      class Movement: Movement
      {
        sound = "soundEnviron";
        frequency = "1";
        volume = "speed*0.03334";
      };
    };
	numberPhysicalWheels = 3;
  };
  class Ship: AllVehicles
  {
    class Components
    {
      class TransportCountermeasuresComponent
      {
      }
    }
    //--
    unitInfoType=RscUnitInfo;
    vehicleClass="Ship";

    safeDepth = 2.0;

    icon = iconShip;

    cost=10000000;
    armor=1000;
    displayName=$STR_DN_SHIP;
    nameSound="veh_ship";
    accuracy=0.005;

    maxSpeed=30;
	waterAngularDampingCoef = 0.0;	

    simulation=ship;

    audible=6;
    fuelCapacity=100;

    formationX=50;
    formationZ=100;
    precision=10;
    brakeDistance=50; 
    formationTime=20;

    // steer point on path properties
    steerAheadSimul=2.0; 
    steerAheadPlan=2.4;

    // brake before turns
    predictTurnSimul=2.0; 
    predictTurnPlan=2.4;

    // vertical turning
    verticalTurnCoef=0.2;
	
	/// coefficient of steering by mouse (see https://jira.bistudio.com/browse/AIII-14739)
	ShipSteerCoef = 0.5;

    // periscope depth
    periscopeDepth=2.8;

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.2, 0.2, 0.1};

    getInRadius = 10;

    driverAction = "";
    cargoAction[] = {""};

    // no animation
    getInAction = "";  
    // no animation
    getOutAction = "";

    // searching in VIEW_PILOT
    pointPilot = "pilot"; 
    // searching in VIEW_PILOT
    pointCommander = "velitel"; 

    selectionFireAnim = "zasleh";

    selectionBrakeLights = "brzdove svetlo";

    memoryPointMissile[] = {"spice rakety", "usti hlavne"};
    memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};

    /// ship can always float - what it be otherwise good for?
    /** not really used, but required by the common infrastructure */
    canFloat = true;
    soundGear[] = {"", db-75, 1};

    occludeSoundsWhenIn = db-5;
    obstructSoundsWhenIn = db-10;

    class Exhausts
    {
      class Exhaust1
      {
        position = "exhaust";
        direction = "exhaust_dir";
        effect = "ExhaustsEffect";
      };
    };
    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";

    leftWaterEffect = "LWaterEffects";
    rightWaterEffect = "RWaterEffects";

    leftEngineEffect = "LEngEffects";
    rightEngineEffect = "REngEffects";

    leftFastWaterEffect = "LWaterEffects";
    rightFastWaterEffect = "RWaterEffects";

    //memory points for rightEngineEffect and leftEngineEffect
    memoryPointsLeftEngineEffect = "EngineEffectL";
    memoryPointsRightEngineEffect = "EngineEffectR";
    class HitPoints
    {
      class HitEngine {armor=1.2;material=60;name="engine";visual="engine";passThrough=1; explosionShielding=1;}
    };
    // new style of turrets definition - structure description
    class Turrets
    {
      class MainTurret : NewTurret
      {
        commanding = -1;

        startEngine = 0;
      };
    };

    class ViewPilot: ViewPilot
    {
      minFov = 0.25; maxFov = 1.25; initFov = 0.75;
      initAngleX=6; minAngleX=-85; maxAngleX=+85; 
      initAngleY=0; minAngleY=-150; maxAngleY=+150; 
    };
    class ViewOptics : ViewOptics
    {
      initFov=0.7; minFov=0.07; maxFov=0.35;
    };
    class MarkerLights
    {
      class RedStill
      {
        name = "cerveny pozicni";
        color[] = {0.3, 0.03, 0.03, 1};
        ambient[] = {0.03, 0.003, 0.003, 1};
        brightness = 0.01;
        blinking = false;
      };
      class GreenStill
      {
        name = "zeleny pozicni";
        color[] = {0.03, 0.3, 0.03, 1};
        ambient[] = {0.003, 0.03, 0.003, 1};
        brightness = 0.01;
        blinking = false;
      };
      class WhiteStill
      {
        name = "bily pozicni";
        color[] = {0.3, 0.3, 0.3, 1};
        ambient[] = {0.03, 0.03, 0.03, 1};
        brightness = 0.01;
        blinking = false;
      };
    };

    class Sounds: Sounds
    {
      class Engine: Engine
      {
        sound = "soundEngine";
        frequency = "(1-randomizer*0.05)*1.2*(thrust*0.7+0.5)";
        volume = "(thrust*0.5)+0.5";
      };
      class Movement: Movement
      {
        sound = "soundEnviron";
        frequency = "(speed*0.03334)*1.3+(1-(speed*0.03334))*0.7";
        volume = "(speed*0.03334)+(1-(speed*0.03334))*0.1";
      };
    };
  };

  class SmallShip: Ship
  {
    //--
    cost=50000;
    armor=300;
    displayName=$STR_DN_SMALL_SHIP;
    accuracy=0.20;

    fuelCapacity=700;

    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    maxSpeed = 60;

    // boats are quite able to maneuver precisely and brake fast
    precision=6;
    brakeDistance=20; 

    class Reflectors
    {
      class Reflector
      {
        color[] = {0.9, 0.8, 0.8, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 0.5;
        brightness = 2;
      };
    };

    transportMaxMagazines = 100;
    transportMaxWeapons = 20;
  };

  class BigShip: Ship
  {
    //--
    cost=10000000;
    displayName=$STR_DN_BIG_SHIP;
    accuracy=0.20;
    armor=1000;

    weapons[]= {FakeWeapon};
    magazines[]={FakeWeapon};

    transportMaxMagazines = 500;
    transportMaxWeapons = 200;
  };


  class Truck: Car
  {
    //--
    nameSound="veh_truck";

    formationX=20;
    formationZ=30;

    getInAction = "";
    getOutAction = "";

    class HitPoints : HitPoints
    {
      class HitLFWheel: HitLFWheel {armor=0.3;}
      class HitRFWheel: HitRFWheel {armor=0.3;}

      class HitLF2Wheel: HitLF2Wheel {armor=0.3;}
      class HitRF2Wheel: HitRF2Wheel {armor=0.3;}

      class HitLMWheel: HitLMWheel {armor=0.3;}
      class HitRMWheel: HitRMWheel {armor=0.3;}

      class HitLBWheel: HitLBWheel {armor=0.3;}
      class HitRBWheel: HitRBWheel {armor=0.3;}
    };

    damperSize = 0.2;
    outsideSoundFilter = true;

    // internal camera viewing limitations
    minFov = 0.25; maxFov = 1.25; initFov = 0.75;

    transportMaxMagazines = 200;
    transportMaxWeapons = 50;

    /// truck turning takes longer, needs to be done soon enough
    steerAheadSimul=0.2;
    steerAheadPlan=0.3;
  };


  /*!
  \patch 1.86 Date 9/17/2002 by Ondra
  - Fixed: Parachutes no longer smoke when destroyed.
  */

  class ParachuteBase: Helicopter
  {
    scope = private;
    destrType=DestructNo;

    simulation=parachute;

    weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 10*WeaponSlotItem + 2*WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;

    // no autocenter - needed for RT animation
	autocenter = false; 

    vehicleClass="Air";
    displayName=$STR_DN_PARACHUTE;
    nameSound="veh_parachute";
    model="para";
    picture = pictureParachute;
    icon = iconParachute;
    accuracy=0.1;

    fuelCapacity=0;
    unitInfoType=RscUnitInfoSoldier;
    hideUnitInfo=true;
    irTarget = false;

    driverCanSee = CanSeeEye+CanSeeEar+CanSeePeripheral;
    driverAction = "";
    armor = 10;

    // also searching in VIEW_PILOT
	memoryPointPilot = "pilot"; 
    animationOpen = "";
    animationDrop = "";

    class ViewOptics : ViewOptics
    {
      initAngleX=0; minAngleX=-40; maxAngleX=17;
      initAngleY=0; minAngleY=-100; maxAngleY=100;
      initFov=0.5; minFov=0.3; maxFov=1.2;
    };

    type=VSoft;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.0, 0.0, 0.0};

    cost=100000;
    //side=TWest;
    weapons[]={};
    magazines[]={};

    soundGetIn[] = {"", db-70, 1};
    soundGetOut[] = {"", db-70, 1};

    class MFD{};
  };


  class LaserTarget: All
  {
    //-- laser designator dot
    // all vehicles are reversed - except static
	reversed=false; 

    hasDriver=false;

    icon = iconLaserTarget;

    displayName = $STR_DN_LASER_TARGET;
    nameSound="obj_LaserTarget";
    // laser target can hardly be non recognized
    accuracy=0.0001;
    model = "laserTgt.p3d";

    picture = pictureLaserTarget;
    /*!
    \patch 1.33 Date 11/29/2001 by Ondra
    - Changed: Laser target priority increased.
    */
    // add weapons - make AI consider it "combat" enemy
    // but not too dangerous, otherwise it will try to avoid it
    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.5, 0.5, 0.1};
    maxSpeed=0; // cannot move

    simulation="laserTarget";
    laserTarget = true;
    irTarget = false;
    artilleryTarget = false;

    destrType=DestructNo;
    side = TCivilian;

    // make AI attacking it with very high priority
	cost=1e15; 
    // make AI selecting appropriate (heavy) weapon
	armor=500; 
  };
  class NVTarget: All
  {
    //-- laser designator dot
    // all vehicles are reversed - except static
	reversed=false; 

    hasDriver=false;

    icon = iconLaserTarget;

    displayName = $STR_DN_LASER_TARGET;
    nameSound="obj_LaserTarget";
    // laser target can hardly be non recognized
    accuracy=0.0001;
    model = "laserTgt.p3d";

    picture = pictureLaserTarget;
    /*!
    \patch 1.33 Date 11/29/2001 by Ondra
    - Changed: Laser target priority increased.
    */
    // add weapons - make AI consider it "combat" enemy
    // but not too dangerous, otherwise it will try to avoid it
    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.2, 0.5, 0.1};
    // cannot move
	maxSpeed=0; 

    simulation="nvmarker";
    laserTarget = false;
    irTarget = false;
    nvTarget = true;

    destrType = DestructEngine;
    side = TCivilian;

    // make AI attacking it with very high priority
	cost=1e15; 
    // make AI selecting appropriate (heavy) weapon
	armor=500; 
  };

  class ArtilleryTarget: All
  {
    //-- laser designator dot
    // all vehicles are reversed - except static
	reversed=false; 

    hasDriver=false;

    icon = iconLaserTarget;

    displayName = "ArtilleryTarget";
    nameSound="";
    // artillery target can hardly be non recognized
    accuracy=0.0001;
    model = "";

    picture = pictureLaserTarget;

    // add weapons - make AI consider it "combat" enemy
    // but not too dangerous, otherwise it will try to avoid it
    weapons[]={FakeWeapon};
    magazines[]={FakeWeapon};

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.5, 0.5, 0.1};
    maxSpeed=0; // cannot move

    simulation="artillerymarker";
    laserTarget = false;
    irTarget = false;
    nvTarget = false;
    artilleryTarget = true;

    destrType = DestructNo;
    side = TCivilian;

    // make AI attacking it with very high priority
	cost=1e15; 
    // make AI selecting appropriate (heavy) weapon
	armor=500; 

    scope = protected;
  };

  class ArtilleryTargetW: ArtilleryTarget
  {
    side = TWest;
    scope = protected;
  }
  class ArtilleryTargetE: ArtilleryTarget
  {
    side = TEast;
    scope = protected;
  }

  class SuppressTarget : LaserTarget
  {
    //-- position to be suppressed by AI
    icon = iconLaserTarget;

    displayName = "suppressTarget";
    nameSound = "";
    // suppressed target can hardly be non recognized
    accuracy = 0.0001;
    model = "";

    // add weapons - make AI consider it "combat" enemy
    // but not too dangerous, otherwise it will try to avoid it
    weapons[] = { FakeWeapon };
    magazines[] = { FakeWeapon };

    type = VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[] = { 0.5, 0.5, 0.1 };
    maxSpeed = 0; // cannot move

    simulation = "suppresstarget";
    laserTarget = false;
    irTarget = false;
    nvTarget = false;
    artilleryTarget = false;
    // side for suppressed target is not checked
    side = TCivilian;

    // make AI attacking it with very high priority
    cost = 1e15;
    // make AI selecting appropriate (heavy) weapon
    armor = 0;

    scope = protected;
  };

  //Special vehicle used in pathfinding.
  class PaperCar: Car
  {
    scope = protected;
		/// scope for Zeus game mode editor
	scopeCurator=private;	
    side = TCivilian;
    picture = picturePaperCar;
    icon = iconPaperCar;
    displayName = $STR_DN_PAPER_CAR;
    model = "\core\default\default.p3d";
    class Reflectors {};
  };

  //Special vehicle used for fire sector scanning of AI.
  class FireSectorTarget: All
  {
    scope = protected;
	scopeCurator = private;
    side = TCivilian;
    picture = "";
    icon = "";
    nameSound = "";
    //ToDo: Stringtablize?
    displayName = "Internal: Fire Sector Target";
    vehicleClass = "Objects";

    model = "\core\default\default.p3d";

    weapons[] = {};
    magazines[] = {};
    transportMaxWeapons = 0;
    transportMaxMagazines = 0;
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    supplyRadius = 0;

    type = VSoft;
    threat[] = {0, 0, 0};
    maxSpeed = 0;
    armor = 100;

    simulation = "house";
    accuracy = 0.005;
    cost = 100;
    destrType = 0;
    mapSize = 0.1;
    reversed = false;
    hasDriver = false;
    coefInside = 0;
    coefInsideHeur = 0;
    coefSpeedInside = 1; 
    windSockExist = 0;
    animated = false;
    ladders[] = {};
    typicalCargo[] = {};
  };


  // STATIC BUILDINGS
  class Static: All
  {
    //-- static object or building
    reversed=false; // all vehicles are reversed - except static
		/// scope for Zeus game mode editor
	scopeCurator=private;	

    hasDriver=false;

    icon = iconObject;

    displayName=$STR_DN_UNKNOWN;
    nameSound="obj_object";
    accuracy=0.005;
	/// static objects are usually inaudible
    audible=0; 
    simulation="house";

	// static objects don't catch fire when destroyed by default
	class DestructionEffects {};
    // default building is assumed to be very cheap
	cost=1000; 

    // TODO: use actual building pictures instead
	picture = pictureStaticObject; 
    weapons[]={};
    magazines[]={};

    irTarget = false;

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.0, 0.0, 0.0};
    // cannot move
	maxSpeed=0; 
    /*
    coefInside = 6; //cost of way inside building for AI
    coefInsideHeur = 4.3; //cost of way inside building for AI
    */
    // cost of way inside building for AI (multiplier for minCost)
  coefInside = 2; 
  // no more used
  coefInsideHeur = 2; 
  // speed coef. inside buildings (do not run inside) 
  coefSpeedInside = 2; 

    windSockExist = 0;
  };

  class Rope: All
  {
    access = ReadAndWrite;
    scope = public;
    displayName = "";
    simulation = "rope";
    model = "";
    side = TEmpty;

    //Max rope relative length
    maxRelLenght = 1.1;
    maxExtraLenght = 20.0;

    alwaysTarget = false;
    irTarget = false;

    irScanRangeMin=0;
    irScanRangeMax=0;
    irScanToEyeFactor=1;

    laserTarget = false;
    laserScanner = false;
    nvTarget = false;
    nvScanner = false;
    artilleryTarget = false;
    artilleryScanner = false;
  };

  class Fortress: Static
  {
    displayName=$STR_DN_BUNKER;
    nameSound="obj_Bunker";
    armor=1000;
    cost=1000000;

    accuracy=0.20;
  };

  class Building: Static
  {
    // cannot be private, buildings in landscape are created with this type
	scope = protected; 
    displayName=$STR_DN_BUILDING;
    nameSound="obj_building";
    armor=150;
    accuracy=0.10;
  };


  class NonStrategic : Building
  {
    side=TCivilian;
    ladders[]={};

    class DestructionEffects
    {
      class Sound
      {
        simulation = "sound";
        type = "DestrHouse";
        position = "destructionEffect1";

        intensity = 1;
        interval = 1;
        lifeTime = 0.125;
      };
      class DestroyPhase1
      {
        simulation = "destroy";
        type = "DelayedDestruction";

        lifeTime = 2.5;
        // for destroy parameters do not matter
        position = "";
        intensity = 1;
        interval = 1;
      };
      class DamageAround1
      {
        simulation = "damageAround";
        type = "DamageAroundHouse";

        // for damage around parameters do not matter?
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };

  class HeliH: NonStrategic{}; // HeliH is need for helicopter AIs to correctly land on helipads. The class name is fixed in the game engine.  

  class AirportBase : NonStrategic
  {
    simulation = "airport";

    ilsPosition[] = { -270, 0 };
    ilsDirection[] = { -1, 0.08, 0 };
    ilsTaxiIn[] = { 40, -38, -212, -38, -218, -32, -218, -10, -200, 0 };
    ilsTaxiOff[] = { 20, 0, 240, 0, 250, -10, 250, -30, 245, -35, 240, -38, 40, -38 };
  };


  class Strategic : Building
  {
    side=TCivilian;
    armor=250;
    /// strategic targets are considered very expensive
	cost=1000000; 
    ladders[]={};
  };

  class FlagCarrierCore: Strategic
  {
    scope = protected;
    // flagpole itself is not animated, only flag proxy is
	animated = false; 
    vehicleClass = "Objects";
    icon = "";
    displayName = $STR_DN_FLAG;
    simulation = "flagcarrier";
    model = "";
    placement = vertical;
    mapSize = 5;
    animationFlag = "";
  };

  class Land_VASICore: NonStrategic
  {
    scope = protected;

    animated = false;
    // do not reverse to avoid Buldozer/game confusion
	reversed = false; 

    vehicleClass = "Objects";
    icon = "";
    model = "";
    displayName = "VASI";
    accuracy = 0.20;
    typicalCargo[] = {};
    destrType = DestructBuilding;

    selectionWhiteLight = "light-white";
    selectionRedLight = "light-red";
    selectionOffLight = "light-off";

    irTarget = false;

    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;

    cost=0;
    armor=100;
    mapSize = 6.4;

    simulation = "vasi";

    //@{ vasi specific parameters
    /// color below glide path
    vasiRed[]={1,0,0};
    /// color above glide path
    vasiWhite[]={1,1,1};
    /// glide path angle (ILS percentage, same as in ilsDirection)
    vasiSlope=0.08;
    //@}
  };

  // THINGS
  /*
  class Thing: Strategic
  {
  };
  */
  /**/
  class Thing: All
  {
    // all vehicles are reversed - except static
	reversed=false; 
    animated=false;

    icon = iconThing;
    vehicleClass="Objects";

    displayName=$STR_DN_UNKNOWN;
    nameSound="obj_object";
    accuracy=0.005;
	/// things are usually inaudible
    audible=0.000; 	
    simulation="thing";
    side=TCivilian;

    weight = 0;
    class InventoryPlacements {};

    // normal things have no submersion
	submerged = 0; 
    submergeSpeed = 0;

    /// air friction depending on velocity 2, 1 and 0 powers
    airFriction2[]={0.01,0.01,0.01};
    airFriction1[]={0.01,0.01,0.01};
    airFriction0[]={0.01,0.01,0.01};

    /// how much air friction can cause a rotation
    airRotation=0;
    // the simulation is unable to handle very high air friction
    // we simulate floating by reducing gravity instead
    gravityFactor = 1;

    // infinite time to live
	timeToLive = 1e10; 
    disappearAtContact = false;
    hasDriver=false;

    // TODO: use actual building pictures instead
	picture = pictureThing; 
    weapons[]={};
    magazines[]={};

    minHeight = 0.1;
    avgHeight = 0.2;
    maxHeight = 0.4;

    type=VArmor;
    //threat[] VSoft, VArmor, VAir
    threat[]={0.0, 0.0, 0.0};
    // cannot move
	maxSpeed=0; 
    irTarget = false;
  };

  class ThingEffect: Thing
  {
    // protected when finished
	scope=protected; 

    simulation="thingeffect";
    irTarget = false;

    // initial submersion, <0 initial delay
	submerged = -0.5; 
    submergeSpeed = 0.25;
    // always disappear after certain period of time
	timeToLive = 20; 
  };

  /// very light objects - leaves
  class ThingEffectLight: ThingEffect
  {
    scope = private;
    // air friction is very high in Z-axis for things like this
    airFriction2[]={1,1,8};
    airFriction1[]={1,1,4};
    airFriction0[]={0.1,0.1,0.1};

    // we can rotate a lot
    airRotation=0.1;

    submergeSpeed = 0;

    //@{ ambient "life" creation parameters
    minHeight = 0.1;
    avgHeight = 0.2;
    maxHeight = 0.4;
    //@}
  };
  /// very light objects - floating feathers
  class ThingEffectFeather: ThingEffectLight
  {
    //More symmetrical friction than other clutter, meaning the pollen moves only very slightly in all directions.
    airFriction2[] = {16, 16, 16};
    airFriction1[] = {16, 16, 16};
    airFriction0[] = {0.1, 0.1, 0.1};

    // the simulation is unable to handle very high air friction
    // we simulate floating by reducing gravity instead
    gravityFactor = 0.05;
    // can float quite high
    minHeight = 0.5;
    avgHeight = 1.8;
    maxHeight = 3;
  };


  class FxExploArmor1: ThingEffect
  {
    access = ReadAndWrite;
    model = "";
    displayName="Internal: FxExploArmor1";
  };
  class FxExploArmor2: ThingEffect
  {
    access = ReadAndWrite;
    model = "";
    displayName="Internal: FxExploArmor2";
  };
  class FxExploArmor3: ThingEffect
  {
    access = ReadAndWrite;
    model = "";
    displayName="Internal: FxExploArmor3";
  };
  class FxExploArmor4: ThingEffect
  {
    access = ReadAndWrite;
    model = "";
    displayName="Internal: FxExploArmor4";
  };
  class FxCartridge: ThingEffect
  {
    access = ReadAndWrite;
    model = "";
    displayName="Internal: FX Cartridge";

    // initial submersion, <0 inital delaty
	submerged = -0; 
    submergeSpeed = 0;
    // always disappear after certain period of time
	timeToLive = 5; 

    disappearAtContact=true;
  };
  /**/


  class WindAnomaly: All
  {
    displayName="Wind anomaly";
    simulation = "windAnomaly";
    innerRadius = 1;
    outerRadius = 20;
    windStrength = -20;
    windRotation = 0;
    windWaveTimeCoef = 5.0;
    windWaveOuterAmplitudeCoef = 0.3;
    windWaveInnerAmplitudeCoef = 0.02;
  }; 
};

class CfgNonAIVehicles
{
  access = ReadAndWrite;

  class EmptyDetector
  {
    scope = public;
    displayName = $STR_DN_EMPTY;
    simulation = "detector";

    //Changed from empty.p3d by Joris.
    model = "";
    selectionFabric = "latka";
  };

  class StreetLamp
  {
    model = "";
    destrType = DestructTree;
    simulation = StreetLamp;
    animated = false;

    colorDiffuse[] = {0.9,0.8,0.6};
    colorAmbient[] = {0.1,0.1,0.1};
    // 1 == light is full at 50 m
	brightness = 0.2; 

    // note: armor is different from AI entities
    // it is direct number, not relative to overall armor
    class HitPoints
    {
      class HitBulb {armor=1;material=60;name="lampa";passThrough=1; explosionShielding=1;}
    };

    armorStructural = 1;

    class Reflectors
    {
      class LampLight
      {
        color[] = {0.9, 0.8, 0.6, 1.0};
        ambient[] = {0.1, 0.1, 0.1, 1.0};
        position = "Light";
        direction = "";
        hitpoint = "lampa";
        selection = "";
        size = 0.5;
        brightness = 0.2;
      };
    };
    aggregateReflectors[] = {};
    armorLights=1;
  };

  class EditCursor
  {
    model = "\core\cursor\cursor.p3d";
    simulation = EditCursor;
  };

  class ObjView
  {
    scope = public;
    model = "";
    simulation = ObjView;
  };

  class Temp
  {
    scope = public;
    model = "";
    simulation = Temp;
  };

  class Bird
  {
    scope = private;
    model="";
    animated=false;
    simulation = SeaGull;
    reversed = false;
    minHeight=5;
    avgHeight=10;
    maxHeight=50;
    // m/s
	minSpeed=-0.5; 
    // m/s
	maxSpeed=20; 
    //m/s^2
	acceleration = 7; 
    // angular acceleration - relative (the higher, the more maneuvrable)
	turning = 1; 
    straightDistance=50;
    flySound[]={"",db-30,1, 1};
    singSound[]={"",db-30,1, 1};
    canBeShot=true;
    airFriction2[]={25,12,2.5};
    airFriction1[]={1500,700,100};
    airFriction0[]={40,20,60};
  };
  /*!
  \patch_internal 5156 Date 5/11/2007 by Ondra
  - Optimized: Some insects were using dynamic vertex buffers. (Real performance hit next to none)
  */
  class Insect: Bird
  {
    // no insects we have use any animation, only birds
	animated=false; 
    // allow landing
	minHeight=-0.10; 
    avgHeight=1.2;
    maxHeight=2.0;
    // m/s
	minSpeed=-0.1; 
    // m/s
	maxSpeed=5; 
    //m/s^2
	acceleration = 25; 
    straightDistance=2;
    turning = 2;
    flySound[]={"",db-30,1, 1};
    singSound[]={"",db-30,1, 1};
    canBeShot=false;
    airFriction2[]={125,12,2.5};
    airFriction1[]={7500,700,100};
    airFriction0[]={200,20,60};
  };
  class SeaGull: Bird
  {
    scope = public;
    //Changed from racekT.p3d by Joris.
    model = "\core\default\default.p3d";
    reversed = false;
  };
  class RopeSegment
  {
    access = ReadAndWrite;
    scope = public;
    displayName = "";
    simulation = "ropesegment";
    model = "";
    autocenter = false;
    animated = false;
  };
  class RopeEnd : RopeSegment
  {
    access = ReadAndWrite;
    scope = public;
    model = "";
  };
  class Camera
  {
    scope = public;
    model = "";
    simulation = Camera;
    //Changed from krizek.paa by Joris.
    crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
  };

  class CamConstruct
  {
    scope = public;
    model = "";
    simulation = CamConstruct;
    //construction radius
    radius = 125;
    //max. height above land
    maxHAL = 30;
    crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
  };

  class CamCurator
  {
    scope = public;
    model = "";
    simulation = CamCurator;
    //construction radius
    radius = 125;
    //max. height above land
    maxHAL = 30;
    crossHairs = "#(argb,8,8,3)color(1,1,1,1)";
  };

  // proxy object classes
  class ProxyWeapon
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    reversed = false;
    animated = false;
    shadow = true;
    model = "";
    simulation = ProxyWeapon;
  };

  class ProxyPistol
  {
    // normal vehicle are autocentered
    autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = Handgun;
  };

  class ProxyLauncher
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    shadow = true;
    model = "";
    simulation = ProxySecWeapon;
  };

  class ProxyRightHand
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = RightHand;
  };

  class ProxyLeftHand
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = LeftHand;
  };

  class ProxyGoggles
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = Goggles;
  };

  class ProxyEarPhones
  {
    autocenter = false; // normal vehicle are autocentered
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = EarPhones;
  };

  class Proxyus_bag
  {
    reversed=true;
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    shadow = true;
    simulation = ProxyInventoryOld;
    inventoryType = Backpack;
  };

  class ProxyHide
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    animated = false;
    model = "";
    simulation = "alwayshide";
  };

  class ProxyWreck
  {
    // proxy never autocentered
	autocenter = false; 
    scope = private;
    animated = false;
    model = "";
    simulation = "alwaysshow";
  };

	class ProxyRetex // works only on vehicles
	{
		// proxy never autocentered
		autocenter = false;
		scope = private;
		animated = false;
		model = "";
		simulation = "proxyretex";
		hiddenSelections[] ={};
	};
	

  //Crew proxies
  class ProxyCrew
  {
    // proxy never autocentered
	autocenter = false; 
    scope = protected;
    model = "";
    shadow = true;
    simulation = proxycrew;
    crewPosition = CPDriver;
  };

  class ProxyCommander: ProxyCrew {crewPosition = CPCommander;};
  class ProxyDriver: ProxyCrew {crewPosition = CPDriver;};
  class ProxyGunner: ProxyCrew {crewPosition = CPGunner;};
  class ProxyCargo: ProxyCrew {crewPosition = CPCargo;};

  class ProxyFlag
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    reversed = false;
    model = "";
    shadow = true;
    simulation = "flag";
    selectionFabric = "latka";
  };

  class RandomShape
  {
    models[] = {};
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    reversed = false;
    shadow = true;
    model = "";
    simulation = "randomshape";
  };

  class ProxyAmmoInTruck
  {
    // normal vehicle are autocentered
	autocenter = false; 
    scope = public;
    reversed = false;
    animated = false;
    shadow = true;
    model = "";
    simulation = "alwaysshow";
  };
};

class CfgMarkedTargets
{
  class Inf
  {
    type = "man";
    //importances should differ
	importance = 1;    
    //meters
	battleRadius = 50; 
    //what is over 150 meters is far
	farRadius = 150;   
  };
  class MotorInf
  {
    type = "car";
    importance = 3;
    battleRadius = 100;
    farRadius = 400;
  };
  class MechInf
  {
    type = "tank";
    //to distinguish between tank and APC
	transportSoldiers = 1; 
    importance = 4;
    battleRadius = 100;
    farRadius = 400;
  };
  class Armored
  {
    type = "tank";
    importance = 5;
    battleRadius = 100;
    farRadius = 400;
  };
  class Air
  {
    type = "helicopter";
    importance = 7;
    battleRadius = 400;
    farRadius = 800;
  };
  class Plane
  {
    type = "plane";
    importance = 8;
    battleRadius = 400;
    farRadius = 800;
  };
  class UAV
  {
    type = "uav";
    importance = 9;
    battleRadius = 100;
    farRadius = 300;
  };
  class Art
  {
    type = "staticcanon";
    importance = 10;
    battleRadius = 400;
    farRadius = 800;
  };
  class Mortar
  {
    type = "staticmortar";
    importance = 11;
    battleRadius = 400;
    farRadius = 800;
  };
};

/// ReportTargetsChangeFactors serve to determine, how important change is neccessary in order to be reported.
/// Each item corresponds to 1 second delay. if (targetGrpWeight/targetGrpOLDWeight>factor) DoReport();
/// Example: after three seconds, the factor is ReportTargetsChangeFactors[2]==2.0
ReportTargetsChangeFactors[] = {3.0, 2.5, 2.0, 1.6, 1.3};
/// Inititial cost is used when target group change is to be compared to the empty group
/// Example: 1 man = cost 1 will be reported after the factor decrease under 1/ReportTargetsEmptyGroupCost=1/0.4=2.5
//           and as ReportTargetsChangeFactor[1]==2.5, it will be reported after TWO seconds aggregation delay
//           (more men can be detected meanwhile - and aggregated into one radio report)
ReportTargetsEmptyGroupCost = 0.4;

class CfgFSMs
{
  access = ReadAndCreate;
};

class PreloadVehicles
{
  access = ReadAndCreate;
};

class CfgFatigue
{
    MinValue1 = 0.1;          //1-param for mapping
    MinValue2 = 1.0;          //2-param for mapping
    NormalRunSpeed = 7.2;     //normal speed of run
    TiredRunSpeedLimit = 0.8; //tired speed of run limit 
}

class CfgFirstAid
{
	access = ReadAndCreate;
	MinCosSpeedAngle = 0.6;
	SpeedReduction = 0.242;
   
	CollisionFactor   	= 0.001;
	MinCollisionSpeed 	= 0.5;
	collisionHeigth 	= 120;
	collisionAngle 		= 0;

   valRangeMult       = 0.1;
   vehicleFireCoef   = 6;
   
   //4.2 Effects of injury
	CriticalHeadHit         = 1.0;       // treshold of damage to head, which causes instant death
	CriticalBodyHit         = 1.0;       // treshold of damage to body, which causes instant death
	InjuredTreshold         = 0.10;      // soldiers count as injured after passing this treshold (4.2-2)  
	UnconsiousTreshold      = 1.01;      // soldiers go unconscious after passing this treshold (4.2-3)
	HeadHitLimit1Threshold  = 0.5;       // UI signalize injured head
	HeadHitLimitThreshold  = 1.01;
	HeadHitLimit2Threshold  = 1.01;      // unit falls into inconscious , until is not cured

   HealingDuration             = 4.0;
   HealingLeaderDistance       = 20.0;
   
	// 4.3.1 Speed of healing
	HealSpeedMedic       = 1.5;     // speed of medic's healing
	HealSpeedSoldier     = 0.05; 
	HealSpeedAutomatic   = 0.004;
	
	MinHealingDistance         = 10.0;
	HealDiffMupliplier         = 1.2;
	
	BleedingInjuryMinProjectile         = 0.1;
	BleedingInjuryMinExplosion          = 0.2;
	BleedingInjuryMinImpulse            = 0.4;
	BleedingInjuryMax          = 1.0;
	BleedingFrequencyMin       = 0.25;
	BleedingFrequencyMiddle    = 1.0;
	BleedingFrequencyMax       = 2.0;
	StabilizeTime              = 5.0;

	//sounds parameters
	BleedingFrequencyMinSound         = 0.5;  
	BleedingFrequencyMaxSound         = 2.0;

	InjuredSoundIntervalMin           = 2.0;
	InjuredSoundIntervalMax           = 10.0;
	PulsationSoundInterval            = 1.0;
	UnconsciousPulsationSoundVolume   = 1.0;
	BurningSoundInterval              = 1.0;
	ConsumedOxygenThresholdSound      = 0.2;
	BreathingFade                     = 0.2;
	UnconsciousPulsesNumber           = 10;
	UnconsciousPulsesOffset           = 0.3;

	DrowningInterval                  = 1.0;
	DrowningDamage                   = 0.005;
   
	//sounds parameters
	UnconsciousSoundIntervalMin       = 1.0;
	UnconsciousSoundIntervalMax       = 5.0;   	
	
	HandsHitLimit1Threshold  = 0.5;      // unit has handshaking, UI signalize injured hands
	HandsHitLimit2Threshold  = 0.85;     // unit cannot carry, drag, control vehicle, UI signalize serious injury
	
	LegsHitLimit1Threshold  = 0.5;       // unit cannot sprint nor ru, UI signalize injured legs
	LegsHitLimit2TThreshold = 0.85;      // unit cannot walk, get in/get out vehicle, cotnrol vehicle, UI signalize seriously injured legs	
};

//diving stuff
class CfgDiving
{
  verticalStep = 0.8;

  relativeUp   = -1.0;
  relativeDown = +1.0;

  relativeUpSDV   = -2.0;
  relativeDownSDV = +2.0;

  WaterOperfieldRadiusCollision  = 1.0;
  WaterOperfieldRadiusLogical    = 5.0;
  PositionYThreshold    = 1.5;

  StandardDepthMajor = -40;
  StandardDepthMinor = -10;
  StandardTransfer   = 5;

  StandardDepthMajorSDV = -40;
  StandardDepthMinorSDV = -10;
  StandardTransferSDV   = 5;

  DiverSpeedCoef = 1.5;

  WaterSlowdown1 = 0.7;
  WaterSlowdown2 = 0.7;
  
  waypointSwimRadius1 = 1.5;
  waypointSwimRadius2 = 5.0;

  MaxRangeCoef = 0.5;
  ThresholdSwimmingWithNeopren = 0.0;
  SwimDuration        = 1.0;
  WaveEffectDepth     = 5.0;
  SubmarineWaveEffectDepth     = 5.0;

  grenadeWaterWaveCoef = 1.5;
  shotRandomAngle = 0.1;
  
  //Visibility parameters
  MinAngle = 49.0;
  MaxDistance = 35.0;
  MaxDistance2 = 35.0;
  Haze = 1.0;
};

class CfgBleeding
{
  damageMin = 0.2;
  damageMax = 1.0; 
  timeMin = 0.2;
  timeMax = 1.0;
  percentMin = 0.2; 
  percentMax = 1.0;
  timeToLive  = 60.0;

  bloodSlopeAlpha = 0.7;
  bloodSlopeTimeToLiveMin = 180.0;
  bloodSlopeTimeToLiveMax = 600.0;
};

class CfgPriority
{
  priorityUnconsciousGain = 0.5;
};

// empty container for additional skeleton informations
class CfgSkeletonParameters{}; 

class CfgImprecision
{
  class Small
  {
    horizontalRadius = 0.6;
    verticalRadius = 0.45;
    speed = 0.6;
  };

  class Big
  {
    radius = 4;
  };

  class Common
  {
    maxMultiplier = 2.8;
    speedCoef = 1.2;
    sizeCoef = 0.4;
  };

  class Screen
  {
    // Converts relative (to screen) rotaion of gun to "cursor space"
    screenToCursor = 50;
  };

  class Multipliers
  {
    fatigue = 1;
    damage = 1;
  }

  class Primary
  {
    verticalRadius = 1;
    horizontalRadius = 0.3;

    fatigue = 1;
    damage = 1;

    breathing = 0.1;
    speed = 0.5;
    size = 1.8;
    maxSpeed = 2.5;
    maxSize = 2;
  };

  class Secondary
  {
    verticalRadius = 0.3;
    horizontalRadius = 1;

    fatigue = 1;
    damage = 1;

    inertia = 1;
    speed = 0.25;
    size = 0.4;
    maxSpeed = 2.5;
    maxSize = 10;
  };
};

class CfgBreathing
{
  //! How long the player can hold breath
  maxHoldTime = 5;
  //! Speed of change of current breathing coefficient to desired (1 is default)
  coefSpeed = 10;
  //! When not in full capacity, breathing coef is multiplied by (1 - airLeft)*this
  outOfBreathCoef = 0.8;
  //! Duration, for which breath cannot be held after releasing it (inhaling after holding)
  inhaleDuration = 1;
};

class CfgWeaponHandling
{
  class SwayDistortion
  {
    rate	= 6;	//how fast inertia rises according to how much and how fast the soldier turns
    decay	= 0;	//how fast inertia decreases in time
    maximum	= 5;	//default inertia value
    gunnerCoef = 1;
  };

  class SightAlignment
  {
    rate	= 6;
    decay	= 4;
    maximum	= 5;
    gunnerCoef = 1;
  };

  class Stabilization
  {
    restingCoef = 0.1;
    deployedCoef = 0.1;
    deployedProneCoef = 0.1;
    restingProneCoef = 0.1;

    restingRecoil = 0.3;
    restingRecoilPersistent = 1;
    deployedRecoil = 0.3;
    deployedRecoilPersistent = 1;

    characterPoints[] = { "Spine3" };
    weaponPoints[] = { "usti hlavne"};
    weaponRadius = 0.15;
    upperBodyRadius = 0.65;

    groundLimits[] = { 0.139626339, 0.314159274 };
    objectLimits[] = { 0.349065850, 0.837758064 };

  };

  class Recoil
  {
    //! Multiplier for extra camera-only movement for weapon kickback
    kickVisual = 0.2;

    //! Common coefficient for weapon-based recoil config values
    impulseCoef = 1;

    //! Multiplier for lying positions
    prone = 0.3;
  };

  class Camera
  {
    //! How fast from/to aiming down the sight
    aimTransitionSpeed = 6;
  };
};

class CfgPersonTurret
{
  /// Stabilisation inside the vehicles
  inertiaStabilisationCoef = 0.2;

  /// Weapon inertia inside vehicles
  inertiaWeaponCoef = 0.2;

  obstructionTestTimer = 0.1;
};

class CfgMovesBasic
{
  class Default
  {
    minPlayTime=0;
    useIdles=true;
    canBlendStep=0;
    idle="idleDefault";
    weaponLowered=false;
    weaponObstructed = false;
    access=0;
    actions="NoActions";
    file="";
    looped=1;
    speed=0.500000;
    disableWeapons=0;
    enableOptics=1;
    disableWeaponsLong=0;
    showWeaponAim=1;
    enableMissile=0;
    enableBinocular=0;
    showItemInHand=0;
    showItemInRightHand=0;
    showHandGun=0;
    onLandBeg=0;
    onLandEnd=0;
    onLadder=0;
    canPullTrigger=1;
    canReload=1;
    duty=-0.500000;
    visibleSize=0.750120;
    aimPrecision=1;
    camShakeFire=1;
    relSpeedMin=1;
    relSpeedMax=1;
    soundEnabled=1;
    soundOverride="";
    soundEdge[]={0.500000,1};
    terminal=0;
    ragdoll=0;
    limitGunMovement=1;
    variantsPlayer[]={};
    variantsAI[]=
    {
      ""
    };
    equivalentTo="";
    connectAs="";
    variantAfter[]={5,10,20};
    connectFrom[]={};
    connectTo[]={};
    interpolateWith[]={};
    interpolateTo[]={};
    interpolateFrom[]={};
    aiming="aimingDefault";
    aimingBody="aimingUpDefault";
    leaning="leaningDefault";
    legs="legsDefault";
    head="headDefault";
    leaningFactorBeg=0;
    leaningFactorEnd=0;
    leaningFactorZeroPoint=-1;
    interpolationSpeed=6;
    interpolationRestart=0;
    enableDirectControl=1;
    headBobMode=0;
    headBobStrength=0;
    collisionShape=""; /// shape should be redefined in project specific configs
    hasCollShapeSafe=0;
    collisionShapeSafe="";
    boundingSphere=1.000000;
    enableAutoActions=0;
    leftHandIKBeg=0;
    leftHandIKEnd=0;
    rightHandIKBeg=0;
    rightHandIKEnd=0;
    leftHandIKCurve[]={};
    rightHandIKCurve[]={};
    weaponIK=0;
    preload=0;
    Walkcycles=1;
    forceAim=0;
    stamina = 1;
  };
};
class CfgGesturesMale
{
  class Default
  {
    minPlayTime=0;
    actions="NoActions";
    file="";
    looped=1;
    speed=0.500000;
    relSpeedMin=1;
    relSpeedMax=1;
    soundEnabled=0;
    soundOverride="";
    soundEdge[]={0.500000,1};
    terminal=0;
    ragdoll=0;
    equivalentTo="";
    connectAs="";
    connectFrom[]={};
    connectTo[]={};
    interpolateWith[]={};
    interpolateTo[]={};
    interpolateFrom[]={};
    mask="empty";
    interpolationSpeed=6;
    interpolationRestart=0;
    preload=0;
    disableWeapons=1;
    enableOptics=1;
    showWeaponAim=1;
    enableMissile=1;
    enableBinocular=1;
    showItemInHand=0;
    showItemInRightHand=0;
    showHandGun=0;
    canPullTrigger=1;
    Walkcycles=1;
    headBobMode=0;
    headBobStrength=0;
    leftHandIKBeg=0;
    leftHandIKEnd=0;
    rightHandIKBeg=0;
    rightHandIKEnd=0;
    leftHandIKCurve[]={1};
    rightHandIKCurve[]={1};
    forceAim=0;
  };
};

class CfgSlopeLimits
{
  // All slopes are defined as tangents of angles
  maxRun=0.4;
  minRun=-0.7;
  maxSprint=0.2;
  minSprint=-0.5;

  maxRunAI=0.4;
  minRunAI=-0.7;
  maxSprintAI=0.2;
  minSprintAI=-0.5;

  class Duty 
  {
    maxSlope=0.839;
    minSlope=-1;
    optimalSlope=-0.268;
    maxDuty=15;
    minDuty=0.15;
  };
};

class CfgAnimation
{
  combatPaceDuration = 1;
  ladderSpeed = 0.5;
  //! Soldier class (in CfgVehicles) used to preload animation system
  preloadedClass = "C_Soldier_VR_F";
};

class CfgCollisions
{
  access=ReadOnly;
  minMassCollisionLimit = 10.0;
};

class CfgSlingLoading
{
  //! Length of ropes used for sling loading and also minimal height for sling loading to be active
  ropeLength = 10.0;
  //! Minimal XZ distance when sling loading is active
  hookMinRange = 4.0;
  //! Maximal height when sling loading is not aborted
  abortHeight = 20.0;
  //! Maximal XZ distance when sling loading is not aborted
  abortRange = 15.0;
  //! Speed of sling loading ropes to wind/unwind
  unwindSpeed = 2.0;
  //! Maximal altitude used in sling load manager
  slmMaxAltitude = 40.0;
};
