#include <iostream>
#define mu_ethanol 46.07
#define mu_propanol 60.10
#define c_water 4186
#define v_water 0.200

void solver(long double, long double, unsigned char);

int main()
{
	short int t;
	std::cout << "Enter the number of trials" << std::endl;
	std::cin >> t;
	unsigned char alc_type;
	long double delta_w, delta_alc;
	std::cout << "in the following order (separated by spaces): enter the temperature change of water, mass change of alcohol, and e or p depending on the alcohol type (ethanol and propanol respectively) for each trial" << std::endl;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> delta_w >> delta_alc >> alc_type;
		solver(delta_w, delta_alc, alc_type);
	}
}

void solver(long double delta_w, long double delta_alc, unsigned char alc_type)
{
	long double mu, enthalpy;
	if (alc_type == 'e' || alc_type == 'E')
	{
		mu = mu_ethanol;
	}
	else
	{
		mu = mu_propanol;
	}
	enthalpy = (-(delta_w * c_water * v_water)) / (delta_alc / mu) / 1000;
	std::cout << enthalpy << " " << "kJ / mol" << std::endl;
}
