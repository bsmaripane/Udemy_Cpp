/*
* 
*/
#include <iostream>
using namespace std;

class Smartphone
{
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Andriod :public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "Android selfie" << endl;
    }
    void MakeACall()
    {
        cout << "Android making a call" << endl;
    }
};

class IPhone :public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "IPhone selfie" << endl;
    }
    void MakeACall()
    {
        cout << "IPhone making a call" << endl;
    }

};

int main()
{
    Smartphone* s1 = new IPhone();

    s1->TakeASelfie();
    s1->MakeACall();

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    system("pause>0");
}
