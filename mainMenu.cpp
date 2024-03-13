#include "mainMenu.h"
#include "balance.h"
#include "Snack.h"

namespace menus
{
	void mainMenuDisplay()
	{
		bool continueLoop = true;
		while (continueLoop)
		{
			menuOne();
			std::string choice;
			std::cin >> choice;
			switch (choice[0]) {
			case 'A':
			case 'a':
				menuTwo();
				break;
			case 'B':
			case 'b':
				menuThree();
				break;
			case 'Q':
			case 'q':
				continueLoop = false;
			}



		}
	}

	void menuOne()
	{
		std::cout << "MAKE A SELECTION USING A SINGLE CHARACTER" << std::endl << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "----------Current Balance: $" << Balance::getBalance() << "----------" << std::endl;
		std::cout << "A. INSERT MONEY" << std::endl;
		std::cout << "B. SELECT FOOD AND/OR DRINK" << std::endl;
		std::cout << "Q. QUIT" << std::endl;
	}

	void menuTwo()
	{
		bool continueLoop = true;
		while (continueLoop)
		{
			std::cout << std::fixed << std::setprecision(2) << "----------Current Balance: $" << Balance::getBalance() << "----------" << std::endl;
			std::cout << "A. INPUT $0.01" << std::endl;
			std::cout << "B. INPUT $0.05" << std::endl;
			std::cout << "C. INPUT $0.10" << std::endl;
			std::cout << "D. INPUT $0.25" << std::endl;
			std::cout << "E. INPUT $0.50" << std::endl;
			std::cout << "F. INPUT $1.00" << std::endl;
			std::cout << "G. INPUT $2.00" << std::endl;
			std::cout << "Q. QUIT TO PREVIOUS MENU" << std::endl;
			std::string choice;
			std::cin >> choice;
			switch (choice[0]) {
			case 'A':
			case 'a':
				Balance::setBalance(0.01);
				break;
			case 'B':
			case 'b':
				Balance::setBalance(0.05);
				break;
			case 'C':
			case 'c':
				Balance::setBalance(0.10);
				break;
			case 'D':
			case 'd':
				Balance::setBalance(0.25);
				break;
			case 'E':
			case 'e':
				Balance::setBalance(0.50);
				break;
			case 'F':
			case 'f':
				Balance::setBalance(1.00);
				break;
			case 'G':
			case 'g':
				Balance::setBalance(2.00);
				break;
			case 'Q':
			case 'q':
				continueLoop = false;
			}
		}

	}

	void menuThree()
	{
		bool continueLoop = true;
		while (continueLoop)
		{
			std::cout << std::fixed << std::setprecision(2) << "----------Current Balance: $" << Balance::getBalance() << "----------" << std::endl;
			std::cout << "A. PURCHASE CANDY ($1.00)" << std::endl;
			std::cout << "B. PURCHASE SNACKS ($0.75)" << std::endl;
			std::cout << "C. PURCHASE NUTS ($0.50)" << std::endl;
			std::cout << "D. PURCHASE COKE ($1.00)" << std::endl;
			std::cout << "E. PURCHASE PEPSI ($1.50)" << std::endl;
			std::cout << "F. PURCHASE SODA ($1.75)" << std::endl;
			std::cout << "Q. QUIT" << std::endl;
			std::string choice;
			std::cin >> choice;
			Snack::SnackList temp;
			switch (choice[0]) {
			case 'A':
			case 'a':
				temp = Snack::Candy;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 1.00)
				{
					std::cout << "CANDY HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-1.00);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'B':
			case 'b':
				temp = Snack::Snacks;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 0.75)
				{
					std::cout << "SNACKS HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-0.75);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'C':
			case 'c':
				temp = Snack::Nuts;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 0.50)
				{
					std::cout << "NUTS HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-0.50);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'D':
			case 'd':
				temp = Snack::Coke;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 1.00)
				{
					std::cout << "COKE HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-1.00);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'E':
			case 'e':
				temp = Snack::Pepsi;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 1.50)
				{
					std::cout << "PEPSI HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-1.50);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'F':
			case 'f':
				temp = Snack::Soda;
				if (Snack::snacksLeft(temp) && Balance::getBalance() >= 1.75)
				{
					std::cout << "SODA HAS BEEN DEALT" << std::endl;
					Balance::setBalance(-1.75);
				}
				else
				{
					std::cout << "EITHER INSUFFICIENT FUNDS OR MACHINE IS OUT OF SELECTED CHOICE" << std::endl;
				}
				break;
			case 'Q':
			case 'q':
				continueLoop = false;
			}
		}

	}
}
