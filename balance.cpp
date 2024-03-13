#include "balance.h"


namespace Balance
{
	double totalBalance = 0;
	double getBalance()
	{
		return totalBalance;
	}

	void setBalance(double add)
	{
		totalBalance += add;
	}
}