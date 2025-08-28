// Section 12 The relationship between Arrays and Pointers

#include <iostream>

using namespace std;

int main()
{
	int scores[]{ 100, 95, 89 };

	cout << "scores: " << scores << endl;
	cout << "*scores: " << *scores << endl;

	int* score_ptr{ scores };

	cout << "score_ptr: " << score_ptr << endl;
	cout << "*score_ptr: " << *score_ptr << endl;

	// Using the pointer subscrpt to access array elements

	cout << "\nArray subscript notation --------------------------\n";
	cout << "scores[0]: " << scores[0] << endl;
	cout << "scores[1]: " << scores[1] << endl;
	cout << "scores[2]: " << scores[2] << endl;

	cout << "\nPointer subscript notation --------------------------\n";
	cout << "score_ptr[0]: " << score_ptr[0] << endl;
	cout << "score_ptr[1]: " << score_ptr[1] << endl;
	cout << "score_ptr[2]: " << score_ptr[2] << endl;

	// Display array elements memory using the pointer

	cout << "\nArray offset notation --------------------------\n";
	cout << "1st element *scores: " << *scores << endl;
	cout << "2nd element *(scores + 1): " << *(scores + 1) << endl;
	cout << "3rd element *(scores + 2): " << *(scores + 2) << endl;

	cout << "\nPointer offset notation --------------------------\n";
	cout << "1st element score_ptr: " << score_ptr << endl;
	cout << "2nd element (score_ptr + 1): " << (score_ptr + 1) << endl;
	cout << "3rd element (score_ptr + 2): " << (score_ptr + 2) << endl;


	return 0;
}