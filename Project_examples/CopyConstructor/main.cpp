// Section 13: Copy Constructor

#include <iostream>
#include "Player.h"

void display_player(Player p);

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

	//Player enemy;
	//Player create_super_enemy() {
	//	Player an_enemy{ "Super Enemy", 1000, 1000 };
	//	return an_enemy;
	//}

	//enemy = create_super_enemey();

	std::cin.get();
	return 0;
}

void display_player(Player p)
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
}