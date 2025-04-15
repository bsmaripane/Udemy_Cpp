// Section 11 Function Parameters

#include <iostream>
#include <string>
#include <vector>

void pass_by_value1(int num);
void pass_by_value2(std::string strValue);
void pass_by_value3(std::vector<std::string> strVector);
void print_vector(std::vector<std::string> strVector);

int main()
{
	int number{ 10 };
	int anotherNumber{ 20 };

	std::cout << "number before calling pass_by_value1: " << number << std::endl;
	pass_by_value1(number);
	std::cout << "number after calling pass_by_value1: " << number << std::endl;

	std::cout << "anotherNumber before calling pass_by_value1: " << anotherNumber << std::endl;
	pass_by_value1(anotherNumber);
	std::cout << "anotherNumber after calling pass_by_value1: " << anotherNumber << std::endl;

	std::string name{ "Belmy" };
	std::cout << "name before calling pass_by_value2: " << name << std::endl;
	pass_by_value2(name);
	std::cout << "name after calling pass_by_value2: " << name << std::endl;

	std::vector<std::string> lovedOneNames{ "Emily", "Felicia", "Lesego", "Kganya", "Tracy" };
	std::cout << "lovedOneNames before calling pass_by_value3: ";
	print_vector(lovedOneNames);
	pass_by_value3(lovedOneNames);
	std::cout << "lovedOneNames after calling pass_by_value3: ";
	print_vector(lovedOneNames);

	return 0;
}

void pass_by_value1(int num)
{
	num = 1000;
}

void pass_by_value2(std::string strValue)
{
	strValue = "Changed";
}

void pass_by_value3(std::vector<std::string> strVector)
{
	strVector.clear();	// delete all vector elements
}

void print_vector(std::vector<std::string> strVector)
{
	for (auto element : strVector)
		std::cout << element << " ";
	std::cout << std::endl;
}