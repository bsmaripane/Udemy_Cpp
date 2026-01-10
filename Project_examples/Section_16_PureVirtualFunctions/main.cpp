// Section 16 Pure virtual functions and abstract base classes

#include <iostream>
#include <vector>

class Shape		// Abstract Base Class
{
private:
	// attributes common to all shapes

public:
	virtual void draw() = 0;	// pure virtual function
	virtual void rotate() = 0;	// pure virtual function
	virtual ~Shape() {}
};

class Open_Shape : public Shape		// Abstract class
{
public:
	virtual ~Open_Shape() { }
};

class Closed_Shape : public Shape	// Abstract class
{
public:
	virtual ~Closed_Shape() { }
};

class Line : public Open_Shape	// Concrete class
{
public:
	virtual void draw() override { std::cout << "Drawing a line" << std::endl; }
	virtual void rotate() override { std::cout << "Rotation a line" << std::endl; }
	virtual ~Line() {}
};

class Circle : public Closed_Shape	// Concrete class
{
public:
	virtual void draw() override { std::cout << "Drawing a circle" << std::endl; }
	virtual void rotate() override { std::cout << "Rotating a circle" << std::endl; }
	virtual ~Circle() {}
};

class Square : public Closed_Shape	// Concrete class
{
public:
	virtual void draw() override { std::cout << "Drawing a square" << std::endl; }
	virtual void rotate() override { std::cout << "Rotating a square" << std::endl; }
	virtual ~Square() {}
};

int main()
{
	//Shape s;
	//Shape* p = new Shape();
	//s.draw();

	Circle c;
	c.draw();

	Shape* ptr = new Circle();
	ptr->draw();
	ptr->rotate();

	std::cout<<std::endl;

	Shape* s1 = new Line();
	Shape* s2 = new Square();
	
	std::vector<Shape*> shapes{ ptr, s1, s2 };

	for (const auto p : shapes)
		p->draw();

	delete s1;
	delete s2;

	std::cin.get();
	return 0;
}