#include "EnterScene.h"
#include "GameScene.h"
#include "HelpGameScene.h"

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

    auto mapBg = Sprite::create(s_MainBackgroundResourceId);
    mapBg->setPosition(Point(visibleSize.width * .5 + origin.x, visibleSize.height * .5 + origin.y));
    this->addChild(mapBg);

    return true;
}

void EnterScene::onEnter()
{
    Layer::onEnter();

    auto playItem = MenuItemImage::create(s_BtnPlayNormal, s_BtnPlayPressed, CC_CALLBACK_1(EnterScene::playGame, this));
    auto helpItem = MenuItemImage::create(s_BtnHelpNormal, s_BtnHelpPressed, CC_CALLBACK_1(EnterScene::openHelp, this));
    auto closeItem = MenuItemImage::create(s_BtnQuitNormal, s_BtnQuitPressed, CC_CALLBACK_1(EnterScene::closeGame, this));

    auto menu = Menu::create(playItem, helpItem, closeItem, NULL);

    menu->setPosition(Point::ZERO);
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    Point center = Point(visibleSize.width /2.0f + origin.x, visibleSize.height /2.0f + origin.y);
    playItem->setPosition(Point(center.x, center.y + playItem->getContentSize().height * 2));
    helpItem->setPosition(Point(center.x, center.y));
    closeItem->setPosition(Point(center.x, center.y - playItem->getContentSize().height * 2));

    addChild(menu, 9999);
}

void EnterScene::onExit()
{
    Layer::onExit();
}

void EnterScene::playGame(Object* sender)
{
    auto gameScene = GameScene::createScene();
    Director::getInstance()->replaceScene(gameScene);
   // gameScene->release();
}

void EnterScene::openHelp(Object* sender)
{
    auto helpScene = HelpGameScene::scene();
    Director::getInstance()->replaceScene(helpScene);
}

void EnterScene::closeGame(Object* sender)
{
    Director::getInstance()->end();
}
