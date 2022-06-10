class CfgVehicles
{
	class Land;
	class Man: Land {};
	class CAManBase: Man
	{
		class EventHandlers
		{
			class BIS_LegacyFatigue // New Stacked Event Handler in order not to delete the default one
			{
				init = "(_this select 0) spawn Samples_fnc_legacyFatigue";
			};
		};
	};
};