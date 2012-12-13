#ifndef __Vendor_H__
#define __Vendor_H__

#include "LootSystem.h"
#include "Items.h"
#include "CharacterInfo.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport Vendor: public SdkSample
{
protected:
	Items* inventory[20];
	//Quotes


public:
	Vendor();

	void displayVendorScreen();
	void rollItems();
	void sellItem();
	void buyItem();

};

#endif