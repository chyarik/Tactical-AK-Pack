//Core engine data (preloaded textures and models)
class CfgCoreData
{
  access = ReadAndWrite;

  textureDefault = ProcTextWhite;
  textureBlack = ProcTextBlack;
  textureWhite = ProcTextWhite;
  textureHalf="#(argb,1,1,1)color(0.5,0.5,0.5,1,dt)";
  textureZero = ProcTextZero;
  textureLine =  ProcTextWhite;
  textureLine3D =  ProcTextWhite;

  textureLine3DDoted = ProcTextWhite;
  textureLine3DDashed = ProcTextWhite;
  textureLine3DDashedDoted = ProcTextWhite;

  textureTIConversion = "core\data\ticonversion.tga";
  // DX11 cannot read TGA files, so we need PNG instead
  textureTIConversionDX11 = "core\data\ticonversion.png";
  textureTrack = ProcTextWhite;
  textureTrackFour = ProcTextWhite;
  maskTextureFlare = ProcTextEmpty;
  eyeFlare = ProcTextEmpty;
  eyeFlareSun = ProcTextEmpty;
  lodTransitionSpeed = 0.125;

  craterShell = "core\default\default.p3d";
  craterBullet = "core\default\default.p3d";
  slopBlood = "core\default\default.p3d";
  cloudletBasic = "core\default\default.p3d";
  cloudletFire = "core\default\default.p3d";
  cloudletFireD = "core\default\default.p3d";
  cloudletWater = "core\default\default.p3d";
  cloudletMissile = "core\default\default.p3d";
  cobraLight = "core\default\default.p3d";
  sphereLight = "core\default\default.p3d";
  halfLight = "core\default\default.p3d";
  marker = "core\default\default.p3d";
  footStepL = "core\default\default.p3d";
  footStepR = "core\default\default.p3d";
  footStepBleeding0 = "core\default\default.p3d";
  footStepBleeding1 = "core\default\default.p3d";
  paperCarModel = "core\default\default.p3d";
  forceArrowModel = "core\cursor\forcearrowmodel.p3d";
  halfspaceModel = "core\default\default.p3d";
  sphereModel = "core\Sphere\sphere.p3d";
  rectangleModel = "core\Rectangle\rect.p3d";
  horizontObject = "core\default\default.p3d";
  collisionShape = "core\default\default.p3d";
  rayModel = "core\cursor\forcearrowmodel.p3d";
  gunLightModel= "core\default\default.p3d";
  tetraHedronModel="core\tetrahedron\tetrahedron.p3d";
  gizmoModel = "core\default\default.p3d";
};

class CfgVehicleIcons
{
  iconObject = ProcTextWhite;
  iconLogic = ProcTextWhite;
  iconVehicle = ProcTextWhite;
  iconCar = ProcTextWhite;
  iconMotorcycle = ProcTextWhite;
  iconTank = ProcTextWhite;
  iconAPC = ProcTextWhite;
  iconMan = ProcTextWhite;
  iconAnimal = ProcTextWhite;
  iconAir = ProcTextWhite;
  iconHelicopter = ProcTextWhite;
  iconPlane = ProcTextWhite;
  iconShip = ProcTextWhite;
  iconParachute = ProcTextWhite;
  iconStaticObject = ProcTextWhite;
  iconThing = ProcTextWhite;

  iconLaserTarget = ProcTextWhite;
  iconPaperCar = ProcTextWhite;

  pictureLogic = ProcTextWhite;
  pictureParachute = ProcTextWhite;
  pictureLaserTarget = ProcTextWhite;
  picturePaperCar = ProcTextWhite;
  pictureStaticObject = ProcTextWhite;
  pictureThing = ProcTextWhite;
};

class CfgCloudletShapes
{
  cloudletExplosion = "\core\default\default.p3d";
  cloudletSmoke = "\core\default\default.p3d";
  cloudletDust = "\core\default\default.p3d";
  cloudletBlood = "\core\default\default.p3d";
  cloudletWater = "\core\default\default.p3d";
  cloudletMissile = "\core\default\default.p3d";
  cloudletFire = "\core\default\default.p3d";
  cloudletClouds = "\core\default\default.p3d";
};

class CfgSaveThumbnails
{
  saveSingleMission = "core\all\todo.png";
  saveMPMission = "core\all\todo.png";
  saveCampaign = "core\all\todo.png";
  userMissionSP = "core\all\todo.png";
  userMissionMP = "core\all\todo.png";
};