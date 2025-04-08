// Section 11 Random Numbers

#include <iostream>
#include <cstdlib>	// required for rand()
#include <ctime>	// required for time()

using namespace std;

int main()
{
	int random_number{};
	size_t count{ 20 };		// number of random numbers to generate
	int min{ 1 };			// lower bound (inclusive)
	int max{ 10 };			// upper bound (inclusive)

	// seed the random number generator
	// If you don't seed the generator you will get the same requence random numbers every run

	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));

	for (size_t i = 0; i < count; i++)
	{
		random_number = rand() % max + min;		// generates a random number [min, max]
		cout << random_number << endl;
	}

	// Wait for key press before closing
	cin.ignore();
	cin.get();

	return 0;
}