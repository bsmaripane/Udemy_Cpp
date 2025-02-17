// Logical operator
#include <iostream>

using namespace std;

int main() {
	int num{};
	const int LOWER{ 10 };
	const int UPPER{ 20 };

	cout << boolalpha;

	/*********************************************************************************
	Determine if an entered integer is between two other integers
	assume LOWER is less than UPPER
	**********************************************************************************/

	cout << "Enter an integer value - the bounds are " << LOWER << " and " << UPPER << " : ";
	cin >> num;

	bool within_bounds{ false };
	 
	within_bounds = (num > LOWER && num < UPPER);

	cout << num << " is between " << LOWER << " and " << UPPER << " : " << within_bounds << endl;

	/********************************************************************************
	Determine if an entered integer value is outside two other integers
	assume LOWER is less than UPPER
	*********************************************************************************/

	cout << endl << "Enter an integer value - the bounds are " << LOWER << " and " << UPPER << " : ";
	cin >> num;

	bool outside_bounds{ false };

	outside_bounds = (num < LOWER || num > UPPER);

	cout << num << " is outside " << LOWER << " and " << UPPER << " : " << outside_bounds << endl;

	/********************************************************************************
	Determine if an entered integer value is exactly on the boundary
	assume LOWER is less than UPPER
	*********************************************************************************/

	cout << endl << "Enter an integer value - the bounds are " << LOWER << " and " << UPPER << " : ";
	cin >> num;

	bool on_bounds{ false };

	on_bounds = (num == LOWER || num == UPPER);

	cout << num << " is on one of the bounds which are " << LOWER << " and " << UPPER << " : " << on_bounds << endl;

	/*******************************************************************************
	Determine is you need to wear a coat based on temperature and wind speed
	*******************************************************************************/

	bool wear_coat{ false };
	double temperature{};
	int wind_speed{};

	const int WIND_SPEED_FOR_COAT{ 35 };		// wind over this value requires a coat
	const double TEMPERATURE_FOR_COAT{ 30 };	// temperature below this value requires a coat

	// Require a coat if either wind is too high OR temperature is too low
	cout << endl << "Enter the current temperature in (degrees) : ";
	cin >> temperature;

	cout << "Enter windspeed in (kph) : ";
	cin >> wind_speed;

	wear_coat = (temperature < TEMPERATURE_FOR_COAT || wind_speed > WIND_SPEED_FOR_COAT);
	cout << "Do you need to wear a coat using OR operator? " << wear_coat << endl;

	// Require a coat if BOTH the windspeed is too high AND temperature is too low
	wear_coat = (temperature < TEMPERATURE_FOR_COAT && wind_speed > WIND_SPEED_FOR_COAT);
	cout << "Do you need to wear a coat using AND operator? " << wear_coat << endl;

	return 0;
}