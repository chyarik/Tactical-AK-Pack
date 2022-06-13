#include "basicDefines_A3.hpp"
#include "CfgPatches.hpp"

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Test_scope3D_01: ItemCore
	{
		displayName="Sample of 3D scope";
		author=$STR_A3_Bohemia_Interactive;
		picture="\Samples_F\Test_scope3D_01\Data\uipicture_ca.paa";
		model = "\Samples_F\Test_scope3D_01\Test_scope3D_01";
		scope = 2;
		descriptionShort = "Sample of 3D scope + Holosight combo";
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = true;
			modelOptics="";
			class OpticsModes
			{
				class Test_scope3D_01_Collimator
				{
					opticsID = 1;
					useModelOptics = false;
					opticsPPEffects[]={""};
					opticsFlare = false;
					opticsDisablePeripherialVision = false;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera = "eye";
					visionMode[] = {}; /// Can be combined with NVG
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class Test_scope3D_01_Scope
				{
					opticsID = 2;
					useModelOptics = false;
					opticsPPEffects[]={"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					opticsZoomMin = 0.2;
					opticsZoomMax=0.2;
					opticsZoomInit=0.2;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"}; /// Cannot be combined with NVG
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia = 0.1;
	};
};