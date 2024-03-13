#ifndef BALANCE_H
#define BALANCE_H

class Balance
{
private:
	static double totalBalance;
public:
	Balance();
	static double getBalance();
	static void setBalance(double add);
};

#endif
