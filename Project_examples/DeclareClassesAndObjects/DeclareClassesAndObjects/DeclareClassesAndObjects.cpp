// Section 13: Declaring Classes and Objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{

    // Attributes
private:
    string name;
    int health;
    int xp;

    // Methods
public:
    Player() : name (""), health (100), xp (0) {}

    void talk(string strWords)
    {
        cout << name << ": " << strWords << endl;
    }

    bool is_dead()
    {
        if (health > 0)
            return false;
        return true;
    }
};

int main()
{
    Player semape;
    Player master;

    Player players[]{ semape, master};

    Player* enemy{ nullptr };
    enemy = new Player;

    delete enemy;
    
    cin.get();
    return 0;
}
  