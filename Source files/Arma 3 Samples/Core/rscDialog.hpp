// Template for message boxes.
class RscMsgBox
{
  access = ReadAndWrite;

  // Controls above the dynamic area (will move up)
  class Top
  {
    // Title
    class Title : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.1;
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      text = "Arma 3";
      style = ST_CENTER;
    };
  };

  // Controls which will be resized
  class Middle
  {
    // Background of the dialog
    class Background : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.2;
      colorBackground[] = {0.25, 0.25, 0.25, 1};
    };
    // Background of the text
    class SubBackground : RscText
    {
      x = 0.17;
      y = 0.48;
      w = 0.66;
      h = 0.04;
      colorBackground[] = {0.75, 0.75, 0.75, 1};
    };
    // Text itself
    class Text : RscStructuredText
    {
      idc = IDC_MSG_BOX_MESSAGE;
      x = 0.19;
      y = 0.5;
      w = 0.62;
      h = 0;
      size = 0.04;
      class Attributes
      {
        font = FontMAIN;
        color = "#000000";
        align = "center";
        shadow = false;
      };
    };
  };

  // Controls below the dynamic area (will move down)
  class Bottom
  {
    class Button1: RscShortcutButton
    {
      type = CT_SHORTCUTBUTTON;
      idc = IDC_OK;
      text = $STR_DISP_OK;
      style = 0;
      default = 0;

      x = 0.4;
      y = 0.54;
      w = 0.2;
      h = 0.04;

      color[] = {1, 1, 1, 1};
      colorText[] = {1, 0.537, 0, 1};
      colorDisabled[] = {1, 1, 1, 0.25};
      colorBackground[] = {1, 0.537, 0, 0.6};
      colorActiveBackground[] = {1, 0.537, 0, 1};

      period = 0.5;
      font = FontMAIN;
      size = Size_Text_Default;
      sizeEx = Size_Text_Default;  

      soundEnter[] = {"", 0.1, 1};
      soundPush[] = {"", 0.1, 1};
      soundClick[] = {"", 0.1, 1};
      soundEscape[] = {"", 0.1, 1};

      action = "";

      class Attributes
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
      class AttributesImage
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
    };

    class Button2 : Button1
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      default = 1;

      x = 0.63;
    };
  };
};


// Template for error message boxes.
class RscMsgBoxError
{
  access = ReadAndWrite;

  // Controls above the dynamic area (will move up)
  class Top
  {
    // Title
    class Title : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.1;
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      text = "Arma 3";
      style = ST_CENTER;
    };
  };

  // Controls which will be resized
  class Middle
  {
    // Background of the dialog
    class Background : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.2;
      colorBackground[] = {0.25, 0.25, 0.25, 1};
    };
    // Background of the text
    class SubBackground : RscText
    {
      x = 0.17;
      y = 0.48;
      w = 0.66;
      h = 0.04;
      colorBackground[] = {0.75, 0.75, 0.75, 1};
    };
    // Text itself
    class Text : RscStructuredText
    {
      idc = IDC_MSG_BOX_MESSAGE;
      x = 0.19;
      y = 0.5;
      w = 0.62;
      h = 0;
      size = 0.04;
      class Attributes
      {
        font = FontMAIN;
        color = "#000000";
        align = "center";
        shadow = false;
      };
    };
  };

  // Controls below the dynamic area (will move down)
  class Bottom
  {
    class Button1: RscShortcutButton
    {
      type = CT_SHORTCUTBUTTON;
      idc = IDC_OK;
      text = $STR_DISP_OK;
      style = 0;
      default = 0;

      x = 0.4;
      y = 0.54;
      w = 0.2;
      h = 0.04;

      color[] = {1, 1, 1, 1};
      colorText[] = {1, 0.537, 0, 1};
      colorDisabled[] = {1, 1, 1, 0.25};
      colorBackground[] = {1, 0.537, 0, 0.6};
      colorActiveBackground[] = {1, 0.537, 0, 1};

      period = 0.5;
      font = FontMAIN;
      size = Size_Text_Default;
      sizeEx = Size_Text_Default;  

      soundEnter[] = {"", 0.1, 1};
      soundPush[] = {"", 0.1, 1};
      soundClick[] = {"", 0.1, 1};
      soundEscape[] = {"", 0.1, 1};

      action = "";

      class Attributes
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
      class AttributesImage
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
    };

    class Button2 : Button1
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      default = 1;

      x = 0.63;
    };
  };
};

// Template for message boxes (error messages).
class RscMsgBox3
{
  access = ReadAndWrite;

  // Controls above the dynamic area (will move up)
  class Top
  {
    // Title
    class Title : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.1;
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      text = "Arma 3";
      style = ST_CENTER;
    };
  };

  // Controls which will be resized
  class Middle
  {
    // Background of the dialog
    class Background : RscText
    {
      x = 0.15;
      y = 0.4;
      w = 0.7;
      h = 0.2;
      colorBackground[] = {0.25, 0.25, 0.25, 1};
    };
    // Background of the text
    class SubBackground : RscText
    {
      x = 0.17;
      y = 0.48;
      w = 0.66;
      h = 0.04;
      colorBackground[] = {0.75, 0.75, 0.75, 1};
    };
    // Text itself
    class Text : RscStructuredText
    {
      idc = IDC_MSG_BOX_MESSAGE;
      x = 0.19;
      y = 0.5;
      w = 0.62;
      h = 0;
      size = 0.04;
      class Attributes
      {
        font = FontMAIN;
        color = "#000000";
        align = "center";
        shadow = false;
      };
    };
  };

  // Controls below the dynamic area (will move down)
  class Bottom
  {
    class Button1: RscShortcutButton
    {
      type = CT_SHORTCUTBUTTON;
      idc = IDC_OK;
      text = $STR_DISP_OK;
      style = 0;
      default = 0;

      x = 0.18;
      y = 0.51;
      w = 0.2;
      h = 0.1;

      color[] = {1, 1, 1, 1};
      colorText[] = {1, 0.537, 0, 1};
      colorDisabled[] = {1, 1, 1, 0.25};
      colorBackground[] = {1, 0.537, 0, 0.6};
      colorActiveBackground[] = {1, 0.537, 0, 1};

      period = 0.5;
      font = FontMAIN;
      size = Size_Text_Default;
      sizeEx = Size_Text_Default;  

      soundEnter[] = {"", 0.1, 1};
      soundPush[] = {"", 0.1, 1};
      soundClick[] = {"", 0.1, 1};
      soundEscape[] = {"", 0.1, 1};

      action = "";

      class Attributes
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
      class AttributesImage
      {
        font = FontMAIN;
        color = "#E5E5E5";
        align = "center";
      };
    };

    class Button2 : Button1
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      default = 1;
      x = 0.62;
    };

    class Button3 : Button1
    {
      idc = IDC_USER_BUTTON;
      text = $STR_DISP_LATER;
      x = 0.4;
    };
  };
};


class RscDisplayFileSelect
{
  idd = IDD_FILE_SELECT_DIALOG;
  class controlsBackground
  {
    class TitleBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 1 * 0.03 + -0.1;
      y = 1 * 0.04 + 0.0;
      w = 31.5 * 0.03;
      h = 1 * 0.04;
    };

    class TreeBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 1 * 0.03 + -0.1;
      y = 2.1 * 0.04 + 0.0;
      w = 15.7 * 0.03;
      h = 20 * 0.04;
    };

    class ListBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 16.8 * 0.03 + -0.1;
      y = 2.1 * 0.04 + 0.0;
      w = 15.7 * 0.03;
      h = 20 * 0.04;
    };
  };

  class controls
  {
    class Title: RscTitle
    {
      style = ST_LEFT;
      idc = IDC_FILE_SELECT_PATH;
      text = "";
      x = 1 * 0.03 + -0.1;
      y = 1 * 0.04 + 0.0;
      w = 31.5 * 0.03;
      h = 1 * 0.04;
    };
    class Button1: RscShortcutButton
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 26.5 * 0.03 + -0.1;
      y = 22 * 0.04 + 0.0;
      w = 6 * 0.03;
      h = 1 * 0.04;
    };
    class Button2 : Button1
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      x = 1 * 0.03 + -0.1;
      y = 22 * 0.04 + 0.0;
      w = 6.25 * 0.03;
      h = 1 * 0.04;
    };
    class TreeDirectory : RscTree
    {
      idc = IDC_FILE_SELECT_DIR_TREE;
      x = 1 * 0.03 + -0.1;
      y = 2.5 * 0.04 + 0.0;
      w = 14 * 0.03;
      h = 19 * 0.04;
    };
    class ListFiles: RscListbox
    {
      idc = IDC_FILE_SELECT_FILE_LIST;
      x = 15.5 * 0.03 + -0.1;
      y = 2.5 * 0.04 + 0.0;
      w = 17 * 0.03;
      h = 19 * 0.04;
    };
  };
}; 

class RscDisplayFileSelectImage
{
  idd = IDD_FILE_SELECT_DIALOG;
  class controlsBackground
  {
    class TitleBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 1 * 0.03 + -0.1;
      y = 1 * 0.04 + 0.0;
      w = 31.5 * 0.03;
      h = 1 * 0.04;
    };

    class TreeBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 1 * 0.03 + -0.1;
      y = 2.1 * 0.04 + 0.0;
      w = 15.7 * 0.03;
      h = 20 * 0.04;
    };

    class ListBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 16.8 * 0.03 + -0.1;
      y = 2.1 * 0.04 + 0.0;
      w = 15.7 * 0.03;
      h = 11.95 * 0.04;
    };

    class PictureBackground: RscText
    {
      colorBackground[] = {0.2, 0.2, 0.2, 1};
      x = 16.8 * 0.03 + -0.1;
      y = 14.15 * 0.04 + 0.0;
      w = 15.7 * 0.03;
      h = 7.95 * 0.04;
    };
  };

  class controls
  {
    class Title: RscTitle
    {
      style = ST_LEFT;
      idc = IDC_FILE_SELECT_PATH;
      text = "";
      x = 1 * 0.03 + -0.1;
      y = 1 * 0.04 + 0.0;
      w = 31.5 * 0.03;
      h = 1 * 0.04;
    };
    class Button1: RscShortcutButton
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 26.5 * 0.03 + -0.1;
      y = 22 * 0.04 + 0.0;
      w = 6 * 0.03;
      h = 1 * 0.04;
    };
    class Button2 : Button1
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      x = 1 * 0.03 + -0.1;
      y = 22 * 0.04 + 0.0;
      w = 6.25 * 0.03;
      h = 1 * 0.04;
    };
    class TreeDirectory : RscTree
    {
      idc = IDC_FILE_SELECT_DIR_TREE;
        x = 1 * 0.03 + -0.1;
      y = 2.5 * 0.04 + 0.0;
      w = 14 * 0.03;
      h = 19 * 0.04;
    };
    class ListFiles: RscListbox
    {
      idc = IDC_FILE_SELECT_FILE_LIST;
      x = 15.5 * 0.03 + -0.1;
      y = 2.5 * 0.04 + 0.0;
      w = 17 * 0.03;
      h = 10.5 * 0.04;
    };
    class OverviewPicture: RscPicture
    {
      idc = IDC_FILE_SELECT_PREVIEW;
      x = 15.5 * 0.03 + -0.1;
      y = 13.5 * 0.04 + 0.0;
      w = 17 * 0.03;
      h = 8 * 0.04;
    };
  };
}; 

class RscMap
{
  access = ReadAndWrite;

  class controls
  {
    class Map: RscMapControl
    {
      moveOnEdges = false;
      x = 0;
      y = 0;
      w = 0.83;
      h = 1;
      shadow = 0;
    };
  };
};

class RscDisplayChannel
{
  idd = IDD_CHANNEL;

  class controls
  {
    class Channel: RscText
    {
      idc = IDC_CHANNEL;
      x = 0.41;
      y = 0.74;
      w = 0.18;
      h = 0.04;
      style = ST_CENTER;
      text = $STR_DISP_ERROR;
      colorBackground[] = {0, 0, 0, 0.75};
    };

    class Background: RscText
    {
      x = 0.41;
      y = 0.62;
      w = 0.18;
      h = 0.12;
      colorBackground[] = {0, 0, 0, 0.75};
      colorText[] = {0, 0, 0, 1};
      text = ;
    };

    class Picture: RscPicture
    {
      idc = IDC_CHANNEL_VOICE;
      text = ProcTextWhite;
      x = 0.46;
      y = 0.63;
      w = 0.08;
      h = 0.1;
      colorText[] = {1, 1, 1, 1};
    };
  };
};

class RscDisplayChat
{
  idd = IDD_CHAT;

  class controls
  {
    class Background: RscText
    {
      x = 0.14;
      y = 0.81;
      w = 0.50;
      colorBackground[] = {0, 0, 0, 0.75};
      colorText[] = {0, 0, 0, 1};
      text = ;
    };

    class Line: RscEdit
    {
      idc = IDC_CHAT;
      x = 0.14;
      y = 0.81;
      w = 0.50;
      text = "";
      colorBackground[] = {0, 0, 0, 0.5};
      colorText[] = {1, 1, 1, 1};
      autocomplete = "general";
    };
  };
};

class RscDisplayVoiceChat
{
  idd = IDD_VOICE_CHAT;

  class controls
  {
    class Background: RscText
    {
      x = 0.015;
      y = 0.773;
      w = 0.04;
      h = 0.05;
      colorBackground[] = {0, 0, 0, 0.75};
      colorText[] = {0, 0, 0, 1};
      text = ;
    };

    class Picture: RscPicture
    {
      idc = IDC_VOICE_CHAT;
      text = ProcTextWhite;
      x = 0.015;
      y = 0.773;
      w = 0.04;
      h = 0.05;
      colorText[] = {1, 1, 1, 1};
    };
  };
};

class RscDisplayMissionEditor
{
  idd = IDD_MISSION_EDITOR;

  // Attribute browser colors
  colorAttrDialog[] = {1, 1, 1, 1};
  colorAttrPosition[] = {0, 1, 0, 1};
  colorAttrDirection[] = {0, 1, 0, 1};
  colorAttrLink[] = {0, 0, 1, 1};
  colorAttrParent[] = {1, 0, 0, 1};
  colorAttrCounter[] = {0.5, 0, 0.5, 1};

  class ControlsBackground
  {
    // transparent background for 3D view
    class Background : RscListBox
    {
      idc = IDC_EDITOR_BACKGROUND;
      x = 0;
      y = 0;
      w = 1;
      h = 1;
      colorBackground[] = {0, 0, 0, 0};
    };
  };

  class Controls
  {
    class T_Background1: RscText
    {
      x = 0; y = 0;
      w = 1; h = 0.06;
      colorBackground[] = Color_Background;
    };

    class T_Frame1: RscText
    {
      x = 0; y = 0;
      w = 1; h = 0.06;
      style = ST_FRAME;
    };

    __EXEC(B_Load_x = 0.29; B_Load_w = 0.1; B_Load_space = 0.01)

      //Load buton.
    class B_Load: RscButton
    {
      idc = IDC_EDITOR_LOAD;
      x = __EVAL(B_Load_x + 0 * B_Load_w + 0 * B_Load_space); y = 0.01;
      w = __EVAL(B_Load_w); h = 0.04;
      sizeEx = Size_Text_Small;
      text = $STR_DISP_ARCMAP_LOAD;
      toolTip = $STR_UI_EDITOR_LOAD_T;
      default = 0;
    };

    //Save button.
    class B_Save: B_Load
    {
      idc = IDC_EDITOR_SAVE;
      x = __EVAL(B_Load_x + 1 * B_Load_w + 1 * B_Load_space);
      text = $STR_DISP_ARCMAP_SAVE;
      toolTip = $STR_UI_EDITOR_SAVE_T;
    };

    //Restart button.
    class B_Restart: B_Load
    {
      idc = IDC_EDITOR_RESTART;
      x = __EVAL(B_Load_x + 2 * B_Load_w + 2 * B_Load_space);
      text = $STR_UI_EDITOR_RESTART;
      toolTip = $STR_UI_EDITOR_RESTART_T;
    };

    //Clear button.
    class B_Clear: B_Load
    {
      idc = IDC_EDITOR_CLEAR;
      x = __EVAL(B_Load_x + 3 * B_Load_w + 3 * B_Load_space);
      text = $STR_DISP_ARCMAP_CLEAR;
      toolTip = $STR_UI_EDITOR_CLEAR_T;
    };

    //Preview button.
    class B_Preview: B_Load
    {
      idc = IDC_EDITOR_PREVIEW;
      x = __EVAL(B_Load_x + 4 * B_Load_w + 4 * B_Load_space);
      text = $STR_DISP_ARCMAP_PREVIEW;
      toolTip = $STR_UI_EDITOR_PREVIEW_T;
      default = 1;
    };

    //Map button.
    class B_Map: B_Load
    {
      idc = IDC_EDITOR_MAP;
      x = __EVAL(B_Load_x + 5 * B_Load_w + 5 * B_Load_space);
      text = $STR_UI_EDITOR_HIDE_MAP;
      toolTip = $STR_UI_EDITOR_HIDE_MAP_T;
    };

    //Minimize button.
    class B_Exit: B_Load
    {
      idc = IDC_CANCEL;
      x = __EVAL(B_Load_x + 6 * B_Load_w + 6 * B_Load_space);
      w = 0.04;
      text = "X";
      toolTip = $STR_UI_EDITOR_QUIT_T;
    };

    class T_Background2: RscText
    {
      x = 0.75; y = 0.06;
      w = 0.25; h = 0.94;
      colorBackground[] = Color_Background;
    };

    //Object tree.
    class T_ObjectBrowser: RscTree
    {
      idc = IDC_EDITOR_OBJECTS;
      style = 0;
      x = 0.75; y = 0.06;
      w = 0.25; h = 0.3;
      sizeEx = Size_Text_Very_Small;
      colorBackground[] = {0, 0, 0, 0};
    };
    class T_Help1: RscText
    {		
      idc = IDC_EDITOR_CONTROLS_HELP;
      style = ST_MULTI;
      sizeEx = Size_Text_Small;
      lineSpacing = 1;
      x = 0.75; y = 0.36;
      w = 0.25; h = 0.29;						
    };

    //Object info.
    class L_ObjectInfo: RscListBox
    {
      idc = IDC_EDITOR_ATTRIBUTES;
      x = 0.75; y = 0.65;
      w = 0.25; h = 0.175;
      sizeEx = Size_Text_Small;
      colorSelect[] = Color_Black;
      colorSelect2[] = Color_Black;
      colorSelectBackground[] = Color_White;
      colorSelectBackground2[] = Color_White;
      rowHeight = 0.029;
      period = 0;
    };

    //New object combo.
    class L_NewObject: RscListBox
    {
      idc = IDC_EDITOR_TYPE_LIST;
      x = 0.75; y = 0.825;
      w = 0.25; h = 0.175;
      sizeEx = Size_Text_Small;
      colorSelect[] = Color_Black;
      colorSelect2[] = Color_Black;
      colorSelectBackground[] = Color_White;
      colorSelectBackground2[] = Color_White;
      rowHeight = 0.029;
      period = 0;
    };

    //Map.
    class M_Map: RscMapControl
    {
      moveOnEdges = false;
      x = 0; y = 0.06;
      w = 0.75; h = 0.94;

      iconCamera = ProcTextWhite;
      iconCameraColor[] = {Green, 1};
      iconCameraSize = 24;
    };
  };

  class Menu
  {
    type = CT_CONTEXT_MENU;
    idc = IDC_EDITOR_MENU;
    style = 0;
    x = 0; y = 0; w = 0; h = 0;
    colorBackground[] = Color_Background;
    colorBorder[] = Color_White;
    colorSeparator[] = Color_White;
    colorSelectBackground[] = {1, 1, 1, 0.3};
    colorChecked[] = {0, 0, 1, 1};
    colorEnabled[] = Color_Text_Default;
    colorDisabled[] = {1, 1, 1, 0.5};
    sizeEx = 0.025;
    font = FontMAIN;
  };
};

class RscDisplayEditObject
{
  idd = IDD_EDIT_OBJECT;

  class Controls
  {
    class T_Background: RscText
    {
      colorBackground[] = Color_Background;
      x = 0.02; y = 0.08;
      w = 0.71; h = 0.9;
    };

    class T_Title: RscTitle
    {
      style = ST_TITLE;
      x = 0.02; y = 0.09;
      w = 0.71;
      text = $STR_UI_EDITOR_OBJECT_PROPERTIES;
    };

    class G_ControlsGroup: RscControlsGroup
    {
      idc = IDC_EDIT_OBJECT_CONTROLS;
      x = 0.02; y = 0.15;
      w = 0.71; h = 0.73;

      class Controls
      {
        //Controls are added by the program.
      };
    };

    class B_OK: RscShortcutButton
    {
      idc = IDC_OK;
      x = 0.23; y = 0.915;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };

    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.37;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };

  class Title: RscText
  {
    x = 0.02; y = 0;
    w = 0.18; h = 0.025;
    sizeEx = 0.025;
    text = "";
  };

  class Preview: RscText
  {
    style = ST_PICTURE;
    x = 0.02; y = 0.030;
    w = 0.18; h = 0.24;
    sizeEx = 0.025;
    text = "";
  };

  class Edit: RscEdit
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
    sizeEx = 0.025;
    text = "";
    colorSelection[] = {1, 1, 1, 0.25};
  };

  class Combo: RscCombo
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
    wholeHeight = 0.125;
    sizeEx = 0.025;
  };

  class Slider: RscSliderH
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.025;
  };

  class Tree: RscTree
  {
    x = 0.21; y = 0;
    w = 0.47; h = 0.39;
    sizeEx = 0.025;
  };
};

class RscDisplayMissionLoad
{
  idd = IDD_MISSION_LOAD;

  class Controls
  {
    class T_Background: RscText
    {
      x = 0.175; y = 0.32;
      w = 0.4; h = 0.3;
      colorBackground[] = Color_Background;
    };

    class T_Title: RscTitle
    {
      style = ST_TITLE;
      x = 0.175; y = 0.33;
      w = 0.4;
      text = $STR_UI_EDITOR_LOAD_TITLE;
    };

    class T_Island: RscText
    {
      x = 0.18; y = 0.4;
      w = 0.14; h = 0.03;
      sizeEx = 0.03;
      text = $STR_UI_EDITOR_LOAD_ISLAND;
    };

    class C_Island: RscCombo
    {
      idc = IDC_MISSION_LOAD_ISLAND;
      x = 0.325; y = 0.4;
      w = 0.24; h = 0.03;
      wholeHeight = 0.24;
      sizeEx = 0.03;
    };

    class T_Mission: T_Island
    {
      y = 0.45;
      text = $STR_UI_EDITOR_LOAD_MISSION;
    };

    class C_Mission: C_Island
    {
      idc = IDC_MISSION_LOAD_MISSION;
      y = 0.45;
    };

    class B_OK: RscShortcutButton
    {
      idc = IDC_OK;
      x = 0.24; y = 0.55;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.38;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };
};

class RscDisplayMissionSave
{
  idd = IDD_MISSION_SAVE;

  class Controls
  {
    class T_Background: RscText
    {
      x = 0.175; y = 0.32;
      w = 0.4; h = 0.3;
      colorBackground[] = Color_Background;
    };

    class T_Title: RscTitle
    {
      style = ST_TITLE;
      x = 0.175; y = 0.33;
      w = 0.4;
      text = $STR_UI_EDITOR_SAVE_TITLE;
    };

    class T_Mission: RscText
    {
      x = 0.18; y = 0.4;
      w = 0.14; h = 0.03;
      sizeEx = 0.03;
      text = $STR_UI_EDITOR_SAVE_MISSION;
    };

    class E_Mission: RscEdit
    {
      idc = IDC_MISSION_SAVE_MISSION;
      x = 0.325; y = 0.4;
      w = 0.24; h = 0.03;
      sizeEx = 0.03;
    };

    class T_Placement: T_Mission
    {
      y = 0.45;
      text = $STR_UI_EDITOR_SAVE_EXPORT;
    };

    class C_Placement: RscCombo
    {
      idc = IDC_MISSION_SAVE_PLACEMENT;
      x = 0.325; y = 0.45;
      w = 0.24; h = 0.03;
      wholeHeight = 0.24;
      sizeEx = 0.03;
    };

    class B_OK: RscShortcutButton
    {
      idc = IDC_OK;
      x = 0.24; y = 0.55;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };
    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.38;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };
};

/// Scripting help
class RscDisplayScriptingHelp
{
  idd = -1;

  class Controls
  {
    class Background: RscText
    {
      x = 0.2; y = 0.2;
      w = 0.6; h = 0.6;
      colorBackground[] = Color_Background;
    };

    class Content: RscHTML
    {
      idc = IDC_SCRITING_HELP;
      x = 0.22; y = 0.22;
      w = 0.56; h = 0.46;

      // Title
      class H1
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Default;
      };
      // Subtitle
      class H2
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Small;
      };
      // Text
      class P
      {
        font = FontMAIN;
        fontBold = FontMAIN;
        sizeEx = Size_Text_Very_Small;
      };

    };
    class Back: RscButtonSmall
    {
      idc = IDC_SCRITING_HELP_BACK;
      x = 0.22; y = 0.71;
      w = 0.05; h = 0.05;
      // TODO: move to stringtable / replace by a picture
      text = "<-"; 
    };
    class Forward: RscButtonSmall
    {
      idc = IDC_SCRITING_HELP_FORWARD;
      x = 0.29; y = 0.71;
      w = 0.05; h = 0.05;
      // TODO: move to stringtable / replace by a picture
      text = "->";
    };

    class CopyExample: RscButtonSmall
    {
      idc = IDC_SCRITING_HELP_EXAMPLE;
      x = 0.46; y = 0.71;
      w = 0.15; h = 0.05;
      text = "Copy example";
    };

    class Done: RscButtonSmall
    {
      idc = IDC_CANCEL;
      x = 0.63; y = 0.71;
      w = 0.15; h = 0.05;
      text = $STR_DISP_CLOSE;
      default = 1;
    };
  };
};

/// Position of diagnostics displays
#define CAPT_L 0.03
#define CAPT_W 0.90

/// Performance display
class RscDisplayCapture
{
  idd = IDD_CAPTURE;

  class Controls
  {
    class Background: RscText
    {
      x = CAPT_L; y = 0.1;
      w = CAPT_W; h = 0.85;
      colorBackground[] = Color_Background;
      moving = true;
    };

    class Index: RscTree
    {
      idc = IDC_CAPTURE_INDEX;
      x = CAPT_L + 0.02; y = 0.12;
      w = CAPT_W - 0.04; h = 0.40;
    }
    class TimeLines
    {
      type = CT_USER;
      style = 0;
      idc = IDC_CAPTURE_TIMELINES;
      shadow = 0;
      x = CAPT_L + 0.02; y = 0.53;
      w = CAPT_W - 0.04; h = 0.26;
      class Scrollbar
      {

      };
      font = FontMAIN;
      colorLines[] = {0, 0, 0, 1};
      colorBackground[] = {1, 1, 1, 1};
      colorBar[] = {0.8, 0.8, 0.8, 1};
      colorSelection[] = {1, 0, 0, 1};
    }
    class Info : RscText
    {
      idc = IDC_CAPTURE_INFO;
      x = CAPT_L + 0.02; y = 0.795;
      w = CAPT_W - 0.04; h = 0.035;
      text = "Info about the selection";
      sizeEx = Size_Text_Small;
    };

    class ZoomIn: RscShortcutButton
    {
      idc = IDC_CAPTURE_ZOOMIN;
      shortcuts[] = {KEY_XBOX_X};
      x = CAPT_L; y = 0.81;
      w = CAPT_W * 0.33; h = 0.11;
      text = "Zoom +";
    };
    class ZoomOut: RscShortcutButton
    {
      idc = IDC_CAPTURE_ZOOMOUT;
      shortcuts[] = {KEY_XBOX_Y};
      x = CAPT_L + 0.33 * CAPT_W; y = 0.81;
      w = CAPT_W * 0.33; h = 0.11;
      text = "Zoom -";
    };
    class Done: RscShortcutButton
    {
      idc = IDC_CANCEL;
      shortcuts[] = {KEY_XBOX_B};
      x = CAPT_L + 0.66 * CAPT_W; y = 0.81;
      w = CAPT_W * 0.33; h = 0.11;
      text = $STR_DISP_CLOSE;
    };
    class Export: RscShortcutButton
    {
      idc = IDC_CAPTURE_EXPORT;
      shortcuts[] = {KEY_XBOX_RightBumper};
      x = CAPT_L; y = 0.865;
      w = CAPT_W * 0.33; h = 0.11;
      text = "Copy";
    };
    class ExportAll: RscShortcutButton
    {
      idc = IDC_CAPTURE_EXPORT_ALL;
      shortcuts[] = {};
      x = CAPT_L + 0.33 * CAPT_W; y = 0.865;
      w = CAPT_W * 0.33; h = 0.11;
      text = "Copy All";
    };
    class ImportAll: RscShortcutButton
    {
      idc = IDC_CAPTURE_IMPORT_ALL;
      shortcuts[] = {};
      x = CAPT_L + 0.66 * CAPT_W; y = 0.865;
      w = CAPT_W * 0.33; h = 0.11;
      text = "Paste All";
    };
    class ButtonAverages: RscShortcutButton
		{
			idc = IDC_CAPTURE_AVERAGES;
      shortcuts[] = {};
			text = "Averages"; //--- ToDo: Localize;
      x = CAPT_L; y = 1.5;
      w = CAPT_W * 0.33; h = 0.6;
		};
		class ButtonSavePreviousData: RscShortcutButton
		{
			idc = IDC_CAPTURE_SAVE_ARCHIVE;
      shortcuts[] = {};
			text = "Save archive"; //--- ToDo: Localize;
      x = CAPT_L + 0.33 * CAPT_W; y = 1.5;
      w = CAPT_W * 0.33; h = 0.6;
		};
		class ButtonPreviousData: RscShortcutButton
		{
			idc = IDC_CAPTURE_PREVIOUS_DATA;
      shortcuts[] = {};
			text = "Show archived"; //--- ToDo: Localize;
      x = CAPT_L + 0.66 * CAPT_W; y = 1.5;
      w = CAPT_W * 0.33; h = 0.6;
		};
  }
}

//Interrupt screen when previewing a mission from the editor.
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
  idd = IDD_INTERRUPT;

  __EXEC(int_y = 0.2; int_h = 0.08;)

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_INT_TITLE;};

    class B_Edit2D: RscButton
    {
      idc = IDC_INT_EDIT_MAP;
      x = 0.35; y = __EVAL(int_y + 0 * int_h);
      h = 0.08;
      text = $STR_UI_EDITOR_INT_EDIT2D;
      default = 0;
    };
    class B_Edit3D: B_Edit2D
    {
      idc = IDC_INT_EDIT_3D;
      y = __EVAL(int_y + 1 * int_h);
      text = $STR_UI_EDITOR_INT_EDIT3D;
    };
    class B_Restart: B_Edit2D
    {
      idc = IDC_INT_RETRY;
      y = __EVAL(int_y + 2 * int_h);
      text = $STR_UI_EDITOR_RESTART;
    };

    class B_Options: B_Edit2D
    {
      idc = IDC_INT_OPTIONS;
      y = __EVAL(int_y + 4 * int_h);
      text = $STR_DISP_INT_OPTIONS;
    };

    class B_Quit: B_Edit2D
    {
      idc = IDC_INT_ABORT;
      y = __EVAL(int_y + 6 * int_h);
      text = $STR_UI_EDITOR_INT_QUIT;
    };
    class B_Cancel: B_Edit2D
    {
      idc = IDC_CANCEL;
      y = __EVAL(int_y + 7 * int_h);
      text = $STR_UI_EDITOR_INT_CONTINUE;
      default = 1;
    };
  };
};

//Interrupt screen when editing a mission in 3D.
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
  idd = IDD_INTERRUPT;

  class controls
  {
    class Title: RscTitle {text = $STR_DISP_INT_3DEDIT_TITLE;};

    class B_Edit2D: RscButton
    {
      idc = IDC_INT_EDIT_MAP;
      x = 0.35; y = __EVAL(int_y + 0 * int_h);
      h = 0.08;
      text = $STR_UI_EDITOR_INT_EDIT2D;
      default = 0;
    };
    class B_Preview: B_Edit2D
    {
      idc = IDC_INT_EDIT_PREVIEW;
      y = __EVAL(int_y + 1 * int_h);
      text = $STR_DISP_ARCMAP_PREVIEW;
    };
    class B_Restart: B_Edit2D
    {
      idc = IDC_INT_RETRY;
      y = __EVAL(int_y + 2 * int_h);
      text = $STR_UI_EDITOR_RESTART;
    };

    class B_Options: B_Edit2D
    {
      idc = IDC_INT_OPTIONS;
      y = __EVAL(int_y + 4 * int_h);
      text = $STR_DISP_INT_OPTIONS;
    };

    class B_Quit: B_Edit2D
    {
      idc = IDC_INT_ABORT;
      y = __EVAL(int_y + 6 * int_h);
      text = $STR_UI_EDITOR_INT_QUIT;
    };
    class B_Cancel: B_Edit2D
    {
      idc = IDC_CANCEL;
      y = __EVAL(int_y + 7 * int_h);
      text = $STR_UI_EDITOR_INT_CONTINUE;
      default = 1;
    };
  };
};

/// Selection of action when addon is given as an application argument
class RscDisplayAddonActions
{
  idd = IDD_ADDON_ACTIONS;

  class Controls
  {
    class T_Background: RscText
    {
      x = 0.175; y = 0.32;
      w = 0.4; h = 0.3;
      colorBackground[] = Color_Background;
    };

    class T_Title: RscTitle
    {
      style = ST_TITLE;
      x = 0.175; y = 0.33;
      w = 0.4;
      text = $STR_DISP_ADDON_ACTIONS_TITLE;
    };

    class T_Actions: RscText
    {
      x = 0.18; y = 0.4;
      w = 0.14; h = 0.03;
      sizeEx = 0.03;
      text = $STR_DISP_ADDON_ACTIONS_ACTIONS;
    };

    class C_Actions: RscCombo
    {
      idc = IDC_ADDON_ACTIONS;
      x = 0.325; y = 0.4;
      w = 0.24; h = 0.03;
      wholeHeight = 0.24;
      sizeEx = 0.03;
    };

    class B_OK: RscShortcutButton
    {
      idc = IDC_OK;
      x = 0.24; y = 0.55;
      w = 0.13; h = 0.05;
      text = $STR_DISP_OK;
      default = 1;
    };

    class B_NewMod: B_OK
    {
      idc = IDC_ADDON_ACTIONS_NEW_MOD;
      x = 0.52;
      text = "New Mod";
      default = 0;
    };

    class B_Cancel: B_OK
    {
      idc = IDC_CANCEL;
      x = 0.38;
      text = $STR_DISP_CANCEL;
      default = 0;
    };
  };
};

class RscDisplayNewMod : RscStandardDisplay
{
  idd = IDD_NEW_MOD;

  class Controls
  {
    class Title: RscTitle
    {
      text = "Install New Mod";
    };

    // Mod name
    class TextName : RscText
    {
      x = 0.025; y = 0.12;
      w = 0.3;
      text = "Mod name";
    };
    class ValueName : RscEdit
    {
      idc = IDC_MOD_NAME;
      x = 0.35; y = 0.12;
      w = 0.4;
    };

    // Mod directory name
    class TextDir : RscText
    {
      x = 0.025; y = 0.22;
      w = 0.3;
      text = "Mod directory";
    };
    class ValueDir : RscEdit
    {
      idc = IDC_MOD_DIR;
      x = 0.35; y = 0.22;
      w = 0.4;
    };

    // Buttons
    class B_Cancel : RscShortcutButton
    {
      idc = IDC_CANCEL;
      text = $STR_DISP_CANCEL;
      x = 0.50; y = 0.90;
      w = 0.25; h=0.1;
    };
    class B_OK : B_Cancel
    {
      idc = IDC_OK;
      text = $STR_DISP_OK;
      x = 0.75;
      default = 1;
    };
  };
};

class RscDisplayUavTerminalWaypointMenu
{
  type = CT_CONTEXT_MENU;
  idc = IDC_IGUI_AVT_EDITOR_MENU;
  style = 0;
  x = 0; y = 0; w = 0; h = 0;
  colorBackground[] = Color_Background;
  colorBorder[] = Color_White;
  colorSeparator[] = Color_White;
  colorSelectBackground[] = {1, 1, 1, 0.3};
  colorChecked[] = {0, 0, 1, 1};
  colorEnabled[] = Color_Text_Default;
  colorDisabled[] = {1, 1, 1, 0.5};
  sizeEx = 0.025;
  font = FontMAIN;
};
