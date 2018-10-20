#include "DoublePeaShooter.h"
#include "PeaBullet.h"
#include "Global.h"
#include "DoubleBullet.h"
DoublePeaShooter::DoublePeaShooter(Point position):PeaShooter()
{
	Sprite*sp = Sprite::create("doubleShooter.png");
	this->setImg(sp);
	sp->retain();
	sp->setScale(0.2);
	sp->setPosition(position);
	this->setHp(20);
	this->setInterval(2000);
	addLayer(sp);
	this->Self_Animation();
	readyPlants.push_back(this);
}

void DoublePeaShooter::CreateBullet()
{
	CCScaleBy * scaleup = CCScaleBy::create(0.07f, 0.8f, 1.25f);
	CCScaleBy * scaledown = CCScaleBy::create(0.2f, 1.5625f, 0.64f);
	CCScaleBy * scaleup1 = CCScaleBy::create(0.1f, 0.8f, 1.25f);
	Sequence *sequence = Sequence::create(scaleup, scaledown, scaleup1, NULL);
	this->getImg()->runAction(sequence);
	Sprite *sp = this->getImg();
	Point a = ccp(sp->getPositionX(), sp->getContentSize().height*sp->getScaleX() / 4 + sp->getPositionY());
	Bullet *pb = new DoubleBullet(a);
	auto actionDone = CallFuncN::create(CC_CALLBACK_1(DoublePeaShooter::addBullet, this,sp));
	CCFiniteTimeAction * reveseseq = CCSequence::create(CCDelayTime::create(0.2) , actionDone, NULL);
	sp->runAction(reveseseq);
}

void DoublePeaShooter::addBullet(Node * pSender, Sprite * sp)
{
	Point a = ccp(sp->getPositionX() , sp->getContentSize().height*sp->getScaleX() / 4 + sp->getPositionY());
	Bullet *pb = new DoubleBullet(a);
}