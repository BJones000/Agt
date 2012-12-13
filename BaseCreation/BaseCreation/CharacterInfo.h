#ifndef __Character_H__
#define __Character_H__
/*
A class dedicated to holding all of the stats of the character. 
Class also holds all of the equipped items and the items in the inventory.

*/
#include "LootSystem.h"
#include "Items.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport Character: public SdkSample
{
protected:
	string Name;
	float totalDamage;   //Damage stats
	float baseDamage;
	float plusDamage;
	int totalStrengh;

	float totalCritChance;
	float totalCritDamage;

	int totalVitality; //life and protection stats

	float totalArmor;
	float totalResistanceElemental;
	float totalProtection;

	float armorProtection;
	float elementalResist;

	float lifeSteal; //other stats
	int lifeOnHit;
	float dodge;
	float immobalise;
	float attackSpeed;
	float goldFind;
	float magicFind;
	float expirience;
	float lifeRegen;

	Items* equippedLeftHand; //currently equiped items
	Items* equippedRightHand;
	Items* equippedHelm;
	Items* equippedChest;
	Items* equippedPants;
	Items* equippedBoots;
	Items* equippedGloves;

	Items* Inventory[20]; //inventory items

public:

	Character(){};

	Character(string n){
		Name = n;
	};

	bool placeInInventory(Items* x){
		for(int i = 0; i <20; i++){
			if(Inventory[i] == NULL)
			{
				Inventory[i] = x;
				return true;
			}
		}
		return false;
	
	};

	bool removeFromInventory(Items* x){
		for(int i = 0; i <20; i++){
			if(Inventory[i] == x)
			{
				Inventory[i] = NULL;
				return true;
			}
		}
		return false;

	};

	bool equipItem(Items* x){
		switch(x.getType){
			case 1:
				{
					if(equippedRightHand == NULL)
						equippedRightHand = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedRightHand);
						equippedRightHand = x;
					}
				}
			case 2:
				{
					if(equippedHelm == NULL)
						equippedHelm = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedHelm);
						equippedHelm = x;
					}
				}
			case 3:
				{
					if(equippedChest == NULL)
						equippedChest = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedChest);
						equippedChest = x;
					}
				}
			case 4:
				{
					if(equippedLegs == NULL)
						equippedLegs = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedLegs);
						equippedLegs = x;
					}
				}
			case 5:
				{
					if(equippedBoots == NULL)
						equippedBoots = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedBoots);
						equippedBoots = x;
					}
				}
			case 6:
				{
					if(equippedGloves == NULL)
						equippedGloves = x;
					else
					{
						removeFromInventory(x);
						placeInInventory(equippedGloves);
						equippedGloves = x;
					}
				}		
		}


	};

	void calculateTotals()
	{
		totalDamage = 0;
		baseDamage = 0;
		plusDamage = 0;
		totalStrengh = 0;
		totalCritChance = 0;
		totalCritDamage = 0;
		totalVitality = 0;
		totalArmor = 0;
		totalResistanceElemental = 0;
		
		lifeSteal = 0; //other stats
		lifeOnHit = 0;
		immobalise = 0;
		attackSpeed = 0;
		goldFind = 0;
		magicFind = 0;
		expirience = 0;
		lifeRegen = 0;
		dodge = 0;

		for(int i = 0; i < 7; i++)
		{
			Items* current;
			switch(i){
			case 1:
				current = equippedHelm;break;
			case 2:
				current = equippedChest;break;
			case 3:
				current = equippedPants;break;
			case 4:
				current = equippedBoots;break;
			case 5:
				current = equippedGloves;break;
			case 6:
				current = equippedRightHand;break;
			case 0:
				current = equippedLeftHand;break;
			}

			for(int j = 0; j < 6; j++){
				int id = current.getAffixLine(j);
				switch(id){
					case 1000:
						plusDamage = plusDamage + current.getAffixMagnitude(j); break;
					case 1001:
						plusDamage = plusDamage + current.getAffixMagnitude(j); break;
					case 1002:
						plusDamage = plusDamage + current.getAffixMagnitude(j); break;
					case 1003:
						lifeSteal = lifeSteal + current.getAffixMagnitude(j); break;//lifesteal
					case 1004:
						lifeOnHit = lifeOnHit + current.getAffixMagnitude(j); break; //LOH
					case 1005:
						immobalise = immobalise + current.getAffixMagnitude(j); break; //immobalise
					case 1006:
						totalCritChance = totalCritChance + current.getAffixMagnitude(j); break;
					case 1007:
						totalCritDamage = totalCritDamage + current.getAffixMagnitude(j); break;
					case 1015;
						attackSpeed = attackSpeed + current.getAffixMagnitude(j); break;//AS
					case 1008:
						baseDamage = baseDamage + current.getItemMainstat(); break;
					case 1009:
						totalArmor = totalArmor + current.getItemMainstat();break;
					case 1010:
						dodge = dodge + current.getAffixMagnitude(j); break; //Dodge
					case 1011:
						goldFind = goldFind + current.getAffixMagnitude(j); break; //goldFInd
					case 1012:
						magicFind = magicFind + current.getAffixMagnitude(j); break; //MagicFind
					case 1013:
						totalVitality = totalVitality + current.getAffixMagnitude(j);break; //vitality
					case 1014:
						totalStrengh = totalStrengh + current.getAffixMagnitude(j);break;
					case 1017:
						totalResistanceElemental = totalResistanceElemental + current.getAffixMagnitude(j); break;
					case 1018:
						expirience = expirience + current.getAffixMagnitude(j); break; //exp
					case 1020:
						lifeRegen = lifeRegen + current.getAffixMagnitude(j); break; //life regen
					}


			}
		}
	

		 totalDamage = (((baseDamage + plusDamage)*totalCritDamage)*totalCritChance)+((baseDamage + plusDamage)*(totalStrengh/100));
		 

		if(totalArmor < 300)
			armorProtection = totalArmor* 1.666;
		else if(totalArmor < 600)
			armorProtection = 50 + ((totalArmor-300)*0.06);
		else if(totalArmor > 601)
			armorProtection = 70 + ((totalArmor-600)*0.01);

		if(totalResistanceElemental < 300)
			elementalResist = totalArmor* 1.666;
		else if(totalResistanceElemental < 600)
			elementalResist = 50 + ((totalArmor-300)*0.06);
		else if(totalResistanceElemental > 601)
			elementalResist = 70 + ((totalArmor-600)*0.01);

		float d  = 100- armorProtection;
		totalProtection = 100-(d*(elementalResist/100));

}
}

#endif