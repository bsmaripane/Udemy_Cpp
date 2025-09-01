//
// Pointers to constants

#include <iostream>

using namespace std;

int main()
{
	int high_score{ 100 };
	int low_score{ 65 };
	const int* score_ptr{ &high_score };

	cout << "*score_ptr is " << *score_ptr << endl;

	*score_ptr = 86;  // ERROR: 'score_ptr' you cannotassign to a variable that is const

	score_ptr = &low_score;
	
	cout << "*score_ptr is " << *score_ptr << endl;

	return 0;
}