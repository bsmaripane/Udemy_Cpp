/*
* Reading from files
* Read the names and corresponding ages, display it on the console and calculate the average age.
*/
#include <iostream>
#include <fstream>
#include <cstdlib>

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

	string name;
	int age, averageAage{ 0 }, sum{ 0 }, nrPeople{ 0 };
	//while (infile >> name >> age)
	while (!infile.eof())
	{
		infile >> name >> age;
		nrPeople++;
		cout << name << " " << age << endl;
		sum += age;
	}

	averageAage = sum / nrPeople;
	cout << "The average age of thhee people in the file is "
		<< averageAage << endl;
	infile.close();

	return 0;
}