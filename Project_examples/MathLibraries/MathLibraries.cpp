// MathLibraries.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <cmath>    // required

using namespace std;

int main()
{
    double number{};

    cout << "Enter a number (double): ";
    while (!(cin >> number)) {
        // Clear the error flag on cin
        cin.clear();
        // Ignore the invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
    }
    
    cout << "The sqrt of " << number << " is " << sqrt(number) << endl;
    cout << "The cubed root of " << number << " is " << cbrt(number) << endl;

    cout << "The sine of " << number << " is " << sin(number) << endl;
    cout << "The cosine of " << number << " is " << cos(number) << endl;

    cout << "The ceil of " << number << " is " << ceil(number) << endl;

    // Wait for user input before closing the console
    cout << "Press Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any remaining input
    cin.get(); // Wait for the user to press Enter

    return 0;
}

