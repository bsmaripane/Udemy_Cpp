/*
* Dynamic array are vectors
* A vector is an array that can grow and shrink in size at execution time.
* Provides similar semantics and syntax as arrays
* Very efficient
* Provide bounds checking
* 
* Declaring Vectors
*	#include <vector>
*	using namespace std;
* 
*	vector <char> vowels;
*	vector <int> test_scores;
* 
* CHARACTERISTICS OF A VECTOR:
*	# Dynamic size
*	# Elements are all the same type
*	# Stored contiguously in memory
*	# Individual elements can be accessed by their position or index
*	# First element is at index 0 and last element is at index size-1
*	# Elements initialized to zero
*	# Very efficient
*	# Iteration (looping) is often used to process
* 
* Accessing vector elements 
*	vector_name [element_index];
* or
*	vector_name.at(element_index);
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector <char> vowels;		// empty
	//vector <char> vowels(5);	// 5 initialized to zero
	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };

	cout << endl << "The first element of vowels is " << vowels[0] << endl;
	cout << "The last element of vowels is " << vowels[5 - 1] << endl;

	//vector <int> test_scores(3);	// 3 elements all initialized to zero
	//vector <int> test_scores(3, 100);	// 3 elements all initialized to 100

	vector <int> test_scores{ 100, 98, 89 };

	cout << endl << "Test scores using array syntax:" << endl;
	cout << test_scores[0]<< endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << endl << "Test scores using vector syntax:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << endl << "There are " << test_scores.size() << " scores in the vector" << endl;

	cout << endl << "Enter 3 test scores:";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout << endl << "Updated test scores:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << endl << "Enter a test score to add to the vector: ";

	int score_to_add{ 0 };
	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << endl << "Enter one more test score to add to the vector: ";

	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << endl << "Test scores are now: " << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;
	cout << endl << "There are " << test_scores.size() << " scores in the vector" << endl;

	//cout << endl << "This should cause an exception!!" << test_scores.at(10);

	// Example of a 3D-vector
	vector <vector<int>> movie_ratings
	{
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	};

	cout << endl << "Here are the movie rating for reeviewer #1 using array syntax: " << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

	
	cout << endl << "Here are the movie rating for reviewer #1 using vector syntex:" << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;


	return 0;
}