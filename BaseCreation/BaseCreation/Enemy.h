#ifndef __Enemy_H__
#define __Enemy_H__

#include "LootSystem.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport Enemy: public SdkSample
{
protected:
	string Name;
	int monsterLevel; //Level of the monster used for loot drops.
	int type;		  //type of monster. 

	float totalDamage;

	int currentLife;

	float totalProtection;
public:
	Enemy(){};

	Enemy(string n, float dmg, int curLife, float protection);

	float getDamage(){return totalDamage;};

	float getProtection(){return totalProtection;};

	int getCurrentLife(){return currentLife;};

	void damageLife(int dmg){currentLife = currentLife - dmg;}; ///Formula needs to include protection.

	void death();


};

#endif