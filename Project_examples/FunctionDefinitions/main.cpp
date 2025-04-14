//  Section 11 Function Definitions
// Area of Circle and Volume of a Cylinder
#include <iostream>

// Global variable declaration
const double PI{ 3.14159 };

// Function declarations
void area_circle();
void volume_cylinder();
double calc_area_circle(double aRadius);
double calc_volume_cylinder(double vAadius, double vHeight);

int main()
{
	// Calling a function
	area_circle();
	volume_cylinder();

	return 0;
}

// Function definitions
void area_circle()
{
	double radius{};

	std::cout << "\nEnter the radius of the circle: ";
	std::cin >> radius;

	std::cout << "\nThe area of a circle with radius " << radius << " is " << calc_area_circle(radius) << std::endl;
}

void volume_cylinder()
{
	double radius{};
	double height{};

	std::cout << "\nEnter the radius of a cylinder: ";
	std::cin >> radius;
	std::cout << "\nEnter the height of a cylinder: ";
	std::cin >> height;

	std::cout << "\nThe volume of a cylinder with a radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << std::endl;
}

double calc_area_circle(double aRadius)
{
	return (PI * aRadius * aRadius);
}

double calc_volume_cylinder(double vAadius, double vHeight)
{
	return (PI * vAadius * vAadius * vHeight);
}