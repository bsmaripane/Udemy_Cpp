#include "StudentDatabase.h"

void StudentDatabase::addStudent(int studentId, std::string studentName)
{
	students[studentId] = studentName;
}

int StudentDatabase::getCount() const
{
	return students.size();
}

std::string StudentDatabase::getStudentName(int studentId) const
{
	auto iter{ students.find(studentId) };
	if (iter != students.end())
		return iter->second;

	return "";
}
