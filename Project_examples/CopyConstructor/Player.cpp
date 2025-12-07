#include "Player.h"

int Player::numPlayers{ 0 };

Player::Player(std::string pName, int pHealth, int pXp) : name(pName), health(pHealth), xp(pXp) { ++numPlayers; }

void Player::setName(std::string pName) { name = pName; }
void Player::setHealth(int pHealth) { health = pHealth; }
void Player::setXp(int pXp) { xp = pXp; }

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getXp() const { return xp; }
int Player::getNumPlayers() { return numPlayers; }
Player::Player(const Player& source) : name(source.name), health(source.health), xp(source.xp) { std::cout << "Copy constructor - made of: " << source.name << std::endl; }

Player::~Player() { --numPlayers; std::cout << "\nDeallocating the memory!\n"; }