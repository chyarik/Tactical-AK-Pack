#ifndef _COMMON_DEFS_HPP
#define _COMMON_DEFS_HPP

#define true 1
#define false 0

#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

#define FontMAIN "TahomaB"
#define FontDEBUG "LucidaConsoleB"

#define SizeXSmall ( 16 / 408 )
#define SizeSmall ( 16 / 408 )
#define SizeNormal ( 21 / 408 )
#define SizeMedium ( 29 / 408 )
#define SizeLarge ( 36 / 408 )

#define SizeTitle 0.08
#define SizeBookTitle 0.06
#define SizeBook 0.05
#define SizeHint 0.0468
#define SizeListBig  0.042
#define SizeList  0.0378

#define SizeMapMarker  32

#define Black 0, 0, 0
#define Green 0.0, 0.6, 0.0
#define Red 0.7, 0.1, 0.0
#define Yellow 0.8, 0.6, 0.0
#define White 0.8, 0.8, 0.8
#define ShineGreen 0.07, 0.7, 0.2
#define ShineRed 1, 0.2, 0.2
#define ShineYellow 1, 1, 0
#define ShineWhite 1, 1, 1
#define Blue 0.1, 0.1, 0.9

#define Gray1 0.00, 0.00, 0.00
#define Gray2 0.20, 0.20, 0.20
#define Gray3 0.50, 0.50, 0.50
#define Gray4 0.60, 0.60, 0.60
#define Gray5 0.80, 0.80, 0.80

// some basic defines
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7
#define TEmpty 8

// type scope
// used for show entry

#define private 0 //! item is never visible
#define protected 1 //! "advanced designer" switch must be activated to use it
#define public 2 //! anyone can see/use it

#define Private		1
#define Corporal	2
#define Sergeant	3
#define Lieutenant 4
#define Captain		5
#define Major			6
#define Colonel		7
#define General		8

#define GTHeal		1
#define GTRepair	2
#define GTRefuel	3
#define GTReammo	4

// faded text
#define TitleTxt 0 
// down faded text
#define TitleTxtDown 1 
// resource text
#define TitleRsc 2 
// object
#define TitleObj 3 

#define CamExternal 0 // linked directly with object
#define CamInterpolated 0 // linked directly with object
#define CamStatic 1 // fixed point in space
#define CamStaticWithZoom 2 // fixed point in space
#define CamChained 3 // fixed point in space
#define CamTerminate 4 // fixed point in space
#define CamInternal 5 // fixed point in space

#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"

#define PathToLandText core

#define RunDuty -0.5
#define WalkDuty -0.7
#define RestDuty -1
#define CrawlDuty -0.0
#define SprintDuty 0.6

#define SPEED_STATIC 1e10

// ammunition

// define ammuniton types

#define WeaponNoSlot		0	// dummy weapons
#define WeaponSlotPrimary	1	// primary weapons
#define WeaponSlotSecondary	4	// secondary weapons
#define WeaponSlotHandGun	2	// HandGun
#define WeaponSlotHandGunItem	16 // HandGun magazines
#define WeaponSlotItem		256	// items
#define WeaponSlotBinocular	4096	// binocular
#define WeaponHardMounted	65536
#define WeaponSlotInventory 131072 // inventory items

#define TracerEColor 0.2,0.8,0.1
#define TracerWColor 0.8,0.5,0.1
#define TracerGColor 0.7,0.7,0.5
#define TracerNColor 0,0,0 // used for sniper / silenced rifles

#define TracerEColorF {TracerEColor,0.040}
#define TracerWColorF {TracerWColor,0.040}
#define TracerGColorF {TracerGColor,0.040}
#define TracerNColorF {TracerNColor,0.005}

#define TracerSEColorF {TracerEColor,0.25}
#define TracerSWColorF {TracerWColor,0.25}

/*!
\patch 1.50 Date 4/15/2002 by Ondra
- Fixed: Better visible bullet tracers for ZSU and Vulcan.
*/

#define TRACER_W_ALWAYS tracerColor[]=TracerWColorF;tracerColorR[]=TracerWColorF
#define TRACER_W_OPTIONAL tracerColor[]=TracerWColorF;tracerColorR[]=TracerNColorF
#define TRACER_W_STRONG tracerColor[]=TracerSWColorF;tracerColorR[]=TracerSWColorF

#define TRACER_E_ALWAYS tracerColor[]=TracerEColorF;tracerColorR[]=TracerEColorF
#define TRACER_E_OPTIONAL tracerColor[]=TracerEColorF;tracerColorR[]=TracerNColorF
#define TRACER_E_STRONG tracerColor[]=TracerSEColorF;tracerColorR[]=TracerSEColorF

#define TRACER_G_ALWAYS tracerColor[]=TracerGColorF;tracerColorR[]=TracerGColorF
#define TRACER_G_OPTIONAL tracerColor[]=TracerGColorF;tracerColorR[]=TracerNColorF

#define TRACER_N_ALWAYS tracerColor[]=TracerNColorF;tracerColorR[]=TracerNColorF

//lockable weapons
#define LockNo		0
#define LockCadet	1
#define LockYes		2

//lock acquiring
#define manualLA      0
#define automaticLA   1

//lockable target type
#define lockGroundTT      0
#define lockAirGroundTT   1
#define lockAirTT         2
#define lockGround      0
#define lockAirGround   1
#define lockAir         2

//missile lock type
#define fireAndForgetLT   0
#define keepLockedLT      1
#define manualLT          2


/*!
	\patch 1.30 Date 11/02/2001 by Ondra
	- Fixed: Soldier was too long considered easily visible after firing.
*/

// vehicles battle types
#define VSoft 0
#define VArmor 1
#define VAir 2

// destruction types
enum
{
  DestructNo,
  DestructBuilding,
  DestructEngine,
  DestructTree,
  DestructWall,
  DestructTent,
  DestructMan,
  DestructDefault,
  DestructWreck
};

enum {StabilizedInAxesNone,StabilizedInAxisX,StabilizedInAxisY,StabilizedInAxesBoth, StabilizedInAxesXYZ};

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeePeripheral 32
#define CanSeeAll 31

/// defines how persons can switch positions in the vehicle
enum VehicleCompartments
{
  Compartment1 = 1,
  Compartment2 = 2,
  Compartment3 = 4,
  Compartment4 = 8
  // up to Compartment32 = 0x80000000
};

#define CIRCLE(bone,scale) \
      {bone,{0,-scale},1},{bone,{+0.7*scale,-0.7*scale},1}, \
      {bone,{+scale,0},1},{bone,{+0.7*scale,+0.7*scale},1}, \
      {bone,{0,+scale},1},{bone,{-0.7*scale,+0.7*scale},1}, \
      {bone,{-scale,0},1},{bone,{-0.7*scale,-0.7*scale},1}, \
      {bone,{0,-scale},1}
#define CIRCLE_MARK(bone,scaleIn,scaleOut,angle) \
      {bone,{scaleIn*sin(angle),-scaleIn*cos(angle)},1}, \
      {bone,{scaleOut*sin(angle),-scaleOut*cos(angle)},1}
	  
#define ReadAndWrite 0
#define ProcTextWhite "#(argb,1,1,1)color(1,1,1,1)"
#define ProcTextEmpty "#(argb,1,1,1)color(1,1,1,0)"
#define ProcTextZero "#(argb,1,1,1)color(0,0,0,0)"
#define ProcTextBlack "#(argb,1,1,1)color(0,0,0,1)"
#define ProcTextGray "#(argb,1,1,1)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,1,1,1)color(1,0,0,1)"
#define ProcTextGreen "#(argb,1,1,1)color(0,1,0,1)"
#define ProcTextBlue "#(argb,1,1,1)color(0,0,1,1)"

#define H_PI  3.14159265358979323846
#define H_PI2 1.57079632679489661923
#define H_PI4 0.78539816339744830961

//Define procedural textures in several colors.
#define ProcTextTransparent	"#(argb,8,8,3)color(0,0,0,0)"
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"
#define ProcTextClear "#(argb,8,8,3)color(0,0,0,0)"
#define ProcTextYellow "#(argb,8,8,3)color(1,1,0,1)"
#define ProcTextAqua "#(argb,8,8,3)color(0,1,1,1)"
#define ProcTextOrange "#(argb,8,8,3)color(1,0.53,0.12,1)"
#define ProcTextPurple "#(argb,8,8,3)color(0.75,0,0.75,1)"
#define ProcTextCursor "#(argb,32,32,1)color(1,1,1,1)"

//For fast path defining
#define PathDModel \core\default\default.p3d
#define PathDTexture \core\default_co.paa
#define PathDModelAbs core\default\default.p3d
#define PathDTextureAbs core\default_co.paa

#define ProcTextSkybox1 "#(argb,8,8,3)color(0.35,0.47,0.66,1)"
#define ProcTextSkybox2 "#(argb,8,8,3)color(0.46,0.51,0.67,1)"
#define ProcTextSkybox3 "#(argb,8,8,3)color(0.51,0.57,0.79,1)"
#define ProcTextSkybox4 "#(argb,8,8,3)color(0.56,0.6,0.76,1)"
#define ProcTextSkybox5 "#(argb,8,8,3)color(0.39,0.39,0.4,1)"	

//Todo:
//Color and size defines should not be absolute.
//Change to use same class hierarchy as documentation.

//Common defines:

//Fonts

//Main sizes
#define Size_Main_Very_Small 0.018
#define Size_Main_Small 0.027
#define Size_Main_Normal 0.04

//Control sizes
#define Size_Text_Default Size_Main_Normal
#define Size_Text_Very_Small Size_Main_Very_Small
#define Size_Text_Small Size_Main_Small

//Base colors
#define Color_Black {0, 0, 0, 1}
#define Color_White {1, 1, 1, 1}
#define Color_WhiteDark {0.85, 0.85, 0.85, 1}
#define Color_Orange {1, 0.5, 0, 1}
#define Color_Gray {0.3, 0.3, 0.3, 1}
#define Color_GrayLight {0.6, 0.6, 0.6, 1}
#define Color_GrayDark {0.2, 0.2, 0.2, 1}

//Main colors
#define Color_Main_Active1 Color_GrayLight
#define Color_Main_Select1 Color_WhiteDark
#define Color_Main_Foreground1 Color_White
#define Color_Main_Background1 Color_Gray
#define Color_Main_Background2 Color_Gray

//Control colors
#define Color_Text_Default Color_Main_Foreground1
#define Color_Text_Orange Color_Main_Foreground1
#define Color_Background Color_Main_Background1
#define Color_Text_White Color_White

//Procedural colors
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"
#define ProcTextOrange "#(argb,8,8,3)color(1,0.5,0,1)"
#define ProcTextTransparent	"#(argb,8,8,3)color(0,0,0,0)"

//ScrollBar used in various UI elements (ListBox, ComboBox etc.)
class ScrollBar
{
  color[] = {1,1,1,0.6};
  /*colorActive[] = {1,1,1,1};
  colorDisabled[] = {1,1,1,0.3}; not used*/
  thumb = ProcTextWhite;
  arrowEmpty = ProcTextWhite;
  arrowFull = ProcTextWhite;
  border = ProcTextWhite;
  shadow = 0;
  scrollSpeed = 0.01;
  autoScrollEnabled = false;  
  /* following options are valid if autoScrollEnabled == true:
  if not specified following values are default values:*/
  autoScrollSpeed = -1;
  autoScrollDelay = 5;
  autoScrollRewind = false;
  width = 0;
  height = 0;
};

//Todo:
//BISML™ 1.0 Strict:

//Body tag. Defines the main page margins.
#define BISML_BODY(X, Y, W, H) \
	__EXEC(iBISML_X = X);\
	__EXEC(iBISML_Y = Y);\
	__EXEC(iBISML_W = W);\
	__EXEC(iBISML_H = H);\
	__EXEC(iBISML_CURX = iBISML_X);\
	__EXEC(iBISML_CURY = iBISML_Y);

//Row tag. Defines the end of a row.
#define BISML_NEXTROW \
	__EXEC(iBISML_CURY = iBISML_CURY + iBISML_NEXTROW_Y);\
	__EXEC(iBISML_CURX = iBISML_X);

//Cell tag. Defines a layout cell within a row. Replace with virtual cell definition.
#define BISML_CELL(NAME, W, H) \
	class NAME: RscText\
	{\
		x = __EVAL(iBISML_CURX);\
		y = __EVAL(iBISML_CURY);\
		w = W;\
		h = H;\
		colorBackground[] = {1, 0, 0, 1};\
		color[] = {1, 1, 1, 1};\
	};\
	__EXEC(iBISML_CURX = iBISML_CURX + W);\
	__EXEC(iBISML_NEXTROW_Y = H);

#define LINE_HEIGHT 0.05
#define LINE_Y __EVAL(line_y)
#define LINE_W(VALUE) __EVAL(VALUE * line_w)
#define LINE_X(VALUE) __EVAL(line_x + (VALUE * line_w))
#define NEXT_LINE __EXEC(line_y = line_y + LINE_HEIGHT)

#define DISPLAY(IDD, X, Y, W, H) \
	idd = IDD;\
	__EXEC(display_x = X);\
	__EXEC(display_y = Y);\
	__EXEC(display_w = W);\
	__EXEC(display_h = H);\
	__EXEC(line_x = X + 0.02);\
	__EXEC(line_w = W - 0.08);\
	__EXEC(line_y = Y + 0.1);\
	movingEnable = true;\
	

#define BACKGROUND(NAME) \
	class NAME: RscText\
	{\
		x = __EVAL(display_x);\
		y = __EVAL(display_y);\
		w = __EVAL(display_w);\
		h = __EVAL(display_h);\
		colorBackground[] = {0.3, 0.3, 0.3, 1};\
	};

#define TITLE(NAME, TEXT, IDC) \
	class NAME: RscTitle\
	{\
		idc = IDC;\
		style = ST_TITLE;\
		x = __EVAL(display_x);\
		y = __EVAL(display_y + 0.02);\
		w = __EVAL(display_w);\
		text = TEXT;\
	};

#define BEGIN_BOX \
	__EXEC(box_y = line_y);\
	__EXEC(line_x = display_x + 0.015);\
	__EXEC(line_w = display_w - 0.05);\
	__EXEC(line_y = box_y + 0.01);

#define END_BOX \
	__EXEC(line_y = line_y + 0.04);\
	__EXEC(line_x = display_x + 0.02);\
	__EXEC(line_w = display_w - 0.045);

#define	STATIC_TEXT(NAME, TEXT, IDC, XVAL, WVAL) \
	class NAME: RscText\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		text = TEXT;\
		sizeEx = Size_Text_Small;\
	};

#define	EDIT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		text = $STR_DISP_ERROR;\
		sizeEx = Size_Text_Small;\
	};

#define	EDIT_SCRIPT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		text = $STR_DISP_ERROR;\
		autocomplete="scripting";\
		sizeEx = Size_Text_Small;\
	};

#define	COMBO(NAME, IDC, XVAL, WVAL) \
	class NAME: RscCombo\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
		sizeEx = Size_Text_Small;\
	};

#define	SLIDER(NAME, IDC, XVAL, WVAL) \
	class NAME: RscSlider\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y + 0.01;\
		w = LINE_W(WVAL);\
		h = 0.03;\
	};

#define	BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + display_w - 0.153 - XVAL * 0.145);\
		y = __EVAL(display_y + display_h - 0.075);\
		w = 0.13;\
		h = 0.05;\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = Size_Text_Small;\
	};

#define	LEFT_BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + 0.02 + XVAL * 0.15);\
		y = __EVAL(display_y + display_h - 0.075);\
		w = 0.13;\
		h = 0.05;\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = Size_Text_Small;\
	};

#define BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 1)
#define BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 1)	

#endif