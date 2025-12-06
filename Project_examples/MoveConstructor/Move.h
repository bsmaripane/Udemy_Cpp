#ifndef MOVE_H
#define MOVE_H

#include <iostream>

class Move
{
private:
	int* data;

public:
	void setDataValue(int d);
	int getDataValue() const;
	int* getDataAddress() const;
	Move(int d);
	Move(const Move& source);
	~Move();
};
#endif