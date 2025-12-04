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