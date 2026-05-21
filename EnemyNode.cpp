#include "json/single_include/nlohmann/json.hpp"
#include <fstream>
#include <map>
#include <iostream>

#include "EnemyNode.h"
#include "EntityBaseStruct.h"

using namespace std;
using json = nlohmann::json;

EnemyNode::EnemyNode(int enemyId)
{
    std::ifstream enemyList("EnemyList.json");
    
    json eList = json::parse(enemyList);


}

EnemyNode::~EnemyNode()
{
}
