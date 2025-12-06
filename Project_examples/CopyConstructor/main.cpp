// Section 13: Copy Constructor

#include <iostream>
#include "Player.h"
#include "Shallow.h"

void display_player(Player p);
void display_shallow(Shallow s);

int main()
{
	Player empty;
	Player Lesego{ "Killer" };
	Player hero{ "Hero", 100 };
	Player villain{ "Villain", 100, 55 };

	display_player(empty);
	display_player(Lesego);
	display_player(hero);
	display_player(villain);

	empty.setName("xXx");
	empty.setHealth(99);
	empty.setXp(101);

	display_player(empty);

	Player enemy(villain);

	display_player(enemy);

	// Shallow copy testing
	Shallow obj1{ 100 };
	display_shallow(obj1);

	obj1.setDataValue(1000);
	Shallow obj2{ obj1 };

	std::cout << "--- End Program --" << std::endl;
	std::cin.get();
	return 0;
}

void display_player(Player p)
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
}

void display_shallow(Shallow s)
{
	std::cout << std::endl << "Display shallow: " << std::endl;
	std::cout << "Data value: " << s.getDataValue() << std::endl;
	std::cout << "Data address: " << s.getDataAdddress() << std::endl;
}