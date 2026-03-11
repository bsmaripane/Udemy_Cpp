// Section 20 Queue

#include <iostream>
#include <queue>

// Display the elements of the queue by repeatedly removing elements from the front.
// The queue is passed in by value, don't affect the passed in queue.
template<typename Type>
void display(std::queue<Type> queue)
{
	std::cout << "[ ";
	while (!queue.empty())
	{
		Type element = queue.front();
		queue.pop();
		std::cout << element << " ";
	}
	std::cout << "]" << std::endl;
}

int main()
{
	std::cout << "Section 20 Queue\n\n";

	std::queue<int> queue;

	for (int item : { 1, 2, 3, 4, 5})
		queue.push(item);
	display(queue);

	std::cout << "Size: " << queue.size() << std::endl;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	display(queue);

	std::cout << "Size: " << queue.size() << std::endl;

	std::cout << "Front: " << queue.front() << std::endl;
	std::cout << "Back: " << queue.back() << std::endl;

	queue.pop();
	queue.pop();
	display(queue);

	while (!queue.empty())
		queue.pop();
	display(queue);

	std::cout << std::endl;
	system("pause");
	return 0;
}