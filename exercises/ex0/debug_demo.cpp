#include <iostream>

int main() {
    int total = 0;
    for (int i = 1; i<=4; i++) {
        total = total + i * i;
    }
    std::cout << total << "\n";
    return 0;
}