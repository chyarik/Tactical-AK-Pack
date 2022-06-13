// solider moves diagram - MotionCapture sources

// define default action sets

enum ManPos
{
	ManPosDead,
	// special weapon - AT
	ManPosWeapon, 
	ManPosBinocLying,
	ManPosLyingNoWeapon,
	ManPosLying,
	ManPosHandGunLying,
	ManPosCrouch,
	ManPosHandGunCrouch,
	ManPosCombat,
	ManPosHandGunStand,
	// moves with weapon on the back
	ManPosStand,
  ManPosSwimming,
  ManPosBottomSwimming,
  ManPosSurfaceSwimming,
  ManPosDiving, //swimming with fins
  ManPosBottomDiving,
  ManPosSurfaceDiving,
  // civilian moves
	ManPosNoWeapon, 
	 // binocular position
	ManPosBinoc,
	// binocular position (weapon on back)
	ManPosBinocStand, 
  ManPosHealing,
  ManPosDragged,
  ManPosCarrying,
  ManPosFreefall
};

/// man stance indication
enum ManStance
{
  ManStanceUndefined,
  ManStanceProne,
  ManStanceCrouch,
  ManStanceStand
};

class CfgVehicleActions {};
