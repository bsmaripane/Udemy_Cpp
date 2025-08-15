// Section 11 Pass-by-reference
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int& num);
void pass_by_ref2(string& s);
void pass_by_ref3(vector<string>& v);
void print_vector(const vector<string>& v);	//const

void pass_by_ref1(int& num)
{
	num = 100;
}

void pass_by_ref2(string& s)
{
	s = "Changed";
}

void pass_by_ref3(vector<string>& v)
{
	v.clear();	// delete all vector elements
}

void print_vector(const vector<string>& v)
{
	for (auto s : v)
		cout << s << " ";
	cout << endl;
}

int main()
{
	int num{ 10 };
	int another_num{ 20 };

	cout << "num before calling pass_by_ref1: " << num << endl;
	pass_by_ref1(num);
	cout << "num after calling pass_by_ref1: " << num << endl;

	cout << "num before calling pass_by_ref1: " << another_num << endl;
	pass_by_ref1(another_num);
	cout << "num after calling pass_by_ref1: " << another_num << endl;

	return 0;
}