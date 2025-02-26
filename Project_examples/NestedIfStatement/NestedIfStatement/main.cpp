// Nested if statement
#include <iostream>
#include <string>

using namespace std;

int main() {
	int number{};
	const int TARGET{ 10 };

	cout << "Enter a number and I'll compare it to " << TARGET << " : ";
	cin >> number;

	if (number >= TARGET) {
		cout << endl << "======================================================" << endl;
		cout << number << " is greater then or equal to " << TARGET << endl;

		int diff{ number - TARGET };

		cout << number << " is " << diff << " greater than " << TARGET << endl;
	}
	else {
		cout << endl << "======================================================" << endl;
		cout << number << " is less then " << TARGET << endl;

		int diff{ TARGET - number };

		cout << number << " is " << diff << " less than " << TARGET << endl;
	}

	/*************************************************************************************
	* Grades
	* Ask the user for the score between 0 and 100
	* then validaty the entered score
	* Give a results if the score is valid
	*************************************************************************************/
	int test_score{};
	string letter_grade{};
	const int MIN{ 0 };
	const int MAX{ 100 };

	cout << endl << "Enter the test score (0 ~ 100) : ";
	cin >> test_score;

	cout << endl << "==========================================================================" << endl;
	if (test_score >= MIN && test_score <= MAX) {
		if (test_score >= 70)
			if (test_score >= 80)
				if (test_score >= 90)
					letter_grade = "A+";
				else
					letter_grade = 'A';
			else
				letter_grade = 'B';
		else if (test_score >= 40)
			if (test_score >= 50)
				if (test_score >= 60)
					letter_grade = 'C';
				else
					letter_grade = 'D';
			else
				letter_grade = 'E';
		else
			if (test_score >= 30)
				letter_grade = 'F';
			else
				letter_grade = 'G';
		
		cout << "Your grade is : " << letter_grade << endl;

		if (letter_grade == "A+" || letter_grade == "A")
			cout << "Passed with distinction" << endl;
		else if (letter_grade == "B" || letter_grade == "C" || letter_grade == "D")
			cout << "Passed" << endl;
		else if (letter_grade == "E")
			cout << "Qualified for supplementary examination" << endl;
		else
			cout << "Failed" << endl;
	}
	else {
		cout << "Sorry! " << test_score << ": is invalid test score!" << endl;
	}
	cout << endl << "==========================================================================" << endl;

	return 0;
}