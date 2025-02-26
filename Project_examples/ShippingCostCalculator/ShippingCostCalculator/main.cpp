// Seaction 9 Shipping
/************************************************************************
Shipping cost calculator

Ask the user for package dimension in inches
length, width, height - these should be integers

All dimension must be 10 inches or less or we cannot ship it

Base cost R47.50
if package volume is greater than 100 cubic inches there is a 10% surcharge
if package volume is greater than 500 cubic inches there is a 25% surcharge

*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	int length{}, width{}, height{};
	double base_cost{ 47.50 };

	const int tier1_threshold{ 100 };	// volume
	const int tie2_threshold{ 500 };	// volume

	int max_dimension_length{ 10 };		// inches

	double tie1_surcharge{ 0.10 };		// 10% extra
	double tie2_surcharge{ 0.25 };		// 25% extra

	// All dimension must be 10 inches or less

	int package_volume{};



	return 0;
}