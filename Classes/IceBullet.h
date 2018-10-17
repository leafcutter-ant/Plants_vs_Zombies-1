#pragma once
#include "cocos2d.h"
#include "PeaBullet.h"

USING_NS_CC;

class IceBullet :public PeaBullet
{
private:
	MotionStreak* streak;
public:
	IceBullet(Point position);
	void Hit_Animation(TestZombie* zombie);
	void attack_Animation();
	void resume(Node * pSender, TestZombie* zombie);
};