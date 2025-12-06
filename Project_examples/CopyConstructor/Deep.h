#ifndef DEEP_H
#define DEEP_H

class Deep
{
private:
	int* data;

public:
	Deep(int d);
	Deep(const Deep& source);
	~Depp();
};
#endif