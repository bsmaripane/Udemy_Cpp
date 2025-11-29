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
	~Player();	// Destructor
};

class Account
{
private:
	std::string name;
	double balance;

public:
	Account();
	Account(std::string aName);
	Account(std::string aName, double aBalance);
	Account(double aBalance);
	~Account();	// Destructor
};

int main()
{
	Player thapelo, lesego("Spider-Man"), kganya("Black Panther", 93, 67);
	Account semape(1784.57), thato, maswi("Maswi's account"), kg("Kganya's account", 235.89);

	lesego.~Player();
	kganya.~Player();
	semape.~Account();
	kg.~Account();

	Player* enemy = new Player("Enemy", 100, 0);
	delete enemy;

	std::cin.get();
	return 0;
}

Player::Player() : name("None"), health(10), xp(0) {}
Player::Player(std::string pName) : name(pName), health(10), xp(0) {}
Player::Player(std::string pName, int pHealth, int pXp) : name(pName), health(pHealth), xp(pXp) {}
Player::~Player() { std::cout << "Player destructor for " << name << std::endl; }

Account::Account() : name(""), balance(0.0) {}
Account::Account(std::string aName) : name(aName), balance(0.0) {}
Account::Account(std::string aName, double aBalance) : name(aName), balance(aBalance) {}
Account::Account(double aBalance) : name("noname"), balance(aBalance) {}
Account::~Account() { std::cout << "Account destructor for " << name << std::endl; }