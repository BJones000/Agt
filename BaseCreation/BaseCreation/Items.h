#ifndef __Items_H__
#define __Items_H__

using namespace Ogre;
using namespace OgreBites;

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



#define Sword 1 //Type names and corisponding numbers
#define Helm 2
#define Chest 3
#define Legs 4
#define Boots 5
#define Gloves 6

#define NUMAFFIXES 20  //needs to be changed to max num of affixes

static int FIRE_DAMAGE = 100;
static int ICE_DAMAGE = 100;
static int ELECTRIC_DAMAGE = 100;
static float LIFE_STEAL = 0.1;
static int LIFE_ON_HIT = 200;

static float IMMOBALISE = 0.05;
static float CRIT_CHANCE = 0.1;
static int CRIT_DAMAGE = 50;
static float ATTACK_SPEED = 0.1;

static int WEAPON_DMG = 300;
static int ARMOR = 200;
static float DODGE = 0.05;
static float GOLD_FIND = 0.2;
static float MAGIC_FIND = 0.2;

static int VITALITY = 50;
static int STRENGTH = 100;
static int ELEMENTAL_RESIST = 100;
static float EXPERIENCE = 0.1;
static int INDESTRUCTABLE = 1;
static int LIFE_REGEN = 50;

class _OgreSampleClassExport Items : public SdkSample
{


public: 

	Items(){};

	Items(int type,int mainstat,string affixid[6],int afixmagnitude[6]){
		Type = type;
		ItemMainstat = mainstat;
		durability = 50;
		for(int i = 0; i <6; i++){
			AffixLine[i] = affixid[i];
			AffixMagnitude[i] = afixmagnitude[i];
		}
	};



	Items(int level,int mRarity){       //randomise the itemdrop number of affixes and magnitude based on level and monster rarity
		int randomAffixes;                      
		int randomType = std::rand() % 6 +1;

		Type = randomType;
		ItemMainstat = mRarity * 20;
		durability = 50;
		for(int i = 0; i <6; i++){
			randomAffixes = std::rand() % NUMAFFIXES;
			AffixLine[i] = randomAddixes;
			AffixMagnitude[i] = (Affixes[i]/5)*level
	};

	int getType(){return Type;};
	int getAffixLine(int f){return AffixLine[f];};
	int getAffixMagnitude(int f){return AffixMagnitude[f];};
	int getItemMainstat(){return ItemMainstat;};

protected:
	
	string Name;
	int Type;                //Item Type
	int ItemMainstat;        //Armor or damage Value
	string AffixLine[6];        //Number for the line of the affix in the text file. 
	float AffixMagnitude[6]; //Magnitude of the affix
	float durability;
	
};
	



#endif