#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

class MyString
{
private:
	char* str;		// C-style string

public:
	MyString();
	MyString(const char* s);
	MyString(const MyString& source);
	~MyString();
	void display() const;
	int getLength() const;
	const char* getStr() const;
	MyString& operator=(const MyString& rhs);
};
#endif