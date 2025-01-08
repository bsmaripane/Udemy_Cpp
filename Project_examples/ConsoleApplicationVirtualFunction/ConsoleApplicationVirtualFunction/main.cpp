#include <iostream>
using namespace std;

// Vritual function
//class Instrument
//{
//public:
//    virtual void MakeSound()
//    {
//        cout << "Instrument playing..." << endl;
//    }
//};
//
//class Accordion :public Instrument
//{
//public:
//    void MakeSound()
//    {
//        cout << "Accordion playing..." << endl;
//    }
//};

// Pure virtual function
class Instrument
{
public:
    virtual void MakeSound() = 0;
};

class Accordion :public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordion playing..." << endl;
    }
};

class Piano :public Instrument
{
public:
    void MakeSound()
    {
        cout << "Piano playing..." << endl;
    }
};

int main()
{
    Instrument* i1 = new Accordion();

    i1 -> MakeSound();

    Instrument* i2 = new Piano();

   i2 -> MakeSound();

    Instrument* instruments[2] = { i1, i2 };

    for (int i = 0; i < 2; i++)
        instruments[i]->MakeSound();

    system("pause>0");
}
