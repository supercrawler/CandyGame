#include "SpriteFactory.h"

SpriteFactory* SpriteFactory::s_Instance = nullptr;
SpriteFactory::SpriteFactory(void)
{
}


SpriteFactory::~SpriteFactory(void)
{
}

SpriteFactory* SpriteFactory::getInstance()
{
    if (s_Instance == nullptr)
    {
        s_Instance = new SpriteFactory();
    }
    
    return s_Instance;
}

Sprite* SpriteFactory::create(int spriteFileNameId, float posX, float posY)
{
    String* name = String::createWithFormat("%d.png", spriteFileNameId);
    Sprite* sprite = Sprite::create(name->getCString());
    sprite->setScale(kSpriteScale);
    sprite->setPosition(Point(posX, posY));
    return sprite;
}