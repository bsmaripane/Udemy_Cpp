#include "Player.h"

Player::Player(std::string pName, int pHealth, int pXp) : name(pName), health(pHealth), xp(pXp) {}

void Player::setName(std::string pName) { name = pName; }
void Player::setHealth(int pHealth) { health = pHealth; }
void Player::setHealth(int pXp) { xp = pXp; }

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getXp() const { return xp; }

Player::Player(const Player& source) : name(source.name), health(source.health), xp(source.xp) { std::cout << "Copy constructor - made of: " << source.name << std::endl; }

Player::~Player() { std::cout << "\nDeallocating the memory!\n"; }