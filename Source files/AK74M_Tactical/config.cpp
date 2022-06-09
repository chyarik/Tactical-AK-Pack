class CfgPatches
{
	class AK74M_Tactical
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgCloudlets
{
	class Default;
	class JAS_RifleAmmoCloud: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.25,0.5};
		color[]=
		{
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0.059999999},
			{0.1,0.1,0.1,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class JAS_RifleSmokeTrail: Default
	{
		interval=0.059999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]=
		{
			"-directionX/1",
			"-directionY/1",
			"-directionZ/1"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.8};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.039999999},
			{0.89999998,0.89999998,0.89999998,0.017999999},
			{0.89999998,0.89999998,0.89999998,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.12;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.15000001,0.15000001,0.15000001};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class JAS_HeatHaze: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.1;
		lifeTime=3;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=1.2;
		volume=1;
		rubbing=0.1;
		size[]={0.1,0.15000001};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.31999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.5;
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=20;
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class JAS_FAE_Explosion
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		type="MortarExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class FAECloud1
	{
		simulation="particles";
		type="CloudSmallLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class FAESmoke1
	{
		simulation="particles";
		type="CloudBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class JAS_IncinerateFire
{
	class SmokeShellWhite
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class Fire1
	{
		simulation="particles";
		type="JAS_IncinerateFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class JAS_RifleAmmoCloud
{
	class JAS_RifleAmmoCloud
	{
		simulation="particles";
		type="JAS_RifleAmmoCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class JAS_RifleSmokeTrail
{
	class JAS_RifleSmokeTrail
	{
		simulation="particles";
		type="JAS_RifleSmokeTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class JAS_BarrelRefract
{
	class JAS_HeatHaze
	{
		simulation="particles";
		type="JAS_HeatHaze";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
	};
};
class CowsSlot;
class PointerSlot;
class asdg_UnderSlot;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R;
class CfgWeapons
{
	class Rifle;
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class AK74M_Tactical_base_F: Rifle_Base_F
	{
		scope=2;
		magazines[]=
		{
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_F",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7U1_AK"
		};
		reloadAction="GestureReloadAKM";
		maxrecoilsway=0.003;
		swaydecayspeed=0;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="JAS_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="JAS_RifleSmokeTrail";
			};
			class BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="JAS_BarrelRefract";
			};
		};
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			scope=2;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"ak74m_Tactical\data\sound\TRIG3.ogg",
					0.5,
					1,
					10
				};
				closure2[]=
				{
					"ak74m_Tactical\data\sound\TRIG3.ogg",
					0.5,
					1.2,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.69999999,
					"closure2",
					0.30000001
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"ak74m_Tactical\data\sound\TAVOR1.wss",
					1.95,
					0.98000002,
					1800
				};
				begin2[]=
				{
					"ak74m_Tactical\data\sound\TAVOR1.wss",
					1.95,
					0.98000002,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_interior.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_trees.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_forest.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_medows.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_house.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"ak74m_Tactical\data\sound\AKS74U_Suppressed_fire.wss",
					1.4,
					1,
					900
				};
				begin2[]=
				{
					"ak74m_Tactical\data\sound\AKS74U_Suppressed_fire.wss",
					1.4,
					1.15,
					900
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_interior.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_trees.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_forest.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_medows.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_house.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.075000003;
			recoilProne="recoil_single_ak12";
			dispersion=0.00029;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"ak74m_Tactical\data\sound\TRIG3.ogg",
					0.5,
					1,
					10
				};
				closure2[]=
				{
					"ak74m_Tactical\data\sound\TRIG3.ogg",
					0.5,
					1.2,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.69999999,
					"closure2",
					0.30000001
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"ak74m_Tactical\data\sound\TAVOR1.wss",
					1.95,
					0.98000002,
					1800
				};
				begin2[]=
				{
					"ak74m_Tactical\data\sound\TAVOR1.wss",
					1.95,
					0.98000002,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_interior.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_trees.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_forest.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_medows.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_house.ogg",
							0.5,
							1,
							800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"ak74m_Tactical\data\sound\AKS74U_Suppressed_fire.wss",
					1.4,
					1,
					900
				};
				begin2[]=
				{
					"ak74m_Tactical\data\sound\AKS74U_Suppressed_fire.wss",
					1.4,
					1.15,
					900
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_interior.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_trees.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_forest.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_medows.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"ak74m_Tactical\data\sound\ZAM_house.ogg",
							0.2,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.075000003;
			recoil="assaultRifleBase";
			recoilProne="recoil_single_ak12";
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer="false";
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer="false";
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		drySound[]=
		{
			"A3\sounds_f\weapons\Other\dry_1",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",
			0.177828,
			1,
			5
		};
	};
	class AK74M_Tactical: AK74M_Tactical_base_F
	{
		scope=2;
		author="Jason";
		model="\AK74M_Tactical\ak74m.p3d";
		dexterity=1.62;
		displayName="AK74M Tactical";
		picture="\ak74m_Tactical\data\ui\ak74m.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="AK74M Tactical";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=36;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="AK74M Tactical";
			onHoverText="AK74M Tactical";
		};
	};
	class AK74M_Tactical_magpul_stock: AK74M_Tactical_base_F
	{
		scope=2;
		author="Jason";
		model="\AK74M_Tactical\ak74m_magpul_stock.p3d";
		dexterity=1.62;
		displayName="AK74M Tactical(Magpul Stock)";
		picture="\ak74m_Tactical\data\ui\ak74m.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="AK74M Tactical(Magpul Stock)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=36;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="AK74M Tactical(Magpul Stock)";
			onHoverText="AK74M Tactical(Magpul Stock)";
		};
	};
	class AK74M_Tactical_tan: AK74M_Tactical_base_F
	{
		scope=2;
		author="Jason";
		model="\AK74M_Tactical\ak74m_tan.p3d";
		dexterity=1.62;
		displayName="AK74M Tactical(Tan)";
		picture="\ak74m_Tactical\data\ui\ak74m.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="AK74M Tactical(Tan)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=36;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="AK74M Tactical(Tan)";
			onHoverText="AK74M Tactical(Tan)";
		};
	};
	class AK74M_Tactical_green: AK74M_Tactical_base_F
	{
		scope=2;
		author="Jason";
		model="\AK74M_Tactical\ak74m_green.p3d";
		dexterity=1.62;
		displayName="AK74M Tactical(Green)";
		picture="\ak74m_Tactical\data\ui\ak74m.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="AK74M Tactical(Green)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=36;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="AK74M Tactical(Green)";
			onHoverText="AK74M Tactical(Green)";
		};
	};
};
class cfgMods
{
	author="Jason Bert";
	timepacked="1535990220";
};
