#ifndef ENEMY_NODE
#define ENEMY_NODE

#include "EntityBaseStruct.h"

class EnemyNode
{
private:
    EntityBaseStruct enemyBaseStats;
public:
    // Debug functions
    void PrintBaseStats();

    EnemyNode(EntityBaseStruct baseStatsInpupt);

    ~EnemyNode();
};


#endif