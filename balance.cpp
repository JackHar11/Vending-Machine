#include "balance.h"

double Balance::totalBalance;
double Balance::getBalance()
{
	return totalBalance;
}

void Balance::setBalance(double add)
{
	totalBalance += add;
}

Balance::Balance()
{
	totalBalance = 0;
}
