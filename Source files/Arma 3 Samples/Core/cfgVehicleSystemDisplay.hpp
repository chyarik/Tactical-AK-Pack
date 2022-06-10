

class DefaultVehicleSystemsDisplayManagerLeft
{
  componentType = "VehicleSystemsDisplayManager";

  x = 0.0;
  y = 0.5;
  left = true;
  defaultDisplay = "EmptyDisplay";


  class Components
  {
    class EmptyDisplay
    {
      componentType = "EmptyDisplayComponent";
    };

    class MinimapDisplay
    {
      componentType = "MinimapDisplayComponent";
    };
    class MineDetectorDisplay
    {
      componentType = "MineDetectorDisplayComponent";
    };
    class CrewDisplay
    {
      componentType = "CrewDisplayComponent";
    };

    class UAVDisplay
    {
      componentType = "UAVFeedDisplayComponent";
    };

    class SlingLoadDisplay
    {
      componentType = "SlingLoadDisplayComponent";
    };
  };
};

class DefaultVehicleSystemsDisplayManagerRight
{
  componentType = "VehicleSystemsDisplayManager";

  x = 1.0;
  y = 0.5;
  right = true;
  defaultDisplay = "EmptyDisplay";

  class Components
  {
    class EmptyDisplay
    {
      componentType = "EmptyDisplayComponent";
    };

    class MinimapDisplay
    {
      componentType = "MinimapDisplayComponent";
    };

    class MineDetectorDisplay
    {
      componentType = "MineDetectorDisplayComponent";
    };

    class CrewDisplay
    {
      componentType = "CrewDisplayComponent";
    };

    class UAVDisplay
    {
      componentType = "UAVFeedDisplayComponent";
    };

    class SlingLoadDisplay
    {
      componentType = "SlingLoadDisplayComponent";
    };
  };
};






class DefaultVehicleSystemsDisplayManagerLeftSensors
{
  componentType = "VehicleSystemsDisplayManager";

  x = 0.0;
  y = 0.5;
  left = true;
  defaultDisplay = "EmptyDisplay";

  class Components
  {
    class EmptyDisplay
    {
      componentType = "EmptyDisplayComponent";
    };

    class MinimapDisplay
    {
      componentType = "MinimapDisplayComponent";
    };

    class CrewDisplay
    {
      componentType = "CrewDisplayComponent";
    };

    class UAVDisplay
    {
      componentType = "UAVFeedDisplayComponent";
    };

    class SlingLoadDisplay
    {
      componentType = "SlingLoadDisplayComponent";
    };

    class SensorDisplay
    {
      componentType = "SensorsDisplayComponent";
    };

    class MineDetectorDisplay
    {
      componentType = "MineDetectorDisplayComponent";
    };
  };
};

class DefaultVehicleSystemsDisplayManagerRightSensors
{
  componentType = "VehicleSystemsDisplayManager";

  x = 1.0;
  y = 0.5;
  right = true;
  defaultDisplay = "SensorDisplay";

  class Components
  {
    class SensorDisplay
    {
      componentType = "SensorsDisplayComponent";
    };

    class MineDetectorDisplay
    {
      componentType = "MineDetectorDisplayComponent";
    };

    class EmptyDisplay
    {
      componentType = "EmptyDisplayComponent";
    };

    class MinimapDisplay
    {
      componentType = "MinimapDisplayComponent";
    };

    class CrewDisplay
    {
      componentType = "CrewDisplayComponent";
    };

    class UAVDisplay
    {
      componentType = "UAVFeedDisplayComponent";
    };

    class SlingLoadDisplay
    {
      componentType = "SlingLoadDisplayComponent";
    };
  };
};
