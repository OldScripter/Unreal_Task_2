#include <iostream>
#include "Helpers.h"

int main()
{
	try
	{
		std::cout << "\t - Squared summ of 3 and 4:\t\t" << GetSumSquared(3, 4) << "\n";
		std::cout << "\t - Squared summ of 3.3 and 4.2:\t\t" << GetSumSquared(3.3, 4.2) << "\n";
	}
	catch (std::exception* e)
	{
		std::cerr << e->what() << "\n";
	}
}