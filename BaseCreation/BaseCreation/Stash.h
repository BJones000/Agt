#ifndef __Stash_H__
#define __Stash_H__

#include "CharacterInfo.h"
#include "Items.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport Enemy: public SdkSample
{
protected:
	Items* stored[30];


public:
	Stash();
	void storeItem();
	void grabItem();
	void pickPocket();
	void treasureHunt():

};

#endif