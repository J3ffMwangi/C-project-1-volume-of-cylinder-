#include<iostream>
#include<cmath>

double calculateVolume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
    double radius, height;

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    double volume = calculateVolume(radius, height);

    std::cout << "The volume of the cylinder is: " << volume << " cubic units." << std::endl;

    return 0;
}
