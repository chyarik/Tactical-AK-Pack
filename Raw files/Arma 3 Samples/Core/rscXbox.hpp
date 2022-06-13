class RscXTitle : RscText
{
  idc = -1;
  style = ST_CENTER;
  x = 0.025;
  y = 0.02;
  w = 0.95;
  h = 0.08;
  colorText[] = {0.665, 0.665, 0.7, 1};
  sizeEx = SizeLarge;
  text = "";
};

class RscXBackgroundAll : RscText
{
  x = -0.088;
  y = -0.088;
  w = 1.176;
  h = 1.176;
  text = "";
  colorBackground[] = {0.169, 0.235, 0.169, 1};
};

class RscXNotepad : RscText
{
  x = -0.03;
  y = 0.15;
  w = 1.06;
  h = 0.71;
  text = "";
  colorText[] = {1, 1, 1, 0};
};

class RscXNotepadSett: RscText
{
  x = -0.03;
  y = 0.15;
  w = 1.06;
  h = 0.71;
  text = "";
  colorText[] = {1, 1, 1, 1};
};

#define KEY_HINT(name, dik, text) class name {key = dik; hint = text;}

//////////////////////////////////////////////////////////////////////////
//
//  Profile editing
//

class RscDisplayProfileController: RscStandardDisplay
{
	
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = true;

	class controls
	{

    class Vehicle: RscListBox
    {
      idc = IDC_PROF_CONTR_VEHICLE;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.2;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

    class ControllerType: RscListBox
    {
      idc = IDC_PROF_CONTR_TYPE;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.4;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

    class Sensitivity: RscListBox
    {
      idc = IDC_PROF_CONTR_SENSITIVITY;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.6;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

		class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27573529412;
			y = 0.125;
			w =0.47058823529;
			h = 0.62745098039;
			text = "\XMisc\Ctrlxbox.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineL: RscStructuredText
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE;
			x = 0.0;
			y = 0.26;
			w = 0.28;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class HeadlineD: HeadlineL
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.0;
			y = 0.58;
			text = "";
		};

		class HeadlineR: HeadlineL
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE;
			x = 0.74;
			y = 0.58;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.735;
			y = 0.385;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.345;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.265;
			text = "";
		};

		class XButton: AButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.305;
			text = "";
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.185;
			y = 0.2;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			x = 0.545;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.735;
			y = 0.48;
			w = 0.30;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.52;
			text = "";
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.0;
			y = 0.48;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.52;
			text = "";
		};

		class LeftStickX: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_X;
			x = 0.0;
			y = 0.34;
			w = 0.27;
			h = 0.039;
			text = "Left X";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class LeftStickY: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_Y;
			y = 0.30;
			text = "Left Y";
		};

		class LeftStickPush: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB;
			y = 0.38;
			text = "";
		};

		class DStick: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT;
			y = 0.63;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.67;
			text = "";
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.71;
			text = "";
		};

		class RightStickX: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X;
			x = 0.735;
			y = 0.63;
			text = "Right X";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class RightStickY: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y;
			y = 0.67;
			text = "Right Y";
		};

		class RightStickPush: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB;
			y = 0.71;
			text = "";
		};

		class CurrentScheme: RscText
    {
      idc = IDC_PROF_CONTR_SCHEME;
      style = ST_CENTER;
      x = 0.32;
      y = 0.625;
      w = 0.4;
      text = "";
     colorText[] = {0, 0, 0, 1};
    };


		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};


		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB : RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_RightBumper;
			x = 0.0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_LeftBumper;
			x = 0.0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyRightBumper, KEY_XBOX_RightBumper, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyLeftBumper, KEY_XBOX_LeftBumper, $STR_FOREFDB_DISABLED);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

class RscDisplayProfileControllerWheel: RscStandardDisplay
{
	
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = true;

	class controls
	{

    class Vehicle: RscListBox
    {
      idc = IDC_PROF_CONTR_VEHICLE;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.2;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

    class ControllerType: RscListBox
    {
      idc = IDC_PROF_CONTR_TYPE;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.4;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

    class Sensitivity: RscListBox
    {
      idc = IDC_PROF_CONTR_SENSITIVITY;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.6;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

    class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27573529412;
			y = 0.23;
			w =0.47058823529;
			h = 0.50;
			text = "\XMisc\ctrlxbox_wheel.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineD: RscStructuredText
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.0;
			y = 0.26;
			w = 0.28;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.735;
			y = 0.355;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.310;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.230;
			text = "";
		};

		class XButton: AButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.270;
			text = "";
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.74;
			y = 0.62;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			y = 0.66;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.735;
			y = 0.42;
			w = 0.30;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.46;
			text = "";
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.0;
			y = 0.545;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.505;
			text = "";
		};

		class DStick: AButton
		{
			idc = IDC_PROF_CONTR_RIGHT;
			x = 0.0;
			y = 0.30;
			w = 0.27;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.34;
			text = "";
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.38;
			text = "";
		};

		class DStick4: DStick
		{
			idc = IDC_PROF_CONTR_DOWN;
			y = 0.42;
			text = "";
		};

		class CurrentScheme: RscText
    {
      idc = IDC_PROF_CONTR_SCHEME;
      style = ST_CENTER;
      x = 0.27;
      y = 0.615;
      w = 0.4;
      text = "";
     colorText[] = {0, 0, 0, 1};
    };


		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_RightBumper;
			x = 0.0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_LeftBumper;
			x = 0.0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyRightBumper, KEY_XBOX_RightBumper, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyLeftBumper, KEY_XBOX_LeftBumper, $STR_FOREFDB_DISABLED);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

class RscDisplayProfileControllerJoystick: RscStandardDisplay
{
	
	idd = IDD_PROFILE_CONTROLLER;
	movingEnable = true;
	enableSimulation = false;
	enableDisplay = true;

	class controls
	{
		class Vehicle: RscListBox
		{
			idc = IDC_PROF_CONTR_VEHICLE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.2;
			y = 0.71;
			w = 0.2;
      colorText[] = {1, 1, 1, 1};
		};

		class ControllerType: RscListBox
		{
			idc = IDC_PROF_CONTR_TYPE;
			style = SL_HORZ+ST_CENTER+LB_TEXTURES;
			x = 0.4;
      y = 0.71;
			w = 0.2;
      colorText[] = {1, 1, 1, 1};
		};

    class Sensitivity: RscListBox
    {
      idc = IDC_PROF_CONTR_SENSITIVITY;
      style = SL_HORZ+ST_CENTER+LB_TEXTURES;
      x = 0.6;
      y = 0.71;
      w = 0.2;
      colorText[] = {1, 1, 1, 1};
    };

		class Controller: RscPicture
		{
			idc = IDC_PROF_CONTR_IMAGE;
			x = 0.27;
			y = 0.191899;
			w = 0.47;
			h = 0.58316;
			text = "\XMisc\ctrlxbox_joystick.paa";
			colorText[] = {1, 1, 1, 1};
		};

		class HeadlineL: RscStructuredText
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE;
			x = 0.01;
			y = 0.64;
			w = 0.26;
			h = 0.04;
			size = SizeSmall;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class HeadlineD: HeadlineL
		{
			idc = IDC_PROF_CONTR_DPAD;
			x = 0.01;
			y = 0.19;
			w = 0.275;
			h = 0.04;
			text = "";
		};

		class HeadlineR: HeadlineL
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE;
			x = 0.730;
			y = 0.68;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class AButton: RscStructuredText
		{
			idc = IDC_PROF_CONTR_A;
			x = 0.710;
			y = 0.197;
			w = 0.29;
			h = 0.039;
			size = SizeSmall;
			text = "";
			showimage = true;

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class BButton: AButton
		{
			idc = IDC_PROF_CONTR_B;
			y = 0.31;
			text = "";
		};

		class YButton: AButton
		{
			idc = IDC_PROF_CONTR_Y;
			y = 0.40;
			text = "";
			x = 0;
			w = 0.27;
			h = 0.039;

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class XButton: YButton
		{
			idc = IDC_PROF_CONTR_X;
			y = 0.44;
			text = "";
			x = 0;
		};

		class LeftTrigger: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_TRIGGER;
			x = 0.01;
			y = 0.68;
			text = "";
			w = 0.257261;
			h = 0.039;

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class RightTrigger: LeftTrigger
		{
			idc = IDC_PROF_CONTR_RIGHT_TRIGGER;
			y = 0.72;
			x = 0.01;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class WhiteButton: AButton
		{
			idc = IDC_PROF_CONTR_WHITE;
			x = 0.0;
			y = 0.36;
			w = 0.27;
			h = 0.039;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class BlackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BLACK;
			y = 0.48;
			text = "";
			x = 0;
		};

		class BackButton: WhiteButton
		{
			idc = IDC_PROF_CONTR_BACK;
			x = 0.730;
			y = 0.520266;
			w = 0.28;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class StartButton: BackButton
		{
			idc = IDC_PROF_CONTR_START;
			y = 0.560266;
			text = "";
			x = 0.730;
		};

		class LeftStickX: AButton
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB_MOVE_X;
			x = 0.730;
			y = 0.422431;
			w = 0.27;
			h = 0.039;
			text = "Left X";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Left";
			};
		};

		class LeftStickPush: LeftStickX
		{
			idc = IDC_PROF_CONTR_LEFT_THUMB;
			y = 0.35;
			text = "";
			x = 0.71;
		};

		class DStick: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT;
			y = 0.23;
			x = 0.02;
			text = "";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131";
				align = "Right";
			};
		};

		class DStick2: DStick
		{
			idc = IDC_PROF_CONTR_LEFT;
			y = 0.27;
			text = "";
			x = 0.02;
		};

		class DStick3: DStick
		{
			idc = IDC_PROF_CONTR_UP;
			y = 0.31;
			text = "";
			x = 0.02;
		};

		class RightStickX: LeftStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X;
			x = 0.730;
			y = 0.758;
			text = "Right X";

			class Attributes
			{
				font = FontMAIN;
				shadow = false;
				color = "#313131"; 
				align = "Left";
			};
		};

		class RightStickY: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y;
			y = 0.72;
			x = 0.730;
			text = "Right Y";
		};

		class RightStickPush: RightStickX
		{
			idc = IDC_PROF_CONTR_RIGHT_THUMB;
			y = 0.24;
			text = "";
			x = 0.710;
		};

		class CurrentScheme: RscText
		{
			idc = IDC_PROF_CONTR_SCHEME;
			style = ST_CENTER;
			x = 0.388432;
			y = 0.633544;
			w = 0.4;
			text = "";
			colorText[] = {0, 0, 0, 1};
		};
		
		class Title: RscXTitle
		{
			text = $STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE;
		};

		class HintA: RscXKey
		{
			key = KEY_XBOX_A;
			x = 0.47;
			y = 0.88;
			w = 0.3;
		};

		class HintB: RscXKey
		{
			key = KEY_XBOX_B;
			x = 0.47;
			y = 0.935;
			w = 0.3;
		};

		class HintY: RscXKey
		{
			key = KEY_XBOX_Y;
			x = 0.71;
			y = 0.935;
			w = 0.5;
		};

		class HintWhite: RscXKey
		{
			key = KEY_XBOX_RightBumper;
			x = 0;
			y = 0.88;
			w = 0.4;
		};

		class HintBlack: RscXKey
		{
			key = KEY_XBOX_LeftBumper;
			x = 0;
			y = 0.935;
			w = 0.4;
		};

		class HintX: HintY
		{
			key = KEY_XBOX_X;
			x = 0.71;
			y = 0.88;
			w = 0.5;
		};
	};

	class KeyHints
	{
		KEY_HINT(A, KEY_XBOX_A, $STR_DISP_XBOX_HINT_ACCEPT);
		KEY_HINT(B, KEY_XBOX_B, $STR_DISP_XBOX_HINT_CANCEL);
		KEY_HINT(KeyRightBumper, KEY_XBOX_RightBumper, $STR_YAXIS_REVERTED);
		KEY_HINT(KeyLeftBumper, KEY_XBOX_LeftBumper, $STR_FOREFDB_DISABLED);
		KEY_HINT(Y, KEY_XBOX_Y, $STR_DISP_XBOX_HINT_PREV_SCHEME);
		KEY_HINT(X, KEY_XBOX_X, $STR_DISP_XBOX_HINT_NEXT_SCHEME);
	};
};

//////////////////////////////////////////////////////////////////////////
//
//  Multiplayer
//

/*
class RscPendingInvitation
{
	texture = "\xmisc\gameinvitereceived.paa";
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};

class RscPendingInvitationInGame
{
	texture = "\xmisc\gameinvitereceived.paa";
	color[] = {1, 1, 1, 1};
	x = 0.94;
	y = 0.0;
	w = 0.06;
	h = 0.08;
	timeout = 10;
	blinkingPeriod = 2;
};
*/

class RscXMPNotepad: RscText
{
  idc = -1;
  x = -0.05;
  y = 0.1235;
  w = 1.11;
  h = 0.775;
  text = "";
  colorText[] = {1, 1, 1, 1};
};

//Cutscene pause screen.
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	idd = IDD_INTERRUPT;

	#define MovieInterrupt_Y 0.2

	class controls
	{
		class Title: RscTitle {text = $STR_DISP_INT_TITLE;};

		class ButtonSkip: RscButton
		{
			idc = IDC_OK;
			x = 0.35;
			y = MovieInterrupt_Y;
			text = $STR_DISP_XBOX_MOVIE_SKIP;
			default = true;
		};

		class ButtonResume: ButtonSkip
		{
			idc = IDC_CANCEL;
			y = MovieInterrupt_Y + 0.1;
			text = $STR_DISP_XBOX_MOVIE_RESUME;
			default = false;
		};

		class ButtonAgain: ButtonSkip
		{
			idc = IDC_INT_RETRY;
			y = MovieInterrupt_Y + 0.2;
			text = $STR_DISP_XBOX_MOVIE_AGAIN;
			default = false;
		};

		class ButtonAbort: ButtonSkip
		{
			idc = IDC_ABORT;
			y = MovieInterrupt_Y + 0.4;
			text = $STR_DISP_INT_ABORT;
			default = false;
		};

		//Mission name and difficulty
		class MissionTitle: RscText
		{
			idc = IDC_INT_MISSIONNAME;
			x = 0.025 * safezoneW + safezoneX;
			y = 0.92 * safezoneH + safezoneY;
			w = 0.625 * safezoneW;
			h = 0.04 * safezoneH;
		};

		//Indication of modded game
		class TrafficLight: RscActiveText
		{
			idc = IDC_INT_TRAFFIC_LIGHT;
			x = 0.95 * safezoneW + safezoneX;
			y = 0.92 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.04 * safezoneH;
			style = ST_PICTURE;
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			text = ProcTextWhite;
		};
	};
};
