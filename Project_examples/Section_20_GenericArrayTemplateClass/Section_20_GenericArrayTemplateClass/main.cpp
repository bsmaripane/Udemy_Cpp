// Secition 20 Creating a Generic Array Template Class

#include <iostream>
#include <string>

template <int N>
class Array
{
	int size{ N };
	int values[N];	// the N needs to ne know at compile-time


	friend std::ostream& operator<<(std::ostream& os, const Array<N>& arr)
	{
		os << "[ ";

		for (const auto& value : arr.values)
			os << value << " ";

		os << " ]" << std::endl;
		return os;
	}

public:
	Array() = default;
	Array(int init_value)
	{
		for (auto& item : values)
			item = init_value;
	}

	void fill(int value)
	{
		for (auto& item : values)
			item = value;
	}

	int getSize() const
	{
		return size;
	}

	int& operator[](int index)
	{
		return values[index];
	}
};

int main()
{
	Array<5>numbers;
	std::cout << "The size of numbers is: " << numbers.getSize() << std::endl;
	std::cout << numbers << std::endl;

	numbers.fill(0);
	std::cout << "The size of numbers is: " << numbers.getSize() << std::endl;
	std::cout << numbers << std::endl;

	numbers.fill(10);
	std::cout << "The size of numbers is: " << numbers.getSize() << std::endl;
	std::cout << numbers << std::endl;
	std::cout << "The size of numbers is: " << numbers.getSize() << std::endl;
	std::cout << numbers << std::endl;

	numbers[0] = 53;
	numbers[3] = 30;
	numbers[3] = 30;

	std::cout << numbers << std::endl;

	Array<100>numbers2{ 29 };
	std::cout << "The size of numbers2 is: " << numbers2.getSize() << std::endl;
	std::cout << numbers2 << std::endl;

	system("pause");
	return 0;
}