// ************************************************************************** //
//                                                                            //
//                Accounts.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <iomanip>

Account::Account()
{
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";" 
		<< "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";" << "closed" << std::endl;
}

/* 		Static Class Methods    */

int Account::_nbAccounts(0);
int Account::_totalAmount(0);
int Account::_totalNbDeposits(0);
int Account::_totalNbWithdrawals(0);

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " " << "accounts:" << Account::_nbAccounts << ";"
		<< "total:" << Account::_totalAmount << ";" 
		<< "deposits:" << Account::_totalNbDeposits << ";"
		<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532]";
}

/* 		Instance Methods	*/

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;

	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";" 
		<< "p_amount:" << this->_amount - deposit << ";" 
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount << ";" 
		<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;

		Account::_displayTimestamp();
		std::cout << " " << "index:" << this->_accountIndex << ";" 
			<< "p_amount:" << this->_amount + withdrawal << ";" 
			<< "withdrawal:" << withdrawal << ";"
			<< "amount:" << this->_amount << ";" 
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	Account::_displayTimestamp();
		std::cout << " " << "index:" << this->_accountIndex << ";" 
			<< "p_amount:" << this->_amount << ";" 
			<< "withdrawal:" << "refused" << std::endl;
	return false;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";" 
		<< "amount:" << this->_amount << ";" 
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}
