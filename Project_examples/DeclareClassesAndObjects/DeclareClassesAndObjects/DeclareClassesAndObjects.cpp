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

    void setName(string newName)
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

    bool deposit(double amount)
    {
        balance += amount;
        return true;
    }

    bool withdraw(double amount)
    {
        if (balance > 0)
        {
            if (balance < amount)
            {
                cout << "Insufficient balance R" << fixed << setprecision(2) << balance << endl;
                return false;
            }
            else
                balance -= amount;
            return true;
        }
        else 
        {
            cout<< "Overdrawn or zero balance R" << balance << endl;
            return false;
        }
    }
};

int main()
{
    Player semape;
    //Player master;

    Account Maswi;
    Account Lesego("Savings", 23678.36);

    Maswi.setName("Debit");
    Maswi.deposit(97.34);
    Lesego.withdraw(590);
    Maswi.withdraw(23.78);
    Lesego.deposit(350);

    /*Player players[]{ semape, master};

    Player* enemy{ nullptr };
    enemy = new Player;

    delete enemy;*/

    Account Maswi_account("Saving Account", 1000);
    if (Maswi_account.deposit(200))
        cout << "Deposit Successful" << endl;
    else
        cout << "Deposit Failed!" << endl;

    if (Maswi_account.withdraw(500))
        cout << "Withdrawal Successful" << endl;
    else
        cout << "Withdrawal Failed!" << endl;

    if (Maswi_account.withdraw(1200))
        cout << "Withdrawal Successful" << endl;
    else
        cout << "Withdrawal Failed!" << endl;

    Maswi_account.accountDetails();
    
    cin.get();
    return 0;
}
  