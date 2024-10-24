#pragma once
#include <iostream>
class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
public:


	void AccountInfo()
	{
		std::cout << "Informacje o koncie bankowym\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		if (amount >= 0)
			balance = balance + amount;
	}

	bool WithdrawToAccount(double amount)
	{
		if (amount <= 0 && balance >= amount)
		{
			balance = balance - amount;
			return true;
		}
		return false;
	}
};