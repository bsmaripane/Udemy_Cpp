// Section 12 Pointer Arithmetic

#include <iostream>

using namespace std;

int main()
{
	int scores[]{ 100, 95, 89, 68, -1 };
	int* score_ptr{ scores };

	while (*score_ptr != -1)
	{
		cout << *score_ptr << endl;
		score_ptr++;
	}

	cout << "\n--------------------------------------------\n";

	score_ptr = scores;

	while (*score_ptr != -1) cout << *score_ptr++ << endl;

	cout << "\n--------------------------------------------\n";

	string s1{ "Belmy" };
	string s2{ "Belmy" };
	string s3{ "Felicia" };

	string* p1{ &s1 };
	string* p2{ &s2 };
	string* p3{ &s1 };

	cout << boolalpha;
	cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
	cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;

	cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
	cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

	p3 = &s3;
	cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;

	cout << "\n--------------------------------------------\n";

	char name[]{ "Maripane" };
	char* char_ptr1{ nullptr };
	char* char_ptr2{ nullptr };

	char_ptr1 = &name[0];
	char_ptr2 = &name[4];

	cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters aways from " << *char_ptr1 << endl;


	return 0;
}