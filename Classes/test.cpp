#include "test.h"
#include "Global.h"
#include "IceShooter.h"
#include "PotatoMine.h"
#include "Pumpkin.h"
#include "BasicZombie.h"
#include "Plants.h"
#include "DoublePeaShooter.h"
#include "Mushroom.h"
#include "Weeds.h"
#include "NutPlus.h"
#include "Sunflower.h"
#include "Doom_shroom.h"
#include "JannuDaruku.h"
#include "StarShooter.h"
#include "iceCabbage.h"
#include "riceShooter.h"
#include "Card.h"
#include "Cushaw.h"
#include "Lancer.h"
#include "Paul.h"
#include "Chomper.h"
#include <iostream>
#include <typeinfo>
using namespace map;
test::test()
{
	//Plants* plant1 = new Weeds(Point(60, 120),4);      
	new BasicZombie(Rank2Point(6, 6), 6, 5);
	new BasicZombie(Rank2Point(5, 6), 5, 6);
	new BasicZombie(Rank2Point(4, 6), 4, 6);
	new BasicZombie(Rank2Point(3, 6), 3, 6);
	new BasicZombie(Rank2Point(2, 6), 2, 6);
	new BasicZombie(Rank2Point(1, 6), 1, 6);
	/*new BasicZombie(Rank2Point(3, 6), 3, 6);
	new BasicZombie(Rank2Point(3, 6), 3, 6);
	new BasicZombie(Rank2Point(3, 6), 3, 6);*/
	//Zombie* zombie2 = new BasicZombie(Point(120, 60), 4); 
	//Plants* plant1 = new PotatoMine(Point(100, 60), 4);
	//Plants* plant2 = new Weeds(Point(60, 250),1);
	//std::cout << Rank2Point(1, 1).x<<"	" <<Rank2Point(1, 1).y << std::endl;
	new Lancer(Rank2Point(4, 4), 4, 4);

	/*new Paul(Rank2Point(5, 4), 5, 4);
	new Paul(Rank2Point(6, 6), 6, 6);

	new Paul(Rank2Point(6, 4), 6, 4);*/

	//new Nut(Rank2Point(1, 1), 1, 1);
	//Plants* plant4 = new IceShooter(Point(60, 120),1,1);
	//Plants* plant5 = new IceShooter(Point(60, 120),3);
	//Plants* plant5 = new Mushroom(Point(200, 120), 3);
	//Card<Mushroom>* card = new Card<Mushroom>(Point(100, 100), 3);
	//Card<Mushroom>* card = new Card<Mushroom>(Point(200, 300), 3);
	//Card<PeaShooter>* card2 = new Card<PeaShooter>(Point(300, 300), 3);
	//card->BindPlant<Mushroom>();
	//card->PutPlant<Mushroom>(Point(100, 200), 3);
}
