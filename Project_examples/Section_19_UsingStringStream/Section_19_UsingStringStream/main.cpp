// Section 19 Using string stream

#include <iostream>
#include <string>
#include <sstream>

int main()
{
	int num{ 28 };
	double total{ 12345.587 };
	std::string name{ "Felicia" };

	// Writing to a stringstream
	std::ostringstream oss{ };
	oss << name << " " << num << " " << total;

	std::cout << oss.str() << std::endl;

	// Validing input with stingstream
	int value{};
	std::string input{};

	std::cout << "Enter an integer: ";
	std::cin >> input;

	std::stringstream ss{ input };
	if (ss >> value)
		std::cout << "An integer was entered";
	else
		std::cout << "An integer was NOT entered";

	system("pause>0");
	return 0;
}