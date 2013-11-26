#include "EnterScene.h"

USING_NS_CC;

EnterScene::EnterScene(void)
{
}


EnterScene::~EnterScene(void)
{
}


Scene* EnterScene::scene() {

    // 'scene' is an autorelease object
    Scene *scene = Scene::create();

    // 'layer' is an autorelease object
    EnterScene *layer = EnterScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool EnterScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();


    return true;
}
