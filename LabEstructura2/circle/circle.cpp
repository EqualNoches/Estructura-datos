#include <iostream>
#include <cmath>

void drawCircle(int radius) {
    int centerX = radius;
    int centerY = radius;

    for (int i = 0; i <= 2 * radius; ++i) {
        for (int j = 0; j <= 2 * radius; ++j) {
            // Check if a point is on the circumference of the circle
            if (std::abs(std::pow(j - centerX, 2) + std::pow(i - centerY, 2) - std::pow(radius, 2)) < radius) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int radius;

    // Get the radius from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Draw the circle circumference
    drawCircle(radius);

    return 0;
}
