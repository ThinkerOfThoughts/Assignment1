/* 
 * File:   CrazyRandomSword.h
 * Author: Roy V. Rudd III
 * 
 * Created on 2/1/2019 1:35pm
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>	//random number generator
#include <time.h>       //for random number generation seed
#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword",7.0) //Calls Weapon(name, hitpoints) constructor, base hitpoints 7
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

