//
//  GameDefine.h
//  HelloCpp
//
//  Created by LiuYanghui on 13-11-5.
//
//

#ifndef HelloCpp_GameDefine_h
#define HelloCpp_GameDefine_h

//define some const variable.
#define kTileSize 75.0f
#define kSpriteScale 0.5f
#define kSpriteScorePer 10

#define kMoveTileTime 0.2f
#define kBoxWidth 5
#define kBoxHeight 8
#define kStartX 10
#define kStartY 100
#define kKindCount 6
#define kDesignWidth   480
#define kDesignHeight  800
#define kWith 480
#define kHeight 800


//define resource id
static const char s_MainBackgroundResourceId[]         = "main_bg.jpg";
static const char s_BtnPlayNormal[]         = "btn_enter_normal.png";
static const char s_BtnPlayPressed[]         = "btn_enter_pressed.png";
static const char s_BtnHelpNormal[]         = "btn_help_normal.png";
static const char s_BtnHelpPressed[]         = "btn_help_pressed.png";
static const char s_BtnQuitNormal[]         = "quit.png";
static const char s_BtnQuitPressed[]         = "quit_pressed.png";
static const char s_BtnBackNormal[]         = "btn_back_normal.png";
static const char s_BtnBackPressed[]         = "btn_back_pressed.png";

enum Orientation{
	OrientationHori,
	OrientationVert,
};

#endif
