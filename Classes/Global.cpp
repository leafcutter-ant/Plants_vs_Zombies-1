#include "Global.h"
std::vector <Bullet*> preBullet;
std::vector <Plants*> prePlants;
std::vector <Bullet*> readyBullet;
std::vector <Plants*> readyPlants;
Map<Sprite*, Sprite*>preSun;//ֲ�ﾫ�飬̫������
Map<Sprite*, Sprite*>readySun;
std::vector<Sprite*> testMap;
std::vector<int> debuff;
std::pair<int, std::pair<double, double> >sunCnt(0,std::make_pair(0,0));
int speed_ = 10;