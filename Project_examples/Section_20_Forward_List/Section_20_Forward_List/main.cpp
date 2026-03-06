// Section 20
// Std::forward_list 

#include <iostream>
#include <forward_list>

int main()
{
	std::cout << "STL forward_list \n\n";

	std::forward_list<int> fList{ 1, 2, 3, 4, 5, 6 };

	std::cout << "fList.max_size(): " << fList.max_size() << std::endl;
	std::cout << "fList.front(): " << fList.front() << std::endl;

	system("pause");
	return 0;
}