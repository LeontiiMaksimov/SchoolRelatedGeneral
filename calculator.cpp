#include <iostream>
#define R_Const 8.3145


void solver()
{
	double pres, temp, vol, mol, mass;
	std::cin >> mass >> pres >> vol >> temp;
	mol = mass / (pres * vol) / (R_Const * temp);
	std::cout << "The answer is:" << " " << mol << std::endl;
}


int main()
{
	int t;
	std::cout << "Please input the amount of trials" << std::endl;
	std::cin >> t;
	std::cout << "For each trial please input the mass, pressure, volume and temperature in this order separated by a space. Verify that the units are appropriate" << std::endl;
	for (int i = 0; i < t; ++i)
	{
		solver();
	}
	return 0;
}
