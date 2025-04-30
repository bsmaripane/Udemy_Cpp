/// Functions and Prototypes - Converting Temperature
#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double temperature);

double fahrenheit_to_kelvin(double temperature);

int main()
{
	double fahrenheit_temperature{};
	double celsius_temperature{};
	double kelvin_temperature{};

	cout << "Enter temperature in fahrenheit: ";
	cin >> fahrenheit_temperature;

	celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
	kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

	cout << endl << "The fahrenheit temperature " << fahrenheit_temperature
		<< " degrees is equivalent to " << celsius_temperature << " degrees celsius and "
		<< kelvin_temperature << " degrees kelvin" << endl;

	return 0;
}

double fahrenheit_to_celsius(double temperature)
{
	return round((5.0 / 9.0) * (temperature - 32));
}

double fahrenheit_to_kelvin(double temperature)
{
	return round((5.0 / 9.0) * (temperature - 32) + 273);
}