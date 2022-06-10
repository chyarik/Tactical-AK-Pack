#include "basicdefines_A3.hpp"
#include "CfgPatches.hpp"

// Declaration of Custom Info panels defaults
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};


class CfgVehicles
{
	//Needed class definitions since we are inheriting parameters from those classes
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};

	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};

	//Ejection system classes
	class Ejection_Seat_Base_F;
	class Plane_Canopy_Base_F;

	class Test_Plane_01_Canopy_F : Plane_Canopy_Base_F
	{
		scope							= protected;
		displayName						= $STR_A3_Fighter_03_Canopy_name;
		model							= "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_canopy_F.p3d";
	};

	class Ejection_Seat_Test_Plane_01_base_F : Ejection_Seat_Base_F
	{
		scope							= private;
		displayName						= $STR_A3_Ejection_Seat_02_name;
		model							= "\A3\Air_F_Gamma\Plane_Fighter_03\Plane_Fighter_03_ejection_seat_F.p3d";

		icon							= iconParachute;
		picture							= "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";

		driverAction					= Pilot_Plane_Fighter_Ejection;
		cargoAction[]					= {Pilot_Plane_Fighter_Ejection};
	};

	class I_Ejection_Seat_Test_Plane_01_F : Ejection_Seat_Test_Plane_01_base_F
	{
		scope							= protected;
		side							= 0;
		faction							= IND_F;
		crew							= I_Fighter_Pilot_F;
	};

	//Plane class
	class Test_Plane_01_base_F: Plane_Base_F
	{
		scope							= 0;  					//base class should be hidden
		displayName						= "Test plane (Base)";			// how is the plane displayed (named) in editor
		model							= "\Samples_F\Test_Plane_01\Test_Plane_01.p3d";		// path to model of the plane
		accuracy						= 0.2;												// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		editorSubcategory				= EdSubcat_Planes;		// category in which we want to see this plane in editor
		memoryPointTaskMarker			= "TaskMarker_1_pos";	// The memory point defines the position where the task marked will be displayed if the task is attached to the particular object


		armor							= 55;					// base value of the vehicle armor, reduces the damage taken from the direct hit. Affects armor parameter in the HitPoints class
		armorStructural					= 2;					// value affecting passThrough parameter in the HitPoints class (divides the extent of the damage transferred by passThrough). It also increases overall durability of the object (even if it has no hitpoints).
		armorLights						= 0.1;					// level of protection for lights located on hull
		epeImpulseDamageCoef			= 50;					// coeficient for physx damage
		damageResistance				= 0.004;				// for AI if it is worth to be shoot at
		destrType						= DestructWreck;		// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		driverCanEject					= 0;					// needed for hiding engine "Eject" action if we want to use ejection seats instead

		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};	//array of memory points for slingloading hook position

		driverAction					= Plane_Fighter_03_pilot;	// what is the standard pose for the pilot, defined as animation state

		viewDriverShadowDiff			= 0.5;					//diffuse light attenuation
		viewDriverShadowAmb				= 0.5;					//ambient light attenuation

		radarTargetSize					= 0.8;
		visualTargetSize				= 0.8;
		irTargetSize					= 0.8;

		driverLeftHandAnimName			= "throttle_pilot";		// conecting throttle animation to left hand of pilot

		icon							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa"; 	// icon in map/editor
		picture							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";		// small picture in command menu



		LockDetectionSystem = CM_Lock_Radar;							// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;	// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		class EjectionSystem		// ejection system parameters - used only when you we have plane with ejection seats (EJS)
		{
			EjectionSeatEnabled		= 1;											//enable advanced ejection system
			EjectionDual			= 0;											//currently only single seat aircraft ejection supported (to do for latter)
			EjectionSeatClass		= "I_Ejection_Seat_Test_Plane_01_F";			//class name of ejector seat to use
			CanopyClass				= "Test_Plane_01_Canopy_F";						//class name of canopy to use
			EjectionSeatHideAnim	= "ejection_seat_hide";							//name of the hide animation that will hide ejector seat mesh in plane
			EjectionSeatRailAnim	= "ejection_seat_motion";						//name of the animation that will be played to start a smooth ejection motion out of cockpit
			CanopyHideAnim			= "canopy_hide";								//name of the hide animation that will hide canopy mesh in plane
			EjectionSeatPos			= "pos_eject";									//position memory point whwre to attach ejector seat
			CanopyPos				= "pos_eject_canopy";							//position memory point where to attach dummy canopy
			EjectionSoundExt		= "Plane_Fighter_01_ejection_ext_sound";		//sound to play when ejection trigered (external)
			EjectionSoundInt		= "Plane_Fighter_01_ejection_in_sound";			//sound to play when ejection trigered (in-ternal)
			EjectionParachute		= "Steerable_Parachute_F";						//class name parachute used in ejection
			EjectionSeatForce		= 50;											//ejection seat blast force
			CanopyForce				= 30;											//canopy bast force
		};

		class Turrets {};	// single seat planes don't have any kind of turret, we need to void it

		class TransportItems{};	// planes are usually not used to transport items, there could possibly be a few FAKs

		class HitPoints: HitPoints
		{
			class HitHull: HitHull				{armor = 4;		explosionShielding = 3;		name = "HitHull";			passThrough = 1;	visual = "Hit_Hull";		radius = 0.3;	minimalHit = 0.05;	depends = "0";	material = -1;};
			class HitEngine: HitHull			{armor = 4;		explosionShielding = 3.5;	name = "HitEngine";			passThrough = 1;	visual = "Hit_Engine";		radius = 0.3;	minimalHit = 0.05;	depends = "0";};
			class HitAvionics: HitHull			{armor = 3;		explosionShielding = 3.5;	name = "HitAvionics";		passThrough = 0.5;	visual = "";				radius = 0.2;	minimalHit = 0.05;	depends = "0";};
			// Main fueslage fuel tank
			class HitFuel: HitHull				{armor = 4.5;	explosionShielding = 4;		name = "HitFuel";			passThrough = 0.8;	visual = "";				radius = 0.3;	minimalHit = 0.1;	depends = "0";};
			// Wingtips fuel tanks
			class HitFuel_Lead_Left: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel1_Leads";	passThrough = 0;	visual = "Hit_AileronL";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Lead_Right: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel2_leads";	passThrough = 0;	visual = "Hit_AileronR";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Left: HitFuel			{armor = 2.5;	explosionShielding = 5;		name = "HitFuel1";			passThrough = 0.2;	visual = "Hit_Fuel2a";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Left";};
			class HitFuel_Right: HitFuel		{armor = 2.5;	explosionShielding = 5;		name = "HitFuel2";			passThrough = 0.2;	visual = "Hit_Fuel2b";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Right";};
			class HitFuel2: HitFuel				{armor = 999;	explosionShielding = 0;		name = "HitFuel2";			passThrough = 0.2;	visual = "";				radius = 0.2;	minimalHit = 0.1;	depends = "(HitFuel_Left + HitFuel_Right)*0.5";};
			// Cockpit glass
			class HitGlass1: HitHull			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass1";			passThrough = 0;	visual = "glass1"; 			radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitGlass2: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass2";			passThrough = 0;	visual = "glass2"; 			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass3: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass3";			passThrough = 0;	visual = "glass3";			radius = 0.2;	minimalHit = 0.1;	};
			// Steering hitpoints	- LC means left or center
			class HitLAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitLAileron_Link";	passThrough = 0;	visual = "Hit_AileronL"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitRAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRAileron_Link";	passThrough = 0;	visual = "Hit_AileronR"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitLAileron: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitLAileron";		passThrough = 0.3;	visual = "Hit_AileronL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitLAileron_Link";};
			class HitRAileron: HitLAileron		{armor = 1.5;	explosionShielding = 3;		name = "HitRAileron";		passThrough = 0.3;	visual = "Hit_AileronR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitRAileron_Link";};
			class HitLCRudder: HitHull			{armor = 2;		explosionShielding = 3;		name = "HitLCRudder";		passThrough = 0.3;	visual = "Hit_RudderC"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitLCElevator: HitHull		{armor = 1.5;	explosionShielding = 3;		name = "HitLCElevator";		passThrough = 0.3;	visual = "Hit_ElevatorL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitRElevator: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitRElevator";		passThrough = 0.3;	visual = "Hit_ElevatorR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust1";				// position of exhaust memory point from smoke is coming from
				direction = "Exhaust1_dir";			// direction of exhaust smoke
				effect = "ExhaustsEffectPlaneHP";	// efect used for exhaust - variant which reacts to engine damage

				engineIndex = 0; 					// index used for detection which engine is getting damage
			};
		};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName	= "WingVortices";		// name of the effect
				position	= "body_vapour_L_E";	// name of the memory point in model
			};

			class WingTipRight
			{
				effectName	= "WingVortices"; 		// name of the effect
				position	= "body_vapour_R_E";	// name of the memory point in model
			};
			class BodyLeft
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_L_S";	// name of the memory point in model
			};

			class BodyRight
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_R_S";	// name of the memory point in model
			};
		};

		#include "sounds.hpp" 						// sounds are included in separate file to prevent cluttering
		#include "flightModel.hpp"					// flight model is included in separate file to prevent cluttering, too
		#include "physx.hpp" 						// PhysX suspension setup

		driveOnComponent[] = {};  // array of components to be assigned special low-friction material (usually wheels) - not used anymore, for PhysX suspension use blank array (old array was - {"wheel_1","wheel_2","wheel_3"} )

		/*
		// These properties become obsolete with the new Sensor component configuration
		irScanRangeMin = 500;		// defines the range of IR sight of the vehicle
		irScanRangeMax = 5000;		// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 2;		// defines the effectivity of IR sight of the vehicle
		laserScanner = 1;		// if the vehicle is able to see targets marked by laser marker
		*/

		gunAimDown = 0.029000;	// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	// adjusts the view of pilot to have crosshair centred

		memoryPointLRocket = "Rocket_1"; // use this for simulating different rocked pods in case you don't want to mess with "maverick weapon" simulation
		memoryPointRRocket = "Rocket_2"; // it is used to alternate two points/pods of fire the missiles

		minFireTime = 30;			// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		class Components : Components // class where various components can be defined and made available to the entity. Make sure you inherit from
		{
			class SensorsManagerComponent // Component containing the vehicle sensors
			{
				class Components
				{
					class IRSensorComponent // Individual sensor class. In this case an Infra-red Search & Track.
					{
						componentType = "IRSensorComponent"; 	// Type of the sensor. Options: IRSensorComponent, NVSensorComponent, LaserSensorComponent, ActiveRadarSensorComponent, PassiveRadarSensorComponent, VisualSensorComponent, ManSensorComponent

						class AirTarget      							// Sensor range for targets in look-up conditions, with sky background
						{
							minRange = 500;         					/// Minimum possible range in meters
							maxRange = 5000;       						/// Maximum possible range in meters
							objectDistanceLimitCoef = 1;    			/// Range in meters set as objectDistanceLimit = (objectDistanceLimitCoef * player's obj. view distance)
							viewDistanceLimitCoef = 1;      			/// Range in meters set as viewDistanceLimit = (viewDistanceLimitCoef * player's view distance)
							/// Smallest of [maxRange, objectDistanceLimit, viewDistanceLimit] is used as actual sensor's range. If this number is lower than minRange then minRange is used.
						};
						class GroundTarget : AirTarget     				// Sensor range for targets in look-down conditions, with ground background
						{
							maxRange = 3500; 			// Less than AirTarget - It's usually more difficult to detect something against ground clutter.
						};

						angleRangeHorizontal = 90;     	// Azimuth coverage in degrees
						angleRangeVertical = 90;       	// Elevation coverage in degrees
						groundNoiseDistanceCoef = 0.1;  // Portion of sensor-target-ground distance below which the target becomes invisible to the sensor
						maxGroundNoiseDistance = 100;   // Distance from the ground background in meters above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        	// Speed in km/h above which the target will start becoming visible. Useful for simulating doppler-radar.
						maxSpeedThreshold = 0;       	// Speed above which the target becomes visible even if below groundNoiseDistanceCoef. Linearly decreases to minSpeedThreshold
						minTrackableSpeed = -600;  		// Min speed of target to be detectable
						maxTrackableSpeed = 600;      	// Max speed of target to be detectable. In this case the sensor won't be able to detect fast moving targets.
						minTrackableATL = -1e10;       	// Min altitude above terrain level of target to be detectable
						maxTrackableATL = 1e10;        	// Max altitude above terrain level of target to be detectable
						typeRecognitionDistance = 1000; // Distance in meters at which the sensor recognizes the actual target vehicle type
						animDirection = "";  			// Model selection to set the sensor direction. In this case empty, but it can be useful on tanks or gunships.
						aimDown = 15;                   // Elevation offset in degrees of the sensor from the animDirection. Looking down 15° in this case.
					};

					class PassiveRadarSensorComponent
					{
						componentType = "PassiveRadarSensorComponent"; // Component for Radar Warning Receiver

						class AirTarget
						{
							minRange = 25;
							maxRange = 5000;

							objectDistanceLimitCoef = -1;    //Don't limit the range by obj. view distance
							viewDistanceLimitCoef = -1;      //Don't limit the range by view distance
						};
						class GroundTarget : AirTarget {};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeftSensors // inherit from the defaults to get correct display positioning
			{
				class Components : Components 	// Inherit from the defaults so we don't have to re-define each panel component
				{
					class VehicleDriverDisplay	// Add a new camera feed module to the left panel among the ones that were inherited from the defaults
					{
						componentType = "TransportFeedDisplayComponent"; 	// This component will provide a camera feeed
						source = Driver; 									// The camera feed source will be driver - driver's optics. In this case the pilotCamera
						resource = RscTransportCameraComponentDriver; 		// Define which resource will be used for the display
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRightSensors // inherit from the defaults to get correct display positioning
			{
				class Components : Components 	// Inherit from the defaults so we don't have to re-define each panel component
				{
					class SensorDisplay  		// Add another Sensor Display module to the right panel among the ones that were inherited from the defaults
					{
						componentType = "SensorsDisplayComponent"; 	// This component will provide a sensor displaye
						range = 8000; 								// Distance resolution - maximum range displayed on the sensor in meters
						resource = "RscCustomInfoSensors"; 			// Define which resource will be used for the display
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]	= {"B_MISSILE_PYLON","B_ZEPHYR"};
						attachment		= PylonRack_1Rnd_LG_scalpel;
						priority		= 5;
						maxweight		= 200;
						UIposition[]	= {0.35,0.08};
					};
					class Pylons2: Pylons1
					{
						priority		= 4;
						attachment		= PylonRack_1Rnd_AAA_missiles;
						maxweight		= 320;
						UIposition[]	= {0.345,0.13};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]	= {"B_ZEPHYR","B_MISSILE_PYLON","B_BOMB_PYLON"};
						priority		= 3;
						attachment		= PylonMissile_1Rnd_Bomb_04_F;
						maxweight		= 400;
						UIposition[]	= {0.34,0.18};
					};
					class Pylons4: Pylons1 // center pylon
					{
						priority		= 2;
						attachment		= PylonWeapon_300Rnd_20mm_shells;
						maxweight		= 500;
						UIposition[]	= {0.27,0.28};
						hardpoints[]	= {"B_A143_BUZZARD_CENTER_PYLON"};
					};
					class Pylons5: Pylons3 {UIposition[] = {0.33,0.38}; mirroredMissilePos = 3;}; // mirror the rest
					class Pylons6: Pylons2 {UIposition[] = {0.33,0.43}; mirroredMissilePos = 2;};
					class Pylons7: Pylons1 {UIposition[] = {0.34,0.48}; mirroredMissilePos = 1;};
				};
				class Presets
				{
					class Empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
					class Default
					{
						displayName = $STR_vehicle_default;
						attachment[] =
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AA
					{
						displayName = $STR_A3_cfgmagazines_titan_aa_dns;
						attachment[] =
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
				};
			};
		};

		class Reflectors		// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		// the same definition format for colouring the environment around
				position = "Light_L";				// name of memory point in model to take the origin of the light
				direction = "Light_L_end";			// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_L";				// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_L";				// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 20;					// angle from light direction vector where the light is at full strength
				outerAngle = 60;					// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					// boolean switch if the light produces flare or not
				dayLight = false;					// boolean switch if the light is used during day or not
				FlareSize = 4;						// how big is the flare, using the same metrics as intensity
				size = 1;							// defines the visible size of light, has not much of an effect now
				class Attenuation					// describes how fast does the light dim
				{
					start = 1;						// offset of start of the attenuation
					constant = 0;					// constant attenuation of the light in any distance from source
					linear = 0;						// coefficient for linear attenuation
					quadratic = 4;					// coefficient for attenuation with square of distance from source

					hardLimitStart = 150;			// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};

		class Damage 			// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1.rvmat",			// material mapped in model
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",	// changes to this one once damage of the part reaches 0.5
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",	// changes to this one once damage of the part reaches 1

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_destruct.rvmat",

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat",

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_in.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat"
			};
		};

		hiddenSelections[] =	// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1",
			"camo2"
		};

		memoryPointDriverOptics	= "PilotCamera_pos";		//mem. point for pilot camera
		unitInfoType			= "RscOptics_CAS_Pilot";	//rsc with DriverOptics elements
		driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";	//resource with Weapon UI elements that will be used when looking through the pilotCamera

		class MFD							// class for helmet mounted displays, is going to be documented separately
		{
			class AirplaneHUD
			{
				enableParallax = true;		//enables parallax effect for plane's HUD
				#define PosY0Center (0.383)
				#define PosY0CenterAdjust 0.13
				#define PosYCenterHorizont 0.38
				#define PosX0Center 0.4975
				#define SizeX10deg (0.94+0.03-0.02)
				#define SizeY10deg (1.3-0.2-0.03)
				#include "cfgHUD.hpp"		// here we are including file with HUD configuration itself
			};
		};

		class pilotCamera // A class that creates a turret-like slewable secondary optics for the pilot. Used to simulate Targeting Pods.
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX			= 0; minAngleX=0; maxAngleX=0;
					initAngleY			= 0; minAngleY=0; maxAngleY=0;
					initFov				= 0.25; 			// Zoom level of the magnification mode. In this case discrete - min/max/init set to the same value
					minFov				= 0.25;
					maxFov				= 0.25;
					directionStabilized	= 1; 				// Allows stabilization of the turret
					visionMode[]		= {"Normal","Ti"};	// Available spectrum modes - in this case visible and thermal
					thermalMode[]		= {0,1};			// TI modes - in this case WHOT and BHOT
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; // model used for the reticle
					opticsPPEffects[]	= {};  				// post-process effects used in the optics
				};
				class Medium : Wide
				{
					opticsDisplayName	= "MFOV";
					initFov				= A3_FOV_DEG(6);
					minFov				= A3_FOV_DEG(6);
					maxFov				= A3_FOV_DEG(6);
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					initFov				= 0.125;
					minFov				= 0.125;
					maxFov				= 0.125;
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics				= true;
				showUAVViewInOptics				= false;
				showSlingLoadManagerInOptics	= false;
			};

			minTurn					= -160;		// yaw limits
			maxTurn					= +160; 	// yaw limits
			initTurn				= 0;		// initial yaw angle
			minElev					= -10;		// pitch limits
			maxElev					= 90;		// pitch limits
			initElev				= 0;		// initial pitch angle
			maxXRotSpeed			= 0.3;		// yawing speed
			maxYRotSpeed			= 0.3;		// pitching speed
			maxMouseXRotSpeed		= 0.5;		// yawing speed for mouse
			maxMouseYRotSpeed		= 0.5;		// pitching speed for mouse
			pilotOpticsShowCursor	= 1;		// aimCursor is display inside optics (is useful to see plane direction)
			controllable			= true;		// camera can be slewed, set to 0 to have static camera
		};

		class AnimationSources: AnimationSources	// custom made animation sources to show/hide all the different parts for different loadout
		{
			class Muzzle_flash {source = "ammorandom"; weapon = "gatling_20mm";};	// used to rotate the muzzle flash, dependent on the weapon selected
			// animation sources for EJS
			class canopy_hide				{source = "user";animPeriod = 0.001;initPhase = 0;};
			class ejection_seat_hide : canopy_hide {};
			class ejection_seat_motion		{source = "user";animPeriod = 0.25;initPhase = 0;};
			// antimation sources for suspension animations and wheel rotation
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			//extra animations sources for damage representation
			class HitGlass1 				{source="Hit"; hitpoint="HitGlass1"; 			raw=1;};
			class HitGlass2: HitGlass1 		{hitpoint = "HitGlass2";};
			class HitGlass3: HitGlass1 		{hitpoint = "HitGlass3";};
			class HitAvionics               {source = "Hit"; hitpoint = "HitAvionics"; 		raw=1;};
		};

		class UserActions		//used only when "driverCanEject" is zero and we want to use ejection system
		{
			class Test_Plane_01_Eject
			{
				priority		= 0.05;
				shortcut		= "Eject";
				displayName		= "$STR_A3_action_eject";
				condition		= "player in this && {speed this > 1}";
				statement		= "[this] spawn bis_fnc_planeEjection";
				position		= "pilotcontrol";
				radius			= 10;
				onlyforplayer	= 1;
				showWindow		= 0;
				hideOnUse		= 1;
			};
		};

		class Eventhandlers: Eventhandlers
		{
			hit = "_this call bis_fnc_planeAiEject";	//event handler used for AI to use ejection seats
		};

		weapons[] =	// lets use the weapons from Buzzard
		{
			CMFlareLauncher
		};

		magazines[] = // and their respective magazines
		{
			120Rnd_CMFlare_Chaff_Magazine
		};
	};

	class I_Test_Plane_01_F: Test_Plane_01_base_F // CAS version of the plane
	{
		scope			= public;				// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		scopeCurator	= public;				// 2 means available from Zeus, whereas 0 means hidden
		displayName		= "Test plane with Dynamic Loadouts"; // how does the vehicle show itself in editor

		side			= 2;					// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction			= IND_F;				// defines the faction inside of the side
		crew			= "I_Fighter_Pilot_F";	// we are using "Fighter Pilot" for now, but we can use the sample soldier we have as captain of the boat, too - "Test_Soldier_F"

		hiddenSelectionsTextures[] = 			// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_INDP_co.paa",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_INDP_co.paa"
		};

		availableForSupportTypes[]	= {"CAS_Bombing"};	// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost						= 3000000;			// we need some high cost for such vehicles to be prioritized by AA defences
	};

	//Wreck definition, since we are using "destrType = DestructWreck;"
	class PlaneWreck;

	class Test_Plane_01_wreck_F: PlaneWreck
	{
		scope				= 1;	// we don't want to see wreck model in editor (you can use scope=2 if you want to see it)
		model				= "Samples_F\Test_Plane_01\Test_Plane_01_Wreck.p3d";
		typicalCargo[]		= {};	//no one should be sitting inside when spawned
		irTarget			= 0;
		transportAmmo		= 0;
		transportRepair		= 0;
		transportFuel		= 0;
		transportSoldier	= 1;
		class Eventhandlers{};
	};
};