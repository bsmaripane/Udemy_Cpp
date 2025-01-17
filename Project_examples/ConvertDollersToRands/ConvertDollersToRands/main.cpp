// Convert US dollers to rands
#include <iostream>

using namespace std;

const double RAND_PER_DOLLERS{ 0.0534295 };

double CurrencyConversion(double value, char currency)
{
	if (currency == 'R')
		return (value * RAND_PER_DOLLERS);
	else
		return (value / RAND_PER_DOLLERS);
}

int main() 
{
	double value{ 0.0 }, convertedValue{ 0.0 };
	char answer{ 'y' };

	cout << "Welcome to doller to rands and vica verse" << endl;

	// read a value from the user
	cout << "Enter the amount value in dollers or rands: ";
	cin >> value;
	// While loop check if the value is in dollers or rands
	do
	{
		cout << "The entered value is in dollers or rands (D for dollers and R for rands)? ";
		cin >> answer;

		answer = toupper(answer);

	} while (!(answer == 'R' || answer == 'D'));

	// Call the conversion function
	convertedValue = CurrencyConversion(value, answer);

	// Display the result
	if (answer == 'R')
		cout << "R" << value << " Rands is equal to $" << convertedValue << " Dollers" << endl;
	else
		cout << "$" << value << " Dollers is equal to R" << convertedValue << " Rands" << endl;

	return 0;
}