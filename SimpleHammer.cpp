/* 
 * File:   SimpleHammer.cpp
 * Author: Roy V. Rudd III
 * 
 * Created on 2/1/2019 1:17pm
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
   	double damage = hitPoints;
	if (armor >= 30)
	{
	        damage = hitPoints - armor;
	}
	return damage;
}
