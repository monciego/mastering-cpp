#include <iostream>

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    // Declare variables
    double length, width;

    // Prompt the user for input
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Call the function to calculate the area
    double area = calculateRectangleArea(length, width);

    // Display the result
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0; // Exit the program
}
