#ifndef ENEMY_BUILDER
#define ENEMY_BUILDER

#include <string>
#include "EntityBaseStruct.h"
#include <fstream>
#include <vector>

class EnemyBuilder
{
private:
    std::vector<EntityBaseStruct> enemyStruct = std::vector<EntityBaseStruct>();
    std::basic_ifstream<char> enemyList;
public:
    EnemyBuilder(std::string initList);
    ~EnemyBuilder();
};


#endif