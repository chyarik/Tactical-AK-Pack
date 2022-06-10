
//Insert a custom marker on the map.
class RscDisplayInsertMarker
{
	idd = IDD_INSERT_MARKER;
	movingEnable = false;

	class controls
	{
		//Picture of the marker.
		class Picture: RscPicture
		{
			idc = IDC_INSERT_MARKER_PICTURE;
			x = 0; y = 0;
			w = 0.05; h = 0.05 * 4 / 3;
			colorText[] = {0, 0, 0, 1};
		};

		//Marker name field.
		class Text: RscEdit
		{
			idc = IDC_INSERT_MARKER;
			x = 0.04; y = 0;
			w = 0.15; h = 0.04;
			text = ;
		};

		//Confirm the marker and exit.
		class ButtonOK: RscActiveText
		{
			idc = IDC_OK;
			x = 0; y = 0;
			w = 0; h = 0;
			default = 1;
		};
	};
};

//Special PhysX3 debugging screen
class RscDisplayPhysX3Debug
{
	idd = IDD_PHYSX_DEBUG;
	movingEnable = true;

	__EXEC(_xBtn = 0.2; _xCap = 0.25; _xBtn2 = 0.6; _xCap2 = 0.65; _yStart = 0.12; _yDelta = 0.022;)
		//_xBtn //x of buttons
		//_xBtn2 //x of buttons in second column
		//_xCap //x of captions
		//_xCap2 //x of captions on the second column
		//_yStart //starting y of components
		//_yDelta // y delta

	class Controls
	{

		class Background1: RscText
		{
			x = SafezoneX+0.1; y = SafezoneY+0.0;
			w = SafezoneW-0.2; h = SafeZoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class Background2: RscText
		{
			x = 0.1; y = SafezoneY+0.0;
			w = 0.8; h = SafeZoneH;
			colorBackground[] = {1,1,1,0.025};
		};

		class Title: RscTitle
		{
			x = SafezoneX+0.1; y = SafezoneY+0.02;
			w = SafezoneW-0.2; h = 0.035;
			moving = true;
			text = "PhysX3 Debug Console"; 
			sizeEx = Size_Text_Small;
			colorBackground[] = {0.3,0,0,1};
			colorText[] = {0.9,0.9,0.9,1};
		};

		//Exit the debug window.
		class B_OK: RscButton
		{
			idc = IDC_OK;
			x = 0.5; 
			y = 0.917;
			text = "Close";
			sizeEx = Size_Text_Small;
			default = 1;
		};

		///==================================================
		/// diag modes
		///==================================================
		class Value: RscButton
		{
			idc = IDC_PHYSX_DEBUG_DIAGMODE;
			x = __EVAL(_xBtn);
			y = __EVAL(_yStart + (_yDelta*-5));
			w = 0.05;
			h = __EVAL(_yDelta - 0.001);
			text = "on";
			sizeEx = Size_Text_Small;
		};

		class Caption:RscText
		{
			x = __EVAL(_xCap);
			y = __EVAL(_yStart + (_yDelta*-5));
			w = 0.4;
			h = __EVAL(_yDelta - 0.001);
			sizeEx = Size_Text_Small;
			colorText[] = {0.9,0.9,0.9,1};
			text = "diag mode";
		};

		class Value00: Value
		{
			idc = IDC_PHYSX_DEBUG_DIAGMODEDRAW;
			y = __EVAL(_yStart + (_yDelta*-4));
		};
		class Caption00:Caption
		{
			y = __EVAL(_yStart + (_yDelta*-4));
			text = "diag mode draw";
		};
		class Value000: Value
		{
			idc = IDC_PHYSX_DEBUG_DIAGMODEPERF;
			y = __EVAL(_yStart + (_yDelta*-3));
		};
		class Caption000:Caption
		{
			y = __EVAL(_yStart + (_yDelta*-3));
			text = "diag mode perf";
		};
		class Value0000: Value
		{
			idc = IDC_PHYSX_DEBUG_DIAGMODESTATS;
			y = __EVAL(_yStart + (_yDelta*-2));
		};
		class Caption0000:Caption
		{
			y = __EVAL(_yStart + (_yDelta*-2));
			text = "diag mode stats";
		};

		///==================================================
		/// diag switches
		///==================================================

		class ValueDS: Value
		{
			idc = IDC_PHYSX_DEBUG_IMMEDIATEFETCH;
			y = __EVAL(_yStart + (_yDelta*-5));
			x = __EVAL(_xBtn2);
		};
		class CaptionDS:Caption
		{
			y = __EVAL(_yStart + (_yDelta*-5));
			x = __EVAL(_xCap2);
			text = "diag immediate fetch";
		};

		///==================================================
		/// draw switches
		///==================================================

		class Value0: Value
		{
			idc = IDC_PHYSX_DEBUG_TERRAIN;
			y = __EVAL(_yStart + (_yDelta*0));
		};
		class Caption0:Caption
		{
			y = __EVAL(_yStart + (_yDelta*0));
			text = "terrain";
		};

		class Value1: Value
		{
			idc = IDC_PHYSX_DEBUG_STATIC;
			y = __EVAL(_yStart + (_yDelta*1));
		};
		class Caption1:Caption
		{
			y = __EVAL(_yStart + (_yDelta*1));
			text = "static";
		};

		class Value2: Value
		{
			idc = IDC_PHYSX_DEBUG_KINEMATIC;
			y = __EVAL(_yStart + (_yDelta*2));
		};
		class Caption2:Caption
		{
			y = __EVAL(_yStart + (_yDelta*2));
			text = "kinematic";
		};

		class Value3: Value
		{
			idc = IDC_PHYSX_DEBUG_DYNAMIC;
			y = __EVAL(_yStart + (_yDelta*3));
		};
		class Caption3:Caption
		{
			y = __EVAL(_yStart + (_yDelta*3));
			text = "dynamic";
		};

		// Caption4 and Value4 are not here because we want space to be inserted

		class Value5: Value
		{
			idc = IDC_PHYSX3_DEBUG_WORLD_AXES;
			y = __EVAL(_yStart + (_yDelta*5));
		};
		class Caption5:Caption
		{
			y = __EVAL(_yStart + (_yDelta*5));
			text = "world axes";
		};

		class Value6: Value
		{
			idc = IDC_PHYSX3_DEBUG_BODY_AXES;
			y = __EVAL(_yStart + (_yDelta*6));
		};
		class Caption6:Caption
		{
			y = __EVAL(_yStart + (_yDelta*6));
			text = "body axes";
		};

		class Value7: Value
		{
			idc = IDC_PHYSX3_DEBUG_BODY_MASS_AXES;
			y = __EVAL(_yStart + (_yDelta*7));
		};
		class Caption7:Caption
		{
			y = __EVAL(_yStart + (_yDelta*7));
			text = "body mass axes";
		};

		class Value8: Value
		{
			idc = IDC_PHYSX3_DEBUG_BODY_LIN_VELOCITY;
			y = __EVAL(_yStart + (_yDelta*8));
		};
		class Caption8:Caption
		{
			y = __EVAL(_yStart + (_yDelta*8));
			text = "body lin velocity";
		};

		class Value9: Value
		{
			idc = IDC_PHYSX3_DEBUG_BODY_ANG_VELOCITY;
			y = __EVAL(_yStart + (_yDelta*9));
		};
		class Caption9:Caption
		{
			y = __EVAL(_yStart + (_yDelta*9));
			text = "body ang velocity";
		};

		class Value10: Value
		{
			idc = IDC_PHYSX3_DEBUG_BODY_JOINT_GROUPS;
			y = __EVAL(_yStart + (_yDelta*10));
		};
		class Caption10:Caption
		{
			y = __EVAL(_yStart + (_yDelta*10));
			text = "body joint groups";
		};

		class Value11: Value
		{
			idc = IDC_PHYSX3_DEBUG_CONTACT_POINT;
			y = __EVAL(_yStart + (_yDelta*11));
		};
		class Caption11:Caption
		{
			y = __EVAL(_yStart + (_yDelta*11));
			text = "contact points";
		};

		class Value12: Value
		{
			idc = IDC_PHYSX3_DEBUG_CONTACT_NORMAL;
			y = __EVAL(_yStart + (_yDelta*12));
		};
		class Caption12:Caption
		{
			y = __EVAL(_yStart + (_yDelta*12));
			text = "contact normals";
		};

		class Value13: Value
		{
			idc = IDC_PHYSX3_DEBUG_CONTACT_ERROR;
			y = __EVAL(_yStart + (_yDelta*13));
		};
		class Caption13:Caption
		{
			y = __EVAL(_yStart + (_yDelta*13));
			text = "contact errors";
		};

		class Value14: Value
		{
			idc = IDC_PHYSX3_DEBUG_CONTACT_FORCE;
			y = __EVAL(_yStart + (_yDelta*14));
		};
		class Caption14:Caption
		{
			y = __EVAL(_yStart + (_yDelta*14));
			text = "contact forces";
		};

		class Value15: Value
		{
			idc = IDC_PHYSX3_DEBUG_ACTOR_AXES;
			y = __EVAL(_yStart + (_yDelta*15));
		};
		class Caption15:Caption
		{
			y = __EVAL(_yStart + (_yDelta*15));
			text = "actor axes";
		};

		class Value16: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_AABBS;
			y = __EVAL(_yStart + (_yDelta*16));
		};
		class Caption16:Caption
		{
			y = __EVAL(_yStart + (_yDelta*16));
			text = "collision AABBs";
		};

		class Value17: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_SHAPES;
			y = __EVAL(_yStart + (_yDelta*17));
		};
		class Caption17:Caption
		{
			y = __EVAL(_yStart + (_yDelta*17));
			text = "collision shapes";
		};

		class Value18: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_AXES;
			y = __EVAL(_yStart + (_yDelta*18));
		};
		class Caption18:Caption
		{
			y = __EVAL(_yStart + (_yDelta*18));
			text = "collision axes";
		};

		class Value19: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_COMPOUNDS;
			y = __EVAL(_yStart + (_yDelta*19));
		};
		class Caption19:Caption
		{
			y = __EVAL(_yStart + (_yDelta*19));
			text = "collision compounds";
		};

		class Value20: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_FNORMALS;
			y = __EVAL(_yStart + (_yDelta*20));
		};
		class Caption20:Caption
		{
			y = __EVAL(_yStart + (_yDelta*20));
			text = "collision face normals";
		};

		class Value21: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_EDGES;
			y = __EVAL(_yStart + (_yDelta*21));
		};
		class Caption21:Caption
		{
			y = __EVAL(_yStart + (_yDelta*21));
			text = "collision edges";
		};

		class Value22: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_STATIC;
			y = __EVAL(_yStart + (_yDelta*22));
		};
		class Caption22:Caption
		{
			y = __EVAL(_yStart + (_yDelta*22));
			text = "collision static";
		};

		class Value23: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_DYNAMIC;
			y = __EVAL(_yStart + (_yDelta*23));
		};
		class Caption23:Caption
		{
			y = __EVAL(_yStart + (_yDelta*23));
			text = "collision dynamic";
		};

		class Value24: Value
		{
			idc = IDC_PHYSX3_DEBUG_COLLISION_PAIRS;
			y = __EVAL(_yStart + (_yDelta*24));
		};
		class Caption24:Caption
		{
			y = __EVAL(_yStart + (_yDelta*24));
			text = "collision pairs";
		};

		class Value25: Value
		{
			idc = IDC_PHYSX3_DEBUG_JOINT_LOCAL_AXES;
			y = __EVAL(_yStart + (_yDelta*25));
		};
		class Caption25:Caption
		{
			y = __EVAL(_yStart + (_yDelta*25));
			text = "joint local axes";
		};

		class Value26: Value
		{
			idc = IDC_PHYSX3_DEBUG_JOINT_LIMITS;
			y = __EVAL(_yStart + (_yDelta*26));
		};
		class Caption26:Caption
		{
			y = __EVAL(_yStart + (_yDelta*26));
			text = "joint limits";
		};

		class Value27: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_POSITION;
			y = __EVAL(_yStart + (_yDelta*27));
		};
		class Caption27:Caption
		{
			y = __EVAL(_yStart + (_yDelta*27));
			text = "particle system positions";
		};

		class Value28: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_VELOCITY;
			y = __EVAL(_yStart + (_yDelta*28));
		};
		class Caption28:Caption
		{
			y = __EVAL(_yStart + (_yDelta*28));
			text = "particle system velocities";
		};

		class Value29: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BOUNDS;
			y = __EVAL(_yStart + (_yDelta*29));
		};
		class Caption29:Caption
		{
			y = __EVAL(_yStart + (_yDelta*29));
			text = "particle system bounds";
		};
		class Value30: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_GRID;
			y = __EVAL(_yStart + (_yDelta*30));
		};
		class Caption30:Caption
		{
			y = __EVAL(_yStart + (_yDelta*30));
			text = "particle system grid";
		};
		class Value31: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_BROADPHASE_BOUNDS;
			y = __EVAL(_yStart + (_yDelta*31));
		};
		class Caption31:Caption
		{
			y = __EVAL(_yStart + (_yDelta*31));
			text = "particle system broad phase bounds";
		};
		class Value32: Value
		{
			idc = IDC_PHYSX3_DEBUG_PARTICLE_SYSTEM_MAX_MOTION_DISTANCE;
			y = __EVAL(_yStart + (_yDelta*32));
		};
		class Caption32:Caption
		{
			y = __EVAL(_yStart + (_yDelta*32));
			text = "particle system max motion distance";
		};
		class Value33: Value
		{
			idc = IDC_PHYSX3_DEBUG_CULL_BOX;
			y = __EVAL(_yStart + (_yDelta*5));
			x = __EVAL(_xBtn2);
		};
		class Caption33:Caption
		{
			y = __EVAL(_yStart + (_yDelta*5));
			x = __EVAL(_xCap2);
			text = "culling";
		};
		class Value34: Value
		{
			idc = IDC_PHYSX3_DEBUG_CLOTH_VERTICAL;
			y = __EVAL(_yStart + (_yDelta*6));
			x = __EVAL(_xBtn2);
		};
		class Caption34:Caption
		{
			y = __EVAL(_yStart + (_yDelta*6));
			x = __EVAL(_xCap2);
			text = "cloth vertical sets";
		};
		class Value35: Value
		{
			idc = IDC_PHYSX3_DEBUG_CLOTH_HORIZONTAL;
			y = __EVAL(_yStart + (_yDelta*7));
			x = __EVAL(_xBtn2);
		};
		class Caption35:Caption
		{
			y = __EVAL(_yStart + (_yDelta*7));
			x = __EVAL(_xCap2);
			text = "cloth horizontal sets";
		};
		class Value36: Value
		{
			idc = IDC_PHYSX3_DEBUG_CLOTH_BENDING;
			y = __EVAL(_yStart + (_yDelta*7));
			x = __EVAL(_xBtn2);
		};
		class Caption36:Caption
		{
			y = __EVAL(_yStart + (_yDelta*7));
			x = __EVAL(_xCap2);
			text = "cloth bending sets";
		};
		class Value37: Value
		{
			idc = IDC_PHYSX3_DEBUG_CLOTH_SHEARING;
			y = __EVAL(_yStart + (_yDelta*8));
			x = __EVAL(_xBtn2);
		};
		class Caption37:Caption
		{
			y = __EVAL(_yStart + (_yDelta*8));
			x = __EVAL(_xCap2);
			text = "clot shearing sets";
		};
		class Value38: Value
		{
			idc = IDC_PHYSX3_DEBUG_CLOTH_VIRTUAL_PARTICLES;
			y = __EVAL(_yStart + (_yDelta*9));
			x = __EVAL(_xBtn2);
		};
		class Caption38:Caption
		{
			y = __EVAL(_yStart + (_yDelta*9));
			x = __EVAL(_xCap2);
			text = "cloth virtual particles";
		};
		class Value39: Value
		{
			idc = IDC_PHYSX3_DEBUG_MBP_REGIONS;
			y = __EVAL(_yStart + (_yDelta*10));
			x = __EVAL(_xBtn2);
		};
		class Caption39:Caption
		{
			y = __EVAL(_yStart + (_yDelta*10));
			x = __EVAL(_xCap2);
			text = "MBP regions";
		};

		class ValueAll: Value
		{
			idc = IDC_PHYSX_DEBUG_ALL;
			text = "All";
			y = __EVAL(_yStart + (_yDelta*34));
		};
		class ValueNone: Value
		{
			idc = IDC_PHYSX_DEBUG_NONE;
			text = "None";
			y = __EVAL(_yStart + (_yDelta*35));
		};
		class ValueBasic: Value
		{
			idc = IDC_PHYSX_DEBUG_BASIC;
			text = "Basic";
			y = __EVAL(_yStart + (_yDelta*36));
		};

	}
};


//Special debugging screen for designers.
class RscDisplayDebug
{
	idd = IDD_DEBUG;
	movingEnable = true;

	onLoad = "private [""_ctrlB_Camera"", ""_script""]; _ctrlB_Camera = (_this select 0) displayCtrl 666; _script = getText (configFile >> ""cameraScript""); if (!(isNil ""BIS_DEBUG_CAM"") || ((typeOf cameraOn) == ""EditCursor"") || (isNull player) || (_script == """")) then {_ctrlB_Camera ctrlEnable false; _ctrlB_Camera ctrlShow false}";

//	#define ButtonA1_Width 0.095
	#define ButtonA1_Width 0.095
	#define ButtonB1_Width 0.083
	#define ButtonA1_Start (-SafeZoneX)+0.01

	class Controls
	{
		class Background1: RscText
		{
			x = SafezoneX+0.1; y = SafezoneY+0.0;
			w = SafezoneW-0.2; h = SafeZoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class Background2: RscText
		{
			x = 0.1; y = SafezoneY+0.0;
			w = 0.8; h = SafeZoneH;
			colorBackground[] = {1,1,1,0.025};
		};

		class Title: RscTitle
		{
			x = SafezoneX+0.1; y = SafezoneY+0.02;
			w = SafezoneW-0.2; h = 0.035;
			moving = true;			
			text = $STR_UI_DEBUG_TITLE;
			sizeEx = Size_Text_Small;
			colorBackground[] = {0.3,0,0,1};
			colorText[] = {0.9,0.9,0.9,1};
		};

		class G_Expression: RscControlsGroup
		{
			x = SafezoneX+0.1; y = SafezoneY+0.055;
			w = SafezoneW-0.2; h = 0.23;
			
			class VScrollbar
			{
				color[] = {0,0,0,0};
				width = 0.001;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = false;
			};
			
			class HScrollbar
			{
				color[] = {0,0,0,0};
				height = 0.001;
			};

			class ScrollBar: ScrollBar {};

			class Controls
			{
				class TextExpression: RscText
				{
					x = 0.01; y = 0;
					w = 0.2; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_EXPRESSION;
				};

				//Enter scripting commands.
				class ValueExpression: RscEdit
				{
					idc = IDC_DEBUG_EXP;
					style = ST_MULTI;
					x = 0.018; y = 0.03;
					w = SafezoneW-1+0.76; h = 0.16;
					sizeEx = Size_Text_Small;
					colorBackground[] = {0,0,0,1};
					colorSelection[] = {0,0.4,0,1};
					autocomplete = "scripting";
				};

				//Execute the entered scripting commands.
				class B_Apply: RscButton
				{
					idc = IDC_DEBUG_APPLY;
					//x = ButtonA1_Start + ButtonA1_Width * 7;	y = 0.195;
					//w = __EVAL(ButtonA1_Width - 0.003); h = 0.04;
					x = 0.018+0.1; y = 0.195;
					w = SafezoneW-1+0.76-0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_BUT_APPLY;
					default = 0;
				};
			};
		};

		class G_Watch: G_Expression
		{
			x = SafezoneX+0.1; y = SafezoneY+0.262;
			w = SafezoneW-0.2; h = 0.36;

			class Controls
			{
				class TextWatch: RscText
				{
					x = 0.01; y = 0.0;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_WATCH;
				};

				class TextVar1: RscText
				{
					x = 0.01; y = 0.03;
					w = 0.05; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_1;
				};

				//Debugging value.
				class ValueExp1: RscEdit
				{
					idc = IDC_DEBUG_EXP1;
					x = 0.04; y = 0.03;
					w = SafezoneW-1+0.738; h = 0.03;
					sizeEx = Size_Text_Small;
					colorSelection[] = {0,0.4,0,1};
					autocomplete = "scripting";
				};

				//Resulting debugging value.
				class ValueRes1: RscEdit
				{
					idc = IDC_DEBUG_RES1;
					style = ST_MULTI;
					x = 0.018; y = 0.06;
					w = SafezoneW-1+0.76; h = 0.052;
					lineSpacing = 1; 
					sizeEx = Size_Text_Small;
					autocomplete = "scripting";
				};

				class TextVar2: TextVar1
				{
					y = 0.113;
					text = $STR_UI_DEBUG_2;
				};

				//Debugging value.
				class ValueExp2: ValueExp1
				{
					idc = IDC_DEBUG_EXP2;
					y = 0.113;
				};

				//Resulting debugging value.
				class ValueRes2: ValueRes1
				{
					idc = IDC_DEBUG_RES2;
					y = 0.143;
				};

				class TextVar3: TextVar1
				{
					y = 0.196;
					text = $STR_UI_DEBUG_3;
				};

				//Debugging value.
				class ValueExp3: ValueExp1
				{
					idc = IDC_DEBUG_EXP3;
					y = 0.196;
				};

				//Resulting debugging value.
				class ValueRes3: ValueRes1
				{
					idc = IDC_DEBUG_RES3;
					y = 0.226;
				};

				class TextVar4: TextVar1
				{
					y = 0.279;
					text = $STR_UI_DEBUG_4;
				};

				//Debugging value.
				class ValueExp4: ValueExp1
				{
					idc = IDC_DEBUG_EXP4;
					y = 0.279;
				};

				//Resulting debugging value.
				class ValueRes4: ValueRes1
				{
					idc = IDC_DEBUG_RES4;
					y = 0.309;
				};
			};
		};

		class G_But: G_Expression
		{
				x = SafezoneX+0.1; y = SafezoneY+0.64;
				w = SafezoneW-0.2; h = 0.12;

			class Controls
			{
				class TextSwitch: RscText
				{
					x = (-SafeZoneX)+0.01; y = 0;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_SWITCH;
				};


				//Debugging views.
				class ButtonA1: RscButton
				{
					idc = -1;
					x = ButtonA1_Start + ButtonB1_Width	* 1;
					y = 0;
					w = __EVAL(ButtonB1_Width - 0.003);
					h = 0.04;
					text = $STR_UI_DEBUG_BUT_ALL;
					action = """all"" diag_enable true";
					sizeEx = Size_Text_Small;
				};

				class ButtonA2: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 2;
					text = $STR_UI_DEBUG_BUT_NO;
					action = """all"" diag_enable false";
				};

				class ButtonA3: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 3;
					text = $STR_UI_DEBUG_BUT_COMBAT;
					action = "diag_toggle ""combat""";
				};

				class ButtonA4: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 4;
					text = $STR_UI_DEBUG_BUT_COST;
					action = "diag_toggle ""costmap""";
				};

				class ButtonA5: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 5;
					text = $STR_UI_DEBUG_BUT_TRANSPARENT;
					action = "diag_toggle ""transparent""";
				};

				class ButtonA6: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 6;
					text = $STR_UI_DEBUG_BUT_COLLISION;
					action = "diag_toggle ""collision""";
				};

				class ButtonA7: ButtonA1
				{

					x = ButtonA1_Start + ButtonB1_Width * 7;
					text = $STR_UI_DEBUG_BUT_PATH;
					action = "diag_toggle ""path""";
				};
				class B_Functions: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 8;
					text = "Functions";
					action = "[] spawn {if (isnil 'bis_fnc_init') then {createcenter sidelogic; _logicGrp = creategroup sidelogic; _logicFnc = _logicGrp createunit ['FunctionsManager',[1,1,1],[],0,'none']}; waituntil {!isnil 'bis_fnc_init'};[] call bis_fnc_help}";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
				};

				class ButtonA8: ButtonA1
				{
					x = ButtonA1_Start + ButtonB1_Width * 1;
					y = 0.041;					
					text = $STR_UI_DEBUG_BUT_FORCE;
					action = "diag_toggle ""force""";
				};

				class ButtonA9: ButtonA8
				{
					x = ButtonA1_Start + ButtonB1_Width * 2;
					text = $STR_UI_DEBUG_BUT_ANIMATION;
					action = "diag_toggle ""animation""";
				};

				//Show the normal view.
				class ButtonB1: ButtonA8
				{
					idc = -1;
					x = ButtonA1_Start + ButtonB1_Width * 3;
					text = $STR_UI_DEBUG_BUT_NORMAL;
					action = "diag_drawmode ""Normal""";
					sizeEx = Size_Text_Small;
				};

				//Show the fire geometry view.
				class ButtonB2: ButtonA8
				{
					x = ButtonA1_Start + ButtonB1_Width * 4;
					text = $STR_UI_DEBUG_BUT_FIREGEOMETRY;
					action = "diag_drawmode ""FireGeometry""";
				};

				//Show the view geometry view.
				class ButtonB3: ButtonA8
				{
					x = ButtonA1_Start + ButtonB1_Width * 5;
					text = $STR_UI_DEBUG_BUT_VIEWGEOMETRY;
					action = "diag_drawmode ""ViewGeometry""";
				};

				//Show the geometry view.
				class ButtonB4: ButtonA8
				{
					x = ButtonA1_Start + ButtonB1_Width * 6;
					text = $STR_UI_DEBUG_BUT_GEOMETRY;
					action = "diag_drawmode ""Geometry""";
				};

				//--- Open the Kuba's config viewer
				class B_ConfigViewer: ButtonA8
				{
					x = ButtonA1_Start + ButtonB1_Width * 7;
					text = "Config";
					action = "[] spawn {if (isnil 'bis_fnc_init') then {createcenter sidelogic; _logicGrp = creategroup sidelogic; _logicFnc = _logicGrp createunit ['FunctionsManager',[1,1,1],[],0,'none']}; waituntil {!isnil 'bis_fnc_init'};[] call bis_fnc_configviewer}";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
				};

				//Start the debug camera script, as defined in the config.
				class B_Camera: ButtonA8
				{
					idc = 666;
					x = ButtonA1_Start + ButtonB1_Width * 8; 
					text = "Camera";
					action = "cameraOn exec (getText (configFile >> ""cameraScript""))";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
				};

			};
		};

		class G_Log: G_Expression
		{
					x = 0.1; y = SafeZoneY+0.74;
					w = 0.65; h = 0.29+(SafeZoneH-1);

			class Controls
			{

				class TextFilter: RscText
				{
						x = 0.01; y =0.00;
						w = 0.1; h = 0.03;
						sizeEx = Size_Text_Small;
						//caption above CEdit(reads filtering pattern for dubug log) 
			text = "Log Filter:"; 
				};
				
				//read filter pattern, which is used to in debub log
				class ValueRes1: RscEdit
				{
						idc = IDC_DEBUG_FILTER_EDIT;
						style = ST_MULTI;
						x = 0.018; y = 0.027;
						w = 0.63; h = 0.03;
						lineSpacing = 1; 
						sizeEx = Size_Text_Small;
				};

				class TextLog: RscText
				{
				//	x = 0.01; y = 0;
					x = 0.01; y =0.07;
					w = 0.1; h = 0.03;
					sizeEx = Size_Text_Small;
					text = $STR_UI_DEBUG_LOG;
				};

				//Text log.
				class ValueLog: RscListBox
				{
					idc = IDC_DEBUG_LOG;
					sizeEx = Size_Text_Small;
					//x = 0.018; y = 0.03;
					x = 0.018; y = 0.10;
					//w = 0.63; h = 0.20;
					w = 0.63; h = 0.13+(SafeZoneH-1);
					colorSelect[] = {1,1,1,1};
					colorSelect2[] = {1,1,1,1};
					colorSelectBackground[] = {0,0.4,0,1};
					colorSelectBackground2[] = {0,0.4,0,1};
					rowHeight = __EVAL( (0.20) /7);
					
				};
			};
		};



		//Clear debug log
		class B_Clear: RscShortcutButton//RscButton
		{
				idc = IDC_DEBUG_CLEAR_LOG;
				x = 0.775;
				y = 0.803;
				w = 0.15;
				h = 0.04;
				//button clearing debug log
				text = "Clear";
				sizeEx = Size_Text_Small;
				default = 0;
		};

		//Exit the debug window.
		class B_OK: RscShortcutButton
		{
				idc = IDC_OK;
				x = 0.775;
				y = 0.875;
				w = 0.15;
				h = 0.04;
				text = $STR_DISP_OK;
				default = 1;
		};

		//Exit the debug window.
		class B_Cancel: RscShortcutButton
		{
			idc = IDC_CANCEL;
			x = 0.775;
			y = 0.917;
			w = 0.15;
			h = 0.04;
			text = $STR_DISP_CANCEL;
			default = 0;
		};
	};
};

class RscChatListDefault
{
	// left
	x = 0.0; 
	// top
	y = 0.0; 
	// width
	w = 1.0;	
	h = 0.043;
	font = FontMAIN;
	size = 0.039;
	rows = 2;

	colorBackground[] = {0, 0, 0, 0.5};

	colorGlobalChannel[] = {0.8, 0.8, 0.8, 1};
	colorGlobalChannelPlayerBackground[] = {0.8, 0.8, 0.8, 0.5};
	colorGlobalChannelPlayerText[] = {0, 0, 0, 1};

	colorSideChannel[] = {0, 0.9, 0.9, 1};
	colorSideChannelPlayerBackground[] = {0, 0.9, 0.9, 0.5};
	colorSideChannelPlayerText[] = {0, 0, 0, 1};

	colorCommandChannel[] = {0, 0, 1, 1};
	colorCommandChannelPlayerBackground[] = {0, 0, 1, 0.5};
	colorCommandChannelPlayerText[] = {0, 0, 0, 1};

	colorGroupChannel[] = {0.1, 0.9, 0.2, 1};
	colorGroupChannelPlayerBackground[] = {0.1, 0.9, 0.2, 0.5};
	colorGroupChannelPlayerText[] = {0, 0, 0, 1};

	colorVehicleChannel[] = {0.9, 0.8, 0, 1};
	colorVehicleChannelPlayerBackground[] = {0.9, 0.8, 0, 0.5};
	colorVehicleChannelPlayerText[] = {0, 0, 0, 1};

	colorDirectChannel[] = {0.9, 0, 0.8, 1};
	colorDirectChannelPlayerBackground[] = {0.9, 0, 0.8, 0.5};
	colorDirectChannelPlayerText[] = {0, 0, 0, 1};

	colorPlayerChannel[] = {1.0, 1.0, 1.0, 1};
	colorPlayerChannelPlayerBackground[] = {1.0, 1.0, 1.0, 0.5};
	colorPlayerChannelPlayerText[] = {0, 0, 0, 1};

	colorMessage[] = {1.0, 1.0, 1.0, 1};
	colorMessageProtocol[] = {0.5, 0.5, 0.5, 1};

	shadow = 2;
  shadowPlayer = 0;
	shadowColor[] = {0.0, 0.0, 0.0, 1};
	// indication of messages important to player
	//iconNormalMessage = ProcTextGreen;
	//iconPlayerMessage = ProcTextRed;
};

class RscChatListMission : RscChatListDefault
{
	// left
	x = 0.0; 
	// top
	y = 0.8; 
	// width
	w = 1.0;	
	rows = 5;
};

class RscChatListBriefing : RscChatListDefault
{
	 // left
	x = 0.0;
	// top
	y = 0.8;
	// width
	w = 1.0;	
	rows = 2;
};

class RscChatListMap : RscChatListDefault
{
	// left
	x = 0.0; 
	// top
	y = 0.8; 
	// width
	w = 1.0;	
	rows = 2;
};

class RscTitlesText
{
	access = ReadAndWrite;
	fontBasic = FontMAIN;
	sizeExBasic = SizeNormal;

	fontDown = FontMAIN;
	sizeExDown = SizeNormal;
	offsetDown = 0.245;
	class Attributes
	{
		shadow = true;
		shadowOffset = 0.06;
		shadowColor = "#000000";
	};
};

class RscIGText : RscText
{
	access = ReadAndWrite;
	h = 0.04;
	colorText[] = {0.8, 0.8, 0.8, 1};
	font = FontMAIN;
	sizeEx = 0.024;
	style = ST_LEFT + ST_SHADOW;
};
class RscIGProgress: RscProgress
{
	style = 0;
	h = 0.018;
	colorFrame[] = {0.8, 0.8, 0.8, 0.75};
	colorBar[] = {0.8, 0.8, 0.8, 0.5};
	texture = ProcTextGreen;
};

class RscDisplayHintC
{
	access = ReadAndWrite;
	idd = IDD_HINTC;
	movingEnable = true;

	class controls
	{
		class Background: RscText
		{
			idc = IDC_HINTC_BG;
			style = ST_HUD_BACKGROUND;
			moving = true;
			x = 0.35;
			y = 0.40;
			w = 0.50;
			h = 0.06;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
		};

		class Hint: RscIGText
		{
			idc = IDC_HINTC_HINT;
			style = ST_MULTI;
			lineSpacing = 1;
			sizeEx = SizeSmall;
			x = 0.36;
			y = 0.41;
			w = 0.48;
			colorBackground[] = {0, 0, 0, 0};
			text = STR_DISP_ERROR;
		};

		class continue: RscShortcutButton
		{
			idc = IDC_CANCEL;
			x = 0.55;
			y = 0.41;
			w = 0.3;
			h = 0.035;
			text = $STR_DISP_HINTC_CONTINUE;
		};
	};
};

class RscDisplayHintCEx
{
	access = ReadAndWrite;
	idd = IDD_HINTC_EX;
	movingEnable = true;
		soundOpen[] = {"", 0.5, 1};

		indent = ProcTextWhite;

	class controls
	{
		class Background: RscText
		{
			idc = IDC_HINTC_BG;
			style = ST_HUD_BACKGROUND;
			moving = true;
			x = 0.15;
			y = 0.40;
			w = 0.70;
			h = 0.155;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
		};

		class Title: RscText
		{
			idc = IDC_HINTC_TITLE;
			style = ST_LEFT;
			x = 0.17;
			y = 0.42;
			w = 0.66;
			h = 0.06;
			text = STR_DISP_ERROR;
			colorText[] = {0.8, 0.8, 0.8, 1};
			font = FontMAIN;
			sizeEx = SizeNormal;
		};

		class Line1: RscText
		{
			idc = IDC_HINTC_LINE1;
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {1, 1, 1, 1};
		};

		class Hint: RscStructuredText
		{
			idc = IDC_HINTC_HINT;
			style = 0;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			size = SizeSmall;
			text = STR_DISP_ERROR;

			class Attributes
			{
				font = FontMAIN;
				color = #e0e0e0;
				shadow = false;
			};
		};

		class Line2: RscText
		{
			idc = IDC_HINTC_LINE2;
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = {0.8, 0.8, 0.8, 1};
			color[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {0.8, 0.8, 0.8, 1};
		};
		
		
		class continue: RscActiveText
		{
			idc = IDC_HINTC_CONTINUE;
			style = ST_RIGHT;
			font = FontMAIN;
			sizeEx = SizeSmall;
			x = 0.17;
			y = 0.49;
			w = 0.66;
			h = 0.035;
			text = $STR_DISP_HINTC_CONTINUE;
			color[] = {0.8, 0.8, 0.8, 1};
			colorActive[] = {0.8, 0.8, 0, 1};
		}; 
	};
};

class RscInGameUI
{
	access = ReadAndWrite;

  colorReady[] = {1, 1, 1, 1};              // Default weapon info colour
  colorReadyWest[] = { 1, 1, 1, 1 };        // Weapon info colour for West fraction (BLUFOR)
  colorReadyEast[] = { 1, 1, 1, 1 };        // Weapon info colour for East fraction (OPFOR)
  colorReadyIndependent[] = { 1, 1, 1, 1 }; // Weapon info colour for independents
  colorReadyCivilian[] = { 1, 1, 1, 1 };    // Weapon info colour for civilians
  colorPrepare[] = {0.69, 0.7, 0.1, 1};
  colorUnload[] = {0.75, 0.29, 0.29, 1};


	class RscUnitInfo
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Background2,
			Hitzones,
			ValueFuel,
			//Time,
			//Date,
			//Name,
			//Unit,
			//Vehicle,
			Speed,
			Alt,
			//TextExp,
			//ValueExp,
			//CombatMode,
			//Formation,
			//TextHealth,
			//ValueHealth,
			TextArmor,
			TextFuel,
			//CargoMan,
			//CargoFuel,
			//CargoRepair,
			//CargoAmmo,
			Weapon,
			Ammo,
			AmmoCount,
			MagCount,
			Heading
		};
		class Background: RscText
		{
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.138;
			w = 0.33;
			h = 0.09;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
		};
		class Background2: RscText
		{
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.67;
			y = 0.138;
			w = 0.33;
			h = 0.09;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
		};
		class Speed : RscIGText
		{
			idc = IDC_IGUI_SPEED;
			x = 0.005;
			y = 0.145;
			w = 0.2;
			text = $STR_DISP_ERROR;
		};
		class Alt : RscIGText
		{
			idc = IDC_IGUI_ALT;
			style = ST_RIGHT+ST_SHADOW;
			x = 0.16;
			y = 0.145;
			w = 0.16;
			text = $STR_DISP_ERROR;
		};
		class TextArmor : RscIGText
		{
			x = 0.68;
			y = 0.145;
			w = 0.190;
			text = $STR_UI_ABAR;
		};
		class Hitzones : RscHitZones
		{
			idc = IDC_IGUI_HITZONES;
			x = 0.82;
			y = 0.155;
			w = 0.165;
			h = 0.025;
		};
		class TextFuel : RscIGText
		{
			x = 0.68;
			y = 0.185;
			w = 0.190;
			text = $STR_UI_FBAR;
		};
		class ValueFuel : RscIGProgress
		{
			idc = IDC_IGUI_VALUE_FUEL;
			x = 0.82;
			y = 0.19;
			w = 0.165;
			h = 0.025;
		};
		class ValueReload : RscIGProgress
		{
			idc = IDC_IGUI_VALUE_RELOAD;
			x = 0.92;
			y = 0.19;
			w = 0.165;
			h = 0.025;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.005;
			y = 0.185;
			w = 0.25;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.17;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class AmmoCount : RscIGText
		{
			idc = IDC_IGUI_AMMOCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.32;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class MagCount : RscIGText
		{
			idc = IDC_IGUI_MAGCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.17;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class Heading: RscIGText
		{
			idc = IDC_IGUI_HEADING;
			style = ST_LEFT	+ ST_SHADOW;
			x = 0.017; y = 0.01;
			w = 0.17;
		};
	};

	class RscUnitInfoSoldier: RscUnitInfo
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Weapon,
			Ammo,
			AmmoCount,
			MagCount,
			GUI_Body,
			GUI_Bleeding0,
			GUI_Bleeding0,
			GUI_InjuredHead0,
			GUI_InjuredHead1,
			GUI_InjuredLegs0,
			GUI_InjuredLegs1,
			GUI_InjuredLegs2,
			GUI_InjuredHands0,
			GUI_InjuredHands1,
			GUI_InjuredHands2
		};
		class Background: RscText
		{
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.0;
			w = 0.385;
			h = 0.05;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = SizeSmall;
			fixedWidth = false;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.0;
			y = 0.008;
			w = 0.282;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.0;
			y = 0.009;
			w = 0.378;
			text = $STR_DISP_ERROR;
		};
		class AmmoCount : RscIGText
		{
			idc = IDC_IGUI_AMMOCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.17;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class MagCount : RscIGText
		{
			idc = IDC_IGUI_MAGCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.32;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		
		//first aid
		class GUI_Body: RscPicture
		{
			idc = IDC_IGUI_BODY;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_Bleeding0: RscPicture
		{
			idc = IDC_IGUI_BLEEDING0;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_Bleeding1: RscPicture
		{
			idc = IDC_IGUI_BLEEDING1;
			text = ""; /// path should be redefined in project specific configs
		};

		class GUI_InjuredHead0: RscPicture
		{
			idc = IDC_IGUI_INJURED_HEAD0;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_InjuredHead1: RscPicture
		{
			idc = IDC_IGUI_INJURED_HEAD1;
			text = ""; /// path should be redefined in project specific configs
		};

		class GUI_InjuredLegs0: RscPicture
		{
			idc = IDC_IGUI_INJURED_LEGS0;
			text = ""; /// path should be redefined in project specific configs
		}
		class GUI_InjuredLegs1: RscPicture
		{
			idc = IDC_IGUI_INJURED_LEGS1;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_InjuredLegs2: RscPicture
		{
			idc = IDC_IGUI_INJURED_LEGS2;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_InjuredHands0: RscPicture
		{
			idc = IDC_IGUI_INJURED_HANDS0;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_InjuredHands1: RscPicture
		{
			idc = IDC_IGUI_INJURED_HANDS1;
			text = ""; /// path should be redefined in project specific configs
		};
		class GUI_InjuredHands2: RscPicture
		{
			idc = IDC_IGUI_INJURED_HANDS2;
			text = ""; /// path should be redefined in project specific configs
		};


	};

	class RscUnitInfoTank: RscUnitInfo
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]=
		{
			Background,
			Weapon,
			Ammo,
			AmmoCount,
			MagCount,
			Commander,
			Gunner,
			Driver,
			Heading
		};
		class Background: RscText
		{
			idc = IDC_IGUI_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.02;
			y = 0.18;
			w = 0.21;
			h = 0.25;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
		};
		class Weapon : RscIGText
		{
			idc = IDC_IGUI_WEAPON;
			x = 0.025;
			y = 0.38;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class Ammo : RscIGText
		{
			idc = IDC_IGUI_AMMO;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.035;
			y = 0.38;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class AmmoCount : RscIGText
		{
			idc = IDC_IGUI_AMMOCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.17;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class MagCount : RscIGText
		{
			idc = IDC_IGUI_MAGCOUNT;
			style = ST_RIGHT + ST_SHADOW;
			x = 0.32;
			y = 0.19;
			w = 0.15;
			text = $STR_DISP_ERROR;
		};
		class Commander : RscIGText
		{
			idc = IDC_IGUI_COMMANDER;
			x = 0.025;
			y = 0.38 + 0.04;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class Gunner : RscIGText
		{
			idc = IDC_IGUI_GUNNER;
			x = 0.025;
			y = 0.38 + 2 * 0.04;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class Driver : RscIGText
		{
			idc = IDC_IGUI_DRIVER;
			x = 0.025;
			y = 0.38 + 3 * 0.04;
			w = 0.190;
			text = $STR_DISP_ERROR;
		};
		class Heading: RscIGText
		{
			idc = IDC_IGUI_HEADING;
			style = ST_LEFT	+ ST_SHADOW;
			x = 0.017; y = 0.01;
			w = 0.17;
		};			
	};

	class RscUnitInfoAir: RscUnitInfo
	{
	};

	class RscStanceInfo
	{
		idd = IDD_STANCEINFO;

		controls[]=
		{
			StanceIndicatorBackground,
			StanceIndicator
		};

		class StanceIndicatorBackground: RscPicture
		{
			colorText[] = {0, 0, 0, 0};

			idc = 1201;
			text = ""; // bg texture
			x = 10.1 * IGUI_GRID_WEAPON_W + IGUI_GRID_WEAPON_X;
			y = 0 * IGUI_GRID_WEAPON_H + IGUI_GRID_WEAPON_Y;
			w = 2.3 * IGUI_GRID_WEAPON_W;
			h = 3.7 * IGUI_GRID_WEAPON_H;
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			idc = IDC_IGUI_STANCE_INDICATOR; //188

			text = ""; // current stance texture
			x = 10.1 * IGUI_GRID_WEAPON_W + IGUI_GRID_WEAPON_X;
			y = 0 * IGUI_GRID_WEAPON_H + IGUI_GRID_WEAPON_Y;
			w = 2.3 * IGUI_GRID_WEAPON_W;
			h = 2.3 * IGUI_GRID_WEAPON_H;
		};
	};

	// backward compatibility - original values of unitInfoType
	class UnitInfoSoldier : RscUnitInfoSoldier {};
	class UnitInfoTank : RscUnitInfoTank {};
	class UnitInfoCar : RscUnitInfo {};
	class UnitInfoShip : RscUnitInfo {};
	class UnitInfoAirplane : RscUnitInfoAir {};
	class UnitInfoHelicopter : RscUnitInfoAir {};

	class RscHint
	{
		idd = IDD_HINT;
		movingEnable = false;
		controls[]=
		{
			Background,
			Hint
		};
		class Background: RscText
		{
			idc = IDC_IGHINT_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.0;
			y = 0.02;
			w = 0.28;
			h = 0.06;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
			shadow = 0;
		};
		class Hint : RscStructuredText
		{
			idc = IDC_IGHINT_HINT;
			x = 0.001;
			y = 0.031; 
			w = 0.275; 
			h = 0.04;
			// To keep backward compatibility with the CT_STATIC
			style = ST_MULTI;
			lineSpacing = 1;
			sizeEx = Size_Main_Small;			

			colorText[] = {1, 1, 01, 1};
			colorBackground[] = {0, 0, 0, 0};
			
			font = FontMAIN;
			size = Size_Main_Small;			
			text = $STR_DISP_ERROR;
			
			class Attributes : Attributes
			{
				color = "#ffffff";
				align = "center";
				shadow = false;
			};
			
		};
	};

	class RscTaskHint
	{
	idd = IDD_TASKHINT;
	movingEnable = false;
	class controlsBackground 
	{
		class Background: RscText
		{
			idc = IDC_IGTASKHINT_BG;
			style = ST_HUD_BACKGROUND;
			x = 0.36;
			y = 0.22;
			w = 0.28;
			h = 0.06;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = FontMAIN;
			sizeEx = 0;
			fixedWidth = false;
			shadow = 0;
		};
	}; 
	class Controls
	{
		class Hint : RscStructuredText
		{
			idc = IDC_IGTASKHINT_HINT;
			x = 0.404;
			y = 0.231;
			w = 0.230;
			h = 0.04;
			// To keep backward compatibility with the CT_STATIC
			style = ST_MULTI;
			lineSpacing = 1;
			sizeEx = Size_Main_Small;			

			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0, 0, 0, 0};

			font = FontMAIN;
			size = Size_Main_Small;			
			text = $STR_DISP_ERROR;

			class Attributes : Attributes
			{
				color = "#ffffff";
				align = "left";
				shadow = false;
			};
		};
	};
		class TaskIcon
		{
			x = 0.365;
			y = 0.235; 
			w = 0.04;
			h = 0.08;
		};	
	};
	class RscTaskOverview
	{
		idd = IDD_TASK_OVERVIEW;
		
		showMaxDescLines = 5;			// # of line of task description to draw. Rest would be cliped and string "..." would be added at the end to denote missing part
		enableSimulation = 1; 			//1 (true) to allow world simulation to be running in the background, 0 to freeze it
		enableDisplay = 1; 			//1 (true) to allow scene rendering in the background
		closeOnMissionEnd = 1; 			//close the display on client when server ends the mission
		
		paddingX = 0.003;
		paddingY = 0.001;
		minW = 0.1;
		maxW = 0.4;
		
		class controls
		{
			class TaskOverviewAssigned : RscControlsGroup
			{
				idc = IDC_TASKOVERVIEW_ASSIGNED;
				x = -0.2;
				y = -0.2;
				w = 0.4;
				h = 0.1;
				
				show = 0;
				
				class controls
				{
					/*------------------------------------------------------------------
					
					PANEL
					
					------------------------------------------------------------------*/
					class Background : RscPicture
					{
						text = ProcTextBlack;
						x = 0;
						y = 0;
						w = 0.4;
						h = 0.1;
					};
					class Title : RscText
					{
						idc = IDC_TASKOVERVIEW_TITLE;
						text = "<TaskTitle>";
						x = 0.5;
						y = 0.06;
						w = 0.35;
						h = 0.03;
						sizeEx = 0.025;
						font = FontMAIN;
						shadow = 0;
					};
					class Icon : RscPicture
					{
						idc = IDC_TASKOVERVIEW_ICON;
            text = ProcTextOrange;
						colorText[] = {Yellow, 1};
						x = 0.01;
						y = 0.06;
						w = 0.03;
						h = 0.03;
						shadow = 0;
					};
					
					/*------------------------------------------------------------------
					
					HEADER
					
					------------------------------------------------------------------*/
					class HeaderBackground : RscPicture
					{
						text = ProcTextBlack;
						x = 0;
						y = 0;
						w = 0.4;
						h = 0.05;
					};
					class HeaderText : RscText
					{
						text = "ASSIGNED TASK:";
						x = 0;
						y = 0;
						w = 0.4;
						h = 0.05;
						
						colorText[] = {White, 1};
						colorBackground[] = {Black, 0};
						
						style = ST_MULTI + ST_NO_RECT;
						sizeEx = 0.025;
						font = FontMAIN;
						shadow = 0;
					};
				};
			};
			
			class TaskOverviewUnassigned : TaskOverviewAssigned
			{
				idc = IDC_TASKOVERVIEW_UNASSIGNED;
				
				show = 0;
				
				class controls
				{
					/*------------------------------------------------------------------
					
					HEADER
					
					------------------------------------------------------------------*/
					class HeaderBackground : RscPicture
					{
            text = ProcTextBlack;
						x = 0;
						y = 0;
						w = 0.4;
						h = 0.05;
					};
					class HeaderText : RscText
					{
						text = "NO TASK IS ASSIGNED!";
						x = 0;
						y = 0;
						w = 0.4;
						h = 0.05;
						
						colorText[] = {Gray5, 1};
						colorBackground[] = {Black, 0};
						
						style = ST_MULTI + ST_NO_RECT;
						sizeEx = 0.025;
						font = FontMAIN;
						shadow = 0;
					};
				};
			};
		};
	};
};

class RscTitles
{
};

//Loading screen
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd = -1;
			movingEnable = false;

			class controlsBackground
			{
				class Background1: RscText
				{
					x = 0; y = 0;
					w = 1; h = 1;
					colorBackground[] = {0.3, 0.3, 0.3, 1};
				};
			};

			class controls
			{
				class Name: RscText
				{
					idc = IDC_LOAD_MISSION_NAME;
					text = $STR_DISP_ERROR;
					style = ST_CENTER;
					x = 0; y = 0.04;
					w = 1;
				};

				class Date: RscText
				{
					idc = IDC_LOAD_MISSION_DATE;
					text = $STR_DISP_ERROR;
					style = ST_CENTER;
					x = 0; y = 0.7;
					w = 1;
				};

				class FakeProgress: RscText
				{
					x = 0.25; y = 0.5;
					w = 0.5;
					colorBackground[] = {0.8, 0.8, 0.8, 0.2};
				};

				//Progress bar.
				class Progress: RscProgress
				{
					idc = IDC_PROGRESS_PROGRESS;
					x = 0.25; y = 0.5;
					w = 0.5; h = 0.05;
				};

				//Activity indicator bar.
				class Progress2: RscProgress
				{
					idc = IDC_PROGRESS_TIME;
					x = 0.4; y = 0.6;
					w = 0.2; h = 0.03;
				};

				class TextLoad: RscText
				{
					style = ST_CENTER;
					x = 0.25; y = 0.45;
					w = 0.5;
					text = "$STR_LOADING";
				};
			};
		};
	};
};

//Load mission screen.
class RscDisplayLoadMission: RscStandardDisplay
{
	idd = -1;

	class controls
	{
		class Title: RscTitle 
		{
			text = $STR_LOADING;
		}; 

		//Mission's name.
		class Name: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.12;
			w = 1;
		};

		//Mission's briefing.
		class Briefing: RscHTML
		{
			idc = IDC_BRIEFING;
			x = 0.09; y = 0.18;
			w = 0.85;
			h = 0.6;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
			idc = IDC_PROGRESS_PROGRESS;
			x = 0.15; y = 0.848;
			w = 0.7; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.9;
			w = 0.2; h = 0.03;
		};

		//Mission's date.
		class Date: RscText
		{
			idc = IDC_LOAD_MISSION_DATE;
			text = $STR_DISP_ERROR;
			style = ST_CENTER;
			x = 0; y = 0.94;
			w = 1;
		};
	};
};

//Generic loading screen.
class RscDisplayNotFreeze: RscStandardDisplay
{
	idd = -1;

	class controls
	{
		class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.45;
			w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
			idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};

//Generic loading screen.
class RscDisplayNotFreezeBig: RscStandardDisplay
{
	idd = -1;

	class controls
	{
		class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.45;
			w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
			idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};

//Loading screen start
class RscDisplayStart: RscStandardDisplay
{
	idd = -1;

	class controls
	{
		class Text: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.45;
			w = 1;
		};

		//Loading progress bar.
		class Progress: RscProgress
		{
			idc = IDC_PROGRESS_PROGRESS;
			x = 0.3; y = 0.5;
			w = 0.4; h = 0.05;
		};

		//Activity indicator bar.
		class Progress2: RscProgress
		{
			idc = IDC_PROGRESS_TIME;
			x = 0.4; y = 0.6;
			w = 0.2; h = 0.03;
		};
	};
};
