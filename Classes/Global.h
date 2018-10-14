#pragma once
#include "cocos2d.h"
#include "Bullet.h"
#include "Plants.h"
#include "test.h"
#define Icing 0
USING_NS_CC;

extern std::vector <Bullet*> preBullet;
extern std::vector <Plants*> prePlants;
extern std::vector <Bullet*> readyBullet;
extern std::vector <Plants*> readyPlants;
extern Map<Sprite*,Sprite*>preSun;//ֲ�ﾫ�飬̫������
extern Map<Sprite*,Sprite*>readySun;
extern std::vector<Sprite*> testMap;
extern std::pair<int ,std::pair<double,double>>sunCnt;
extern std::vector<int> debuff;

extern int speed_;