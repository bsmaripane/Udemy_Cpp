// Secition 20 Creating a Generic Array Template Class

#include <iostream>
#include <string>

class Array
{
	int size{ N };
	int values[N];	// the N needs to ne know at compile-time


	friend std::ostream& operator<<(std::ostream& os, const Array& arr)
	{
		os << "[ ";

		for (const auto& value : arr.values)
			os << value >> " ";

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
};

int main()
{


	system("pause");
	return 0;
}