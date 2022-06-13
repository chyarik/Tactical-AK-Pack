class cfgFormations
{
  class West
  {
    class formColumnFixed
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, 0, -1, H_PI4};
        FormationPositionInfo3[] = {1, 0, -1, -H_PI4};
        FormationPositionInfo4[] = {2, 0, -1, H_PI};
      }

      class Pattern
      {
        FormationPositionInfo1[] = {-1, 0, -1, 0};
        FormationPositionInfo2[] = {0, 0, -1, H_PI4};
        FormationPositionInfo3[] = {1, 0, -1, -H_PI4};
        FormationPositionInfo4[] = {2, 0, -1, H_PI};
      };
    }

    class Staggered
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, 1, -1, H_PI4};
        FormationPositionInfo3[] = {1, -1, -1, -H_PI4};
        FormationPositionInfo4[] = {2, 1, -1, H_PI};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-1, -1, -1, 0};
        FormationPositionInfo2[] = {0, 1, -1, H_PI4};
        FormationPositionInfo3[] = {1, -1, -1, -H_PI4};
        FormationPositionInfo4[] = {2, 1, -1, H_PI};
      };
    }

    class Wedge
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, 1, -1, H_PI4};
      };

      class Pattern
      {
        //  FormationPositionInfo{-2, -1, -1.33, -0.25 * H_PI},
        FormationPositionInfo1[] = {-2, -1, -1, -H_PI4};
        FormationPositionInfo2[] = {-1, 1, -1, H_PI4};
      };
    }

    class EchelonLeft
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, -1, -1, -H_PI4};
        FormationPositionInfo3[] = {1, -1, -1, -H_PI4};
        FormationPositionInfo4[] = {2, -1, -1, -H_PI2};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-1, -1, -1, 0};
        FormationPositionInfo2[] = {0, -1, -1, -H_PI4};
        FormationPositionInfo3[] = {1, -1, -1, -H_PI4};
        FormationPositionInfo4[] = {2, -1, -1, -H_PI2};
      };
    }

    class EcholonRight
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, 1, -1, H_PI4};
        FormationPositionInfo3[] = {1, 1, -1, H_PI4};
        FormationPositionInfo4[] = {2, 1, -1, H_PI2};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-1, 1, -1, 0};
        FormationPositionInfo2[] = {0, 1, -1, H_PI4};
        FormationPositionInfo3[] = {1, 1, -1, H_PI4};
        FormationPositionInfo4[] = {2, 1, -1, H_PI2};
      };
    }

    class Vee
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, -H_PI4};
        FormationPositionInfo2[] = {0, 1, 0, H_PI4};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-2, -1, 1, -H_PI4};
        FormationPositionInfo2[] = {-1, 1, 1, H_PI4};
      };
    }

    class Line
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
        FormationPositionInfo2[] = {0, 1, 0, 0};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-2, -1, 0, 0};
        FormationPositionInfo2[] = {-1, 1, 0, 0};
      };
    }

    class Diamond
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-1, 0.5, -0.5, H_PI4, false};
        FormationPositionInfo2[] = {0, -1, 0, -H_PI4, false};
        FormationPositionInfo3[] = {1, 0.5, -0.5, 0, false};
      };
    }

    class File
    {
      class Fixed
      {
        FormationPositionInfo1[] = {-1, 0, 0, 0};
      };

      class Pattern
      {
        FormationPositionInfo1[] = {-1, 0, -0.5, -H_PI4, false};
        FormationPositionInfo2[] = {0, 0, -0.5, H_PI4, false};
      };
    }
  }

  class East : West
  {
    class formColumnFixed : formColumnFixed{};
    class Staggered : Staggered{};
    class Wedge : Wedge{};
    class EchelonLeft : EchelonLeft{};
    class EcholonRight : EcholonRight{};
    class Vee : Vee{};
    class Line : Line{};
    class Diamond : Diamond{};
    class File : File{};
  };
  class Guer : West
  {
    class formColumnFixed : formColumnFixed{};
    class Staggered : Staggered{};
    class Wedge : Wedge{};
    class EchelonLeft : EchelonLeft{};
    class EcholonRight : EcholonRight{};
    class Vee : Vee{};
    class Line : Line{};
    class Diamond : Diamond{};
    class File : File{};
  };
  class Civ : West
  {
    class formColumnFixed : formColumnFixed{};
    class Staggered : Staggered{};
    class Wedge : Wedge{};
    class EchelonLeft : EchelonLeft{};
    class EcholonRight : EcholonRight{};
    class Vee : Vee{};
    class Line : Line{};
    class Diamond : Diamond{};
    class File : File{};
  };
};