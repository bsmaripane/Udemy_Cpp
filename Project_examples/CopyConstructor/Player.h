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
	Player(std::string pName, int pHealth);
	Player(std::string pName, int pXp);
	Player(std::string pName, int pHealth, int pXp);

	void setName(std::string pName);
	void setHealth(int pHealth);
	void setHealth(int pXp);
	
	std::string getName() const;
	int getHealth() const;
	int getHealth() const;

	~Player();
};
#endif
