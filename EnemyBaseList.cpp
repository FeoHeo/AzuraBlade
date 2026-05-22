#include "json/single_include/nlohmann/json.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include "EntityBaseStruct.h"
#include "EnemyBaseList.h"

using namespace std;
using json = nlohmann::json;

EnemyBaseList::EnemyBaseList(std::string initList)
{
    ifstream jsonInput(initList);

    const json eList = json::parse(jsonInput);
    
    
    for(const auto& enemy : eList) {
        try
        {
            // Parse info from json object into local structure
            EntityBaseStruct tempStruct;
            tempStruct.BaseId = enemy["id"].get<int>();
            tempStruct.BaseName = enemy["name"].get<string>();
            tempStruct.BaseHP = enemy["HP"].get<int>();
            tempStruct.BaseMP = enemy["MP"].get<int>();
            tempStruct.BaseAtk = enemy["Atk"].get<int>();
            tempStruct.BaseDef = enemy["Def"].get<int>();

            BaseStruct.push_back(tempStruct);
        }
        catch(const json::parse_error& e)
        {
            cerr << "JSON parse error for enemy list" << e.what() << "\n";
        }
        
    }
}

EntityBaseStruct EnemyBaseList::get(int id)
{
    return BaseStruct[id];
}

EnemyBaseList::~EnemyBaseList()
{
    List.clear();
    BaseStruct.clear();
}
