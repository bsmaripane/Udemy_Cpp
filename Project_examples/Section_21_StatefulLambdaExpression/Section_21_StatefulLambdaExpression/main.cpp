// Section 21 Stateful Lambda Expression

#include <iostream>
#include <vector>
#include <algorithm>

int global_x{ 1000 };

// Capture by value
// The global variable global_x cannot be captured because it is not within the reaching scope of the lambda.
// It can however still be accessed from within the lambda using normal name lookup rules.
void test1()
{
	std::cout << "\n--- Test1 ---------------------------------------\n";

	int local_x{ 100 };

	auto l = [local_x]()
		{
			std::cout << local_x << std::endl;
			std::cout << global_x << std::endl;
		};

	l();
}

// Capture by value - mutable
// The captured variable x can only be modified within the lambda by using the mutable keyword.
// Note that this modifiability only pertains to the captured variable within the lambda body and not the actual variable.
void test2()
{
	std::cout << "\n--- Test2 ---------------------------------------\n";

	int x{ 100 };

	auto l = [x]() mutable
		{
			x += 100;
			std::cout << x << std::endl;
		};

	l();
	std::cout << x << std::endl;

	l();
	std::cout << x << std::endl;
}

// Capture by reference
// Any changes made to the catured reference variable within the lambda body will change the actual variable
void Test3()
{
	std::cout << "\n--- Test3 ---------------------------------------\n";

	int x{ 100 };

	auto l = [&x]() mutable
		{
			x += 100;
			std::cout << x << std::endl;
		};

	l();
	std::cout << x << std::endl;
}

// Default capture by value - mutable
// Only variables used within the lambda body are captured by value.
// The variable z is not captured by the lambda.
void Test4()
{
	std::cout << "\n--- Test4 ---------------------------------------\n";

	int x{ 100 };
	int y{ 200 };
	int z{ 300 };

	auto l = [=]() mutable
		{
			x += 100;
			y += 100;
			std::cout << x << std::endl;
			std::cout << y << std::endl;
		};

	l();
	std::cout << "\n";
	std::cout << x << std::endl;
}

// Default capture by reference
// This time because all three variables - x, y, z are used within the lambda body, all three of them will be captured by reference
void Test5()
{
	std::cout << "\n--- Test5 ---------------------------------------\n";

	int x{ 100 };
	int y{ 200 };
	int z{ 300 };

	auto l = [&]()
		{
			x += 100;
			y += 100;
			z += 100;

			std::cout << x << std::endl;
			std::cout << y << std::endl;
			std::cout << z << std::endl;
		};

	l();
	std::cout << "\n";
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
}

// Default capture by value, capture y by reference
void Test6()
{
	std::cout << "\n--- Test6 ---------------------------------------\n";

	int x{ 100 };
	int y{ 200 };
	int z{ 300 };

	auto l = [=,&y]() mutable
		{
			x += 100;
			y += 100;
			z += 100;

			std::cout << x << std::endl;
			std::cout << y << std::endl;
			std::cout << z << std::endl;
		};

	l();
	std::cout << "\n";
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
}

int main()
{
	test1();
	test2();
	Test3();
	Test4();
	Test5();
	Test6();

	system("pause");
	return 0;
}