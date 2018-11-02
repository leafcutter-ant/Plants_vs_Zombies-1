#include "StarShooter.h"
#include "Global.h"
#include "PeaBulletPlus.h"

StarShooter::StarShooter(Point position, int row, int col)
{
	this->setRow(row);
	this->setCol(col);
	Sprite*sp = Sprite::create("StarShooter.png");
	this->setImg(sp);
	sp->retain();
	sp->setScale(0.2);
	sp->setPosition(position);
	this->setHp(6);
	this->setInterval(2000);
	addLayer(sp);
	this->Self_Animation();
	readyPlants.push_back(this);
}

void StarShooter::CreateBullet()
{
	CCScaleBy * scaleup = CCScaleBy::create(0.07f, 0.8f, 1.25f);
	CCScaleBy * scaledown = CCScaleBy::create(0.2f, 1.5625f, 0.64f);
	CCScaleBy * scaleup1 = CCScaleBy::create(0.1f, 0.8f, 1.25f);
	Sequence *sequence = Sequence::create(scaleup, scaledown, scaleup1, NULL);
	this->getImg()->runAction(sequence);
	Sprite *sp = this->getImg();
	//ֲ�����ĵ�X���ֲ꣬�����ĵ�+1/4ֲ��߶ȵ�Y����
	Point a = ccp(sp->getPositionX(), sp->getContentSize().height*sp->getScaleY() / 4 + sp->getPositionY());
	new PeaBulletPlus(a, this->getRow(), 30);
	new PeaBulletPlus(a, this->getRow(),120);
	new PeaBulletPlus(a, this->getRow(), 180);
	new PeaBulletPlus(a, this->getRow(), -120);
	new PeaBulletPlus(a, this->getRow(), -30);
	setNewBirthTime();
}