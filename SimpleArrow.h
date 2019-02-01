/* 
 * File:   SimpleArrow.h
 * Author: Roy V. Rudd III
 *
 * Created on September 2/1/2019 1:50pm
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEARROW_H
#define SIMPLEARROW_H

/**
 * Defines the behavior of a simple arrow (hitpoint = 45, if armor value is less than 25 ignores all armor, if greater than 35, does no damage
 */
class SimpleArrow : public Weapon {
public:

	SimpleArrow() : Weapon("Simple arrow", 45.0) {} //Calls Weapon(name, hitpoints)

	virtual ~SimpleArrow() {};

	virtual double hit(double armor);

};

#endif /* SIMPLEARROW_H */

