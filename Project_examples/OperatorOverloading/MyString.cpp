#include "MyString.h"
#include <string>
#include <cstring>
#pragma warning(disable : 4996)

MyString::MyString() : str(nullptr)
{
	str = new char[1];
	*str = '\0';
}

MyString::MyString(const char* s) : str(nullptr)
{
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}

MyString::MyString(const MyString& source) : str(nullptr)
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

MyString::~MyString()
{
	std::cout << "Calling destructor for MyString: ";
	std::cout << (str ? str : "(NULL)") << std::endl;

	delete[] str;
}

void MyString::display() const
{
	std::cout << ( str ? str : "(NULL)") << ":" << getLength() << std::endl;
}

int MyString::getLength() const
{
	return static_cast<int>(str ? std::strlen(str) : 0);
}

const char* MyString::getStr() const
{
	return str;
}

MyString& MyString::operator=(const MyString& rhs)
{
	std::cout << "Copy assignment" << std::endl;
	if (this == &rhs)
		return *this;

	delete[] str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);		// perform the copy

	return *this;
}

MyString& MyString::operator=(MyString&& rhs) noexcept
{
	std::cout << "Move assignment" << std::endl;
	if (this == &rhs)		// self assignment
		return *this;		// return current object

	delete[] str;			// deallocate current storage
	str = rhs.str;			// steal the pointer

	rhs.str = nullptr;		// null out the rhs object

	return *this;			// return current object

}

//MyString MyString::operator-() const
//{
//	char* buff = new char[std::strlen(str) + 1];
//	std::strcpy(buff, str);
//
//	for (size_t i{ 0 }; i < std::strlen(buff); i++)
//		buff[i] = std::tolower(buff[i]);
//
//	MyString temp{ buff };
//	delete [] buff;
//	return temp;
//}

//bool MyString::operator==(const MyString& rhs) const
//{
//	return (std::strcmp(str, rhs.str) == 0) ? true : false;
//}

MyString MyString::operator+(const MyString& rhs) const
{
	size_t buff_size{ std::strlen(str) + std::strlen(rhs.str) + 1 };
	char* buff{ new char[buff_size] };
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	MyString temp{ buff };
	delete[] buff;

	return temp;
}

bool operator==(const MyString& lhs, const MyString& rhs)
{
	return (std::strcmp(lhs.str, rhs.str) == 0) ? true : false;
}

MyString operator-(const MyString& obj)
{
	char* buff{ new char[std::strlen(obj.str) + 1] };
	std::strcpy(buff, obj.str);

	for (size_t i{ 0 }; i < std::strlen(buff); i++)
		buff[i] = std::tolower(buff[i]);

	MyString temp{ buff };
	delete[] buff;

	return temp;
}

MyString operator+(const MyString& lhs, const MyString& rhs)
{
	char* buff{ new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1] };
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);

	MyString temp{ buff };
	delete[] buff;
	
	return temp;
}
