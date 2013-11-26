#ifndef _ENTER_SCENE_H_
#define _ENTER_SCENE_H_

#include "cocos2d.h"
#pragma once
class EnterScene : public cocos2d::Layer
{
public:
    EnterScene(void);
    ~EnterScene(void);

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* scene();

    // implement the "static node()" method manually
    CREATE_FUNC(EnterScene);
};

#endif