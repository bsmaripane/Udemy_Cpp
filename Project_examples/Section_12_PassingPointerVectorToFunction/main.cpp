// Section 12 Passing pointer vector to a function

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string>* v)
{
	for (auto str : *v)
		cout << str << " ";
	cout << endl;
}

void display(int* array, int sentinel)
{
	int i{};

	while (*(array + i) != sentinel)
	{
		cout << *(array + i) << endl;
		++i;
	}
	cout << endl;
}

int main()
{
	cout << "\n__________________________________\n";
	vector<string> names{ "Belmy", "Semape", "Maswi", "Thapelo" };
	display(&names);

	cout << "\n__________________________________\n";
	int scores[]{ 100, 98, 97, 79, 85,-1 };
	display(scores, -1);

	return 0;
}