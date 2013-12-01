#include "HelpGameScene.h"
#include "GameDefine.h"

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

    return true;
}

void HelpGameScene::onEnter()
{
    Layer::onEnter();

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    auto mapBg = Sprite::create(s_MainBackgroundResourceId);
    mapBg->setPosition(Point(visibleSize.width * .5 + origin.x, visibleSize.height * .5 + origin.y));
    this->addChild(mapBg);

    auto labValue = LabelTTF::create(String::create("Game Help....")->getCString(), "Arial", 30);
    labValue->setColor(Color3B(77, 77, 77));
    labValue->setPosition(Point(visibleSize.width /2.0f + origin.x, visibleSize.height/ 2.0f + origin.y));
    this->addChild(labValue);
}

void HelpGameScene::onExit()
{
    Layer::onExit();
}