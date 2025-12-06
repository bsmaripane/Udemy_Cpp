#include "Deep.h"

Deep::Deep(int d)
{
	data = new int;		// allocate storage
	*data = d;
}

Deep::~Deep()
{
	delete data;		// free storage
	std::cout << std::endl << "Destructor freeing data" << std::endl;
}

Deep::Deep(const Deep& source)
{
	data = new int;		// allocate storage
	*data = *source.data;
	std::cout << std::endl << "Copy constructor - deep" << std::endl;
}

Deep::Deep(const Deep& source) : Deep(*source.data) { std::cout << std::endl << "Copy constructor - deep" << std::endl; }