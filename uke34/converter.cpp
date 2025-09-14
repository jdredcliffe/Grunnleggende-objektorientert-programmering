#include <iostream>

double inchesToCentimeters(double inches) {
    return inches * 2.54;
}

int main() {
    double inches;
    std::cout << "Enter value in inches: ";
    std::cin >> inches;
    double centimeters = inchesToCentimeters(inches);
    std::cout << inches << " inches is " << centimeters << " centimeters." << std::endl;
    return 0;
}