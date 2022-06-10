class VestItem: InventoryItem_Base_F
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 5*0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
};

class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
{
	scope = 0;	/// base classes should not be visible in editor
	allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures

	class ItemInfo: VestItem
	{
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		LOAD(0,0) /// macro from basicdefines_A3.hpp
	};
};

class V_Test_Vest: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "Test vest"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	model   = "\Samples_f\Test_Character_01\A3_vest_example.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\tacticalvest_black_co.paa"}; /// what texture is going to be used

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\Samples_f\Test_Character_01\A3_vest_example.p3d"; /// what model does the vest use
		LOAD(40,100) /// macro from basicdefines_A3.hpp
		overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};