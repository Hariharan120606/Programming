#include <iostream>

// Function to calculate the area of a square
double area(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

int main() {
    double side = 5.0;
    double length = 4.0;
    double width = 3.0;

    // Calculate area of square
    std::cout << "Area of square with side " << side << ": " << area(side) << std::endl;

    // Calculate area of rectangle
    std::cout << "Area of rectangle with length " << length << " and width " << width << ": " << area(length, width) << std::endl;

    return 0;
}

