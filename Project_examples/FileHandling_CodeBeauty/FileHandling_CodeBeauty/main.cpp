#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream myFile;
	myFile.open("TextFile.txt",ios::out);

	if (myFile.is_open())
	{
		myFile << "Hello\n";
		myFile << "This is second line in the text file.\n";
		myFile.close();
	}

	myFile.open("TextFile.txt",ios::app);

	if (myFile.is_open())
	{
		myFile << "This is third line amanded in the text file.\n";
		myFile.close();
	}

	myFile.open("TextFile.txt",ios::in);

	if (myFile.is_open())
	{
		string line;

		while (getline(myFile, line))
		{
			cout << line << endl;
		}
		myFile.close();
	}

	cin.get();
	return 0;
}