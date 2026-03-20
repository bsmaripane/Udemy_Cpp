#pragma once
#include <string>
#include <map>

class StudentDatabase
{
public:
	void addStudent(int studentId, std::string studentName);
	int getCount() const;
	std::string getStudentName(int studentId) const;
private:
	std::map<int, std::string> students;
};

