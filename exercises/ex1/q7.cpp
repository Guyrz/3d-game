// 1D turn based duel
#include <iostream>

float stepToward(float distance, float step, float stopAt) {
    float newDist = distance - step;
    if ( newDist < stopAt ) {
        newDist = stopAt;
    }
    return newDist;
}

int applyDamage(int hp, int damage) {
    int newHp = hp - damage;
    if ( newHp < 0 ) {
        newHp = 0;
    }
        return newHp;  // subtract damage, never below 0
}

bool isAlive(int hp) {
   return hp > 0 ;
}

int main() {
    constexpr int bossDamage = 25;
    constexpr int playerDamage = 40;
    constexpr float bossStep = 3.0f;
    constexpr float stopDist = 2.0f;
    constexpr float playerReach = 2.5f;

    float d = 12.0f;
    int playerHp = 100;
    int bossHp = 300;
    int turn = 1;


    while (isAlive(playerHp) && isAlive(bossHp)) {
        if (d <= playerReach &&  isAlive(playerHp)) {
            bossHp = applyDamage(bossHp, playerDamage);
        }
        if ( d > stopDist ) {
            d =  stepToward(d, bossStep, stopDist );
        }
        else {
            playerHp = applyDamage(playerHp, bossDamage);
        }


        std::cout << "turn: " << turn << ", d = " << d << ", player: " << playerHp << ", boss: " << bossHp << "\n";
        turn = turn + 1;
    }
    if (isAlive(bossHp)) {
        std::cout << "Boss wins on turn: " << turn - 1 << ", with: " << bossHp << "HP" << "\n"; // turn++ after the loop so we subtract 1
    }
    else  {
        std::cout << " Player wins on turn: " << turn - 1 << ", with: " << playerHp << "HP" << "\n";
    }
    return 0;
}


