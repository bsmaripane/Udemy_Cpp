#include "gtest/gtest.h"
#include "StudentDatabase.h"

TEST(StudentDatabaseTest, AddStudent_ShouldIncreaseCount)
{
	StudentDatabase db;
	db.addStudent(101, "Maxine");
	EXPECT_EQ(db.getCount(), 1);
}