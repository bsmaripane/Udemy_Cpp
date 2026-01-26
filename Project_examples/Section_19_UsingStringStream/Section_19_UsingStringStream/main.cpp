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
	oss << name << num << total;

	std::cout << oss.str() << std::endl;

	system("pause>0");
	return 0;
}