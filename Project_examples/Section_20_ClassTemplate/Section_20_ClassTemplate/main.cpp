// Section 29 Class templates

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// Template classes ara typically completely contained in header files, 
// we would have the template class in item.h and no item.cpp file would be used.

template <class Type>
class Item
{
public:
	Item(std::string name, Type value) : name(name), value(value) {}
	std::string getName() const { return name; }
	Type getValue() const { return value; }

private:
	std::string name;
	Type value;
};

template <class Type1, class Type2>
struct MyPair
{
	Type1 first;
	Type2 second;
};


int main()
{
	Item<int> item1{ "Visual Programming II", 92 };
	std::cout << std::setw(10) << std::left << item1.getName() << item1.getValue() << std::endl;

	Item<std::string> item2{ "Belmy", "BSc in Computing Student" };
	std::cout << std::setw(10) << std::left << item2.getName() << item2.getValue() << std::endl;

	Item<Item<std::string>> item3{ "UNISA", {"Science, Engineering & Technology", "Bachelor of Science in Computing"} };
	std::cout << std::setw(25) << std::left << item3.getName() 
		<< std::setw(25) << std::right << item3.getValue().getName() 
		<< std::setw(35) << std::right << item3.getValue().getValue() << std::endl;


	system("pause");
	return 0;
}