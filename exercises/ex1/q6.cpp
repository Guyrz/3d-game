#include <iostream>

int main() {
    int hp = 100;
    {
        int hp = 50;
        hp = hp - 10;
        std::cout << "inner: " << hp << "\n";
    }
    std::cout << "outer: " << hp << "\n";

    for (int i = 0; i < 3; i++) {
        int combo = 0;
        combo = combo + 1;
        std::cout << "combo: " << combo << "\n";
    }
    //std::cout << "after loop: " << combo << "\n";

    int stamina;
    stamina = stamina + 5;
    std::cout << "stamina: " << stamina << "\n";
    return 0;
}