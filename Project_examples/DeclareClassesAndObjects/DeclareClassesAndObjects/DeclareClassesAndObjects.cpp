// Section 13: Declaring Classes and Objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
    // Attributes
    string name;
    int health;
    int xp;

    // Methods
    void talk(string);
    bool is_dead();
};

int main()
{
    Player semape;
    Player master;

    Player* enemy{ nullptr };
    enemy = new Player;

    delete enemy;
    
    cin.get();
    return 0;
}
