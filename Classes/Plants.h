#pragma once
#include "cocos2d.h"
#include "Entity.h"
#include "Bullet.h"
USING_NS_CC;
class Plants:public Entity
{
private:
	int _Hp;
	long long BirthTime;
	long long _BulletInterval;
public:
	Plants();
	int getHp();
	void setHp(int hp);
	long long getInterval();
	void setInterval(long long BulletInterval);
	long long getBirthTime();
	void setBirthTime(long long seconds);
	virtual void Attack() = 0;
	virtual void Die() = 0;
	virtual void Self_Animation(Sprite* sp) = 0;
	virtual void Attack_Animation(Sprite* sp) = 0;
	virtual void Attacked() = 0;
	virtual bool isAttacking() = 0;
	virtual void CreateBullet(Sprite* sp)=0;
};