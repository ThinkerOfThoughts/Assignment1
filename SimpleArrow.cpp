/* 
 * File:   SimpleArrow.cpp
 * Author: Roy V. Rudd III
 *
 * Created on September 2/1/2019 1:52pm
 */

#include "SimpleArrow.h"

double SimpleArrow::hit(double armor)
{
   	double damage = hitPoints;
	if (armor > 25 && armor < 35)
	{
	        damage = hitPoints - armor;
	}
	else if(armor >= 35)
	{
		damage = 0;
	}
	return damage;
}
