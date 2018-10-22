#pragma once
#include "cocos2d.h"
#include "Plants.h"
USING_NS_CC;
class JannuDaruku : public Plants
{
private:
	Point position;
public:
	JannuDaruku(Point position);
	virtual bool isWorking();//是否能工作
	virtual void work();
	virtual void Die();
	void MyFire(Node *pSender);
	void zombiesDie(Node* pSender);
	void creatFire();
	virtual void Attacked();
	//产生子弹
	virtual void CreateBullet();
	//清理精灵
	void clear(Node * pSender);
	
};