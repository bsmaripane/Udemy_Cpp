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

void Shallow::setDataValue(int d) { *data = d; }
int Shallow::getDataValue() const { return *data; }
int* Shallow::getDataAdddress() const { return data; }