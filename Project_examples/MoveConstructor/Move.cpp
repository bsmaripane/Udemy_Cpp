#include "Move.h"

void Move::setDataValue(int d) { *data = d; }
int Move::getDataValue() const { return *data; }
int* Move::getDataAddress() const { return data; }
Move::Move(int d) { data = new int; *data = d; std::cout << "\nConstructor for: " << d << std::endl; }
Move::Move(const Move& source) : Move(*source.data) { std::cout << std::endl << "Copy constructor - deep copy for: " << *data << std::endl; }
//Move::Move(Move&& source) : data(source.data) { source.data = nullptr; std::cout << "\n'Steal' the data and then null out the soucre pointer" << std::endl; }
Move::~Move() { delete data; std::cout << "\nDeallocate the data memory for " << *data << std::endl; }