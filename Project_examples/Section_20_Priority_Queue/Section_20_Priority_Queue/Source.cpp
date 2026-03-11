// Section 20 Priority Queue

#include <iostream>
#include <queue>

class Person
{
	friend std::ostream& operator<<(std::ostream& os, const Person& person)
	{
		os << person.name << ":" << person.age;
		return os;
	}
	std::string name;
	int age;
public:
	Person() : name("Unknown"), age(0) {}
	Person(std::string name, int age)
		: name(name)
	{
		if (age < 0)
			std::cerr << "Error: age cannot be a negative integer!" << std::endl;
		else
			this->age = age;
	}

	bool operator<(const Person& rhs) const
	{
		return this->age < rhs.age;
	}
	bool operator==(const Person& rhs) const
	{
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

// Display the priority queue by repeatedly topping and popping the priority queue.
// It is being passed by value, don't modify the priority queue being passed in.
template<typename Type>
void display(std::priority_queue<Type> priorityQueue)
{
	std::cout << "[ ";
	while (!priorityQueue.empty())
	{
		Type element = priorityQueue.top();
		priorityQueue.pop();
		std::cout << element << " ";
	}
	std::cout << "]" << std::endl;
}

void test1()
{
	std::cout << "Test One ============================================\n";

	std::priority_queue<int> priorityQueue;
	for (int item : { 3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7, 9, 1 })
		priorityQueue.push(item);

	std::cout << "Size: " << priorityQueue.size() << std::endl;
	std::cout << "Top: " << priorityQueue.top() << std::endl;
	display(priorityQueue);
	priorityQueue.pop();
	display(priorityQueue);
}

void test2()
{
	std::cout << "Test Two ============================================\n";

	std::priority_queue<Person> priorityQueue;

	priorityQueue.push(Person("Felicia", 29));
	priorityQueue.push(Person("Emily", 53));
	priorityQueue.push(Person("Lesego", 11));
	priorityQueue.push(Person("Tracy", 32));
	priorityQueue.push(Person("Kganya", 4));
	priorityQueue.push(Person("Maswi", 30));

	display(priorityQueue);
}

int main()
{
	std::cout << "Section 20 Priority Queue\n\n";

	test1();
	test2();

	std::cout << std::endl;
	system("pause");
	return 0;
}