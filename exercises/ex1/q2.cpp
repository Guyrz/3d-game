//fight simulator
#include <iostream>

int main() {
    int HitNum = 1;
    int BossHP = 500;
    while (BossHP > 0) {
        int damage;
        if (HitNum % 3 != 0) {
            damage = 35;
        } else {
            damage = 70;
        }
        BossHP = BossHP - damage;
        if (BossHP < 0) {
            BossHP = 0;
        }
        if (HitNum % 3 != 0) {
            std::cout << "Hit " << HitNum << ": " << damage << "dmg --> boss hp " << BossHP << "\n";
        } else {
            std::cout << "Hit " << HitNum << ": FINISHER " << damage << "dmg --> boss hp " << BossHP << "\n";
        }
        HitNum++;
    }

    std::cout << "total hits: " << HitNum - 1 << "\n";
    return 0;
}



