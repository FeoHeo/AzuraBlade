#ifndef ENEMY_NODE
#define ENEMY_NODE

#include "EnemyBuilder.h"
#include "EntityBaseStruct.h"

class EnemyNode
{
private:
    EntityBaseStruct enemy;
public:
    EnemyNode(int enemyId);
    ~EnemyNode();
};


#endif