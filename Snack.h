#ifndef SNACK_H
#define SNACK_H


namespace Snack
{
	enum SnackList { Candy = 0, Snacks = 1, Nuts = 2, Coke = 3, Pepsi = 4, Soda = 5 };
	extern int snackListCount[6];
	bool snacksLeft(SnackList &temp);
}

#endif

