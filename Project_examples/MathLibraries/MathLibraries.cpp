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

    cout << "The call of " << number << " is " << cell(number) << endl;

    return 0;
}

