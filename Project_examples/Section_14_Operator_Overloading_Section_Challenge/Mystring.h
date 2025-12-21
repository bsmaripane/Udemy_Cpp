#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstring>

class Mystring
{
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, const Mystring& rhs);
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);
	friend bool operator!=(const Mystring& lhs, const Mystring& rhs);
	friend bool operator<(const Mystring& lhs, const Mystring& rhs);
	friend bool operator>(const Mystring& lhs, const Mystring& rhs);
	friend Mystring operator-(const Mystring& obj);

private:
	char* str;	// pointer to a char[] that holds a C-style string

public:
	Mystring();							// No-args constructor
	Mystring(const char* s);			// overloaded constructor
	Mystring(const Mystring& source);	// Copy constructor
	Mystring(Mystring&& source);		// Move constructor
	~Mystring();						// Destructor

	Mystring& operator=(const Mystring& rhs);	// Copy assignment
	Mystring& operator=(Mystring&& rhs);		// move assignment

	void display() const;
	int get_length() const;						// getter method
	const char* get_str() const;				// getter method

	// Overloaded operator member methods
	Mystring operator+(const Mystring& rhs) const;
	Mystring operator-() const;						// make lowercase
	Mystring& operator+=(const Mystring& rhs);		// s1 += s2; concat and assign
	Mystring operator*(int n) const;				// s1 = s2*3; repeat s2 n times
	Mystring& operator*=(int n);					// s1 *= 3; s1 = s1 * 3
	Mystring& operator++();							// pre-increment ++s1
	Mystring operator++(int);						// post-increment s1++
};
#endif