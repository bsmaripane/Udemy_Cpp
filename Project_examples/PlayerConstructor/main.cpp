// Section 13 Constructor

#include <iostream>
//#include <string>

class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	Player();
	Player(std::string pName);
	Player(std::string pName, int pHealth, int pXp);

};

int main()
{
	Player thapelo, lesego("Spider-Man"), kganya("Black Panther", 93, 67);


	std::cin.get();
	return 0;
}

Player::Player() : name("None"), health(10), xp(0) {}
Player::Player(std::string pName) : name(pName), health(10), xp(0) {}
Player::Player(std::string pName, int pHealth, int pXp) : name(pName), health(pHealth), xp(pXp) {}
