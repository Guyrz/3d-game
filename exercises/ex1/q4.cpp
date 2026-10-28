#include <iostream>
#include <cmath>

float distance2D(float x1, float y1, float x2, float y2);
bool inAttackRange(float px, float py, float bx, float by, float range); //does not use square root

int main() {
    constexpr float bossX = 10.0f;
    constexpr float bossY = 0.0f;
    constexpr float bossRange = 3.0f;
    float d1 = distance2D(8 , 1.5 , bossX , bossY);
    bool hit1 = inAttackRange(8 ,1.5, bossX , bossY, bossRange);
    std::cout << "distance: " << d1 << ", in range: " << hit1 << "\n";
    float d2 = distance2D(7.5 , 2 , bossX , bossY);
    bool hit2 = inAttackRange(7.5 ,2, bossX , bossY, bossRange);
    std::cout << "distance: " << d2 << ", in range: " << hit2 << "\n";
    float d3 = distance2D(13 , 0 , bossX , bossY);
    bool hit3 = inAttackRange(13 ,0, bossX , bossY, bossRange);
    std::cout << "distance: " << d3 << ", in range: " << hit3 << "\n";
    float d4 = distance2D(10 , -3.0001 , bossX , bossY);
    bool hit4 = inAttackRange(10 ,-3.0001, bossX , bossY, bossRange);
    std::cout << "distance: " << d4 << ", in range: " << hit4 << "\n";



}

float distance2D(float x1, float y1, float x2, float y2) {
    float d = std::sqrt((y2 - y1)*(y2-y1) + (x2 - x1)*(x2-x1));
    return d;
}

bool inAttackRange(float px, float py, float bx, float by, float range) {
    float distSq = ((by - py)*(by-py) + (bx - px)*(bx-px));
    return (distSq <= range*range);
}