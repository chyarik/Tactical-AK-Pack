#include "cfgPatches.hpp"

/** This differs a bit from standard samples as it is rather a snippet of actual game data. I hope that it is clear enough to work with */

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ffv_01="ffv_01_Idle";	/// There should be an action defined for the vehicle which needs 
								/// to be translated for the engine into a state in which the crewman begins
	};
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions		/// Some base class definition, using a declaration (class FFV_BaseActions;)
		{
			AdjustF="";
			AdjustB="";
			AdjustL="";
			AdjustR="";
			AdjustLF="";
			AdjustLB="";
			AdjustRB="";
			AdjustRF="";
			agonyStart="";
			agonyStop="";
			medicStop="";
			medicStart="";
			medicStartUp="";
			medicStartRightSide="";
			GestureAgonyCargo="";
			grabCarry="";
			grabCarried="";
			grabDrag="";
			grabDragged="";
			carriedStill="";
			released="";
			releasedBad="";
			Stop="";
			StopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			ReloadMagazine="";
			ReloadMGun="";
			ReloadRPG="ReloadRPG";
			ReloadMortar="";
			WalkF="";
			WalkLF="";
			WalkRF="";
			WalkL="";
			WalkR="";
			WalkLB="";
			WalkRB="";
			WalkB="";
			PlayerWalkF="";
			PlayerWalkLF="";
			PlayerWalkRF="";
			PlayerWalkL="";
			PlayerWalkR="";
			PlayerWalkLB="";
			PlayerWalkRB="";
			PlayerWalkB="";
			SlowF="";
			SlowLF="";
			SlowRF="";
			SlowL="";
			SlowR="";
			SlowLB="";
			SlowRB="";
			SlowB="";
			PlayerSlowF="";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			PlayerSlowB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			FastB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="";
			PlayerTactRB="";
			PlayerTactB="";
			EvasiveLeft="";
			EvasiveRight="";
			startSwim="";
			surfaceSwim="";
			bottomSwim="";
			StopSwim="";
			startDive="";
			SurfaceDive="";
			BottomDive="";
			StopDive="";
			Down="";
			Up="";
			PlayerStand="";
			PlayerCrouch="";
			PlayerProne="";
			Lying="";
			Stand="";
			Combat="";
			Crouch="";
			CanNotMove="";
			Civil="";
			CivilLying="";
			FireNotPossible="";
			WeaponOn="";
			WeaponOff="";
			Default="";
			JumpOff="";
			StrokeFist="";
			StrokeGun="";
			SitDown="";
			Salute="";
			saluteOff="";
			GetOver="";
			Diary="";
			Surrender="";
			Gear="";
			BinocOn="";
			BinocOff="";
			PutDown="";
			PutDownEnd="";
			Medic="";
			MedicOther="";
			Treated="";
			LadderOnDown="";
			LadderOnUp="";
			LadderOff="";
			LadderOffTop="";
			LadderOffBottom="";
			PrimaryWeapon="";
			SecondaryWeapon="";
			Binoculars="";
		};
		class ffv_01_Actions: FFV_BaseActions /// FFV positions have just a limited set of actions
		{
			upDegree="ManPosCombat";		/// this is for AI to properly handle raising and lowering of weapon
			stop="ffv_01_Aim";				/// "stop" is played as a standard action if nothing else occurs
			stopRelaxed="ffv_01_Aim";		/// "stopRelaxed" is played for AI instead
			default="ffv_01_Aim";			/// "default" is chosen if there is no engine input, but engine sends "stop" by default
			Stand="ffv_01_Idle";			/// "stand" action is used to lower the rifle
			HandGunOn="ffv_01_Aim_Pistol";	/// "handGunOn" is played if the soldier wants to switch to pistol
			PrimaryWeapon="ffv_01_Aim";		/// "primaryWeapon" is used to go back to rifle from any state
			Binoculars="ffv_01_Aim_Binoc";	/// "binoculars" is self-explanatory - used to switch to binoculars
			die="ffv_01_Die";				///	"die" and "unconscious" actions are used when the solider dies
			Unconscious="ffv_01_Die";		/// actually, when soldier hits damage == 1, "unconscious" is sent first
			civil="ffv_01_Idle_Unarmed";	/// "civil" action is used to switch to unarmed
		};
		class ffv_01_IdleUnarmedActions: FFV_BaseActions
		{
			upDegree="ManPosNoWeapon";
			stop="ffv_01_Idle_Unarmed";
			stopRelaxed="ffv_01_Idle_Unarmed";
			default="ffv_01_Idle_Unarmed";
			Stand="ffv_01_Idle_Unarmed";
			HandGunOn="ffv_01_Aim_Pistol";
			PrimaryWeapon="ffv_01_Aim";
			Binoculars="ffv_01_Aim_Unarmed_Binoc";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
			civil="ffv_01_Idle_Unarmed";
			throwGrenade[]=																			/// throwing grenade is a gesture
			{
				"GestureThrowGrenadeUna",
				"Gesture"
			};
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";				/// various get-out actions depending on the vehicle used
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class ffv_01_DeadActions: FFV_BaseActions
		{
			stop="ffv_01_Die";
			default="ffv_01_Die";
			die="ffv_01_Die";
			Unconscious="ffv_01_Die";
		};
		class ffv_01_DeadPistolActions: FFV_BaseActions
		{
			stop="ffv_01_Die_Pistol";
			default="ffv_01_Die_Pistol";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
		};
		class ffv_01_PistolActions: ffv_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="ffv_01_Aim_Pistol";
			stopRelaxed="ffv_01_Aim_Pistol";
			default="ffv_01_Aim_Pistol";
			Binoculars="ffv_01_Aim_Pistol_Binoc";
			throwGrenade[]=
			{
				"GestureThrowGrenadePistol",
				"Gesture"
			};
			Stand="ffv_01_Idle_Pistol";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class ffv_01_BinocActions: ffv_01_Actions
		{
			binocOn="";
			upDegree="ManPosBinocStand";
			stop="ffv_01_Aim_Binoc";
			stopRelaxed="ffv_01_Aim_Binoc";
			default="ffv_01_Aim_Binoc";
		};
		class ffv_01_BinocPistolActions: ffv_01_BinocActions
		{
			stop="ffv_01_Aim_Pistol_Binoc";
			stopRelaxed="ffv_01_Aim_Pistol_Binoc";
			default="ffv_01_Aim_Pistol_Binoc";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class ffv_01_BinocUnarmedActions: ffv_01_BinocActions
		{
			stop="ffv_01_Aim_Unarmed_Binoc";
			stopRelaxed="ffv_01_Aim_Unarmed_Binoc";
			default="ffv_01_Aim_Unarmed_Binoc";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class ffv_01_IdleActions: ffv_01_Actions
		{
			upDegree="ManPosStand";
			stop="ffv_01_Idle";
			stopRelaxed="ffv_01_Idle";
			default="ffv_01_Idle";
			Combat="ffv_01_Aim";
			fireNotPossible="ffv_01_Aim";
			PlayerStand="ffv_01_Aim";
		};
		class ffv_01_IdlePistolActions: ffv_01_Actions
		{
			upDegree="ManPosHandGunStand";
			stop="ffv_01_Idle_Pistol";
			stopRelaxed="ffv_01_Idle_Pistol";
			default="ffv_01_Idle_Pistol";
			Combat="ffv_01_Aim_Pistol";
			fireNotPossible="ffv_01_Aim_Pistol";
			PlayerStand="ffv_01_Aim_Pistol";
			die="ffv_01_Die_Pistol";
			Unconscious="ffv_01_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class AmovPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
		class cargo_marksman: AmovPercMstpSrasWrflDnon
		{
		};
		/// base classes for FFV - used to prevent unnecessary idle changes
		class cargo_base: cargo_marksman	
		{
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_base_idle: cargo_base
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_basepistol: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_base_idle_pistol: cargo_basepistol
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
		class cargo_basebinoc: AmovPercMstpSoptWbinDnon
		{
			weaponLowered=0;
			canPullTrigger=1;
		};
		/// the actual animation states for FFV
		class ffv_01_Aim: cargo_base
		{
			actions="ffv_01_Actions";								/// what action class is going to be used if soldier is in this state
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim.rtm";	/// what file is going to be played in this state
			speed=100000;											/// frequency of playing the "file" on soldier - 100000 means it is played instantly
			ConnectTo[]=											/// pairs of states and connection costs to transfer to said states via connection 
			{														/// (finishing previous animation and switching to a new state instantly)
				"ffv_01_Aim_ToBinoc",
				0.1
			};
			InterpolateTo[]=										/// same pairs as for "connectTo", but interpolate instantly starts blending into target state
			{
				"ffv_01_Idle",
				0.1,
				"ffv_01_Aim_ToPistol",
				0.1,
				"ffv_01_Idle_Unarmed",
				0.1,
				"ffv_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"ffv_01_Aim_Idling",
				1
			};
			variantsPlayer[]=
			{
				"ffv_01_Aim_Idling",
				1
			};
		};
		class ffv_01_Aim_Idling: ffv_01_Aim
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim1.rtm";
			speed=-8;												/// negative speed means period, not frequency (this is going to be played for 8 s)
			ConnectTo[]=
			{
				"ffv_01_Aim",
				0.1
			};
		};
		class ffv_01_Idle: cargo_base_idle
		{
			actions="ffv_01_IdleActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idle.rtm";
			speed=100000;
			aiming="aimingDefault";
			aimingBody="aimingNo";
			leftHandIKCurve[]={1};
			InterpolateTo[]=
			{
				"ffv_01_Aim",
				0.1,
				"ffv_01_Aim_ToPistol",
				0.1,
				"ffv_01_Idle_Unarmed",
				0.1,
				"ffv_01_Die",
				0.1
			};
			variantsAI[]=
			{
				"ffv_01_Idle_Idling",
				1
			};
			variantsPlayer[]=
			{
				"ffv_01_Idle_Idling",
				1
			};
		};
		class ffv_01_Idle_Idling: ffv_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idle1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"ffv_01_Idle",
				0.1
			};
		};
		class ffv_01_Aim_Pistol: cargo_basepistol
		{
			actions="ffv_01_PistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			speed=100000;
			variantsAI[]=
			{
				"ffv_01_Aim_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"ffv_01_Aim_Pistol_Idling",
				1
			};
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol_ToBinoc",
				0.1
			};
			InterpolateTo[]=
			{
				"ffv_01_Aim_FromPistol",
				0.1,
				"ffv_01_Idle_Pistol",
				0.2,
				"ffv_01_Idle_Unarmed",
				0.2,
				"ffv_01_Die_Pistol",
				0.5
			};
		};
		class ffv_01_Aim_Pistol_Idling: ffv_01_Aim_Pistol
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol",
				0.1
			};
		};
		class ffv_01_Idle_Pistol: cargo_base_idle_pistol
		{
			actions="ffv_01_IdlePistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idlepistol.rtm";
			speed=100000;
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			InterpolateTo[]=
			{
				"ffv_01_Aim_Pistol",
				0.1,
				"ffv_01_Aim_FromPistol",
				0.1,
				"ffv_01_Idle_Unarmed",
				0.1,
				"ffv_01_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"ffv_01_Idle_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"ffv_01_Idle_Pistol_Idling",
				1
			};
		};
		class ffv_01_Idle_Pistol_Idling: ffv_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idlepistol1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"ffv_01_Idle_Pistol",
				0.1
			};
		};
		class ffv_01_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions="ffv_01_PistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimtopistol.rtm";
			speed=2;
			ConnectTo[]=
			{
				"ffv_01_Aim_ToPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions="ffv_01_PistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimtopistol_end.rtm";
			speed=1.875;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions="ffv_01_PistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimFrompistol.rtm";
			speed=2.3076921;
			ConnectTo[]=
			{
				"ffv_01_Aim_FromPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions="ffv_01_Actions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimfrompistol_end.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=2;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"ffv_01_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Binoc: cargo_basebinoc
		{
			actions="ffv_01_BinocActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim_Binoc.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=-8;
			rightHandIKCurve[]={0};
			InterpolateTo[]=
			{
				"ffv_01_Aim_FromBinoc",
				0.1,
				"ffv_01_Die",
				0.1
			};
		};
		class ffv_01_Aim_Pistol_Binoc: cargo_basebinoc
		{
			actions="ffv_01_BinocPistolActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol_Binoc.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			showHandGun=1;
			speed=-8;
			InterpolateTo[]=
			{
				"ffv_01_Aim_Pistol_FromBinoc",
				0.1,
				"ffv_01_Die_Pistol",
				0.1
			};
		};
		class ffv_01_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			actions="ffv_01_BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim_ToBinoc.rtm";
			speed=1.5789469;
			leftHandIKCurve[]={0,1,0.15000001,0};
			ConnectTo[]=
			{
				"ffv_01_Aim_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="ffv_01_BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			actions="ffv_01_BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"ffv_01_Aim_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end
		{
			actions="ffv_01_Actions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aim_frombinoc_end.rtm";
			speed=1.764706;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"ffv_01_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions="ffv_01_BinocActions";
			showHandGun=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol_ToBinoc.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="ffv_01_BinocActions";
			showHandGun=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions="ffv_01_BinocActions";
			showHandGun=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions="ffv_01_Actions";
			showHandGun=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimpistol_frombinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Idle_Unarmed: cargo_base_idle
		{
			actions="ffv_01_IdleUnarmedActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idleunarmed.rtm";
			speed=100000;
			aiming="aimingNo";
			aimingBody="aimingNo";
			weaponIK=0;
			InterpolateTo[]=
			{
				"ffv_01_Aim_FromPistol_End",
				0.1,
				"ffv_01_Aim_ToPistol_End",
				0.1,
				"ffv_01_Aim_Unarmed_ToBinoc",
				0.1,
				"ffv_01_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"ffv_01_Idle_Unarmed_Idling",
				1
			};
			variantsPlayer[]=
			{
				"ffv_01_Idle_Unarmed_Idling",
				1
			};
		};
		class ffv_01_Idle_Unarmed_Idling: ffv_01_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_idleunarmed1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"ffv_01_Idle_Unarmed",
				0.1
			};
		};
		class ffv_01_Aim_Unarmed_Binoc: cargo_basebinoc
		{
			actions="ffv_01_BinocUnarmedActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimUnarmed_Binoc.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			showHandGun=0;
			speed=-8;
			InterpolateTo[]=
			{
				"ffv_01_Aim_Unarmed_FromBinoc",
				0.1,
				"ffv_01_Die_Pistol",
				0.1
			};
		};
		class ffv_01_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions="ffv_01_BinocUnarmedActions";
			showHandGun=0;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimUnarmed_ToBinoc.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Unarmed_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="ffv_01_BinocUnarmedActions";
			showHandGun=0;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimUnarmed_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Aim_Unarmed_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions="ffv_01_BinocUnarmedActions";
			showHandGun=0;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimUnarmed_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"ffv_01_Aim_Unarmed_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions="ffv_01_IdleUnarmedActions";
			showHandGun=0;
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_aimUnarmed_frombinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"ffv_01_Idle_Unarmed",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Die: DefaultDie
		{
			actions="ffv_01_DeadActions";
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_die.rtm";
			speed=1;
			looped="false";
			terminal=1;
			ragdoll=1;
			ConnectTo[]=
			{
				"Unconscious",
				0.1
			};
			InterpolateTo[]={};
		};
		class ffv_01_Die_Pistol: ffv_01_Die
		{
			file="\samples_f\Test_FFV_Poses_F\anim\ffv_01_diepistol.rtm";
			actions="ffv_01_DeadPistolActions";
			showHandGun=1;
		};
	};
};
