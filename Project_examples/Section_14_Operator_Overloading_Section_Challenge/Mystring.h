#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstring>

class Mystring
{
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, const Mystring& rhs);

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
};
#endif