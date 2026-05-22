#ifndef ENEMY_BUILDER
#define ENEMY_BUILDER
#include "EnemyBaseList.h"
#include <string>

#include "EntityBaseStruct.h"

class EnemyBuilder
{
private:
    EnemyBaseList currEnemyList*;
public:
    EnemyBuilder(std::string listNameInput);
    EnemyNode build(int eId);
    ~EnemyBuilder();
};


#endif