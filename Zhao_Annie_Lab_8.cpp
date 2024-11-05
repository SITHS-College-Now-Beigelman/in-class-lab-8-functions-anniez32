// Annie Zhao
// November 4, 2024
// Lab 8, Part 1, 2, and 3

#include <iostream> 
#include <cmath>
using namespace std;

// Function for Part 2:
int doubleMultiply(int a, int b) {    // Function doubleMultiply
    int product;
    product = a * b * 2; // multiplies the first number, second number, and doubles the product
    return product;  // return function doubleMultiply
}

// Function for Part 3: 
double getSum(double x, double y, double z) {  // Function getSum
    double sum; // Variable for the sum
    sum = x + y + z; // Adds the three numbers inputed for the sum
    return sum; // Returns the sum
}

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

    // Part 3: 
    double num3, num4, num5; // Create variables for three doubles
    double result;
    cout << "Enter three numbers: "; // Get input for the three numbers
    cin >> num3 >> num4 >> num5;
    result = getSum(num3, num4, num5); // Function getSum calculates the sum, which is the result
    cout << "The sum of these three numbers is: " << result; // Print out the sum

    return 0;
}
// Output for Part 1: 
/*
Please input a number: 7
The square root of the number is: 2.64575
The number to the power of 4 is: 2401
The floor of the number is: 7
*/
// Output for Part 2: 
/*
Enter two integers: 2 3
Twice the product of the numbers is: 12
*/
// Output for Part 3: 
/*
Enter three numbers: 4 5 6
The sum of these three numbers is: 15
*/
