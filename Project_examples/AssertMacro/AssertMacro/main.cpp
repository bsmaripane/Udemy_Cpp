#include <iostream>
#include <string>
#include <cstdlib>
//#define NDEBUG
#include <cassert>

using namespace std;

//int GetValue(int index)
//{
//	assert(index >= 0 && index < array.size());
//
//	if (index < 0 || index >= array.size())
//		return -1;	// value should make sense
//	return array[index];
//}

struct StudentStruct	// structure name
{
	// structure members
	int studentID;
	string name;
	int year;
	double average;
};

// Converting Struct to a Class
class StudentClass	// Class Declaration
{
public:
	StudentClass();
	StudentClass(int sStudentID, string sName);
	StudentClass(int sStudentID, string sName, int sYear, double sAverage);
	void setStudentID(int sStudentID);
	void setName(string sName);
	void setYear(int sYear);
	void setAverage(double sAverage);
	int getStudentID() const;
	string getName() const;
	int getYear() const;
	double getAverage() const;
private:
	int studentID;
	string name;
	int year;
	double average;
};

int main()
{
	/*int x{ 0 }, y{ 0 }, z{ 0 };

	cout << "Enter the value for x: ";
	cin >> x;
	cout << "Enter the value for y: ";
	cin >> y;
	cout << "Enter the value for z: ";
	cin >> z;

	assert(z != 0);

	x = (x * y / z);

	cout << "The value of x is: " << x << endl;*/



	StudentClass studObj1;
	//cout << studObj1.name << endl;
	cout << "The default student object has the following values:\n";
	cout << studObj1.getName() << " " << studObj1.getStudentID() << " " << studObj1.getYear() << "   " << studObj1.getAverage() << endl;
	StudentClass studObj2(102, "MyName", 2023, 34.52);
	cout << "The second student object has the following values:\n";
	cout << studObj2.getName() << " " << studObj2.getStudentID() << " " << studObj2.getYear() << "   " << studObj2.getAverage() << endl;

	return 0;
}

// Default constructors
StudentClass::StudentClass() : studentID(0), name("unknown"), year(2000), average(0.0) {}
StudentClass::StudentClass(int sStudentID, string sName) : studentID(sStudentID), name(sName), year(0), average(0.0) {}
StudentClass::StudentClass(int sStudentID, string sName, int sYear, double sAverage)
	: studentID(sStudentID), name(sName), year(sYear), average(sAverage)
{
	if (sYear < 999)
	{
		cout << "Error: " << sYear << " is invalid year!" << endl;
		exit(1);
	}
	if (sAverage < 0)
	{
		cout << "Error: " << sAverage << " is invalid average value!" << endl;
		exit(1);
	}
}

// Mutators methods
void StudentClass::setStudentID(int sStudentID)
{
	studentID = sStudentID;
}
void StudentClass::setName(string sName)
{
	name = sName;
}
void StudentClass::setYear(int sYear)
{
	year = sYear;
}
void StudentClass::setAverage(double sAverage)
{
	average = sAverage;
}

// Accessors methods
int StudentClass::getStudentID() const
{
	return studentID;
}
string StudentClass::getName() const
{
	return name;
}
int StudentClass::getYear() const
{
	return year;
}
double StudentClass::getAverage() const
{
	return average;
}