/*
* Use the overloaded operator >> to read the data for person from our file myfile.dat
* Use the accessor functions getName() and getAge() to obtain the values 
* of the member variables name and age in the p object
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Person.h"

using namespace std;

int main()
{
	ifstream infile;

	infile.open("myfile.dat");
	if (infile.fail())
	{
		cout << "Input file opening file myfile.dat failed" << endl;
		exit(1);
	}

	Person	 p;
	int averageAge{ 0 }, sum{ 0 }, nrPeople{ 0 };
	while (infile >> p)
	{
		nrPeople++;;
		cout << p.getName() << " " << p.getAge() << endl;
		sum += p.getAge();
	}

	averageAge = sum / nrPeople;
	cout << "The average age of the people in the file is "
		<< averageAge << endl;

	//return 0;
	system("pause>0");
}