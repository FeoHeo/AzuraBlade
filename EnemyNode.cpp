#include <fstream>
#include <map>
#include <iostream>

#include "EnemyNode.h"
#include "EntityBaseStruct.h"

EnemyNode::EnemyNode(EntityBaseStruct baseStatsInput)
{
    enemyBaseStats = baseStatsInput;
}

void EnemyNode::PrintBaseStats() {
    std::cout << " Id: " << enemyBaseStats.BaseId << "\n"
            << " Name: " << enemyBaseStats.BaseName << "\n"
            << " HP: " << enemyBaseStats.BaseHP << "\n"
            << " MP: " << enemyBaseStats.BaseMP << "\n"
            << " Atk: " << enemyBaseStats.BaseAtk << "\n"
            << " Def: " << enemyBaseStats.BaseDef << "\n";   
};

EnemyNode::~EnemyNode()
{
}
