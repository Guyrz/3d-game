#include <iostream>



  int takeDamage(int hp, int damage) {
          hp = hp - damage;
          std::cout << "inside takeDamage: hp = " << hp << "\n";
          std::cout << "address of hp: " << &hp << "\n";
      return hp;
      }

  int main() {
          int playerHp = 100;
         playerHp = takeDamage(playerHp, 30);
         std::cout << "after the call: playerHp = " << playerHp << "\n";
         std::cout << "address of playerHp: " << &playerHp << "\n";
         return 0;
     }