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
#define kTileSize 90.0f
#define kMoveTileTime 0.2f
#define kBoxWidth 5
#define kBoxHeight 8
#define kStartX 10
#define kStartY 10
#define kKindCount 6
#define kDesignWidth 480
#define kDesignHeight 800

//define resource id
static const char s_MainBackgroundResourceId[]         = "main_bg.jpg";

enum Orientation{
	OrientationHori,
	OrientationVert,
};

#endif
