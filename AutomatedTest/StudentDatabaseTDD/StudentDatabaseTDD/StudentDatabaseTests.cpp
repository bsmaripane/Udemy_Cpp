#include "gtest/gtest.h"
#include "StudentDatabase.h"

class StudentDatabaseTest : public ::testing::Test
{
protected:
	StudentDatabase db;
};

TEST_F(StudentDatabaseTest, AddStudent_ShouldIncreaseCount)
{
	db.addStudent(101, "Maxine");
	EXPECT_EQ(db.getCount(), 1);
}

TEST_F(StudentDatabaseTest, GetStudentById_ShouldReturnCorrectName)
{
	db.addStudent(101, "Maxine");
	EXPECT_EQ(db.getStudentName(101), "Maxine");
}

TEST_F(StudentDatabaseTest, GetStudent_InvalidId_ShouldReturnEmpty)
{
	EXPECT_EQ(db.getStudentName(-1), "");
}