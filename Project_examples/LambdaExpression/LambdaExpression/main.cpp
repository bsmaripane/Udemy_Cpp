// Section 21 Lambda Expression

#include <iostream>
#include <vector>

int main()
{
	auto word = []() { std::cout << "Hello Lambda Expression" << std::endl; };

	word();

	// Returning a value from a lambda expression
	auto product = [](int x, int y) -> int { return x * y; };

	std::cout << product(4, 5) << std::endl;

	auto module = [](int a, int b) { return a % b; };

	std::cout << module(9, 5) << std::endl;

	// Stateless lambda expressions

	const int n{ 3 };
	int nums[n]{ 10,20,30 };

	auto sum = [](int nums[], int n)
		{
			int sum{ 0 };
			for (int i{ 0 }; i < n; i++)
				sum += nums[i];
			return sum;
		};

	std::cout << sum(nums, 3) << std::endl;

	// Use values and references as lambda parameters
	int test_score1{ 88 };
	int test_score2{ 75 };

	auto bonus = [](int& score1, int& score2, int bonus_points)
		{
			score1 += bonus_points;
			score2 += bonus_points;
		};

	bonus(test_score1, test_score2, 5);

	std::cout << "test_score1: " << test_score1 << std::endl;
	std::cout << "test_score2: " << test_score2 << std::endl;

	// Use auto as lambda parameter type specifiers
	int num1{ 10 };
	float num2{ 30.3 };

	auto out = [](auto num) {std::cout << num << std::endl; };

	out(num1);
	out(num2);

	std::vector<int> exam_scores{ 93,88,75,68,65 };
	std::vector<float> assignment_scores{ 88.5,85.5,75.5,68.5,65.5 };

	auto final = [](auto& marks, int final_marks)
		{
			for (auto& mark : marks)
				mark += final_marks;
		};

	final(exam_scores, 5);
	final(assignment_scores, 10);

	system("pause");
	return 0;
}