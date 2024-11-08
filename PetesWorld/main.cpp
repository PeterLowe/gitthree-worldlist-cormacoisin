// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Cormac Bowes
//  or here
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from B to B or Y to Y" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'B' || letter > 'Y') // not a capital letter
	{ 
		if (letter < 'b' || letter > 'y') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'b' || letter == 'B') 
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "BahrainArabian Peninsula," << std::endl;
		}
	}		
	return 1;
}