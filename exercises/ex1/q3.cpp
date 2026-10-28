//float accumulation
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const float eps = 1e-5f;
    float clock = 0;
    for (int i = 1; i <= 60; i++) {
        clock += 1.0f / 60.0f;
    }
    std::cout << "clock: " << std::setprecision(10) << clock << "\n";

    if (std::abs(clock - 1.0f) < eps) {
        std::cout << "clock is within eps of 1.0: passed\n";
    } else {
        std::cout << "clock is not within eps of 1.0: failed\n";
    }
    float clock1 = 0;
    for (int i = 1; i <= 216000; i++) {
        clock1 += 1.0f / 60.0f;
    }
    std::cout << "clock: " << std::setprecision(10) << clock1 << "\n";

    if (std::abs(clock1 - 3600.0f) < eps) {
        std::cout << "clock within eps of 3600.0: passed\n";
    } else {
        std::cout << "clock is not within eps of 3600.0: failed\n";
    }
    double clk = 0;
    for (int i = 1; i <= 60; i++) {
        clk += 1.0 / 60.0;
    }
    std::cout << "clock: " << std::setprecision(18) << clk << "\n";

    if (std::abs(clk - 1.0) < eps) {
        std::cout << "clock within eps of 1.0: passed\n";
    } else {
        std::cout << "clock is not within eps of 1.0: failed\n";
    }
    double clk1 = 0;
    for (int i = 1; i <= 216000; i++) {
        clk1 += 1.0 / 60.0;
    }
    std::cout << "clock: " << std::setprecision(18) << clk1 << "\n";

    if (std::abs(clk1 - 3600.0) < eps) {
        std::cout << "clock within eps of 3600.0: passed\n";
    } else {
        std::cout << "clock is not within eps of 3600.0: failed\n";
    }
    return 0;
}
