#ifndef DEEP_H
#define DEEP_H

#include <iostream>

class Deep
{
private:
	int* data;

public:
	Deep(int d);
	Deep(const Deep& source);
	~Deep();

	void setDataValue(int d);
	int getDataValue() const;
	int* getDataAddress() const;
};
#endif