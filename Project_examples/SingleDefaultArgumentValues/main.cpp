// Single default argument value

#include <iostream>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.15);

int main()
{
	double cost{ 200.00 };
	
	cout << "Cost using the default tax rate R" << calc_cost(cost) << endl;
	cout << "Cost using 15.5% tax rate, not default tax rate, R" << calc_cost(cost, 0.155) << endl;

	return 0;
}

double calc_cost(double base_cost, double tax_rate)
{
	return base_cost += (base_cost * tax_rate);
}