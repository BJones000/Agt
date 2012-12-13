#ifndef __InventoryScreen_H__
#define __InventoryScreen_H__

#include "CharacterInfo.h"
#include "Items.h"

#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport InventoryScreen: public SdkSample
{
protected:
	CharacterInfo* Character;
public:
	InventoryScreen(){};

	void displayInventoryScreen();

	void getItems();

	void getEquippedItems();

	void displayItemStats();

	void binItem();

	void undisplayInventory();
};

#endif