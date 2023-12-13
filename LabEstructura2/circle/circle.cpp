#include <iostream>
#include <cmath>

void drawCircle(int radius) {
    for (int i = -radius; i <= radius; ++i) {
        for (int j = -radius; j <= radius; ++j) {
            double distance = std::sqrt(i * i + j * j);
            
            // Adjust the threshold for circle thickness
            if (std::abs(distance - radius) < 0.5) {
                std::cout << "# ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    int radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid radius. Please enter a positive integer.\n";
        return 1;
    }

    drawCircle(radius);

    return 0;
}
