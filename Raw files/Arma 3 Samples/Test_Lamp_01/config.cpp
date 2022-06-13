/* this is a sample of a lamp */
#include "basicdefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgVehicles
{
	class Lamps_base_F;

	class Land_Test_lamp_01_off_F: Lamps_base_F
	{
		scope				= protected;										/// makes the lamp invisible in editor
		scopeCurator		= public;											/// makes the lamp visible in Zeus
		displayName			= "My lamp (off)";									/// displayed in Editor
		model				= \Samples_f\Test_Lamp_01\Test_lamp_01_off_F.p3d;	/// simple path to model

		armor				= 5000;	/// just some protection against missiles, collisions and explosions

		class Hitpoints {};
		class AnimationSources {};
		class MarkerLights
		{
			class Light_4
			{
				color[]				= {1.0, 0.0, 0.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 800;					/// strength of the light
				name				= "Light_4_pos";		/// name of 
				
				blinking			= true;					/// lets make it blinking to show how patterns work
				blinkingPattern[]	= {0.25, 1.0};			// 0.25 s flash, 1.25 s period
				blinkingStartsOn	= true;					/// pattern starts with length of the first flash
				blinkingPatternGuarantee	= true;			/// use this to guarantee all blinks of the patter to be done
															/// doesn't guarantee the length of pattern if true 
															/// (e.g. because of blinks shorter than a frame would take a frame to be seen)

				useFlare			= true;					/// does the light use flare?
				flareSize			= 1.5;					/// how big is the flare
				flareMaxDistance	= 1000;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
		};
	};

	class Land_Test_lamp_01_F: Land_Test_lamp_01_off_F
	{
		scope				= private;
		scopeCurator		= public;
		displayName			= "My lamp (on)";
		model				= \Samples_f\Test_Lamp_01\Test_lamp_01_F.p3d;

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2", "Light_3"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
		};
	};
};