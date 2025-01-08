#include <iostream>

using namespace std;

class Book
{
public:
	string title;
	string author;
	int* rates;
	int ratesCounter;

	Book(string bTitle, string bAuthor) : title(bTitle), author(bAuthor), ratesCounter(2)
	{
		rates = new int[ratesCounter];
		rates[0] = 4;
		rates[1] = 5;

		cout << title + " constructor invoked" << endl;
	}

	~Book()
	{
		cout << title + " destructor invoked" << endl;

		delete [] rates;
		rates = nullptr;
	}
};

int main()
{
	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");



	cin.get();
}