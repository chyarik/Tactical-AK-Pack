#define TEXT_DISABLED $STR_A3_OPTIONS_DISABLED
#define TEXT_ENABLED $STR_A3_OPTIONS_ENABLED
#define TEXT_VERY_LOW $STR_A3_OPTIONS_LOW
#define TEXT_LOW $STR_A3_OPTIONS_STANDARD
#define TEXT_NORMAL $STR_A3_OPTIONS_HIGH
#define TEXT_HIGH $STR_A3_OPTIONS_VERYHIGH
#define TEXT_VERY_HIGH $STR_A3_OPTIONS_ULTRA

class CfgVideoOptions
{
  // overall visibility 
  class Visibility
  {
    minValue = 500;
    maxValue = 12000;
  };

  // visibility of objects
  class ObjectsVisibility
  {
    minValue = 500;
    // note - max value is always limited by current overall visibility value
    maxValue = 12000;
  };

  // visibility of shadows
  class ShadowsVisibility
  {
    minValue = 50;
    maxValue = 200;
  };

  // HDR quality
  class HDR
  {
    class Low
    {
      text = TEXT_VERY_LOW;
      value = 8; // 8 bits per pixel (32bit format)
    };
    class Normal
    {
      text = TEXT_LOW;
      value = 16; // 16 bits per pixel (64bit format)
    };
  };

  // quality of post process antialiasing
  class PPAA
  {
    class Disabled
    {
      textMethod = TEXT_DISABLED;
      textQuality = "";
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 0;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 0;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class FXAALow
    {
      textMethod = $STR_A3_OPTIONS_FXAA;
      textQuality = TEXT_LOW;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 1;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 0;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class FXAANormal
    {
      textMethod = $STR_A3_OPTIONS_FXAA;
      textQuality = TEXT_NORMAL;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 1;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 1;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class FXAAHigh
    {
      textMethod = $STR_A3_OPTIONS_FXAA;
      textQuality = TEXT_HIGH;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 1;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 2;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class FXAAVeryHigh
    {
      textMethod = $STR_A3_OPTIONS_FXAA;
      textQuality = TEXT_VERY_HIGH;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 1;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 3;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class SMAALow
    {
      textMethod = $STR_A3_OPTIONS_SMAA;
      textQuality = TEXT_LOW;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 2;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 0;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class SMAANormal
    {
      textMethod = $STR_A3_OPTIONS_SMAA;
      textQuality = TEXT_NORMAL;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 2;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 1;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class SMAAHigh
    {
      textMethod = $STR_A3_OPTIONS_SMAA;
      textQuality = TEXT_HIGH;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 2;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 2;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class SMAAVeryHigh
    {
      textMethod = $STR_A3_OPTIONS_SMAA;
      textQuality = TEXT_VERY_HIGH;
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA)
      ppaaType = 2;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 3;
      // if the effect needs DX11
      needsDX11 = false;
    };
    class CMAANormal
    {
      textMethod = $STR_A3_OPTIONS_CMAA;
      textQuality = "";
      // type of ppaa (0 = disabled, 1 = FXAA, 2 = SMAA, 3 = CMAA)
      ppaaType = 3;
      // quality level of ppaa (0 = worst)      
      ppaaLevel = 0;
      // if the effect needs DX11
      needsDX11 = true;
    };
  };

  class Particles
  {
    // see https://wiki.bistudio.com/index.php/A3_Particles_implementation
    class Low
    {
      text = TEXT_VERY_LOW;

      particlesSoftLimit = 7000;
      particlesHardLimit = 9000;
      smokeGenMinDist = 50;
      smokeGenMaxDist = 200;
      smokeSizeCoef = 2.0;
      smokeIntervalCoef = 4.0;
      smokeZoomCoef = 1.42857;

      // use high quality shader for particles (soft particles)?
      highQualityShader = false;
      // number of nearest particles that are shown in full size (others can have their size limited because of overdraw limitation)
      numFullSizeParticles = 20;
    };
    class Normal
    {
      text = TEXT_LOW;

      particlesSoftLimit = 10000;
      particlesHardLimit = 12000;
      smokeGenMinDist = 100;
      smokeGenMaxDist = 400;
      smokeSizeCoef = 2.0;
      smokeIntervalCoef = 4.0;
      smokeZoomCoef = 1.42857;

      // use high quality shader for particles (soft particles)?
      highQualityShader = true;
      // number of nearest particles that are shown in full size (others can have their size limited because of overdraw limitation)
      numFullSizeParticles = 40;
    };
    class High 
    {
      text = TEXT_NORMAL;

      particlesSoftLimit = 13000;
      particlesHardLimit = 15000;
      smokeGenMinDist = 200;
      smokeGenMaxDist = 800;
      smokeSizeCoef = 2.0;
      smokeIntervalCoef = 4.0;
      smokeZoomCoef = 1.42857;

      // use high quality shader for particles (soft particles)?
      highQualityShader = true;
      // number of nearest particles that are shown in full size (others can have their size limited because of overdraw limitation)
      numFullSizeParticles = 60;
    };
  };

  class DynamicLights
  {
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      //number of dynamic lights per object
      value = 4; 
    };
    class Low
    {
      text = TEXT_LOW;
      //number of dynamic lights per object
      value = 6;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      //number of dynamic lights per object
      value = 8;
    };
    class High
    {
      text = TEXT_HIGH;
      //number of dynamic lights per object
      value = 12;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      //number of dynamic lights per object
      value = 16;
    };
  };

  class AnisotropicFiltering
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      //max anisotropy
      value = 0; 
    };
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      //max anisotropy
      value = 2; 
    };
    class Low
    {
      text = TEXT_LOW;
      //max anisotropy
      value = 4; 
    };
    class Normal
    {
      text = TEXT_NORMAL;
      //max anisotropy
      value = 8; 
    };
    class High
    {
      text = TEXT_HIGH;
      //max anisotropy
      value = 12; 
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      //max anisotropy
      value = 16; 
    };
  };

  class PiP
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      /// max visibility for PiP cameras (0 = disabled)
      value = 0;
    };
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      /// max visibility for PiP cameras
      value = 500;
    };
    class Low
    {
      text = TEXT_LOW;
      /// max visibility for PiP cameras
      value = 800;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      /// max visibility for PiP cameras
      value = 1000;
    };
    class High
    {
      text = TEXT_HIGH;
      /// max visibility for PiP cameras
      value = 1500;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      /// max visibility for PiP cameras
      value = 2000;
    };
  };

  class TextureQuality
  {
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      /// mipmap bias for textures
      mipBias = 2.0;
      /// minimal amount of VRAM (in MB) that must be available for textures to enable this option
      vramNeeded = 0;
    };
    class Low
    {
      text = TEXT_LOW;
      /// mipmap bias for textures
      mipBias = 1.5;
      /// minimal amount of VRAM (in MB) that must be available for textures to enable this option
      vramNeeded = 256;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      /// mipmap bias for textures
      mipBias = 1.0;
      /// minimal amount of VRAM (in MB) that must be available for textures to enable this option
      vramNeeded = 384;
    };
    class High
    {
      text = TEXT_HIGH;
      /// mipmap bias for textures
      mipBias = 0.5;
      /// minimal amount of VRAM (in MB) that must be available for textures to enable this option
      vramNeeded = 512;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      /// mipmap bias for textures
      mipBias = 0.0;
      /// minimal amount of VRAM (in MB) that must be available for textures to enable this option
      vramNeeded = 796;
    };
  };

  class ObjectsQuality
  {
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      /// complexity target of the scene (target number of polygons in the scene)
      value = 400000;
    };
    class Low
    {
      text = TEXT_LOW;
      /// complexity target of the scene (target number of polygons in the scene)
      value = 600000;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      /// complexity target of the scene (target number of polygons in the scene)
      value = 900000;
    };
    class High
    {
      text = TEXT_HIGH;
      /// complexity target of the scene (target number of polygons in the scene)
      value = 1300000;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      /// complexity target of the scene (target number of polygons in the scene)
      value = 1800000;
    };
  };

  class TerrainQuality
  {
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      // terrain grid (larger value = worse quality)
      // DO NOT change this value, engine is dependent on it
      terrainGrid = 50.0;
    };
    class Low
    {
      text = TEXT_LOW;
      // terrain grid (larger value = worse quality)
      // DO NOT change this value, engine is dependent on it
      terrainGrid = 25.0;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      // terrain grid (larger value = worse quality)
      // DO NOT change this value, engine is dependent on it
      terrainGrid = 12.5;
    };
    class High
    {
      text = TEXT_HIGH;
      // terrain grid (larger value = worse quality)
      // DO NOT change this value, engine is dependent on it
      terrainGrid = 6.25;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      // terrain grid (larger value = worse quality)
      // DO NOT change this value, engine is dependent on it
      terrainGrid = 3.125;
    };
  };

  class CloudQuality
  {
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      // number of Simul Weather layers (0 = Simul Weather disabled)
      value = 32;
    };
    class Low
    {
      text = TEXT_LOW;
      // number of Simul Weather layers (0 = Simul Weather disabled)
      value = 48;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      // number of Simul Weather layers (0 = Simul Weather disabled)
      value = 64;
    };
    class High
    {
      text = TEXT_HIGH;
      // number of Simul Weather layers (0 = Simul Weather disabled)
      value = 96;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      // number of Simul Weather layers (0 = Simul Weather disabled)
      value = 128;
    };
  };

  // quality of screen space reflections on water
  class WaterSSReflectionsQuality
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      // size coef of buffers for SS reflection
      value = 0;
    };
    class Low
    {
      text = TEXT_LOW;
      // size coef of buffers for SS reflection
      value = 0.3;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      // size coef of buffers for SS reflection
      value = 0.5;
    };
    class High
    {
      text = TEXT_HIGH;
      // size coef of buffers for SS reflection
      value = 1;
    };
  };


  class ShadowQuality
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 0;
      // size of texture for shadow buffer shadows
      textureSize = 0;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 0;
      // number of shadow map cascade layers
      cascadeLayers = 0;
    };
    class VeryLow
    {
      text = TEXT_VERY_LOW;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 2;
      // size of texture for shadow buffer shadows
      textureSize = 1024;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 0;
      // number of shadow map cascade layers
      cascadeLayers = 2;
    };
    class Low
    {
      text = TEXT_LOW;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 2;
      // size of texture for shadow buffer shadows
      textureSize = 1024;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 1;
      // number of shadow map cascade layers
      cascadeLayers = 3;
    };
    class Normal
    {
      text = TEXT_NORMAL;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 2;
      // size of texture for shadow buffer shadows
      textureSize = 1024;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 2;
      // number of shadow map cascade layers
      cascadeLayers = 4;
    };
    class High
    {
      text = TEXT_HIGH;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 2;
      // size of texture for shadow buffer shadows
      textureSize = 2048;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 2;
      // number of shadow map cascade layers
      cascadeLayers = 4;
    };
    class VeryHigh
    {
      text = TEXT_VERY_HIGH;
      // type of shadows (0 = disabled, 1 = stencil (NOT supported anymore!), 2 = shadow buffer)
      shadowType = 2;
      // size of texture for shadow buffer shadows
      textureSize = 2048;
      // quality of shader for shadow buffer shadows (0=1 PCF tap, 1=4PCF taps, 2=4-16 PCF taps, 3=4-16 PCF taps + alpha blend)
      shaderQuality = 3;
      // number of shadow map cascade layers
      cascadeLayers = 4;
    };
  };

  class ATOCQuality
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      
      // ATOC for grass
      grass = false;
      // ATOC for old tree shader
      oldTrees = false;
      // ATOC for new tree shader
      newTrees = false;
      // ATOC for other shaders (SuperHair, SuperATOC)
      other = false;
    };

    class Grass: Disabled
    {
      text = $STR_ATOC_GRASS;
      // ATOC for grass
      grass = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class OldTree: Disabled
    {
      text = $STR_ATOC_TREEA2;
      // ATOC for old tree shader
      oldTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class OldTreeGrass: Disabled
    {
      text = $STR_ATOC_TREEA2_GRASS;
      // ATOC for grass
      grass = true;
      // ATOC for old tree shader
      oldTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class NewTree: Disabled
    {
      
      text = $STR_ATOC_TREEOA;
      // ATOC for new tree shader
      newTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class NewTreeGrass: Disabled
    {
      
      text = $STR_ATOC_TREEOA_GRASS;
      // ATOC for grass
      grass = true;
      // ATOC for new tree shader
      newTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class OldTreeNewTree: Disabled
    {
      text = $STR_ATOC_TREEOA_TREEA2;
      // ATOC for old tree shader
      oldTrees = true;
      // ATOC for new tree shader
      newTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };

    class All: Disabled
    {
      text = $STR_ATOC_TREEOA_TREEA2_GRASS;
      // ATOC for grass
      grass = true;
      // ATOC for old tree shader
      oldTrees = true;
      // ATOC for new tree shader
      newTrees = true;
      // ATOC for other shaders (SuperHair, SuperATOC)
      // always enable others when something is enabled
      other = true;
    };
  };

  // postprocess settings
  class PPSSAOQuality
  {
    class Disabled
    {
      textMethod = TEXT_DISABLED;
      textQuality = "";
      value = 0;
      needsDX11 = false;
    };
    class HDAOLow
    {
      textMethod = $STR_A3_OPTIONS_HDAO;
      textQuality = TEXT_VERY_LOW;
      value = 4;
      needsDX11 = false;
    };
    class HDAOStandard
    {
      textMethod = $STR_A3_OPTIONS_HDAO;
      textQuality = TEXT_LOW;
      value = 5;
      needsDX11 = false;
    };
    class HDAOHigh
    {
      textMethod = $STR_A3_OPTIONS_HDAO;
      textQuality = TEXT_NORMAL;
      value = 6;
      needsDX11 = false;
    };
    class HBAOPlusSoft
    {
      textMethod = $STR_A3_OPTIONS_HBAO_PLUS;
      textQuality = $STR_A3_OPTIONS_SOFT;
      value = 7;
      needsDX11 = true;
    };
    class HBAOPlusMedium
    {
      textMethod = $STR_A3_OPTIONS_HBAO_PLUS;
      textQuality = $STR_A3_OPTIONS_MEDIUM;
      value = 8;
      needsDX11 = true;
    };
    class HBAOPlusStrong
    {
      textMethod = $STR_A3_OPTIONS_HBAO_PLUS;
      textQuality = $STR_A3_OPTIONS_STRONG;
      value = 9;
      needsDX11 = true;
    };

  };

  class PPCausticsQuality
  {
    class Disabled
    {
      text = TEXT_DISABLED;
      value = 0;
    };
    class Enabled
    {
      text = TEXT_ENABLED;
      value = 1;
    };
  };

  class PPBloom
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPDOF
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPRotBlur
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPRadialBlur
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPSharpen
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPBrightness
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPContrast
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPSaturation
  {
    minValue = 0;
    maxValue = 2;
  };

  class PPColorPresets
  {
    class Default
    {
      text = $STR_DISP_DEFAULT;
      brightness = 1;
      contrast = 1;
      saturation = 1;
    };
    /*
    class Desaturated
    {
      text = "Desaturated"; // TODO LOCALIZATION
      brightness = 1;
      contrast = 1;
      saturation = 0;
    };
    class HighContrast
    {
      text = "High Contrast"; // TODO LOCALIZATION
      brightness = 1.2;
      contrast = 1.5;
      saturation = 1;
    };
    */
    class Custom
    {
      text = $STR_DISP_OPT_ASPECT_RATIO_CUSTOM;
      brightness = -10000; //special value for custom
      contrast = -10000; //special value for custom
      saturation = -10000; //special value for custom
    };
  };

  class DefaultSettings
  {
    text = "Default";

    visibility = 1600;
    objectVisibility = 1200;
    shadowVisibility = 100;
    hdr = Normal;
    ppaa = Disabled;
    ppaaAlternative = Disabled;
    ppSharpen = 0;
    particles = Normal;
    dynamicLights = Normal;
    anisotropicFiltering = Normal;
    pip = Normal;
    textureQuality = Normal;
    objectsQuality = Normal;
    terrainQuality = Normal;
    cloudQuality = Normal;
    waterSSReflectionsQuality = Disabled;
    shadowQuality = Normal;
    atocQuality = All;

    ppSSAOQuality = HDAOLow;
    ppSSAOQualityAlternative = HDAOLow;
    ppCausticsQuality = Enabled;
    ppBloom = 1;
    ppDOF = 1;
    ppRotBlur = 1;
    ppRadialBlur = 1;

    // postprocess quality (used when separate PP settings are not used)
    postProcessQuality = 3;
    // number of samples for antialiasing (1 sample = no antialiasing)
    multiSampleCount = 4;
  };

  class OverallSettings
  {
    class VeryLow: DefaultSettings
    {
      text = TEXT_VERY_LOW;

      visibility = 1000;
      objectVisibility = 800;
      shadowVisibility = 100;
      hdr = Normal;
      ppaa = Disabled;
      ppaaAlternative = Disabled;
      particles = Low;
      dynamicLights = VeryLow;
      anisotropicFiltering = Disabled;
      pip = VeryLow;
      textureQuality = VeryLow;
      objectsQuality = VeryLow;
      terrainQuality = Low; //we never want terrain to be VeryLow (=no grass) when setting overall quality 
      cloudQuality = VeryLow;
      waterSSReflectionsQuality = Disabled;
      shadowQuality = Low;
      atocQuality = Disabled;

      ppSSAOQuality = Disabled;
      ppSSAOQualityAlternative = Disabled;
      ppCausticsQuality = Disabled;
      ppBloom = 0;
      ppDOF = 0;
      ppRotBlur = 0;
      ppRadialBlur = 0;
      ppSharpen = 0;

      // postprocess quality (used when separate PP settings are not used)
      postProcessQuality = 0;
      // number of samples for antialiasing (1 sample = no antialiasing)
      multiSampleCount = 1; 
    };

    class Low: DefaultSettings
    {
      text = TEXT_LOW;

      visibility = 1600;
      objectVisibility = 1300;
      shadowVisibility = 100;
      hdr = Normal;
      ppaa = Disabled;
      ppaaAlternative = Disabled;
      particles = Normal;
      dynamicLights = Low;
      anisotropicFiltering = Low;
      pip = Low;
      textureQuality = Low;
      objectsQuality = Low;
      terrainQuality = Low;
      cloudQuality = Low;
      waterSSReflectionsQuality = Disabled;
      shadowQuality = Normal;
      atocQuality = Disabled;

      ppSSAOQuality = Disabled;
      ppSSAOQualityAlternative = Disabled;
      ppCausticsQuality = Enabled;
      ppBloom = 1;
      ppDOF = 1;
      ppRotBlur = 1;
      ppRadialBlur = 1;
      ppSharpen = 0;
 
      // postprocess quality (used when separate PP settings are not used)
      postProcessQuality = 2;
      // number of samples for antialiasing (1 sample = no antialiasing)
      multiSampleCount = 1;
    };

    class Normal: DefaultSettings
    {
      text = TEXT_NORMAL;

      visibility = 2200;
      objectVisibility = 1500;
      shadowVisibility = 100;
      hdr = Normal;
      ppaa = CMAANormal;
      ppaaAlternative = FXAALow;
      particles = Normal;
      dynamicLights = Normal;
      anisotropicFiltering = Normal;
      pip = Low;
      textureQuality = Normal;
      objectsQuality = Normal;
      terrainQuality = Normal;
      cloudQuality = Normal;
      waterSSReflectionsQuality = Low;
      shadowQuality = Normal;
      atocQuality = All;

      ppSSAOQuality = HDAOLow;
      ppSSAOQualityAlternative = HDAOLow;
      ppCausticsQuality = Enabled;
      ppBloom = 1;
      ppDOF = 1;
      ppRotBlur = 1;
      ppRadialBlur = 1;
      ppSharpen = 1;

      // postprocess quality (used when separate PP settings are not used)
      postProcessQuality = 3;
      // number of samples for antialiasing (1 sample = no antialiasing)
      multiSampleCount = 2;
    };

    class High: DefaultSettings
    {
      text = TEXT_HIGH;

      visibility = 3000;
      objectVisibility = 1900;
      shadowVisibility = 100;
      hdr = Normal;
      ppaa = CMAANormal;
      ppaaAlternative = FXAANormal;
      particles = High;
      dynamicLights = High;
      anisotropicFiltering = High;
      pip = Normal;
      textureQuality = High;
      objectsQuality = High;
      terrainQuality = Normal;
      cloudQuality = High;
      waterSSReflectionsQuality = Normal;
      shadowQuality = High;
      atocQuality = All;

      ppSSAOQuality = HBAOPlusMedium;
      ppSSAOQualityAlternative = HDAOStandard;
      ppCausticsQuality = Enabled;
      ppBloom = 1;
      ppDOF = 1;
      ppRotBlur = 1;
      ppRadialBlur = 1;
      ppSharpen = 1;

      // postprocess quality (used when separate PP settings are not used)
      postProcessQuality = 4;
      // number of samples for antialiasing (1 sample = no antialiasing)
      multiSampleCount = 4;
    };

    class VeryHigh: DefaultSettings
    {
      text = TEXT_VERY_HIGH;

      visibility = 3800;
      objectVisibility = 2300;
      shadowVisibility = 100;
      hdr = Normal;
      ppaa = SMAAHigh;
      ppaaAlternative = SMAAHigh;
      particles = High;
      dynamicLights = VeryHigh;
      anisotropicFiltering = VeryHigh;
      pip = Normal;
      textureQuality = VeryHigh;
      objectsQuality = VeryHigh;
      terrainQuality = VeryHigh;
      cloudQuality = VeryHigh;
      waterSSReflectionsQuality = High;
      shadowQuality = VeryHigh;
      atocQuality = All;

      ppSSAOQuality = HBAOPlusMedium;
      ppSSAOQualityAlternative = HDAOHigh;
      ppCausticsQuality = Enabled;
      ppBloom = 1;
      ppDOF = 1;
      ppRotBlur = 1;
      ppRadialBlur = 1;
      ppSharpen = 1;

      // postprocess quality (used when separate PP settings are not used)
      postProcessQuality = 5;
      // number of samples for antialiasing (1 sample = no antialiasing)
      multiSampleCount = 8;
    };
  };

  // benchmark configuration
  class Benchmark
  {
    // default result is returned when benchmark fails or is disabled
    // this is a time in ms (duration of benchmark)
    gpuDefaultResult = 1000;

    // This determines how to obtain overall setting based on benchmark result.
    // Values are times in ms (benchmark avg duration).
    // if result > firstValue, overallQuality = VeryLow
    // else if result > secondValue, overallQuality = Low
    // etc...
    // Values were obtained from benchmark result on various GPUs (best GPUs are around 60ms, mediocre around 130ms)
    gpuResultLimits[] = {300, 150, 100, 45, 0};

    cpuDefaultResult = 1000;
    cpuResultLimits[] = { 250, 180, 130, 100, 0 };
  };
};
