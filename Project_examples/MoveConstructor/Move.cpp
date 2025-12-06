#include "Move.h"

void Move::setDataValue(int d) { *data = d; }
int Move::getDataValue() const { return *data; }
int* Move::getDataAddress() const { return data; }
Move::Move(int d) { data = new int; *data = d; std::cout << "\nConstructor for: " << d << std::endl; }
Move::Move(const Move& source) : Move(*source.data) { std::cout << std::endl << "Copy constructor - deep copy for: " << *data << std::endl; }
//Move::Move(Move&& source) : data(source.data) { source.data = nullptr; std::cout << "\nMove constructor - moving resource: " << *data << std::endl; }
Move::~Move()
{ 
	if (data != nullptr)
		std::cout << "\nDestructor freeing data for: " << *data << std::endl;
	else
		std::cout << "\nDestructor freeing data for nullptr" << std::endl;
	delete data;
}