// Section 12 Accessing Pointer Address

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num{ 10 };

	cout << "Value of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof(num) << " bytes" << endl;
	cout << "Address of num is: " << &num << endl;

	//int* p;

	//cout << "Value of p is: " << p << endl;	// garbage
	//cout << "Address p is: " << &p << endl;
	//cout << "sizeof of p is: " << sizeof(p) << " bytes" << endl;
	//p = nullptr;	// set p to point nowhere
	//cout << "Value of p is: " << p << endl;

	int* p1{ nullptr };
	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };

	cout << endl << "sizeof p1: " << sizeof(p1) << " bytes" << endl;
	cout << "sizeof p2: " << sizeof(p2) << " bytes" << endl;
	cout << "sizeof p3: " << sizeof(p3) << " bytes" << endl;
	cout << "sizeof p4: " << sizeof(p4) << " bytes" << endl;
	cout << "sizeof p5: " << sizeof(p5) << " bytes" << endl;



	int score{ 10 };
	double high_temp{ 100.7 };

	int* score_ptr{ nullptr };

	score_ptr = &score;

	cout << "Value of score is: " << score << endl;
	cout << "Address of score is: " << &score << endl;
	cout << "Value of score_ptr is: " << score_ptr << endl;

	return 0;
}