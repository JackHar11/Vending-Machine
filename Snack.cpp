#include "Snack.h"

namespace Snack
{
	int snackListCount[6] = { 10, 10 , 10 , 10, 10, 10 };
	bool snacksLeft(SnackList &temp)
	{
		if (snackListCount[temp] < 1)
		{
			return false;
		}
		snackListCount[temp]--;
		return true;
	}
}