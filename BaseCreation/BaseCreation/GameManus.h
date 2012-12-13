#ifndef __GameMenus_H__
#define __GameMenus_H__

#include "LoreScreen.h"
#include "InventoryScreen.h"
#include "StatsScreen.h"

#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport GameMenus: public SdkSample
{
protected:
	LoreScreen* Lore;
	InventoryScreen* Inventory;
	StatsScreen* Stats;
public:
	GameMenus(){};

	void displayLoreScreen();

	void displayStatsScreen();

	void displayInventoryScreen();

	void undisplayLoreScreen();

	void undisplayStatsScreen();

	void undisplayInventoryScreen();

};

#endif