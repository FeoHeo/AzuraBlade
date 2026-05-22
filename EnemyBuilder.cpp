#include "EnemyNode.h"
#include "EntityBaseStruct.h"
#include "EnemyBaseList.h"

#include "EnemyBuilder.h"

using namespace std;

EnemyBuilder::EnemyBuilder(string listNameInput) : currEnemyList(listNameInput)
{

}

EnemyNode EnemyBuilder::build(int eId) {
    // Put base to new node for building
}

EnemyBuilder::~EnemyBuilder() {}

