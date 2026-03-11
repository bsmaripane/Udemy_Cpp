// Section 20 Priority Queue

#include <iostream>
#include <queue>

class Person
{
	friend std::ostream& operator<<(std::ostream& os, const Person& person)
	{
		return os;
	}
public:
	Person();
	Person();
};

int main()
{
	std::cout << "Section 20 Priority Queue\n\n";


	std::cout << std::endl;
	system("pause");
	return 0;
}