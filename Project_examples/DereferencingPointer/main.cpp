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

	// Another example of double
	double high_temp{ 100.7 };
	double low_temp{ 37.4 };
	double *temp_ptr{&high_temp};

	cout << "\n*temp_ptr{&high_temp}  is: " << *temp_ptr << endl;

	temp_ptr = &low_temp;

	cout << "temp_ptr = &low_temp is: " << *temp_ptr << endl;

	// Another example of string
	string name{ "Belmy" };
	string* string_ptr{ &name };

	cout << "\n*string_ptr{ &name } is: " << *string_ptr << endl;
	name = "James";
	cout << "*string_ptr after name changed to james is: " << *string_ptr << endl;

	return 0;
}