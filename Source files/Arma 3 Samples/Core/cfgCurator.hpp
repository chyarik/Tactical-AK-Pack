class CfgCurator
{
	class EditingArea
	{
		class 2D
		{
			  textureBorder = "";
			  colorBorder[] = {1,1,1,1};
			  iconSizeMultiplier = 0.002;
		};

		class 3D
		{
			objectBorder = "";
		};
	};

  class DrawCamera
  {
    class 2D
    {
      texture = "";
      color[] = {0,0,0,1};
      maxLineDistance = 1000;	//in meters
    };
  };

  class DrawGroup
  {
    textureWest = ProcTextEmpty;
    textureEast = ProcTextEmpty;
    textureGuer = ProcTextEmpty;
    textureCivilian = ProcTextEmpty;
    textureUnknown = ProcTextEmpty;
  };

  class DrawObject
  {
      iconSize = 0.65; // Map icon size compared to background/circle size
      
      //--- Crew role icons
      iconDriver = ProcTextEmpty;
      iconCommander = ProcTextEmpty;
      iconGunner = ProcTextEmpty;
      iconCargo = ProcTextEmpty;

			class PlayerPings
			{ // times in ms
				animationLength = 6000;
				alowRepeatAfter = 4000;
			};

      // 3D scene
      class 3D
      {
        //--- Module icon color
        colorLogic[] = {1,1,1,1};
        colorLogicBackground[] = {0.5,0.5,0.5,1};
        colorLogicDisabled[] = {1,1,1,1};
        colorLogicDisabledBackground[] = {0.5,0.5,0.5,1};

        // Alpha values shared by all states
        alphaNormal = 0.3;
        alphaNormalBackground = 0.15;
        alphaSelected = 1;
        alphaSelectedBackground = 0.5;
        alphaHover = 1;
        alphaHoverBackground = 1;

        // Size ratio
        sizeNormal = 1.0;
        sizeSelected = 1.0;
        sizeTarget = 1.1;

        // Size coef distance range (3D only)
        sizeCoefStartDistance = 50;
        sizeCoefEndDistance = 200;

        //--- Textures in and out of editing zone
        texture = ProcTextEmpty;
        textureBackground = ProcTextEmpty;
        textureDisabled = ProcTextEmpty;
        textureDisabledBackground = ProcTextEmpty;

        //--- Default
        // In editing zone
        color[] = {1,1,1,1};
        colorBackground[] = {"side"}; // Object side color

        // Out of editing zone
        colorDisabled[] = {1,1,1,1};
        colorDisabledBackground[] = {"side"}; // Object side color

        //--- Preview
        colorPreview[] = {1,1,1,1};
        colorPreviewBackground[] = {1,1,1,1};
        colorPreviewDisabled[] = {1,0,0,1};
        colorPreviewDisabledBackground[] = {1,1,1,1};

        //-- Editing colors
        colorSelectionSquare[] = {0,1,0,1};
        colorLineGroupingUnits[] = {0,1,1,1};
        colorBBoxWhileDragging[] = {0,1,1,1};
        colorGroupsPreviewColor[]= {0,1,1,1};

        // icon fading settings (in meters)
        startIconFading = 250;
        endIconFading = 750;

        // icon fading settings (in meters)
        startLogicIconFading = 1000;
        endLogicIconFading = 1500;
      };

      // 2D scene (map)
      class 2D
      {
          size = 26;
          //... same params as in 3D ...
 
          alphaNormal = 0.3;
          alphaNormalBackground = 0.15;
          alphaSelected = 1;
          alphaSelectedBackground = 0.5;
          alphaTarget = 1;
          alphaTargetBackground = 1;
  
          sizeNormal = 1.0;
          sizeSelected = 1.0;
          sizeTarget = 1.1;
  
          sizeCoefStartDistance = 50;
          sizeCoefEndDistance = 200;
 
          //--- Textures in and out of editing zone
          texture = ProcTextEmpty;
          textureBackground = ProcTextWhite;
          textureDisabled = ProcTextEmpty;
          textureDisabledBackground = ProcTextWhite;
 

          color[] = {0,0,0,1};
          colorBackground[] = {"side"};

          colorLogic[] = {1,0.5,1,1};
          colorLogicBackground[] = {1,1,1,1};
          colorLogicDisabled[] = {1,0,1,1};
          colorLogicDisabledBackground[] = {1,0,1,0};

          colorDisabled[] = {1,0,0.5,1};
          colorDisabledBackground[] = {"side"};
 
          colorPreview[] = {0,0,0,0};
          colorPreviewBackground[] = {0,0,0,0};
          colorPreviewDisabled[] = {0,0,0,1};
          colorPreviewDisabledBackground[] = {1,1,1,0.5};
      };
  };
    
  //////////////////////////////////////////////////////////////////////////////////
  // Waypoints
  //////////////////////////////////////////////////////////////////////////////////
  class DrawWaypoint
  {
    class 3D
    {
      texture = ProcTextEmpty;
      colorNormal[] = {0,0,0,0.5};
      colorSelected[] = {1,1,1,0.5};
      colorHover[] = {1,1,1,1};

      textureCycle = ProcTextEmpty;
      colorCycleNormal[] = {0,0,0,0.5};
      colorCycleSelected[] = {1,1,1,0.5};
      colorCycleHover[] = {1,1,1,1};

      texturePreview = ProcTextEmpty;
      colorPreview[] = {0,0,0,0.5}; // Edited preview has only normal state
    };
    class 2D
    {
      texture = ProcTextEmpty;
      colorNormal[] = {0,0,0,0.5};
      colorSelected[] = {1,1,1,0.5};
      colorHover[] = {1,1,1,1};

      textureCycle = ProcTextEmpty;
      colorCycleNormal[] = {0,0,0,0.5};
      colorCycleSelected[] = {1,1,1,0.5};
      colorCycleHover[] = {1,1,1,1};

      texturePreview = ProcTextEmpty;
      colorPreview[] = {0,0,0,0.5}; // Edited preview has only normal state
    };
  };


  //! Draw player icons for 3D and 2D view in curator interface
  class DrawPlayer
  {
    class 3D
    {
      texture = ProcTextEmpty;
      color[] = {0.7,0.1,0,1};

      textureLaser = ProcTextEmpty;
      colorLaser[] = {1,1,1,0.5};

      textureRemote = ProcTextEmpty;
      colorRemote[] = {1,1,1,0.5};
    };
    class 2D
    {
      texture = ProcTextEmpty;
      color[] = {0.7,0.1,0,1};

      textureLaser = ProcTextEmpty;
      colorLaser[] = {1,1,1,0.5};

      textureRemote = ProcTextEmpty;
      colorRemote[] = {1,1,1,0.5};
    };
  };
};