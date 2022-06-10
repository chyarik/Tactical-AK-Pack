//Default text/font attributes for structured text controls.
class DefaultTextAttributes
{
	font = FontMAIN;
	color = "#ffffff";
	size = 1;
	align = "left";
	valign = "middle";
	shadow = true;
	shadowOffset = 0.1;
	shadowColor = "#000000";
	underline = false;
};

//Default sounds for controls.
class DefaultSounds
{
	soundOK[] = {"", 0.1, 1};
	soundCancel[] = {"", 0.1, 1};
	soundChangeFocus[] = {"", 0.1, 1};
	soundFail[] = {"", 0.1, 1};
};

//Standard static text.
class RscText
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_STATIC;
	idc = -1;
	style = ST_LEFT;
	w = 0.1;
	h = 0.05;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	text = "";
  fixedWidth = false;
  shadow = 0;
};

//Small static text.
class RscTextSmall: RscText
{
	h = 0.03;
	sizeEx = Size_Text_Small;
};

//Standard static text title.
class RscTitle: RscText
{
	style = ST_CENTER;
	x = 0.15;
	y = 0.06;
	w = 0.7;
  shadow = 0;
};

//Standard progress bar.
class RscProgress
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_PROGRESS;
	style = 0;
	colorFrame[] = Color_Text_Default;
	colorBar[] = Color_Text_Default;
	texture = ProcTextWhite;
	w = 1.2;
	h = 0.03;
  shadow = 0;
};
class RscProgressNotFreeze
{
  deletable = false;
  fade = 0;
  idc = -1;
  type = CT_ANIMATED_TEXTURE;
  style = 0;
  shadow = 0;
  x = 0;
  y = 0;
  w = 0.5;
  h = 0.1;
  texture = ProcTextTransparent;
};
class RscPicture
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = FontMAIN;
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
  fixedWidth = false;
  shadow = 0;
};
class RscLadderPicture : RscPicture
{
  //! value that is represented by top of the ladder
  topValue = 100.0;
  //! value that is represented by bottom of the ladder
  bottomValue = 0.0;
  // visible part of the image, width is always stretched to component width, height is adjusted according to visibleRange parameter
  // 1.0 -> image is stretched that the height of the image fits the height of the component
  // 0.5 -> 50% of the height of the image is visible within the component
  // negative value -> keeps aspect of the image
  visibleRange = -1.0;
};

class RscPictureKeepAspect: RscPicture
{
	style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
};

//Standard HTML control.
class RscHTML
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_HTML;
	idc = -1;
	style = 0;
	filename = "";
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	colorBold[] = {0, 0, 0.2, 1};
	colorLink[] = Color_Orange;
	colorLinkActive[] = Color_Orange;
	colorPicture[] = {1, 1, 1, 1};
	colorPictureLink[] = {1, 1, 1, 1};
	colorPictureSelected[] = {1, 1, 1, 1};
	colorPictureBorder[] = {0, 0, 0, 0};
	tooltipColorText[] = {0, 0, 0, 1};
	tooltipColorBox[] = {0, 0, 0, 0.5};
	tooltipColorShade[] = {1, 1, 0.7, 1};
	shadow = 0;

	prevPage = ProcTextWhite;
	nextPage = ProcTextWhite;

	class H1
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H2
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H3
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H4
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H5
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class H6
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};

	class P
	{
		font = FontMAIN;
		fontBold = FontMAIN;
		sizeEx = Size_Text_Default;
	};
};

//Standard button.
class RscButton
{
  deletable = false;
  fade = 0;
  // common control items
	access = ReadAndWrite;
	type = CT_BUTTON;
	style = ST_LEFT;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.1;

  // text properties
	text = "";
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	colorText[] = Color_Black;
	colorDisabled[] = Color_Gray;

  // background properties
  colorBackground[] = Color_GrayLight;
  colorBackgroundDisabled[] = Color_GrayLight;
  colorBackgroundActive[] = Color_Orange;
  // distance of background from shadow
  offsetX = 0.004; 
  offsetY = 0.004;
  // distance of background from shadow when button is pressed
  offsetPressedX = 0.002; 
  offsetPressedY = 0.002;
  // color of the rectangle around background when focused
  colorFocused[] = Color_Black; 

  // shadow properties
  colorShadow[] = Color_Black;
  shadow = 0;

  // border properties
  colorBorder[] = Color_Black;
  // when negative, the border is on the right side of background
  borderSize = 0.008; 

  // sounds
  soundEnter[] = {"", 0.1, 1};
  soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
};

class RscShortcutButton
{
  deletable = false;
  fade = 0;
  type = CT_SHORTCUTBUTTON;
  style = 0;
  x = 0.1;
  y = 0.1;
  w = 0.3;
  h = 0.05;
  shadow = 0;

  class HitZone
  {
    left = 0.0;
    top = 0.0;
    right = 1.0;
    bottom = 1.0;
  };   
  class ShortcutPos
  {
    left = 0.005;
    top = 0.005;
    // aspect 4 : 3
	w = 0.0225; 
    h = 0.03;
  };   
  class TextPos
  {
    left = 0.02;
    top = 0.005;
    right = 0.005;
    bottom = 0.005;
  };   
  // background animated textures    
  animTextureNormal = ProcTextWhite;
  animTextureDisabled = ProcTextGray;
  animTextureOver = "#(argb,8,8,3)color(0.8,0.3,0,1)";
  animTextureFocused = "#(argb,8,8,3)color(1,0.5,0,1)";
  animTexturePressed = ProcTextRed;
  animTextureDefault = ProcTextGreen;

  period = 0.1;
  // color animation period
  periodFocus = 0.4; 
  // color animation period
  periodOver = 0.4; 

  shortcuts[] = {};
  // texture to show when no shortcut is accessible
  textureNoShortcut = ProcTextTransparent;  

  
  // text and icon color
  color[] = {0,0,0,0.6}; 
  // text color when button has focus. Color pulses between colorFocused and color2.
  colorFocused[] = {0,0,0,1};
  // secondary text and icon color
  color2[] = {0,0,0,1}; 
  // text and icon color
  colorDisabled[] = {0,0,0,0.3}; 

  // text and icon color
  colorBackground[] = {1,1,1,1}; 
  // background texture color when button has focus. Color pulses between colorBackgroundFocused and colorBackground2.
  colorBackgroundFocused[] = {1,1,1,1};
  // secondary text and icon color
  colorBackground2[] = {1,1,1,0.5}; 

  text = "";
  // text height
  size = 0.04;

  soundEnter[] = {"", 0.1, 1};
  soundPush[] = {"", 0.1, 1};
  soundClick[] = {"", 0.1, 1};
  soundEscape[] = {"", 0.1, 1};

  class Attributes
  {
    font = FontMAIN;
    color = "#000000";
    align = "left";
    shadow = false;
  };
};

class RscButtonSmall: RscButton
{
	w = 0.12;
};

//Standard edit text field.
class RscEdit
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_EDIT;
	style = ST_LEFT;
	x = 0; y = 0;
	h = 0.04; w = 0.2;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	colorDisabled[] = {1, 1, 1, 0.25};  //Text and border color if control is in disabled state.
	colorSelection[] = {1, 1, 1, 0.25};
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	autocomplete = "";
	text = "";
	size = 0.2;
	shadow = 0;
	canModify = true; //If FALSE, only: LEFT, RIGHT, HOME, END, CTRL+C, SHIFT + LEFT/RIGHT/HOME/END keys are allowed.
};

//Standard combo box.
class RscCombo
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_COMBO;
	style = 0;
	h = 0.05;
	arrowEmpty = ProcTextGray;
	arrowFull = ProcTextGray;
	wholeHeight = 0.25;
	colorSelect[] = Color_GrayLight;
	colorText[] = Color_Text_Default;
	colorBackground[] = Color_GrayDark;
  colorScrollbar[] = Color_Text_Default;
	colorDisabled[] = {1, 1, 1, 0.25};        //Text color in disabled state.
	font = FontMAIN;
	sizeEx = Size_Text_Default;

  colorPicture[] = {1, 1, 1, 1};            //Color of picture when item is unselected
  colorPictureSelected[] = {0, 0, 0, 1};    //Color of picture when item is selected
  colorPictureDisabled[] = {1, 1, 1, 0.25}; //Color of picture when ListBox is disabled

  colorPictureRight[] = {1, 1, 1, 1};             //Color of picture on the right when item is unselected
  colorPictureRightSelected[] = {1, 1, 1, 1};     //Color of picture on the right when item is selected
  colorPictureRightDisabled[] = {1, 1, 1, 0.25};  //Color of picture on the right when ListBox is disabled

  colorTextRight[] = {1, 1, 1, 1};                //Color of text on the right when item is unselected
  colorSelectRight[] = {0, 0, 0, 1};              //First color of text on the right when item is selected
  colorSelect2Right[] = {0, 0, 0, 1};             //Second color of text on the right when item is selected

  //Tooltip colors
  tooltipColorText[] = {1, 1, 1, 1};
  tooltipColorBox[] = {1, 1, 1, 1};
  tooltipColorShade[] = {0, 0, 0, 0.65};

  soundSelect[] = {"", 0.1, 1};
  soundExpand[] = {"", 0.1, 1};
  soundCollapse[] = {"", 0.1, 1};
  maxHistoryDelay = 1.0;
  shadow = 0;
  class ComboScrollBar: ScrollBar {};
};

//Standard listbox.
class RscListBox
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_LISTBOX;
	style = 0;
	x = 0;
	y = 0;
	w = 0.4;
	h = 0.4;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	rowHeight = 0;
	colorText[] = Color_Text_Default;
	colorDisabled[] = {1, 1, 1, 0.25};  //Text color if control is in disabled state.
	colorScrollbar[] = Color_Text_Default;
	colorSelect[] = Color_Black;
	colorSelect2[] = Color_Orange;
 	colorSelectBackground[] = Color_GrayLight;
	colorSelectBackground2[] = Color_GrayDark;
	colorBackground[] = Color_Black;
  maxHistoryDelay = 1.0;
	soundSelect[] = {"", 0.1, 1};
	period = 1;
  autoScrollSpeed = -1;
  autoScrollDelay = 5;
  autoScrollRewind = false;
  arrowEmpty = ProcTextWhite;
  arrowFull = ProcTextWhite;
  shadow = 0;

  colorPicture[] = {1, 1, 1, 1};            //Color of picture when item is unselected
  colorPictureSelected[] = {0, 0, 0, 1};    //Color of picture when item is selected
  colorPictureDisabled[] = {1, 1, 1, 0.25}; //Color of picture when ListBox is disabled

  colorPictureRight[] = {1, 1, 1, 1};             //Color of picture on the right when item is unselected
  colorPictureRightSelected[] = {1, 1, 1, 1};     //Color of picture on the right when item is selected
  colorPictureRightDisabled[] = {1, 1, 1, 0.25};  //Color of picture on the right when ListBox is disabled

  colorTextRight[] = {1, 1, 1, 1};                //Color of text on the right when item is unselected
  colorSelectRight[] = {0, 0, 0, 1};              //First color of text on the right when item is selected
  colorSelect2Right[] = {0, 0, 0, 1};             //Second color of text on the right when item is selected

  //Tooltip colors
  tooltipColorText[] = {1, 1, 1, 1};
  tooltipColorBox[] = {1, 1, 1, 1};
  tooltipColorShade[] = {0, 0, 0, 0.65};

  class ListScrollBar: ScrollBar {};
};

class RscListNBox
{
  deletable = false;
  fade = 0;
  access = ReadAndWrite;
  type = CT_LISTNBOX;
  style = 0;
  w = 0.4;
  h = 0.4;
  font = FontMAIN;
  sizeEx = Size_Text_Default;
  rowHeight = 0;
  colorText[] = Color_Text_Default;
  colorScrollbar[] = Color_Text_Default;
  colorSelect[] = Color_Black;
  colorSelect2[] = Color_Orange;
  colorSelectBackground[] = Color_GrayLight;
  colorSelectBackground2[] = Color_GrayDark;
  colorBackground[] = Color_Black;
  maxHistoryDelay = 1.0;
  soundSelect[] = {"", 0.1, 1};
  period = 1;
  autoScrollSpeed = -1;
  autoScrollDelay = 5;
  autoScrollRewind = false;
  arrowEmpty = ProcTextWhite;
  arrowFull = ProcTextWhite;
  drawSideArrows = false;
  columns[] = {0.3,0.6,0.7};
  idcLeft = -1;
  idcRight = -1;
  shadow = 0;
  class ListScrollBar: ScrollBar {};
};

class RscXListBox
{
  deletable = false;
  fade = 0;
	idc = -1;
	style = 0;	
  type = CT_XLISTBOX;
	x = 0.1;
	y = 0.1;
	w = 0.3;
	h = 0.05;
  shadow = 0;
       
    //barvy bitmap
    color[] = {1,1,1,0.6};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.3};

    //konfigurace textur, není to nutné jelikož xlistbox používá textury definovane v class CfgWrapperUI > Slider
    arrowEmpty = ProcTextWhite;
    arrowFull = ProcTextOrange;
    border = ProcTextBlack;

    //barvy textu
    colorSelect[] = {1,1,1,1};
    colorText[] = {1,1,1,0.8};
    font = FontMAIN;
    sizeEx = Size_Text_Default;
    soundSelect[] = {"", 0.1, 1};

    colorPicture[] = {1, 1, 1, 1};            //Color of picture when item is unselected
    colorPictureSelected[] = {0, 0, 0, 1};    //Color of picture when item is selected
    colorPictureDisabled[] = {1, 1, 1, 0.25}; //Color of picture when ListBox is disabled

    colorPictureRight[] = {1, 1, 1, 1};             //Color of picture on the right when item is unselected
    colorPictureRightSelected[] = {1, 1, 1, 1};     //Color of picture on the right when item is selected
    colorPictureRightDisabled[] = {1, 1, 1, 0.25};  //Color of picture on the right when ListBox is disabled

    //Tooltip colors
    tooltipColorText[] = {1, 1, 1, 1};
    tooltipColorBox[] = {1, 1, 1, 1};
    tooltipColorShade[] = {0, 0, 0, 0.65};
};

class RscTree
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_TREE;
	style = 0;
	colorBackground[] = {0.35, 0.38, 0.36, 1};
	colorSelect[] = {0.7, 0.7, 0.7, 1};
  colorDisabled[] = { 1, 0, 0, 1};
	colorText[] = {1, 1, 1, 0.75};
	colorSelectText[] = Color_Black;
	colorBorder[] = {1, 1, 1, 1};
  colorSearch[] = { 1, 1, 1, 1 };
  //! Background color of items which are selected by multiselection
  colorMarked[] = {0.2, 0.3, 0.7, 1};
  //! Foreground color of items which are selected by multiselection
  colorMarkedText[] = Color_Black;
  //! Color used if item is selected and selected by multiselection
  colorMarkedSelected[] = {0, 0.5, 0.5, 1};
  //! Enable/Disable multiselection on ctree
  multiselectEnabled = false;
  //! Enable/Disable automatic tree expand and collapse on double click.
  expandOnDoubleclick = false;

  colorPicture[] = { 1, 1, 1, 1 };            //Color of picture when item is unselected
  colorPictureSelected[] = { 0, 0, 0, 1 };    //Color of picture when item is selected
  colorPictureDisabled[] = { 1, 1, 1, 0.25 }; //Color of picture when item is disabled

  colorPictureRight[] = { 1, 1, 1, 1 };             //Color of picture on the right when item is unselected
  colorPictureRightSelected[] = { 1, 1, 1, 1 };     //Color of picture on the right when item is selected
  colorPictureRightDisabled[] = { 1, 1, 1, 0.25 };  //Color of picture on the right when item is disabled

	colorArrow[] = {1, 1, 1, 1};
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	maxHistoryDelay = 1.0;
	shadow = 0;
};

//Standard slider
class RscSlider
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_SLIDER;
	style = SL_HORZ;
	x = 0;
	y = 0;
	h = 0.028;
	w = 0.3;
	color[] = Color_Text_Default;
	colorActive[] = {1, 1, 1, 1};
  shadow = 0;
};

//Remove
class RscSliderH: RscSlider {};

class RscXSliderH
{
  deletable = false;
  fade = 0;
	type = CT_XSLIDER;
	style = SL_HORZ  + SL_TEXTURES;
	h = __EVAL(3 * _ySpacing);
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisable[] = {1,1,1,0.4};
	arrowEmpty = ProcTextWhite;
	arrowFull = ProcTextWhite;
	border = ProcTextWhite;
	thumb = ProcTextWhite;
  shadow = 0;
};

//Standard active text.
class RscActiveText
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_ACTIVETEXT;
	style = ST_CENTER;
	h = 0.05;
	w = 0.15;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
  color[] = Color_Text_Default;
	colorActive[] = {1, 0.5, 0, 1};
	colorDisabled[] = {1, 1, 1, 0.25};
	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
	text = "";
	default = 0;
  shadow = 0;
};

//Standard structured text.
class RscStructuredText
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_STRUCTURED_TEXT;
	idc = -1;
	style = 0;
	h = 0.05;
	text = "";
	size = Size_Text_Default;
	colorText[] = Color_Text_Default;
  shadow = 0;

	class Attributes
	{
		font = FontMAIN;
		color = "#ffffff";
		colorLink = "#ff0000";
		align = "center";
		shadow = true;
	};
};

//Standard controls group.
class RscControlsGroup
{
  deletable = false;
  fade = 0;
  type = CT_CONTROLS_GROUP;
  idc = -1;
  style = 0;
  x = 0; y = 0;
  w = 1; h = 1;
  shadow = 0;

  class VScrollbar : ScrollBar
  {
    color[] = Color_Text_Default;
    width = 0.021;
    autoScrollEnabled = true;
  };

  class HScrollbar : ScrollBar
  {
    color[] = Color_Text_Default;
    height = 0.028;
  };

  class Controls {};
};

class RscBackgroundStripeTop: RscText
{
	access = ReadAndWrite;
	x = -10.0;
	y = -10.0;
	w = 21;
	h = 10.125;
	text = ;
	colorBackground[] = {0.1, 0.1, 0.1, 1};
};

class RscBackgroundStripeBottom: RscText
{
	access = ReadAndWrite;
	x = -10.0;
	y = 0.875;
	w = 21;
	h = 10.125;
	text = ;
	colorBackground[] = {0.1, 0.1, 0.1, 1};
};

class RscDisplayBackgroundStripes
{
	access = ReadAndWrite;
	class Background1: RscBackgroundStripeTop {};
	class Background2: RscBackgroundStripeBottom {};
};

class RscCinemaBorder: RscDisplayBackgroundStripes
{
	idd = -1;
	movingEnable = false;
	enableSimulation = true;
	class controlsBackground
	{
		class Background1: RscBackgroundStripeTop
		{
		  	colorBackground[] = {0, 0, 0, 1};
		};

		class Background2: RscBackgroundStripeBottom
		{
		  	colorBackground[] = {0, 0, 0, 1};
		};
	};
};

//Standard toolbox.
class RscToolbox
{
	deletable = false;
	fade = 0;
	access = ReadAndWrite;
	type = CT_TOOLBOX;
	style = ST_CENTER;
	colorText[] = Color_Text_Default;
	color[] = Color_Text_Default;
	colorTextSelect[] = Color_Text_Default;
	colorSelect[] = Color_Text_Default;
	colorTextDisable[] = Color_Text_Default;
	colorDisable[] = Color_Text_Default;
	colorSelectedBg[] = {0,0,0,255};
	font = FontMAIN;
	sizeEx = Size_Text_Small;
	shadow = 0;
	//Number of rows
	rows = 1;
	//Number of columns
	columns = 2;
	//Texts displayed in the fields of ToolBox
	strings[] = {"", ""};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;
};

class RscHitZones
{
	type = CT_HITZONES;
	style = 0;
	shadow = 0;

	x = 0;
	y = 0;
	w = 0;
	h = 0;

	xCount = 0; // Number of hitzones per row
	yCount = 0; // Number of hitzones per column
	xSpace = 0; // Size of horizontal space between hitzones
	ySpace = 0; // Size of vertical space between hitzones
};

class RscXKeyShadow
{
	type = CT_XKEYDESC;
	idc = -1;
	style = 0;
	h = 0.06;
	size = SizeNormal;
	shadow = 0;
	class Attributes
	{
		font = FontX;
		color = "#C0C1BF";
		align = "left";
	};
	class AttributesImage
	{
		color = "#ffffff";
	};
};

class RscXKey : RscXKeyShadow
{
  class Attributes
  {
		shadow = false;		
	};
};
//Standard map.
class RscMapControl
{
  deletable = false;
  fade = 0;
	access = ReadAndWrite;
	type = CT_MAP_MAIN;
	idc = IDC_MAP;
	style = ST_PICTURE;
	shadow = 0;
  // map background
	colorBackground[] = {1, 1, 1, 1};
  // area outside of map
  colorOutside[] = {1, 0, 0, 1};
	colorText[] = {0, 0, 0, 1};
	font = FontMAIN;
	sizeEx = Size_Text_Default;

  scaleMin = 0.001; // 0.02
  scaleMax = 1.0;
  scaleDefault = 0.16;
	
	colorSea[] = {0.56, 0.8, 0.98, 0.5};
	colorForest[] = {0.6, 0.8, 0.2, 0.5};
	colorRocks[] = {0.5, 0.5, 0.5, 0.5};
	colorCountlines[] = {0.65, 0.45, 0.27, 0.5};
	colorMainCountlines[] = {0.65, 0.45, 0.27, 1};
	colorCountlinesWater[] = {0, 0.53, 1, 0.5};
	colorMainCountlinesWater[] = {0, 0.53, 1, 1};
	colorForestBorder[] = {0.4, 0.8, 0, 1};
	colorRocksBorder[] = {0.5, 0.5, 0.5, 1};
	colorPowerLines[] = {0, 0, 0, 1};
  colorRailWay[] = {0.8, 0.2, 0.3, 1};
	colorNames[] = {0, 0, 0, 1};
	colorInactive[] = {1, 1, 1, 0.5};
	colorLevels[] = {0, 0, 0, 1};

  // next 8 moved from IslandMap
  colorTracks[] = {0.35, 0.2, 0.1, 0.8};
  colorRoads[] = {0.35, 0.2, 0.1, 1};
  colorMainRoads[] = {0, 0, 0, 1};
  colorTracksFill[] = {0, 0, 0, 0};
  colorRoadsFill[] = {1, 0.92, 0.74, 1};
  colorMainRoadsFill[] = {0.93, 0.11, 0.14, 0.8};
  colorGrid[] = {0.15, 0.15, 0.05, 0.9};
  colorGridMap[] = {0.25, 0.25, 0.1, 0.75};

  //widthRailWay = 5.0;
	
	fontLabel = FontMAIN;
	sizeExLabel = Size_Text_Default;
	fontGrid = FontMAIN;
	sizeExGrid = Size_Text_Default;
	fontUnits = FontMAIN;
	sizeExUnits = Size_Text_Default;
	fontNames = FontMAIN;
	sizeExNames = Size_Text_Default;
	fontInfo = FontMAIN;
	sizeExInfo = Size_Text_Default;
	fontLevel = FontMAIN;
	sizeExLevel = Size_Text_Default;
	
	text = ProcTextWhite;
	
	stickX[] = {0.2, {"Gamma", 1, 1.5}};
	stickY[] = {0.2, {"Gamma", 1, 1.5}};
	
	// Map drawing quality coefficients:
	//  units - the width of the screen == 800
	//  limits - size of the landscape square on screen when objects are drawn or single square content is drawn
	
	//@{ coefficients which determine rendering density / threshold
	// seas
	ptsPerSquareSea = 6;   
	// textures
	ptsPerSquareTxt = 8;   
	// count-lines
	ptsPerSquareCLn = 8;   
	// exposure
	ptsPerSquareExp = 8;   
	// cost
	ptsPerSquareCost = 8;  
	//@}
	
	//@{ coefficients which determine when rendering of given type is done
	// forests
	ptsPerSquareFor = 4.0;   
	// forest edges
	ptsPerSquareForEdge = 10.0;   
	// roads
	ptsPerSquareRoad = 2;  
	// other objects
	ptsPerSquareObj = 10;    
	//@}

  showCountourInterval = true;

  // _scale is % of map you can see;  satellite map alpha is
  // if map (_scale < alphaFadeStartScale) -> alpha = 1.0 * maxSatelliteAlpha;
  // else map (_scale > alphaFadeEndScale) -> alpha = 0.0;
  // else -> alpha = ((alphaFadeEndScale - _scale) / (alphaFadeEndScale - alphaFadeStartScale)) * maxSatelliteAlpha;  
  maxSatelliteAlpha = 0.66;
  alphaFadeStartScale = 0.05;
  alphaFadeEndScale = 0.15;

	
  class Legend
  {
    x = 0.7;
    y = 0.85;
    w = 0.25;
    h = 0.1;

    font = FontMAIN;
    sizeEx = Size_Text_Default;

    colorBackground[] = {1, 1, 1, 1};
    color[] = {0, 0, 0, 1};
  };

	class ActiveMarker
	{
		color[] = {0.3, 0.1, 0.9, 1};
		size = 50;
	};

	class Command
	{
		icon = ProcTextWhite;
		color[] = {0, 0, 0, 1};
		size = 18;
		// not used
		importance = 1; 
		// not used
		coefMin = 1;
		// not used
		coefMax = 1;
	};
  class Task
  {
    // icons returned by ICON_TASK_STATE
    taskNone      = ProcTextTransparent;
    taskCreated   = ProcTextBlack;
    taskAssigned  = ProcTextWhite;
    taskSucceeded = ProcTextGreen;
    taskFailed    = ProcTextRed;
    taskCanceled  = ProcTextOrange;

    colorCreated[] = {1, 1, 1, 1};
    colorCanceled[] = {1, 1, 1, 1};
    colorDone[] = {1, 1, 1, 1};
    colorFailed[] = {1, 1, 1, 1};

    color[] = {1, 1, 1, 1};
    size = 18;
	// not used
    importance = 1; 
	// not used
    coefMin = 1;
	// not used
    coefMax = 1;
  };
  class CustomMark
  {
    icon = ProcTextOrange;
    color[] = {1, 1, 1, 1};
    size = 18;
	// not used
    importance = 1;
	// not used
    coefMin = 1;
	// not used
    coefMax = 1;
  };
	class Tree
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		 // limit for map scale
		importance = 0.9 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};

	class SmallTree
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		 // limit for map scale
		importance = 0.6 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Bush
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16; // limit for map scale
		importance = 0.2 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Church
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		 // limit for map scale
		importance = 2 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};

	class Chapel
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		 // limit for map scale
		importance = 1 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Cross
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 0.7 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Rock
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 1.5 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Bunker
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 1.5 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fortress
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 2 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fountain
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 16;
		// limit for map scale
		importance = 1 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};

	class ViewTower
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 2.5 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Lighthouse
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 3 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Quay
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 2 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};

	class Fuelstation
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 2 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class Hospital
	{
		icon = ProcTextBlack;
		color[] = {1, 0, 0, 1};
		size = 16;
		// limit for map scale
		importance = 2 * 16 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
	};

	class BusStop
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};

	class LineMarker
	{
		lineWidthThin	= 0.008; // thickness of line drawn in map if cursor is not on the line
		lineWidthThick	= 0.014; // thickness of line drawn in map if cursor is on the line
		lineDistanceMin	= 0.00003; // [screen%] minimum distance of pointer from line segment drawn in map to by considered as "cursor on line"
		lineLengthMin	= 5; // [m] minimum lenght of line segment drawn in map
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)"; // texture used in diary top panel for color dropdown menu
	};

  class Transmitter
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
  };

  class Stack
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
  };

  class Ruin
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
  };

  class Tourism
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
  };

  class Watertower
  {
		icon = ProcTextBlack;
		color[] = {0, 0, 1, 1};
		size = 8;
		// limit for map scale
		importance = 1 * 8 * 0.05; 
		coefMin = 0.25;
		coefMax = 4;
  };

	class Waypoint
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 24;
		// not used
		importance = 1; 
		// not used
		coefMin = 1; 
		// not used
		coefMax = 1; 
	};

	class WaypointCompleted
	{
		icon = ProcTextBlack;
		color[] = {0, 0, 0, 1};
		size = 24;
		// not used
		importance = 1; 
		// not used
		coefMin = 1; 
		// not used
		coefMax = 1; 
	};
};

class RscObject
{
	access = ReadAndWrite;
	type = CT_OBJECT;
	scale = 1.0;
	direction[] = {0, 0, 1};
	up[] = {0, 1, 0};
  shadow = 0;
};

class RscStandardDisplay
{
	access = ReadAndWrite;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = false;
};
class RscLineBreak 
{
  idc = -1;
  type = CT_LINEBREAK;
  shadow = 0;
};
class RscCompass: RscObject
{
  idc = -1;
  type = CT_OBJECT_ZOOM;
  model = "\core\compass\compass.p3d";
  selectionArrow = "arrow";
  position[] = {0.026, 0.047, 0.20};
  direction[] = {0, 1, 1};

  up[] = {0, 0, -1};
  positionBack[] = {0.0749, -0.059, 0.315};

  inBack = true;
  enableZoom = false;
  zoomDuration = 0.5;

};

class RscWatch: RscObject
{
  idc = -1;
  type = CT_OBJECT_ZOOM;
  model = "\core\watch\watch.p3d";
  selectionDate1 = "date1";
  selectionDate2 = "date2";
  selectionDay = "day";
  position[] = {0.026, 0.047, 0.20};
  positionBack[] = {0.05, -0.05, 0.22};
  inBack = true;
  enableZoom = true;
  zoomDuration = 0.5;

};
//In-game GPS minimap
class RscMiniMap
{
	access = ReadAndWrite;
	idd = IDD_MINIMAP;
	movingEnable = false;
	enableSimulation = true;
	enableDisplay = true;
	
	class controls 
	{
		class MiniMap: RscMapControl 
		{
			IDC = IDC_MINIMAP;
			x = 0.1;
			y = 0.1;
			w = 0.3;
			h = 0.3;
      showCountourInterval = false;
		};
	};
};

//In-game GPS minimap small
class RscMiniMapSmall: RscMiniMap {};

class RscButtonImages
{
};

class RscObjectives
{
  access = ReadAndWrite;
  done = ProcTextWhite;
  failed = ProcTextWhite;
  active = ProcTextWhite;
  cancled = ProcTextWhite;
};

class RscCheckBox
{
  type = CT_CHECKBOX;
};
