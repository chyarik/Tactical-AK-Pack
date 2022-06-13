#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

#include "CfgPatches.hpp"

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
	};

	class Test_Car_01_base_F: Car_F
	{
		model 	= "\Samples_f\Test_Car_01\Test_Car_01";  /// simple path to model
		picture	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon in command bar
		Icon	= "\A3\Weapons_F\Data\placeholder_co.paa"; /// icon in map

		displayName = "Test Car"; /// displayed in Editor

		hiddenSelections[] = {"camo1"}; ///we want to allow changing the color of this selection

		terrainCoef 	= 6.5; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 32; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle

		transportMaxBackpacks 	= 3; /// just some backpacks fit the trunk by default
		transportSoldier 		= 3; /// number of cargo except driver

		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		class TransportItems /// some first aid kits in trunk according to safety regulations
		{
			item_xx(FirstAidKit,4);
		};

		class Turrets{}; /// doesn't have any gunner nor commander
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel	{armor=0.125; passThrough=0;};

			class HitRFWheel: HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel 	{armor=0.125; passThrough=0;};

			class HitFuel 			{armor=0.50; material=-1; name="fueltank"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="engine"; visual=""; passThrough=0.2;};
			class HitBody: HitBody 	{name = "body"; visual="camo1"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage

			class HitGlass1: HitGlass1 {armor=0.25;}; /// it is pretty easy to puncture the glass but not so easy to remove it
			class HitGlass2: HitGlass2 {armor=0.25;};
			class HitGlass3: HitGlass3 {armor=0.25;};
			class HitGlass4: HitGlass4 {armor=0.25;};
		};

		driverAction 		= driver_offroad01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {passenger_low01, passenger_generic01_leanleft, passenger_generic01_foldhands}; /// the same of all the crew
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"		/// PiPs are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			 turnIncreaseConst 	= 0.3; // basic sensitivity value, higher value = faster steering
			 turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			 turnIncreaseTime 	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			 turnDecreaseConst 	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			 turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			 turnDecreaseTime 	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			 maxTurnHundred 	= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};

		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};

		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust";  		/// name of initial memory point
				direction 	= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};

			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffect";
			};
		};

		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadL02: LightCarHeadL01
			{
				position 	= "LightCarHeadL02";
				direction 	= "LightCarHeadL02_end";
				FlareSize 	= 0.5;						/// side bulbs aren't that strong
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};

			class LightCarHeadR02: LightCarHeadR01
			{
				position 	= "LightCarHeadR02";
				direction 	= "LightCarHeadR02_end";
				FlareSize 	= 0.5;
			};
		};

		aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars

		class EventHandlers: EventHandlers
		{
			// (_this select 0): the vehicle
			// """" Random texture source (pick one from the property textureList[])
			// []: randomize the animation sources (accordingly to the property animationList[])
			// false: Don't change the mass even if an animation source has a defined mass
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};

		// Must be kept as fail-safe in case of issue with the function
		hiddenSelectionsTextures[]={"\A3\Weapons_F\Data\placeholder_co.paa"};	 /// we could use any texture to cover the car

		// Definition of texture sources (skins), used for the VhC (Vehicle customization)
		// Also, because the Garage uses the VhC, it will make them available from the garage
		class textureSources
		{
			class red // Source class
			{
				displayName="Red"; // name displayed, among other, from the garage
				author=$STR_A3_Bohemia_Interactive; // Author of the skin
				textures[]=// List of textures, in the same order as the hiddenSelections definition
				{
					"#(rgb,8,8,3)color(1,0,0,1)" // This is procedural texture, can be useful to set placeholder
				};
				factions[]=// This source should be available only for these factions
				{
					"OPF_F", "OPF_G_F" // Side Opfor
				};
			};
			class blue
			{
				displayName="BBBBLue";
				author=$STR_A3_Bohemia_Interactive;
				textures[]=
				{
					"#(rgb,8,8,3)color(0,0,1,1)"
				};
				factions[]=
				{
					"BLU_F", "BLU_G_F" // Side Blufor
				};
			};
			class green
			{
				displayName="Green";
				author=$STR_A3_Bohemia_Interactive;
				textures[]=
				{
					"#(rgb,8,8,3)color(0,1,0,1)"
				};
				factions[]=
				{
					"IND_F", "IND_G_F" // Side independent
				};
			};
			class yellow
			{
				displayName="Yellow power";
				author=$STR_A3_Bohemia_Interactive;
				textures[]=
				{
					"#(rgb,8,8,3)color(0,1,0,1)"
				};
				factions[]=
				{
					// Guerilla only
					"BLU_G_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class white
			{
				displayName="White is white";
				author="Another name";
				textures[]=
				{
					"#(rgb,8,8,3)color(1,1,1,1)"
				};
				factions[]=
				{
					"CIV_F" // side civilian
				};
			};
			class black
			{
				displayName="Dark side";
				author="Tom_48_97";
				textures[]=
				{
					"#(rgb,8,8,3)color(0,0,0,1)"
				};
				factions[]= {}; // Should be available for every factions
			};
		};
		// [_textureSourceClass1, _probability1, _textureSourceClass2, _probability2, ...]
		// Default behavior of the VhC is to select one of these sources, with a weighted random
		textureList[]=
		{
			"red", 1,
			"green", __EVAL(1/3), // You can also use EVAL to evaluate an expression
			"blue", 1,
			"black", 1
			// You can noticed that the white source is missing, therefore, it won't be part of the random
		};

		class MFD /// Clocks on the car board
		{
			class ClockHUD
			{
				#include "cfgHUD.hpp"
			};
		};
	};
	class Test_Car_Alt_base_F: Test_Car_01_base_F
	{
		hiddenSelections[] = {"camo1","camo2","camo3"}; ///we want to allow changing the color of this selection
		hiddenSelectionsTextures[]=
		{
			"#(rgb,8,8,3)color(1,0,0,1)",
			"#(rgb,8,8,3)color(0,1,0,1)",
			"#(rgb,8,8,3)color(0,0,1,1)"
		};
		class textureSources
		{
			class RedGreenBlue
			{
				displayname="Red Green Blue";
				author="You don't want to know";
				textures[]=
				{
					"#(rgb,8,8,3)color(1,0,0,1)",
					"#(rgb,8,8,3)color(0,1,0,1)",
					"#(rgb,8,8,3)color(0,0,1,1)"
				};
				factions[]={};
			};
			class BlueGreenRed
			{
				displayname="Blue Green Red";
				author="You don't want to know";
				textures[]=
				{
					"#(rgb,8,8,3)color(0,0,1,1)",
					"#(rgb,8,8,3)color(0,1,0,1)",
					"#(rgb,8,8,3)color(1,0,0,1)"
				};
				factions[]={};
			};
		};
	};
	// Derivate from the base class
	class C_Test_Car_01_F: Test_Car_01_base_F /// some class that is going to be visible in editor
	{
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
	};
	// Derivate from the base class
	class C_Test_Car_01_Black_F: Test_Car_01_base_F /// some class that is going to be visible in editor
	{
		forceInGarage=1; 	// This will force the garage to display this vehicle, otherwise it won't because it shares the same p3d as the previous
		displayName="Test Car (Black)";
		scope=2; 			/// makes the car visible in editor
		scopeCurator=2;		// scope 2 means it's available in Zeus mode (0 means hidden)
		crew="C_man_1"; 	/// we need someone to fit into the car
		side=3; 			/// civilian car should be on civilian side
		faction	= CIV_F;	/// and with civilian faction
		// the texture source used will be the green one, whatever it probability because it's the only one defined here
		textureList[]=
		{
			"black", 1
		};
	};
	// Derivate from the base class
	class C_test_Car_01_anotherVariant_F: Test_Car_01_base_F
	{
		forceInGarage=0; 	// 0 has no effect at all
		displayName="Test Car (black or white)";
		scope=2;
		scopeCurator=0;		// It isn't shown in curator UI
		crew="C_man_1";
		side=3;
		faction	= CIV_F;
		// this can be black or white
		textureList[]=
		{
			"black", 0.75,
			"white", 0.5
		};
	};
	// This car won't  be available from the editor but its class name can be used with the VhC function
	// E.g. [MyTestCar, "C_test_Car_01_white_F"] call bis_fnc_initVehicle;
	class C_test_Car_01_white_F: Test_Car_01_base_F
	{
		forceInGarage=0; 	// 0 has no effect at all
		displayName="Test Car (white)";
		scope=1;
		scopeCurator=0;		// It isn't shown in curator UI
		crew="C_man_1";
		side=3;
		faction	= CIV_F;
		// this can be black or white
		textureList[]=
		{
			"white", 0.5
		};
	};
	// Other delivery of the car with differents hidden selections
	class C_Test_Car_01_alt_F: Test_Car_Alt_base_F
	{
		forceInGarage=1;
		displayName="Test Car (RGB)";
		scope	= 2;
		scopeCurator=2;
		crew 	= "C_man_1";
		side	= 3;
		faction	= CIV_F;
		textureList[]= {"RedGreenBlue",1};
	};
	class C_Test_Car_01_alt_V2_F: C_Test_Car_01_alt_F
	{
		displayName="Test Car (BGR)";
		textureList[]= {"BlueGreenRed",1};
	};
};