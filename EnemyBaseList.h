#ifndef ENEMY_BASE_LIST
#define ENEMY_BASE_LIST

#include <string>
#include "EntityBaseStruct.h"
#include <fstream>
#include <vector>

class EnemyBaseList
{
private:
    std::vector<EntityBaseStruct> BaseStruct = std::vector<EntityBaseStruct>();
    std::basic_ifstream<char> List;
public:
    EnemyBaseList(std::string initList);
    EntityBaseStruct get(int id);
    ~EnemyBaseList();
};


#endif