/* Poseidon game configuration */
/* Part of game design, no user editable data here. */

#define _CONFIG	1
#include "CommonDefs.hpp"

// Product dependent options:

class CfgMods
{
// TODO: change homepage
  defaultAction = ""; 
};

scriptsPath = "scripts\"; //"
startupScript = "";
cameraScript = "";
playerKilledScript = "onPlayerKilled.sqs";
playerRespawnScript = "onPlayerRespawn.sqs";
playerRespawnOtherUnitScript = "onPlayerRespawnOtherUnit.sqs";
playerRespawnSeagullScript = "onPlayerRespawnAsSeagull.sqs";
playerResurrectScript = "onPlayerResurrect.sqs";
teamSwitchScript = "onTeamSwitch.sqs";
tooltipDelay = 0.0;

#include "cfgSkill.hpp"
#include "cfgInventory.hpp"
#include "cfgCurator.hpp"

corpseLimit = 15;
corpseRemovalMinTime = 10;
corpseRemovalMaxTime = 3600;

wreckLimit = 15;
wreckRemovalMinTime = 10;
wreckRemovalMaxTime = 3600;

rptFileLimit = 10;

battleyeLicenceUrl = "BattlEye\EULA.txt";

// timeOut for the join requests (in s).
autoJoinTimeOut = 20;

class ForcedMissionDifficultyArma
{
  access = ReadOnly;

  class Mission1
  {
    missionName = "A3\Missions_F_Bootcamp\Campaign\missions\BOOT_m01.VR\";
    difficulty = "Regular";
  };
  class Mission2
  {
    missionName = "A3\Missions_F_Bootcamp\Campaign\missions\BOOT_m02.Altis\";
    difficulty = "Regular";
  };
  class Mission3
  {
    missionName = "A3\Missions_F_Bootcamp\Campaign\missions\BOOT_m03.Altis\";
    difficulty = "Regular";
  };
  class Mission4
  {
    missionName = "A3\Missions_F_Bootcamp\Campaign\missions\BOOT_m04.Altis\";
    difficulty = "Regular";
  };
  class Mission5
  {
    missionName = "A3\Missions_F_Bootcamp\Campaign\missions\BOOT_m05.Altis\";
    difficulty = "Regular";
  };
};

class ForcedMissionDifficultyArgo
{
  access = ReadOnly;

  class Metagame
  {
    missionName = "Argo\UI_ARGO\Data\Displays\RscDisplayMetagame\MetagameMission.Abel\";
    difficulty = "Normal";
  };
};

class MonetizedServers
{
  access = ReadOnly;
  // source URL for list of monetized servers
  url = "https://www.bistudio.com/monetization/servers";
  // in what interval the game should check for updated list of servers
  updateInterval = 24 * 3600;
  // name of the directory in the profile for keeping the local list of monetized servers
  listDirectory = "MonetizedServersCache";
  // name of the file to keeping the list of servers
  listFileName = "list.json";
  // name of the temporary file used for downloading of the list
  tmpListFileName = "tmp.json";
};

class OfficialServersArma
{
  access = ReadOnly;
  // source URL for list of official servers
  url = "https://www.bistudio.com/export/servers/official";
  // in what interval the game should check for updated list of servers
  updateInterval = 24 * 3600;
  // name of the directory in the profile for keeping the local list of official servers
  listDirectory = "OfficialServersCache";
  // name of the file to keeping the list of servers
  listFileName = "list.json";
  // name of the temporary file used for downloading of the list
  tmpListFileName = "tmp.json";
};

class OfficialServersArgo
{
  access = ReadOnly;
  // source URL for list of official servers
  url = "http://argo-cdn.bistudio.com/servers.json";
  // in what interval the game should check for updated list of servers
  updateInterval = 5 * 60;
  // name of the directory in the profile for keeping the local list of official servers
  listDirectory = "OfficialServersCache";
  // name of the file to keeping the list of servers
  listFileName = "list.json";
  // name of the temporary file used for downloading of the list
  tmpListFileName = "tmp.json";
};

class SteamManagerConfig
{
  fileBankMissionName = "__cur_sp";
  creatorAppIds[]={233800};

  class CacheConfig
  {
    steamOffCacheDir = "steam\";
    metaDir = "meta\";
    subscribedFilename = "subscribedContent.list";
    publishedFilename = "publishedContent.list";
    persistedItemsFilename = "cacheItems.map";
  };

  class Tags
  {
    class TagCommonBase
    {
      missionAddAsDefault = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };
       

    class DataType
    {
      class ScenarioTag
      {
        title = "Scenario"; // DO NOT LOCALIZE!      
        tooltip = "";

        missionAddAsDefault = true;   // tag is added as default to every published mission
        missionUserCanAddRemove = false;  // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      // every addon must have this tag
      class ModTag
      {
        title = "Mod"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_mod;
        addonRequiredTag = true;
      };

      class ServerTag : TagCommonBase
      {
        title = "Server"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_server;
      };

    };

    class ModType
    {
      class TerrainTag : TagCommonBase
      {
        title = "Terrain"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_terrain;
      };

      class SoundTag : TagCommonBase
      {
        title = "Sound"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_sound;
      };

      class MechanicsTag : TagCommonBase
      {
        title = "Mechanics"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_mechanics;
      };

      class AnimationTag : TagCommonBase
      {
        title = "Animation"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_animation;
      };

      class EquipmentTag : TagCommonBase
      {
        title = "Equipment"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_equipment;
      };

      class CharacterTag : TagCommonBase
      {
        title = "Character"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_character;
      };

      class WeaponTag : TagCommonBase
      {
        title = "Weapon"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_weapon;
      };

      class CampaignTag : TagCommonBase
      {
        title = "Campaign"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_campaign;
      };

      class StructureTag : TagCommonBase
      {
        title = "Structure"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_structure;
      };

      class PlaneTag : TagCommonBase
      {
        title = "Plane"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_plane;
      };

      class BoatTag : TagCommonBase
      {
        title = "Boat"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_boat;
      };

      class HelicopterTag : TagCommonBase
      {
        title = "Helicopter"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_helicopter;
      };

      class TrackedTag : TagCommonBase
      {
        title = "Tracked"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_tracked;
      };

      class WheeledTag : TagCommonBase
      {
        title = "Wheeled"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_wheeled;
      };

      class EditorExtensionTag : TagCommonBase
      {
        title = "Editor Extension"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_editorExtension;
      };
    };
    
    class ScenarioGameplay
    {
      class SingleplayerTag
      {
        title = "Singleplayer"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_singleplayer;

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class MultiplayerTag
      {
        title = "Multiplayer"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_multiplayer;

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
        missionAddWhenMP = true;   // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class CoopTag : TagCommonBase
      {
        title = "Coop"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_coop;
      };

      class PersistentTag : TagCommonBase
      {
        title = "Persistent"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_persistent;
      };

      class PvPTag : TagCommonBase
      {
        title = "PvP"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_pvp;
      };

      class FiringDrillTag : TagCommonBase
      {
        title = "FiringDrill"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_firedrill;
      };

      class TimeTrialTag : TagCommonBase
      {
        title = "TimeTrial"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_timetrial;
      };

      class Zeus
      {
        title = "Zeus";
        tooltip = $STR_SW_TAG_ZEUS;

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

    };

    class ScenarioType
    {
      class InfantryTag : TagCommonBase
      {
        title = "Infantry"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_Infantry;
      };

      class VehiclesTag : TagCommonBase
      {
        title = "Vehicles"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_Vehicles;
      };

      class AirTag : TagCommonBase
      {
        title = "Air"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_Air;
      };

      class WaterTag : TagCommonBase
      {
        title = "Water"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_Water;
      };
    };

    class ScenarioMap
    {
      class StratisTag
      {
        title = "Stratis"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_stratis;
        mapName = "Stratis";

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class AltisTag
      {
        title = "Altis"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_altis;
        mapName = "Altis";

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class TanoaTag : TagCommonBase
      {
        title = "Tanoa"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_tanoa;
        mapName = "Tanoa";

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class VrTag
      {
        title = "VR"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_virtualreality;
        mapName = "VR";

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class Malden2035Tag
      {
        title = "Malden 2035"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_malden2035;
        mapName = "Malden";

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = false;  // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class OtherMap
      {
        title = "OtherMap"; // DO NOT LOCALIZE!
        tooltip = $STR_sw_tag_othermap;
        missionFromOtherMap = true;
      };
    };
    
    class DLC
    {
      class KartsDLCTag : TagCommonBase
      {
        title = "KartsDLC"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_karts;
      };

      class MarksmenDLCTag : TagCommonBase
      {
        title = "MarksmenDLC"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_marksmen;
      };

      class HelicoptersDLCTag : TagCommonBase
      {
        title = "HelicoptersDLC"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_helicopters;
      };

      class ApexTag : TagCommonBase
      {
        title = "Apex"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_apex;
      };

      class JetsTag : TagCommonBase
      {
        title = "Jets"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_jets;
      };

      class MaldenTag : TagCommonBase
      {
        title = "Malden"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_malden;
      };

      class LawsOfWarTag : TagCommonBase
      {
        title = "Laws of War"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_dlc_lawsofwar;
      };

      class TanksTag : TagCommonBase
      {
        title = "Tanks"; // DO NOT LOCALIZE!      
        tooltip = "Tanks";
      };
    };

    class Meta
    {
      class DependencyTag
      {
        title = "Dependency"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_Dependency;

        missionAddAsDefault = false;  // tag is added as default to every published mission
        missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
        missionAddWhenMP = false;  // tag is added when editor is opened from MP screen.
        missionAddWhenMods = true;   // tag is added when user mods are detected
        missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
        missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
      };

      class CollectionTag : TagCommonBase
      {
        title = "Collection"; // DO NOT LOCALIZE!      
        tooltip = $STR_sw_tag_collection;
      };
    };

  };
};

class CfgSteamSettings
{
  access = ReadOnlyVerified;

  class Stats
  {
    class Curator
    {
      curatorPlayerPlayTime[] = {"ZeusPlayerPlayTime"};
      curatorUnitControlPlayTime[] = {"ZeusUnitControlPlayTime"};
      curatorNormalPlayerPlayTime[] = {"ZeusNormalPlayerGamePlayTime"};
    };

    class Worlds
    {
      class Altis
      {
        worldName = "altis";
        playtimeStats[] = {"AltisPlayTime"};
      };
      class Stratis
      {
        worldName = "stratis";
        playtimeStats[] = {"StratisPlayTime"};
      };
    };

    class Campaigns
    {
      /* Example:
      // classes for each campaign, (name of the class is irrelevant)
      class Campaign1
      {
        // path to the campaign (has to end with slash).
        campaignName = "A3\Missions_F_EPA\Campaign\"; 
        // steam stats for accumulating a playtime for this campaign.
        playtimeStats[] = {"CampaignEPAPlayTime"};

        // list of rules that should be checked when mission from this campaign is finished.
        class Rules
        {
          // classes with the rules (name of the class is irrelevant).
          class Rule1
          {
            // list of missions that has to be marked as completed in the campaign.sqc file (user profile).
            requiredMissions[] = {"A_in", "A_in2", "A_hub01", "A_hub02", "A_m01", "A_m02", "A_m03", "A_m04", "A_m05", "A_out"};
            // stat that will be set to 1 if all missions listed in requiredMissions[] are completed
            statFlagName = "CompletedEPA";
          };
        };
      };
      */

      class CampaignEPA
      {
        campaignName = "A3\Missions_F_EPA\Campaign\";
        playtimeStats[] = {"CampaignEPAPlayTime", "CampaignPlayTime"};
        class Rules
        {
          class Finished
          {
            requiredMissions[] = {"A_in", "A_in2", "A_hub01", "A_hub02", "A_m01", "A_m02", "A_m03", "A_m04", "A_m05", "A_out"};
            statFlagName = "CompletedEPA";
          };
        };
      };

      class CampaignEPB
      {
        campaignName = "A3\Missions_F_EPB\Campaign\";
        playtimeStats[] = {"CampaignEPBPlayTime", "CampaignPlayTime"};
        class Rules
        {
          class Finished
          {
            campaignName = "A3\Missions_F_EPB\Campaign";
            requiredMissions[] = {"B_in", "B_in2", "B_hub01", "B_hub02", "B_hub03", "B_m01", "B_m02_1", "B_m02_2", "B_m03", "B_m05","B_m06", "B_out2",};
            statFlagName = "CompletedEPB";
          };
        };
      };

      class CampaignEPC
      {
        campaignName = "A3\Missions_F_EPC\Campaign\";
        playtimeStats[] = {"CampaignEPCPlayTime", "CampaignPlayTime"};
        class Rules
        {
          class MainMissions
          {
            requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2"};
            statFlagName = "CompletedEPC";
          };
          class EndA
          {
            requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2", "C_EA"};
            statFlagName = "CompletedEPC_A";
          };
          class EndB
          {
            requiredMissions[] = {"C_in1", "C_in2", "C_m01", "C_m02", "C_out1", "C_out2", "C_EB"};
            statFlagName = "CompletedEPC_B";
          };
        };
      };

    };

    class Missions
    {
      /*
      // example:
      // list of missions
      class Mission1
      {
        // name of the mission (has to end with the slash).
        missionName = "a3\missions_f\showcases\showcase_vehicles.stratis\";
        // list of stats that will accumulate playtime of the mission
        playtimeStats[] = {"FiringDrillsPlayTime"};
        // list of rules
        class Rules
        {
          // one rule that is checked when the mission is finished
          class Rule1
          {
            // list of keys that has to be set (active) in user profile, ALL keys listed here has to be set.
            activeKeys[] = {"BIS_showcase_vehicles.stratis_titlecard"};
            // list of endings that are accepted, The ending has to match at least ONE item in this list.
            missionEnds[] = {"END1"};
            // stat that is set to 1 when ALL keys are set and mission ending matches at least ONE of the endings.
            statFlagName = "test_int";
          };
        }
      };
      */

      //////////////////////////////////////////////////////////////////////////
      // Firing drills
      class Drill1
      {
        missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD01.Stratis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill2
      {
        missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD02.Stratis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill3
      {
        missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD03.Stratis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill4
      {
        missionName = "A3\missions_f_beta\Challenges\Firing_Drills\SP_FD04.Stratis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill5
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD05.Altis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill6
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD06.Altis\";
        playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill7
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD07.Altis\";
          playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill8
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD08.Altis\";
          playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill9
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD09.Altis\";
          playtimeStats[] = {"FiringDrillsPlayTime"};
      };
      class Drill10
      {
        missionName = "A3\Missions_F_Gamma\Challenges\Firing_Drills\SP_FD10.Altis\";
          playtimeStats[] = {"FiringDrillsPlayTime"};
      };

      //////////////////////////////////////////////////////////////////////////
      // Showcases
      class Showcase1
      {
        missionName = "A3\Missions_F\showcases\Showcase_Helicopters.Stratis\";
        playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase2
      {
        missionName = "A3\Missions_F\showcases\Showcase_Infantry.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase3
      {
        missionName = "A3\Missions_F\showcases\Showcase_SCUBA.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase4
      {
        missionName = "A3\Missions_F\showcases\Showcase_Vehicles.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase5
      {
        missionName = "A3\missions_f_beta\Showcases\Showcase_Combined_Arms.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase6
      {
        missionName = "A3\missions_f_beta\Showcases\Showcase_Commanding_I.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase7
      {
        missionName = "A3\missions_f_beta\Showcases\Showcase_Night.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase8
      {
        missionName = "A3\missions_f_beta\Showcases\Showcase_Supports.Stratis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase9
      {
        missionName = "A3\Missions_F_Curator\Showcases\Showcase_Curator.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase10
      {
        missionName = "A3\Missions_F_EPC\showcases\Showcase_FixedWings.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase11
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Faction_BLUFOR.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase12
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Faction_INDEPENDENT.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase13
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Faction_OPFOR.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase14
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Faction_shared\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase15
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Arma.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase16
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Drones.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase17
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Gunships.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };
      class Showcase18
      {
        missionName = "A3\Missions_F_Gamma\Showcases\Showcase_Tanks.Altis\";
          playtimeStats[] = {"ShowcasesPlayTime"};
      };

    };
  };

  class Tags
  {
    class ScenarioTag
    {      
      title = "Scenario"; // DO NOT LOCALIZE!      
      tooltip = "";  

      missionAddAsDefault     = true;   // tag is added as default to every published mission
      missionUserCanAddRemove = false;  // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };
    
    class DependencyTag
    {      
      title = "Dependency"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Dependency;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = true;   // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };

    class SingleplayerTag
    {      
      title = "Singleplayer"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_singleplayer;

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };

    class MultiplayerTag
    {      
      title = "Multiplayer"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_multiplayer;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = true;   // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };

    /*
    class TimeTrialTag
    {      
      title = "TimeTrial"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_timetrial;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = true;   // tag is added when time challenge module is detected
    };

    class FireDrillTag
    {      
      title = "FireDrill"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_firedrill;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = true;   // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };
    */

    class TagCommonBase
    {      
      title = "Infantry"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Infantry;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = true;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };

    class VehiclesTag : TagCommonBase
    {      
      title = "Vehicles"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Vehicles;  
    };

    class AirTag : TagCommonBase
    {      
      title = "Air"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Air;  
    };

    class WaterTag : TagCommonBase
    {      
      title = "Water"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Water;  
    };

    class StratisTag
    {      
      title = "Stratis"; // DO NOT LOCALIZE!      
      //TODO: tooltip = $STR_sw_tag_Stratis;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };

    class AltisTag
    {      
      title = "Altis"; // DO NOT LOCALIZE!      
      tooltip = $STR_sw_tag_Altis;  

      missionAddAsDefault     = false;  // tag is added as default to every published mission
      missionUserCanAddRemove = false;   // tag could be added/removed by user before publishing
      missionAddWhenMP        = false;  // tag is added when editor is opened from MP screen.
      missionAddWhenMods      = false;  // tag is added when user mods are detected
      missionAddWhenFireDrill = false;  // tag is added when fire drill module is detected
      missionAddWhenTimeTrial = false;  // tag is added when time challenge module is detected
    };
  };


  workshopAgreement = "http://steamcommunity.com/sharedfiles/workshoplegalagreement";
  //steamTmpDirectory = "SteamMissionsCache";
  steamTmpPreviewDirectory = "SteamPreviewCache";
  maxPreviewDirCacheSize = 25; //< maximum size of the preview cache directory in MB.
  steamPreviewFileExtension = "jpg";
  steamPreviewDefaultImage = "\core\All\SteamWorksDefaultImage_co.jpg";

  publishDialogAdditionalSpaceColor[] = {1.0, 0.0, 0.0, 1.0};
  publishDialogFreedSpaceColor[] = {0.0, 1.0, 0.0, 1.0};
};

#include "cfgBrains.hpp"
#include "cfgMaterials.hpp"
#include "cfgMoves.hpp"
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgVoice.hpp"
#include "cfgCoreData.hpp"
#include "cfgFormations.hpp"
#include "cfgCustomWaypoints.hpp"
#include "cfgPhys.hpp"
#include "cfgVideoOptions.hpp"

class CfgSurfaceCharacters
{
  // clutter 1 rock1, clutter 2 rock2, clutter 3 grass1, clutter 4 grass2
  class Empty
  {
    probability[]={};
    names[]={};
  };
};

/*!
\patch 1.43 Date 1/22/2002 by Ondra
- Fixed: CfgSurfaces protected against addon modification.
*/

class CfgSurfaces
{
	// caution: wildcard pattern "files" is matched using special purpose matching
	// * may be used only as last character of the pattern
	// * matches any string in filename
	// ? matches any single character in filename
	// when six trailing question-marks are detected "??????", two patterns are matched:
	// full pattern and short pattern with ?????? omitted
	class Default
	{
		
		files=default;
		rough=0.075;
		dust=0.1;
    lucidity = 1.0;
		isWater=false;
    maxSpeedCoef = 1.0;
    friction = 0.9;
    restitution = 0;
		soundEnviron = normalExt;
		character=Empty;

		impact = default_Mat;
    //bonus for covering in grass (subtracts from animation visibleSize)
    grassCover = 0;

    surfaceFriction = 2.0;
    tracksAlpha = 1.0;

    /// viewDensity = ln(transparency); If transparency < 0 general shape value. !! Must not add transparent surface to opaque object (opaque objects are tested only for first hit)
    /// default is -1 (shape viewDensity will be used)
    transparency = -1;
	/// = 0 - current state, see https://jira.bistudio.com/browse/AIII-30049
	/// = 1 - avoid prone (unless stealth or suppressed or ^)
	/// = 2 - never prone (unless ^)
	/// = 3 - don't know yet
	AIAvoidStance = 0;
  };
	class Water
	{
		
		files=more_anim*;
		rough=0.0;
		dust=0.0;
    lucidity = 1.0;
    maxSpeedCoef = 1.0;
		soundEnviron = water;
        friction = 0.9;
        restitution = 0;
		isWater=true;
		character=Empty;

		impact = hitWater;
    //bonus for covering in grass (subtracts from animation visibleSize)
    grassCover = 0;
	};

};

class CfgSoundEnvironToControllers
{
  class default
  {
    grass = 0;
    rock = 0;
    sand = 0;
    mud = 0;
    gravel = 0;
    asphalt = 0;
  };

  class road :default
  {
    asphalt = 1;
  };
  class tarmac: road{};
  class concrete: road{};

  class gravel: default
  {
    gravel = 1;
  };

  class debris: gravel{}
  class normal: gravel{}

  class stony: default
  {
    gravel = 0.5;
    grass = 0.5;
    mud = 0.25;
  };

  class rock: default
  {
    rock = 1;
  };
  class sand: default
  {
    sand = 1;
  };
  class grass: default
  {
    grass = 1;
  };
  class drygrass: grass{};

  class forest: default
  {
    mud = 0.25;
    grass = 0.75;
  };
  class mud :default
  {
    mud = 1;
  };
  class dirt: mud{};
};

class CfgDefaultSettings
{
	defaultVisibility = 1600;
	defaultTerrainGrid = 10;
	defaultObjectViewDistance = 1200;
	hazeDefaultDistance = 10000;
	// default content of userInfo.cfg file for new users
	class UserInfo
	{
		//file version
		version=1;
		//file content
		blood=1;
		//viewDistance=8000;
		//terrainGrid=10.000000;
		volumeCD=5;
		volumeFX=5;
		volumeSpeech=5;
		singleVoice=0;
		gamma=1.000000;
		brightness=1.000000;
		//fovTop=0.750000;
		//fovLeft=1.000000;
		//uiTopLeftX=0.075000;
		//uiTopLeftY=0.075000;
		//uiBottomRightX=0.925000;
		//uiBottomRightY=0.925000;
	};
};

/*!
\patch 2.03 Date 5/13/2003 by Ondra
- Fixed: CfgPatches protected against addon modification.
*/
class CfgPatches
{
	// new addons can create their own entries, but cannot modify existing ones
  class Core
  {
    requiredAddons[] = {};
    requiredVersion = 0.1;
    units[] =
    {
      ArtilleryTarget,
      ArtilleryTargetW,
      ArtilleryTargetE,
      SuppressTarget,
      PaperCar,
      FireSectorTarget,
      HeliH,
      Land_VASICore,
      AirportBase
    };
    weapons[] =
    {
      FakeWeapon
    };
  };
};

#include "cfgFont.hpp"
#include "cfgUI.hpp"

class CfgDetectors
{
	objects[] = {EmptyDetector};
};

class CfgFaceWounds
{
	
	wounds[]={};
};
class CfgGlasses 
{
  class None
  {
    scope = 2;
    name = $STR_A3_CfgGlasses_None0;
    model = "";
    identityTypes[] = {};
  };
};
class CfgFaces
{
  class Default
  {
    class Default
    {
      name = "";
      head = "";
      material = "";
      texture = "#(rgb,8,8,3)color(0.5,0.5,1,1)";
	  /// texture and material for hands and legs
      textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";	  
	  materialHL = "";
      /// Filter - what units can use this face
      identityTypes[] = {"Default"};
    };
    class Custom
    {
      name = "";
      head = "";
      material = "";
      texture = "#(rgb,8,8,3)color(1,1,1,1)";
	  /// texture and material for hands and legs
      textureHL = "#(rgb,8,8,3)color(0.5,0.5,1,1)";	  
	  materialHL = "";	  
      front = "#(rgb,8,8,3)color(1,1,1,1)";
      side = "#(rgb,8,8,3)color(1,1,1,1)";
      back = "#(rgb,8,8,3)color(1,1,1,1)";
      /// Filter - what units can use this face (none for custom face)
      identityTypes[] = {};
    };
  };
};
class CfgMimics
{
	
	class HeadPreview
	{
		microMimics=Micro;
		boneHead="head";
	};
	class Micro
	{
		//          max offset (3d)       change time (min..max)
		lBrow[] =  {0.0020,0.0020,0.0010, 0.6,3.0};
		mBrow[] =  {0.0020,0.0020,0.0010, 0.6,2.5};
		rBrow[] =  {0.0020,0.0020,0.0010, 0.6,3.0};
		lMouth[] = {0.0010,0.0020,0.0010, 0.6,2.0};
		mMouth[] = {0.0000,0.0000,0.0000, 0.6,3.0};
		rMouth[] = {0.0010,0.0020,0.0010, 0.6,2.0};
	};
	class NoMicro
	{
		//          max offset (3d)       change time (min..max)
		lBrow[] =  {0.0000,0.0000,0.0000, 0.6,3.0};
		mBrow[] =  {0.0000,0.0000,0.0000, 0.6,2.5};
		rBrow[] =  {0.0000,0.0000,0.0000, 0.6,3.0};
		lMouth[] = {0.0000,0.0000,0.0000, 0.6,2.0};
		mMouth[] = {0.0000,0.0000,0.0000, 0.6,3.0};
		rMouth[] = {0.0000,0.0000,0.0000, 0.6,2.0};
	};
	class States
	{
		class Default
		{
			// {right, up} in cm
			lBrow[] = {0, 0};
			mBrow[] = {0, 0};
			rBrow[] = {0, 0};
			lMouth[] = {0, 0};
			mMouth[] = {0, 0};
			rMouth[] = {0, 0};
		};
		class Normal
		{
			// {right, up} in cm
			lBrow[] = {0, 0};
			mBrow[] = {0, 0};
			rBrow[] = {0, 0};
			lMouth[] = {0, 0};
			mMouth[] = {0, 0};
			rMouth[] = {0, 0};
		};
		class Smile
		{
			// {right, up} in cm
			lBrow[] = {0, 0.25};
			mBrow[] = {0, 0.25};
			rBrow[] = {0, 0.25};
			lMouth[] = {-0.5, 0.6};
			mMouth[] = {0, 0.0};
			rMouth[] = {0.5, 0.6};
		};
		class Hurt
		{
			// {right, up} in cm
			lBrow[] = {0, -0.35};
			mBrow[] = {0, -0.5};
			rBrow[] = {0, -0.6};
			lMouth[] = {0.5, -0.3};
			mMouth[] = {0, 0.3};
			rMouth[] = {-0.5, -0.6};
		};
		class Ironic
		{
			// {right, up} in cm
			lBrow[] = {0, -0.35};
			mBrow[] = {0, -0.35};
			rBrow[] = {0, -0.35};
			lMouth[] = {0.1, 0.3};
			mMouth[] = {0, 0.9};
			rMouth[] = {-0.1, 0.3};
		};
		class Sad
		{
			// {right, up} in cm
			lBrow[] = {0, +0.2};
			mBrow[] = {0, +0.2};
			rBrow[] = {0, +0.2};
			lMouth[] = {0.1, -0.5};
			mMouth[] = {0, -0.5};
			rMouth[] = {-0.1, -0.5};
		};
		class Cynic
		{
			// {right, up} in cm
			lBrow[] = {0, -0.35};
			mBrow[] = {0, 0.0};
			rBrow[] = {0, +0.05};
			lMouth[] = {0.2, -0.9};
			mMouth[] = {0, -0.2};
			rMouth[] = {0.0, 0};
		};
		class Surprised
		{
			// {right, up} in cm
			lBrow[] = {0, 0.5};
			mBrow[] = {0, 0.5};
			rBrow[] = {0, 0.5};
			lMouth[] = {0.0, -0.3};
			mMouth[] = {0, +0.3};
			rMouth[] = {0.0, -0.2};
		};

		class Agresive
		{
			// {right, up} in cm
			lBrow[] = {0, -0.25};
			mBrow[] = {0, -0.4};
			rBrow[] = {0, -0.3};
			lMouth[] = {+0.4, +0.5};
			mMouth[] = {0, +0.5};
			rMouth[] = {-0.4, -0.5};
		};
		class Angry
		{
			// {right, up} in cm
			lBrow[] = {+0.4, -0.5};
			mBrow[] = {+0.1, -0.4};
			rBrow[] = {-0.4, -0.5};
			lMouth[] = {+0.4, -0.9};
			mMouth[] = {0, -0.2};
			rMouth[] = {-0.4, -0.8};
		};

	};

	combat[]=
	{
		Sad,0.1,
		Surprised,0.1,
		Cynic,0.3,
		Angry,0.1,
		Normal


	};
	aware[]=
	{
		Angry, 0.2,
		Normal

	};
	safe[]=
	{
		Smile,0.1,
		Surprised,0.1,
		Normal
	};
	neutral[]=
	{
		Surprised,0.1,
		Sad,0.1,
		Normal
	};
	danger[]=
	{
		Surprised,0.4,
		Sad
	};
	dead[]={Hurt};
	hurt[]={Hurt};
};

// define sound FX
class CfgEnvSounds
{
	class Default // editor - sounds from landscape
	{
		name = $STR_CFG_ENVSOUNDS_DEFAULT;
		sound[]={"$DEFAULT$",0,1};
		soundNight[]={"$DEFAULT$",0,1};
	};
	// list of environmental sounds for editor
	class Rain // rain
	{
		name = $STR_A3_CfgEnvSounds_Rain0;
		sound[]={,db-55,1};
		volume="rain";
	};
	class Sea // sea
	{
		name = $STR_A3_CfgEnvSounds_Sea0;
		sound[]={,db-70,1};
		// audible even in rain
		volume="coast"; 
	};
	class Meadows // default - no trees, no sea, no hills ...
	{
		name = "Meadows";
		sound[]={,db-85,1};
		// not audible in rain
		volume="meadow*(1-rain)*(1-night)"; 
	};
	class Trees // trees
	{
		name = $STR_A3_CfgEnvSounds_Trees0;
		sound[]={,db-75,1};
		// not audible in rain
		volume="trees*(1-rain)*(1-night)"; 
	};
	class MeadowsNight // default - no trees, no sea, no hills ...
	{
		name = "Meadows (relaxing in night)";
		sound[]={,db-85,1};
		// not audible in rain
		volume="meadow*(1-rain)*night"; 
	};
	class TreesNight // trees
	{
		name = $STR_A3_CfgEnvSounds_TreesNight0;
		sound[]={,db-75,1};
		// not audible in rain
		volume="trees*(1-rain)*night";
	};
	class Hills // hills > 250m
	{
		name = $STR_A3_CfgEnvSounds_Hills0;
		sound[]={,db-75,1};
		// not even in rain
		volume="hills"; 
	};
	class Wind
	{
		name = $STR_A3_CfgEnvSounds_Wind0;
		sound[]={,db-75,1};
		volume="(1-hills)*windy*0.5";
	};
};
class CfgHQIdentities
{
	
	class Base
	{
		name = $STR_CFG_PAPABEAR;
		speaker = "NoVoice";
		pitch = 0.950000;
	};
	class HQ
	{
		name = $STR_CFG_PAPABEAR;
		speaker = "NoVoice";
		pitch = 1.050000;
	};
	class PAPA_BEAR
	{
		name = $STR_CFG_PAPABEAR;
		speaker = "NoVoice";
		pitch = 1.050000;
	};
	class AirBase
	{
		name = $STR_CFG_FIREFLYBASE;
		speaker = "NoVoice";
		pitch = 1.050000;
	};
};
class CfgHeads
{
	
	class Air
	{
		friction=10;
		movement=160;
		maxAmp=0.05;
		maxSpeed=3;
		radius=0.2;
	};
	class Land
	{
		friction=20;
		movement=260;
		maxAmp=0.1;
		maxSpeed=4;
		radius=0.3;
	};
};

class CfgMusic
{
	
/*
	class 7thLifeless
	{
		name = $STR_CFG_MUSIC_7TH_LIFELESS;
		sound[] = {\Music\Seventh_lifeless.ogg, db+0, 1.0};
	};
*/
};


class CfgSounds
{
	

	// name, sound
/*
	class Fire
	{
		name = $STR_CFG_SOUNDS_FIRE;
		sound[] = {Objects\fire, db-72, 1.0};

		titles[] = {};
	};
*/
};

class CfgWhistleSound
{
  sound[]={,1,1};
  downTime = 0.5;
  silentTime = 1;
  upTime = 4;
};

class CfgTitles
{
	
	defaultSpeed = 1;
	defaultIn = 0.5;
	defaultTime = 10;
	defaultOut = 0.5;
	titles[] =
	{
		// Sphere, BISLogo, TVSet // UbiLogo,
		// Campaign, FirstBattle, NukeEden,
		// AttackKain, DefendEden, DefendAbel,
		// AttackEden
	};
};

class CfgIntro
{
	firstCampaign = "";
};

class CfgCredits
{
	cutscene = "";
};

class CfgCutScenes
{
	
	class Refuel
	{
		sound[]={"",0.5,0.2};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REFUEL;
	};
	class Rearm
	{
		sound[]={"",0.3,1};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REARM;
	};
	class Repair
	{
		sound[]={"",0.1,1};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REPAIR;
	};
};

class CfgCameraEffects
{
	
	class Interpolated
	{
		
		type=CamInterpolated;
		scale=0.1;
		duration=5;
		spline=true; // spline or linear
		show=public;
	};
	class Exact: Interpolated
	{
		scale=-1;
	};
	class Chain
	{
		
		type=CamChained;
		show=public;
	};

	class Array
	{
		class Terminate
		{
			
			name=$STR_CFG_CAMEFFECTS_TERMINATE;
			type=CamTerminate;
			show=private;
		};
		class Internal
		{
			
			name=$STR_CFG_CAMEFFECTS_INTERNAL;
			type=CamInternal;
			show=public;
		};
		class Fixed: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_FIXED;
			type=CamStatic;
			duration=10;
		};
		class FixedWithZoom: Fixed
		{
			name=$STR_CFG_CAMEFFECTS_FIXEDZOOM;
			type=CamStaticWithZoom;
			duration=10;
		};
		class External: Fixed
		{
			name=$STR_CFG_CAMEFFECTS_EXTERNAL;
			type=CamExternal;
			duration=5;
			file="";
		};
	};
};

class CfgMarkers
{
	//

	/*
	class Flag
	{
		name = $STR_CFG_MARKERS_FLAG;
		icon = "marker_objective.paa";
		color[] = {Red, 1};		//{Red, 0.8};
		size = SizeMapMarker;
	};
	*/
  class Empty
  {
    name = $STR_A3_CfgMarkers_Empty0;
    icon = ProcTextWhite;
    color[] = {0.2, 0.1, 0.4, 1};
    size = 0;
    scope = 2;
  };
};

class CfgMarkerColors
{
	//
/*	class Default
	{
		name = $STR_CFG_MARKERCOL_DEFAULT;
		color[] = {Black, 1};	//{Black, 0.8};
		scope = 1;  //1-visible only in editor, 2-visible in ingame map
	};
*/
};

class CfgMarkerBrushes
{
	//
	class Solid
	{
		name = $STR_CFG_MARKERBR_SOLID;
		texture = ProcTextWhite;
		drawBorder = 0;
		scope = 1;  //1-visible only in editor, 2-visible in ingame map
	}
};

class CfgLocationTypes
{
	class Mount
	{
		name = $STR_GETIN;
		// icon, area, mount
		drawStyle = mount; 
		// icon or brush
		texture = ; 
		color[] = {0, 0, 0, 1};
		// size of icon (in pixels in resolution 640 x 480)
		size = 0; 
		font = FontMAIN;
		// height of text (in screen coordinates)
		textSize = 0.04; 
    shadow = true;
	};
	// default key point name in map
	class Name
	{
		name = $STR_NAME;
		drawStyle = name;
		// icon or brush
		texture = ; 
		color[] = {0, 0, 0, 1};
		// size of icon
		size = 0; 
		font = FontMAIN;
		textSize = 0.04;
    shadow = true;
	};
	// key points used in map

	class Strategic: Name
	{
	  name = $STR_A3_CfgLocationTypes_Strategic0;
		texture = ProcTextWhite;
		color[] = {0.25, 0.4, 0.2, 1};
		size = 16;
		textSize = 0.05;
	};

	class StrongpointArea: Strategic
	{
	//area where strongpoint (ie. bunker) can be placed  //TODO: Stringtablize? (- will not be visible ingame)
	  name = $STR_A3_CfgLocationTypes_StrongpointArea0;
	};

	class FlatArea: Strategic
	{//main open flat spaces in landscape - detected as possible places for warfare bases, landing of helos etc.
	//TODO: Stringtablize? (- will not be visible ingame)
	  name = $STR_A3_CfgLocationTypes_FlatArea0;  
	};

	class FlatAreaCity: FlatArea
	{//main open flat space in city - used to place main city bunker (ie. fort, ie. supplydepot) in warfare
	//TODO: Stringtablize? (- will not be visible ingame)
	  name = $STR_A3_CfgLocationTypes_FlatAreaCity0;	  
	};

	class FlatAreaCitySmall: FlatAreaCity
	{//smaller flat areas in city - can be used to place small buildings
	//TODO: Stringtablize? (- will not be visible ingame)
	  name = $STR_A3_CfgLocationTypes_FlatAreaCitySmall0;
	};

	class CityCenter: Strategic
	{//true centers of villages or cities - used for seized calculations, this class will also have informations about neighboring cities (strategic graph)
	//TODO: Stringtablize? (- will not be visible ingame)
	  name = $STR_A3_CfgLocationTypes_CityCenter0; 

	};

	class Airport: Strategic
	{
	//TODO: Stringtablize.
		name = $STR_A3_CfgLocationTypes_Airport0; 
		texture = ProcTextWhite;
		importance = 20;
	};



	class NameMarine : Name
	{
		name = "$STR_NAME_MARINE";
		color[] = {0, 0.5, 0.95, 0.5};
		textSize = 0.05;
		importance = 3;
	};
	class NameCityCapital : Name
	{
		name = "$STR_NAME_CAPITAL";
		textSize = 0.07;
		importance = 7;
	};
	class NameCity : Name
	{
		name = "$STR_NAME_CITY";
		textSize = 0.06;
		importance = 6;
	};
	class NameVillage : Name
	{
		name = "$STR_NAME_VILLAGE";
		textSize = 0.05;
		importance = 5;
	};
	class NameLocal : Name
	{
		name = "$STR_NAME_LOCALNAME";
		color[] = {0, 0, 0, 0.5};
		textSize = 0.05;
		importance = 4;
	};

	class Hill : Name
	{
		name = "$STR_NAME_HILL";
		drawStyle = icon;
		texture = ProcTextWhite;
		color[] = {0, 0, 0, 1};
		size = 14;
		textSize = 0.04;
    		shadow = false;
		importance = 2;
	};
	class ViewPoint : Hill
	{
		name = "$STR_NAME_VIEWPOINT";
		drawStyle = icon;
		texture = ProcTextWhite;
		color[] = {0.78, 0, 0.05, 1};
		size = 12;
		textSize = 0.04;
    		shadow = false;
		importance = 1;
	};
	class RockArea : Hill
	{
		name = "$STR_NAME_ROCKAREA";
		texture = ProcTextWhite;
		color[] = {0, 0, 0, 1};
		size = 12;
    		shadow = false;
		importance = 2;
	};
	class BorderCrossing : Hill
	{
		name = "$STR_NAME_BCROSS";
		texture = ProcTextWhite;
		color[] = {0.78, 0, 0.05, 1};
		size = 16;
    		shadow = false;
		importance = 1;
	};
	class VegetationBroadleaf : Hill
	{
		name = "$STR_NAME_VEGB";
		texture = ProcTextWhite;
		color[] = {0.25, 0.4, 0.2, 1};
		size = 18;
    		shadow = false;
		importance = 2;
	};
	class VegetationFir : Hill
	{
		name = "$STR_NAME_VEGF";
		texture = ProcTextWhite;
		color[] = {0.25, 0.4, 0.2, 1};
		size = 18;
    		shadow = false;
		importance = 2;
	};
	class VegetationPalm : Hill
	{
		name = "$STR_NAME_VEGP";
		texture = ProcTextWhite;
		color[] = {0.25, 0.4, 0.2, 1};
		size = 18;
    		shadow = false;
		importance = 2;
	};
	class VegetationVineyard : Hill
	{
		name = "$STR_NAME_VEGV";
		texture = ProcTextWhite;
		color[] = {0.25, 0.4, 0.2, 1};
		size = 16;
    		shadow = false;
		importance = 2;
	};


};


#include "cfgWorlds.hpp"

class CfgGroups
{
};

class CfgAddons
{
	// addon configuration
	
	// Following official addons should be always loaded if present
	// this should help to minimize compatibility problems
	// with older missions that do not have correct addons[] list
	// (This applies especially to mission using official weapons).
	class PreloadBanks
	{

	};
	class PreloadAddons
	{

	};
};

class CfgEditorObjects
{
};

#include "cfgXbox.hpp" /// left just in case
// #include "rscXbox.hpp" /// left just in case

#include "rscCommon.hpp"
#include "rscDialog.hpp" 
#include "rscIGUI.hpp" 
#include "rscScreen.hpp" 
#include "rscWizard.hpp" 
#include "rscMP.hpp"
#include "cfgBuldozer.hpp"


#include "rscMenu.hpp"
#include "rscMenuHighCommand.hpp"
#include "sp_sentences.hpp"

class PreloadConfig
{
  // any texture corresponding to the entry below is preloaded
  // and kept in the memory permanently
  // actual texture file is looked up in the corresponding config entry
  // lookup values:
  //  "*" - the class including all subclasses is made permanent
  //  "." - only this class is made permanent
  // "fastFind" - optimize searching in this class
  RadioProtocolBase = "*";
  RadioProtocolDefault = "*";
  CfgVoice = "*";
  class CfgCloudlets
  {
    CraterBlood = ".";
    CloudletsMissileManual = "*";
    CloudletsMissile = "*";
    CloudletsScud = "*";
    CraterDustSmall = "*";
    CraterDustBig = "*";
    CraterSmoke1 = "*";
    CraterSmoke2 = "*";
    CraterSmoke3 = "*";
    CraterWater = "*";
    Explosion = "*";
  };
  CfgDestructPos="*";
  CfgCloudletShapes="*";
  CfgMimics = "*";
  CfgNonAIVehicles = "fastFind";
  CfgAmmo = "fastFind";
  CfgMusic = "*";
  CfgTitles = "*";
  CfgCameraEffects ="*";
  RscTitlesText="*";
  CfgFonts = "*";
  CfgFontFamilies = "*";

  // commanding menu
  RscMainMenu = "*";
  RscSubmenu = "*";
  RscMoveHigh = "*";
  RscMoveDir = "*";
  RscReply = "*";
  RscStatus = "*";
  RscWatchDir = "*";
  RscWatchMoreDir = "*";
  RscMoveDist = "*";
  RscFormations = "*";
  RscCombatMode = "*";
  RscTeam = "*";
  RscSelectTeam = "*";
  RscRadio = "*";
  // radio identities
  CfgHQIdentities = "*";
  RscButtonImages = "*";
  // in-game UI
  class RscInGameUI
  {
    RscUnitInfoSoldier = "*";
  };
  // objective icons
  RscObjectives = "*";

  this = "fastFind";
  class CfgGesturesMale
  {
    States = "fastFind"; 
  };
  class CfgMovesBasic
  {
    Actions = "fastFind"; 
  };
  class CfgMovesMaleSdr
  {
    States = "fastFind"; 
    Actions = "fastFind";
  };

  class CfgMagazines
  {
    this = "fastFind";
    allSubEntries = "fastFind";
  };
  class CfgWeapons
  {
    this = "fastFind";
    allSubEntries = "fastFind";
  };
  class CfgVehicles
  {
    this = "fastFind";
    allSubEntries = "fastFind";
  };
};

class CfgCameraShake
{
  /// coef used to multiply power to get positional change (in m)
  posChangeCoef = 0.005;
  /// coef used to multiply power to get rotation change in X (in degrees)
  rotXChangeCoef = 0.5;
  /// coef used to multiply power to get rotation change in Y (in degrees)
  rotYChangeCoef = 0.5;
  /// coef used to multiply power to get rotation change in Z (in degrees)
  rotZChangeCoef = 0.5;
  /// if linear interpolation should be used between 2 camera positions
  performLERP = true;
  /// if default values should be used when no values are present in config
  useDefaultValues = true;
  /// default power
  defaultPower = 12;
  /// default duration (in s)
  defaultDuration = 1.0;
  /// default max distance (in m)
  defaultMaxDistance = 120;
  /// default frequency of matrix update (number of updates per second)
  defaultFrequency = 20;
  /// default min speed of vehicle to cause shake
  defaultMinSpeed = 0;
  /// default min mass of vehicle to cause shake
  defaultMinMass = 10000;
  /// coef used to multiply caliber of ammo to get the coef for power and duration of shake used when the player is hit by ammo
  defaultCaliberCoefPlayerHit = 0.5;
  /// coef used to multiply caliber of ammo to get the coef for power and duration of shake used when the weapon is fired
  defaultCaliberCoefWeaponFire = 0.2;
  /// default coef used to multiply default power of shake of vehicles passing near player
  defaultPassingVehicleCoef = 0.05;
  /// time between two updates of shake of passing vehicles
  defaultPassingVehicleUpdateTime = 1.0;
  /// default vehicle shake attenuation coef
  defaultVehicleAttenuationCoef = 0.2;
};

class CfgLensFlare
{
  // NOTE - number of flares is always 16
  // flare textures are given by mask maskTextureFlare (for camera flare) or eyeFlare (for eye flare) in CfgCoreData

  // flare positions between position of light (0) and screen center (1)
  flarePos[]={0.0,-0.3,-0.15,+0.375,+0.4125,+0.45,+0.6,+0.75, +0.975,+1.05,+1.0875,+1.125,+1.3125,+1.3275,+1.5,+1.65};

  // flare size when used as lens camera
  flareSizeCam[]={ 0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

  // flare size when used as eye simulation
  flareSizeEye[]={0.3};

  // flare size when used as eye simulation for sun
  flareSizeEyeSun[]={0.15};

  // flare brightness
  flareBright[]={1,0.5,0.5,0.5,0.5,0.5,0.5,0.5, 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5};
};

class CfgSoundEffects
{
  class WeaponsEffects
  {
    /**
      Used for weapons distance filtering - change of sound based on listener - emitter distance

      class A { distance 1; ... };
      class B { distance 50; ... }; 
      class C { distance 300; ... };

      distance: listener - emitter 25m -> linear interpolation of all params class A, class B based on distance

      if (distance < A.distance) -> class A params are used
      if (distance > C.distance) -> class C params are used
    */
    class Default
    {
      distance = 1;							// meter
      frequency = 1;						//

      // Equalizer
      center[] = { 100, 800, 2000, 10000 };	// frequencies
      bandwidth[] = { 1, 1, 1, 1 };			    // must be between 0.1 and 2.0 
      gain[] = { db0, db0, db0, db0 };			// +/- 18dB

      // Compressor
      threshold = db0;	//
      ratio = 1;		    // 1:1
      attack = 1;			  // ms
      release = 1;
    };
  };

  // Under water sound effect
  class UnderWaterEffects
  {
    class Mono
    {
      // 0m - unchanged sound
      // 1m - below surface level all sounds are mixed into mono
      distance = 1;
    };

    class Equalizer
    {
      // in range [0 - 3] equalizer pars are linearly interpolated from neutral values to set
      distance = 3;    
      // Equalizer
      center[] = { 100, 800, 2000, 10000 };	// frequencies
      bandwidth[] = { 2.0, 2.0, 2.0, 2.0 };			    // must be between 0.1 and 2.0 
      gain[] = { db10, db5, db-15, db-18 };			// +/- 18dB
    }
  };

  // Unconscious sound effect, damage > "UnconsiousTreshold"
  class UnconsciousStateEffect
  {
    // linear interpolation ... Echo0 * t + (Echo1 - Echo0), t = [0 - 1]
    class Echo0
    {
      WetDryMix = 0.25;   // 0 - 1
      Feedback = 0.25;     // 0 - 1
      Delay = 100;        // 1 - 2000
    };

    class Echo1
    {
      WetDryMix = 0.5;    // 0 - 1
      Feedback = 0.3;     // 0 - 1
      Delay = 300;      // 1 - 2000
    };

    class Equalizer0
    {
      center[] = { 100, 800, 2000, 10000 }; // frequencies
      bandwidth[] = { 1.0, 1.0, 1.0, 1.0 }; // must be between 0.1 and 2.0 
      gain[] = { db0, db0, db0, db0 }; // +/- 18dB
    };

    class Equalizer1
    {
      center[] = { 100, 800, 2000, 10000 };	// frequencies
      bandwidth[] = { 2.0, 2.0, 2.0, 2.0 }; // must be between 0.1 and 2.0 
      gain[] = { db5, db0, db-18, db-18 }; // +/- 18dB
    };
  };
};

class CfgMineDetectionCoefs
{
  ///night coeg. goes from 0.0 to 1.0
  //saturates night 0.5 - 1.0
  NVGNightCoef = 0.5;
  //saturates night 0.25 - 1.0
  FlashLightCoef = 0.25;

  //if deviation is 45 - 60 degrees
  EyePeripheralCoef = 0.25;
  //if deviation is 15 - 45 degrees
  EyeCoef = 1.0;
  //if deviation is 15 - 5 degrees
  EyeFocusCoef = 1.3;
  //if deviation is 5 - 0 degrees
  EyeFocusDirectCoef = 2.0;

  //speed < 1.57 (slower than walk)
  slowCoef = 1.25; 
  //speed < 2.5 (slower than tactical)
  normalCoef = 1.0;
  //speed < 10
  fastCoef = 0.5;
  //speed > 10
  veryfastCoef = 0.25;
};

class CfgFire
{
	access = ReadAndCreate;
	manDelay          = 3.0;
	vehicleDelayPart  = 25.0;
	vehicleDelayFull  = 180.0;
};

class CfgIRLaserSettings
{
  //!max length of ray
  laserMaxRange = 1000.0;
  //! max distance of ray source to be rendered
  maxViewDistance = 2000.0;
  //! max number of rendered rays
  maxNumberOfRays = 16;
};