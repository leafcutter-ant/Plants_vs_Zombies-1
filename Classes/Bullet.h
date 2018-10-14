#pragma once
#include "cocos2d.h"
#include "Entity.h"
#include "Bullet.h"
USING_NS_CC;
class Bullet : public Entity
{
private:
	int _Damage;
	double _Speed;
public:
	Bullet();
	Bullet(Point position, int damage, double speed);
	int getDamage();
	void setDamage(int damage);
	double getSpeed();
	void setSpeed(double speed);
	virtual void work() = 0;
	virtual void move() = 0;
	virtual void Hit_Animation(Sprite * Zombie, std::vector<int>debuff,Vector<Action*>action) = 0;
	virtual Sprite * attack_Animation()=0;
};