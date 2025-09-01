// Constant pointers

#include <iostream>

using namespace std;

int main()
{
	int high_score{ 100 };
	int low_score{ 65 };
	int* const score_ptr{ &high_score };

	cout << "*score_ptr is " << *score_ptr << endl;

	*score_ptr = 86;

	cout << "*score_ptr is " << *score_ptr << endl;

	//score_ptr = &low_score;		// ERROR: 'score_ptr': you  cannot assign to a variable that is const

	return 0;
}