﻿#ifndef _SHOP_LAYER_H__
#define _SHOP_LAYER_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"

#include <vector>
using namespace std;

using namespace cocos2d::ui;
class DialogLayer;

class ShopLayer : public cocos2d::Layer
{
public:

	//关闭开关
	void touchCloseEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

	void touchCardEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
	void touchLoginShopEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

	//触碰事件  （单点触碰）
	bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);

public:
 
    virtual bool init();
    void setParentScene(Node* node);

	void setRoomCard();
    
    // implement the "static create()" method manually
	CREATE_FUNC(ShopLayer);

private:
    Node*                   m_parentNode;
	Text*					m_cardNum;
	DialogLayer* m_shopingLayer;
    
    void thirdPayCallBack(int code);
	
};

#endif // _SHOP_LAYER_H__
