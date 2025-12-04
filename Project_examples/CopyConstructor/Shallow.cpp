#include "Shallow.h"

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}

Shallow::~Shallow()
{
	delete data;
	std::cout << "Destructor freeing data" << std::endl;
}

Shallow::Shallow(const Shallow& source) : data(source.data) { std::cout << "Copy constructor - shallow" << std::endl; }