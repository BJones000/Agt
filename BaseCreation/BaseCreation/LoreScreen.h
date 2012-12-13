#ifndef __LoreScreen_H__
#define __LoreScreen_H__

#include "CharacterInfo.h"

#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport LoreScreen: public SdkSample
{
protected:
	CharacterInfo* Character;
public:
	LoreScreen(){};

	void displayLoreScreen();

	void getLore();

	void switchLore();

	void undisplayLore();
};

#endif