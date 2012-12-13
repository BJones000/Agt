#ifndef __LootSystem_H__
#define __LootSystem_H__

#include "Items.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

float Affixes[NUMAFFIXES];

class _OgreSampleClassExport LootSystem : public SdkSample
{
protected:
	LootSystem(){
			Affixes[1] = FIRE_DAMAGE;
			Affixes[2] = ICE_DAMAGE;
			Affixes[3] = ELECTRIC_DAMAGE;
			Affixes[4] = LIFE_STEAL;
			Affixes[5] = LIFE_ON_HIT;
			Affixes[6] = IMMOBALISE;
			Affixes[7] = CRIT_CHANCE;
			Affixes[8] = CRIT_DAMAGE;
			Affixes[9] = ATTACK_SPEED;
			Affixes[10] = WEAPON_DMG;
			Affixes[11] = ARMOR;
			Affixes[12] = DODGE;
			Affixes[13] = GOLD_FIND;
			Affixes[14] = MAGIC_FIND;
			Affixes[15] = VITALITY;
			Affixes[16] = STRENGTH;
			Affixes[17] = ELEMENTAL_RESIST;
			Affixes[18] = EXPERIENCE;
			Affixes[19] = INDESTRUCTABLE;
			Affixes[20] = LIFE_REGEN;
	};


public:
	Items* dropItem(int mLevel);																 //create a random item and drop it into the game world 
	Items* vendorItem(int type,int mainstat,string affixname[6],int afixmagnitude[6]);          //create an item listed from a vendor and pass it to player inventory
	void destroyItem(Items* i);																	//Destroy a venderd item or an item thats been on the floor for over 5 min

}
#endif