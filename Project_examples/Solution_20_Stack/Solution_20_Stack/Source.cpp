// Section 20 Stack

#include <iostream>
#include <stack>
#include <vector>
#include <list>

// Displays a stack of by repeatedly topping and popping the stack.
// The stack is passed in value, so don't affaect the passed stack
template<typename Type>
void display(std::stack<Type> stack)
{
	std::cout << "[ ";
	while (!stack.empty())
	{
		Type element = stack.top();
		stack.pop();
		std::cout << element << " ";
	}
	std::cout << " ]" << std::endl;
}

int main()
{
	std::cout << "Section 20 Stack\n\n";
	
	std::stack<int> stackNums;
	std::stack<int, std::vector<int>> stackVector;
	std::stack<int, std::list<int>> stackList;
	std::stack<int, std::deque<int>> stackDeque;

	for (int item : { 1, 2, 3, 4, 5})
		stackNums.push(item);
	display(stackNums);



	system("pause");
	return 0;
}