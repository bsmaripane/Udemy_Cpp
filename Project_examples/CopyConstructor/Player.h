#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
private:
	std::string name;
	int health;
	int xp;
	static int numPlayers;

public:
	Player(std::string pName = "Nano", int pHealth = 10, int pXp = 0);

	void setName(std::string pName);
	void setHealth(int pHealth);
	void setXp(int pXp);
	
	std::string getName() const;
	int getHealth() const;
	int getXp() const;
	static int getNumPlayers();
	Player(const Player& source);

	~Player();
};
#endif
