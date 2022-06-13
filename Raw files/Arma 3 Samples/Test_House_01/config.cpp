/* This is a sample of a house with two stage destruction (a damaged version and a ruin), two destructible parts, five doors and eight windows */
#include "basicdefines_A3.hpp"
#include "config_macros_glass.hpp"
#include "cfgPatches.hpp"
#include "cfgFunctions.hpp"

class CfgVehicles
{
	// Parent class declarations
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;

	// Class of the house in good state
	class Land_Test_House_01_F: House_F
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "House 01 (Sample)"; // Name in editor
		model = \Samples_f\Test_House_01\Test_House_01_F.p3d; // Path to model

		vehicleClass = Structures; // category in editor; "Structures" value is a class defined in CfgVehicleClasses
		mapSize = 20.27; // Scale of icon in editor
		cost = 40000; // Score penalty for destroying the house

			selectionDamage = DamT_1; // Selection which will have textures and materials switched (according to "class Damage definitions") based on total damage of the house
		replaceDamagedHitpoints[] = {Hitzone_1_hitpoint, Hitzone_2_hitpoint}; // Array of hitpoints (subclasses in "class Hitpoints") that can trigger switch to the damaged version when destroyed
		replaceDamaged = "Land_Test_House_01_dam_F"; // Classname of the damaged version

		class DestructionEffects: DestructionEffects
		{
			class Ruin
			{
				simulation = ruin;
				type = \Samples_f\Test_House_01\Test_House_01_ruins_F.p3d; // Path to model of ruin used when total damage of the house reaches 1
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints // Entities representing destructible subparts of the house
		{
			class Hitzone_1_hitpoint
			{
				armor = 20;
				material = -1;
				name = Dam_1; // Name of selection in Hit-points lod in p3d
				visual = DamT_1; // Name of selection in resolution lods in p3d that will have it's textures and materials switched (according to "class Damage definitions") based on damage of this hitpoint
				passThrough = 1.0; // Coefficient for how much damage done to this hitpoints is also done to total damage of the house
				radius = 0.375; // Radius of spheres around each vertex of this hitpoint in Hit-points lod. These spheres represent the volume from which this hitpoint takes damage
				convexComponent = Dam_1;
				explosionShielding = 50; // Multiplier for damage taken from explosives
				minimalHit = 0.001; // Minimal damage that can be dealt to the hitpoint. Any lower damage is ignored

				class DestructionEffects //
				{
					class Dust
					{
						simulation = particles; // Visual effect
						type = HousePartDust; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = HousePartDustLong;
					};
					class Walls: Dust
					{
						type = HousePartWall;
					};
					class DamageAround
					{
						simulation = damageAround; // Effect dealing damage in a radius
						type = DamageAroundHousePart; // Class of this particular effect, defined in CfgDamageAround
						position = Dam_1_effects;
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
				};
			};
			class Hitzone_2_hitpoint: Hitzone_1_hitpoint
			{
				name = Dam_2;
				convexComponent = Dam_2;

				class DestructionEffects: DestructionEffects
				{
					class Dust: Dust
					{
						position = Dam_2_effects;
					};
					class Dust2: Dust2
					{
						position = Dam_2_effects;
					};
					class Walls: Walls
					{
						position = Dam_2_effects;
					};
					class DamageAround: DamageAround
					{
						position = Dam_2_effects;
					};
				};
			};

			// Hitpoint of each window, defined using macros from config_macros_glass.hpp to avoid a giant wall of text due to having 14 particle effects each.
			// In practice they are defined in the same manner as the hitpoints above. These follow Glass_#_hitpoint naming trend.
			// First parameter being number id, second being a value for armor parameter and third being a value for radius parameter.
			BIG_GLASS_HITPOINT(1,0.01,0.175)
			BIG_GLASS_HITPOINT(2,0.01,0.175)
			DOOR_GLASS_HITPOINT(3,0.01,0.175)
			DOOR_GLASS_HITPOINT(4,0.01,0.175)
			DOOR_GLASS_HITPOINT(5,0.01,0.175)
			NORMAL_GLASS_HITPOINT(6,0.01,0.175)
			NORMAL_GLASS_HITPOINT(7,0.01,0.175)
			NORMAL_GLASS_HITPOINT(8,0.01,0.175)
		};
		class Damage
		{
			// Texture pairs (below 0.5 health and 0.5+) for switching visuals (can also use generated)
			tex[] =
			{
				// Window textures
				"A3\Structures_F\Data\Windows\window_set_CA.paa",
				"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa",

				// Grey color
				"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.294118,0.294118,0.294118,1.0,co)",

				// Brown color
				"#(argb,8,8,3)color(0.501961,0.25098,0,1.0,co)",
				"#(argb,8,8,3)color(0.392157,0.196078,0,1.0,co)",

				// Yellow color
				"#(argb,8,8,3)color(1,1,0.501961,1.0,co)",
				"#(argb,8,8,3)color(0.513725,0.513725,0.203922,1.0,co)",

				// Light grey color
				"#(argb,8,8,3)color(0.752941,0.752941,0.752941,1.0,co)",
				"#(argb,8,8,3)color(0.478431,0.478431,0.478431,1.0,co)",

				// Red color
				"#(argb,8,8,3)color(1,0,0,1.0,co)",
				"#(argb,8,8,3)color(0.701961,0,0,1.0,co)"
			};

			// Unlike textures, materials are not in pairs but in triplets (health: 0 - 0.49, 0.5 - 0.99, 1)
			mat[] =
			{
				"A3\Structures_F\Data\Windows\window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat"
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source: Door_1_source {};
			class Door_3_source: Door_1_source {};
			class Door_4_source: Door_1_source {};
			class Door_5_source: Door_1_source {};

			// Animation sources for windows
			class Glass_1_source
			{
				source = Hit; // "Hit" = value of this source is the health of an entity
				hitpoint = Glass_1_hitpoint; // Specifies health of what is the control value of this animation; "Glass_1_hitpoint" being the class defined in class Hitpoints
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = Glass_2_hitpoint;
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = Glass_3_hitpoint;
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint = Glass_4_hitpoint;
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint = Glass_5_hitpoint;
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint = Glass_6_hitpoint;
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint = Glass_7_hitpoint;
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint = Glass_8_hitpoint;
			};
		};
		// This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door"; // Label of the action used in the action menu itself.
				position = Door_1_trigger; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 1.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_1_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_1_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_5: OpenDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') < 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_5_rot_1', 'Door_Handle_5_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_5: CloseDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') >= 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_5_rot_1', 'Door_Handle_5_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		// Here are references binding specific positions in Path lod in p3d to specific actions from "class UserActions" for AI to know when to use which doors. The actionBegin# and ActionEnd# is a hardcoded naming system.
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		actionBegin5 = OpenDoor_5;
		actionEnd5 = OpenDoor_5;
		// Amount of doors of this house; a parameter for easy processing of all doors on different houses by scripts.
		numberOfDoors = 5;
	};

	// Damaged version of the house. It contains rather few changes compared to the undamaged house class; mostly just disabling features not needed on this variant anymore.
	class Land_Test_House_01_dam_F: Land_Test_House_01_F
	{
		scope = 1; // 1 = accessible by scripts but not shown in editor
		displayName = "House 01 (Sample, Damaged)";
		model = \Samples_f\Test_House_01\Test_House_01_dam_F.p3d;

		// Reset of object switching.
		replaceDamagedHitpoints[] = {};
		replaceDamaged = "";

		// Reset of texture and material switching.
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		class AnimationSources
		{
			// Adding animation sources for two destructible parts of the house.
			class Hitzone_1_source
			{
				source = Hit;
				hitpoint = Hitzone_1_hitpoint;
				raw = 1;
			};
			class Hitzone_2_source: Hitzone_1_source
			{
				hitpoint = Hitzone_2_hitpoint;
			};

			// Defining door animation sources again since this "class AnimationSources" is not inherited, it's rewritten (to get rid of animation sources for windows which are all destroyed in this stage).
			class Door_1_source
			{
				source = user;
				initPhase = 0;
				animPeriod = 1;
			};
			class Door_2_source: Door_1_source {};
			class Door_3_source: Door_1_source {};
			class Door_4_source: Door_1_source {};
			class Door_5_source: Door_1_source {};
		};
	};

	// Simple class for ruins of the house.
	class Land_Test_House_01_ruins_F: Ruins_F
	{
		scope = 1;
		model = \Samples_f\Test_House_01\Test_House_01_ruins_F.p3d;
	};
};