class cfgBuldozer
{
  uiBackground[]  = {0,0,0,1};
  uiForeground[]  = {1,1,1,1};

  uiBorderSize    = 0.002;
  infoHeight      = 0.022;
  scaleInfoWidth  = 0.3;
  toolInfoWidth   = 0.6;

  fadeTimeMs      = 6000;
  font            = "LucidaConsoleB";
  fontSize        = 0.015;

  //! Settings for brush
  class BrushSelection
  {
    sampledHeightValidityTime  = 120;
  };

  class RoadHelper
  {
    autoReloadAfterEdit = true;
    updateTime  = 0.5;
    updateDist  = 50.0;
    drawDist    = 50.0;
  };
};