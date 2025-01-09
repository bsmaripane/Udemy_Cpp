#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Declare 2 empty vectors of integers named vector1 and vector2 respectively
	vector <int> vector1;
	vector <int> vector2;

	// Add 10 and 20 to vector1 dynamically using push_back
	vector1.push_back(10);
	vector1.push_back(20);

	// Dsipaly the elements in vector1 using the at() method as well as its size using the size() method
	cout << "The elements in vector1: " << endl << vector1.at(0) <<endl << vector1.at(1)
		<< endl << "The size of the vector1 is " << vector1.size() << endl;

	// Add 100 and 200 to vector2 dynamically using push_back
	vector2.push_back(100);
	vector2.push_back(200);

	// Dsipaly the elements in vector1 using the at() method as well as its size using the size() method
	cout << endl << "The elements in vector2: " << endl << vector2.at(0) << endl << vector2.at(1)
		<< endl << "The size of the vector2 is " << vector2.size() << endl;

	// Declare an empty 2D vector called vector_2d, 2D vector is an integer
	vector <vector<int>> vector_2d;

	// Add vector1 to  vector_2d dynamically using push_back
	vector_2d.push_back(vector1);

	// Add vector2 to  vector_2d dynamically using push_back
	vector_2d.push_back(vector2);

	// Display the elements in  vector _2d using the at() method
	cout << endl << "The elements in the vector_2d:" << endl
		<< vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl
		<< vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	for (const auto& row : vector_2d)
	{
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	// Change vector1.at(0)  to 1000
	vector1.at(0) = 1000;

	// Display the elements in vector_2d again using the at() method
	cout << endl << "The elements in the vector_2d:" << endl
		<< vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl
		<< vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "Vector_2d in a table format" << endl;
	for (const auto & row : vector_2d)
	{
		for (int element : row)
			cout << element << "\t";
		cout << endl;
	}

	// Display the elements in vector1
	cout << endl << "Elements in vector1:" << endl;
	for (int value : vector1)
		cout << value << endl;

	return 0;
}
