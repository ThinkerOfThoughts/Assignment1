/* 
 * File:   CrazyRandomSword.cpp
 * Author: Roy V. Rudd III
 * 
 * Created on 2/1/2019 1:37pm
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	srand (time(NULL));
   	hitpoints = rand()%100 + 7;	//random number between 7 and 100

	damage = (int) hitPoints - rand()%(armor * 0.333) + 2;	//ignores random amount of armor between armor/3 to 2

	return damage;
}
