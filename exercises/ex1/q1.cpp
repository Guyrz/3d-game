#include <iostream>

int main() {
    int a = 7 / 2;
    double b = 7 / 2;
    double c = 7.0 / 2;
    int d = 3.9;
    float e = 1 / 3.0f;   // 3.0f is a float literal
    bool f = 5;
    char g = 'A' + 1;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "e = " << e << "\n";
    std::cout << "f = " << f << "\n";
    std::cout << "g = " << g << "\n";

    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "sizeof(float) = " << sizeof(float) << "\n";
    std::cout << "sizeof(double) = " << sizeof(double) << "\n";
    std::cout << "sizeof(char) = " << sizeof(char) << "\n";
    std::cout << "sizeof(bool) = " << sizeof(bool) << "\n";

    //int h{3.9};

    return 0;
 }

