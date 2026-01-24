// Section 19 Challenge 1 Formatting output

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City
{
	std::string name;
	long population;
	double cost;
};

// Assume each country has at least 1 city
struct Country
{
	std::string name;
	std::vector<City> cities;
};

struct Tours 
{
	std::string title;
	std::vector<Country> countries;
};

int main()
{


	system("pause>0");
	return 0;
}
