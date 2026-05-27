#include "EnemyBuilder.h"


int main() {

    EnemyBuilder builder = EnemyBuilder("EnemyList.json");

    EnemyNode enemyTest = builder.build(0);

    enemyTest.PrintBaseStats();

    return 0;
}