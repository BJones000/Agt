#ifndef __CombatManager_H__
#define __CombatManager_H__

#include "CharacterInfo.h"
#include "EnemyInfo.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport CombatManager: public SdkSample
{
protected:
	CharacterInfo* Character;
	EnemyInfo* Enemies;
public:
	CombatManager(){};

	void enemyHit(Character, EnemyInfo);

	void charHit(Character, EnemyInfo);
		
	void spawnMonster(int monsterLevel, int type);


};

#endif