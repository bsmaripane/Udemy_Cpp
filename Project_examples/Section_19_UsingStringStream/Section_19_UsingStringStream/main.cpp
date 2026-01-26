// Section 19 Using string stream

#include <iostream>
#include <string>
#include <sstream>

int main()
{
	int num{};
	double total{};
	std::string name{};
	std::string info{ "Felicia 28 47600.57" };

	// Reading from a stringstream
	std::istringstream iss{ info };
	iss >> name >> num >> total;

	std::cout << "Name: " << name << "\nAge: " << num << "\nMagadi cost so far: R" << total << std::endl;

	system("pause>0");
	return 0;
}