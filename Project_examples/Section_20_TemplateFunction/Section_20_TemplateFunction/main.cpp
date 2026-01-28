// Section 20 Template Function

#include <iostream>

template <class Type>
Type max(Type a, Type b)
{
	return (a > b) ? a : b;
}

int main()
{
	int x{ 28 };
	int y{ 30 };

	std::cout << "Large number between " << x << " and " << y << " is " << max(x, y) << std::endl;

	system("pause");
	return 0;
}