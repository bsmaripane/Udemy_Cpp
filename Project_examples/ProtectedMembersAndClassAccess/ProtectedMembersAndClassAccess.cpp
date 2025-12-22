// Section 15 Protected Members and class access

#include <iostream>

class Base
{
    // friends of Base have access to all
public:
    int a{ 0 };
    void display() { std::cout << a << ", " << b << ", " << c << std::endl; }

protected:
    int b{ 0 };
private:
    int c{ 0 };
};

class Derived : public Base
{
    // friends of Derived have access to only what Derived has access to
    // a and b will be accessible 
    // c will not be accessible
public:
    void access_baes_members()
    {
        a = 100;
        b = 200;
    }
};

int main()
{
    std::cout << "====== base member access from base objects ============" << std::endl;
    Base base;
    base.a = 75;
    base.display();

    std::cout<<std::endl;
    std::cout << "====== base member access from derived objects ============" << std::endl;
    Derived derived;
    derived.a = 150;
    derived.display();
    derived.access_baes_members();
    derived.display();

    std::cin.get();
    return 0;
}