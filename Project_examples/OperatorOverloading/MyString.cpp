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
}

int MyString::getLength() const
{
	return 0;
}

const char* MyString::getStr() const
{
	return nullptr;
}
