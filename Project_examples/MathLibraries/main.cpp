// MathLibraries.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <cmath>    // required

using namespace std;

int main()
{
    double number{};

    cout << "Enter a number (double): ";
    cin >> number;
    
    cout << "The sqrt of " << number << " is " << sqrt(number) << endl;
    cout << "The cubed root of " << number << " is " << cbrt(number) << endl;

    cout << "The sine of " << number << " is " << sin(number) << endl;
    cout << "The cosine of " << number << " is " << cos(number) << endl;

    cout << "The ceil of " << number << " is " << ceil(number) << endl;
    cout << "The floor of " << number << " is " << floor(number) << endl;
    cout << "The round of " << number << " is " << round(number) << endl;

    double power{};

    cout << "\nEnter a power to raise " << number << " to: ";
    cin >> power;

    cout << number << " raised to the " << power << " power is " << pow(number, power) << endl;
   
    return 0;
}

