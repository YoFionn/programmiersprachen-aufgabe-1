#include <iostream>
#include <catch.hpp>
#include <cmath>


double mile_to_kilometer(double mi)
{
	int km = mi/0.62137;
	return km;
}


int main(int argc, char* argv[])
{
	std::cout << "Geben sie einen Meilenwert ein zum Umrechnen in Kilometer:\n";
	int mile = 0;
	std::cin >> mile;
	std::cout << "In Kilometern ist das: ";
	std::cout << mile_to_kilometer(mile);
}