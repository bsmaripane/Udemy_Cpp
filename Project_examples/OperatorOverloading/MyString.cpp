#include "MyString.h"

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
	delete[] str;
}

void MyString::display() const
{
	std::cout << str << ":" << getLength() << std::endl;
}

int MyString::getLength() const
{
	return std::strlen(str);
}

const char* MyString::getStr() const
{
	return str;
}
