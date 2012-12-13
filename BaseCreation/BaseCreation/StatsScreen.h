#ifndef __StatsScreen_H__
#define __StatsScreen_H__

#include "CharacterInfo.h"

#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport StatsScreen: public SdkSample
{
protected:
	CharacterInfo* Character;
public:
	StatsScreen(){};

	void displayStatsScreen();

	void getStats();


	void undisplayStats();
};

#endif