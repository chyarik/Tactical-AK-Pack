class CfgBrains
{
  class DefaultSoldierBrain
  {
    class Components
    {
      class AIBrainAimingErrorComponent
      {
      };
      class AIBrainCountermeasuresComponent
      {
        minReactionTime = 0.1;
        maxReactionTime = 3.0;
        randomReactionTimePercent = 0.3;
        CMOnTargettedProbability = 0.5;
      };
      class AIBrainSuppressionComponent
      {
      };
      class AIBrainTargetSelectorComponent
      {
      };
    };
  };
  class DefaultCivilianBrain
  {
    class Components
    {
    };
  };
  class DefaultAnimalBrain
  {
    class Components
    {
    };
  };
};