#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <string>
#include <cstring>

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
	MyString& operator=(MyString&& rhs) noexcept;
	MyString operator-() const;
	bool operator==(const MyString &rhs) const;
	MyString operator+(const MyString &rhs) const;
};
#endif