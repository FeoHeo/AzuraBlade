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
    std::ifstream List("EnemyList.json");
    
    json eList = json::parse(List);


}

EnemyNode::~EnemyNode()
{
}
