// Section 13: Declaring Classes and Objects

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

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

class Account
{
private:
    string name;
    double balance;

public:
    Account() : name("Default"), balance(0.0) {}
    Account(string aName, double aBalance)
    {
        name = aName;
        balance = aBalance;
    }

    void editName(string newName)
    {
        name = newName;
    }

    void accountDetails() const
    {
        cout << "\nAccount name: " << name << endl
            << "Account balance: R" << fixed << setprecision(2) << balance << endl;
    }

    string getName() const
    {
        return name;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }
};

int main()
{
    Player semape;
    //Player master;

    Account Maswi;
    Account Lesego("Savings", 23678.36);

    Maswi.editName("Debit");
    Maswi.deposit(97.34);
    Lesego.withdraw(590);
    Maswi.withdraw(23.78);
    Lesego.deposit(350);

    /*Player players[]{ semape, master};

    Player* enemy{ nullptr };
    enemy = new Player;

    delete enemy;*/
    
    cin.get();
    return 0;
}
  