// Annie Zhao
// November 4, 2024
// Lab 8, Part 1, 2, and 3

#include <iostream> 
#include <cmath>
using namespace std;

int main () {  // Main function

    // Part 1: 
    // Variables
    double num;
    cout << "Please input a number: "; // Get input for the number 
    cin >> num;

    // Call the functions for each part 
    cout << "The square root of the number is: " << sqrt(num) << endl; //The square root of the number
    cout << "The number to the power of 4 is: " << pow(num, 4) << endl; //The number to the power of 4
    cout << "The floor of the number is: " << floor(num) << endl; // The floor of the number 

    // Part 2:
    int num1, num2;  // Create variables for two integers
    cout << "Enter two integers: ";  // Get input for the two integers
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: " 
        << doubleMultiply(num1, num2) << endl;  // Calls the function doubleMultiply to find twice the product of the two numbers

    return 0;
}

// Function for Part 2:
int doubleMultiply(int a, int b) {    // Function doubleMultiply
    int product;
    product = a * b * 2; // multiplies the first number, second number, and doubles the product
    return product;  // return function doubleMultiply
}