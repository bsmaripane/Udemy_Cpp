// Section 12 Dereferencing a Pointer

#include <iostream>

using namespace std;

int main()
{
	int score{ 100 };
	int* score_ptr{ &score };

	cout << "sore is: " << score << endl;
	cout << "*sore_ptr is: " << *score_ptr << endl;

	*score_ptr = 200;

	cout << "*score_ptr is: " << *score_ptr << endl;
	cout << "score is: " << score << endl;

	return 0;
}