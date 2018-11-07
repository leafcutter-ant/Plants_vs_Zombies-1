#pragma once
#include "cocos2d.h"
#include "Plants.h"
#include "PeaShooter.h"
USING_NS_CC;
class DoublePeaShooter :public PeaShooter
{
public:
	DoublePeaShooter(Point position,int row,int col);
	void Die();
	void CreateBullet();
	void addBullet(Node * pSender, Sprite* plant);
	void clear(Node * pSender);
};
