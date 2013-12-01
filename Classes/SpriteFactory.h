#ifndef _SPRITE_FACTORY_H_
#define _SPRITE_FACTORY_H_

#include "cocos2d.h"
#include "GameDefine.h"

USING_NS_CC;
#pragma once
class SpriteFactory
{
public:
    static SpriteFactory* getInstance();
    Sprite* create(int spriteFileNameId, float posX, float posY);
private:                              
    static SpriteFactory* s_Instance;
    SpriteFactory(void);
    ~SpriteFactory(void);
};

#endif