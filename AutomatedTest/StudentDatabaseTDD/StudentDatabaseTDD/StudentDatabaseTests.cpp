#include "gtest/gtest.h"
#include "StudentDatabase.h"

TEST(StudentDatabaseTest, AddStudent_ShouldIncreaseCount)
{
	StudentDatabase db;
	db.addStudent(101, "Maxine");
	EXPECT_EQ(db.getCount(), 1);
}

TEST(StudentDatabase, GetStudentById_ShouldReturnCorrectName)
{
	StudentDatabase db;
	db.addStudent(101, "Maxine");
	EXPECT_EQ(db.getStudentName(101), "Maxine");
}

TEST(StudentDatabase, GetStudent_InvalidId_ShouldReturnEmpty)
{
	StudentDatabase db;
	EXPECT_EQ(db.getStudentName(-1), "");
}