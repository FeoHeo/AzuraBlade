#ifndef ENEMY_BUILDER
#define ENEMY_BUILDER
#include <string>

#include "EntityBaseStruct.h"
#include "EnemyBaseList.h"
#include "EnemyBuilder.h"
#include "EnemyNode.h"


class EnemyBuilder
{
private:
    EnemyBaseList currEnemyList;
public:
    EnemyBuilder(std::string listNameInput);
    EnemyNode build(int eId);
    ~EnemyBuilder();
};


#endif