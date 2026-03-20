#pragma once
#include <string>

class StudentDatabase
{
public:
	void addStudent(int studentId, std::string studentName);
	int getCount() const;
private:
	int count = 0;
};

