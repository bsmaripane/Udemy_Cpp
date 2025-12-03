#include "Player.h"

Player::Player() : name(""), health(1), xp(0) {}
Player::Player(std::string pName) : name(pName), health(1), xp(0) {}
Player::Player(std::string pName, int pHealth, int pXp) : name(pName), health(pHealth), xp(pXp) {}

void Player::setName(std::string pName) { name = pName; }
void Player::setHealth(int pHealth) { health = pHealth; }
void Player::setHealth(int pXp) { xp = pXp; }

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getHealth() const { return xp; }

Player::Player(const Player &source) : name(source.name), health(source.health), xp(source.xp) {}

Player::~Player() { std::cout << "\nDeallocating the memory!\n"; }