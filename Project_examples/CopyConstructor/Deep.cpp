#include "Deep.h"

Deep::Deep(int d)
{
	data = new int;		// allocate storage
	*data = d;
}

Deep::~Deep()
{
	delete data;		// free storage
	std::cout << "Destructor freeing data" << std::endl;
}

Deep::Deep(const Deep& source)
{
	data = new int;		// allocate storage
	*data = *source.data;
	std::cout << "Copy constructor - deep" << std::endl;
}