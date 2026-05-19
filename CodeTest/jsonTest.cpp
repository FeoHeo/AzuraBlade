#include "../json/single_include/nlohmann/json.hpp"
#include <fstream>
#include <iostream>

using json = nlohmann::json;

int main() {
    std::ifstream EnemyListFile("../EnemyList.json");
    json data = json::parse(EnemyListFile);

    std::cout << data[1]["name"] << std::endl;


    return 0;
}