
#include "EntityBaseStruct.h"
#include "EnemyBaseList.h"
#include "EnemyBuilder.h"

using namespace std;

EnemyBuilder::EnemyBuilder(string listNameInput) : currEnemyList(listNameInput)
{

}

EnemyNode EnemyBuilder::build(int eId) {
    EntityBaseStruct baseStats = currEnemyList.get(eId);
    EnemyNode enemyNode = EnemyNode(baseStats);
    return enemyNode;
}

EnemyBuilder::~EnemyBuilder() {}

