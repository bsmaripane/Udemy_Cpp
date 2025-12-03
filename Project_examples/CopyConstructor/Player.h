#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	Player();
	Player(std::string pName);
	Player(std::string pName = "Nano", int pHealth = 10, int pXp = 0);

	void setName(std::string pName);
	void setHealth(int pHealth);
	void setHealth(int pXp);
	
	std::string getName() const;
	int getHealth() const;
	int getHealth() const;

	Player(const Player& source);

	~Player();
};
#endif
