#ifndef __EnemyInfo_H__
#define __EnemyInfo_H__

#include "LootSystem.h"
#include "Enemy.h"
#include <string.h>

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport EnemyInfo: public SdkSample
{
protected:
	Enemy* enimies[50];
public:
	EnemyInfo(){};
		
	bool createEnemy(int monsterLevel, int type);

	void damageEnemy(Enemy* currentEnemy, int dmg);

	void monsterDeath();

	void getMonsterDamage(Enemy* currentEnemy);

};

#endif