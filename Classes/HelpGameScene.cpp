#include "HelpGameScene.h"

USING_NS_CC;

HelpGameScene::HelpGameScene(void)
{
}


HelpGameScene::~HelpGameScene(void)
{
}

Scene* HelpGameScene::scene() {

    // 'scene' is an autorelease object
    Scene *scene = Scene::create();

    // 'layer' is an autorelease object
    HelpGameScene *layer = HelpGameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool HelpGameScene::init()
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