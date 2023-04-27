#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
static int index = 0;

Account::Account(void)
{
	return;
}

Account::Account(int initial_deposit)
{
	Account::_amount = initial_deposit;
	Account::_displayTimestamp();
	Account::_accountIndex = index;
	std::cout << "index:" << Account::_accountIndex << ";";
	index++;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created";
	std::cout << std::endl;
}

Account::~Account()
{
	// [19920104_091532] index:0;amount:47;closed
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
	return;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
	char buffer[20];
	std::time_t now = std::time(NULL);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", std::localtime(&now));
	std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() ;
	std::cout << std::endl;
	std::cout << std::endl;
}

void	Account::displayStatus(void) const
{
	//[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0 // displayStatus
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1 //makeDeposit
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	Account::_amount += deposit;
	Account::_totalAmount+= deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

int	Account::checkAmount(void) const
{
	return 0;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1 //makeWithdrawal
	//[19920104_091532] index:5;p_amount:23;withdrawal:refused //makeWithdrawal
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	if(Account::_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	Account::_amount -= withdrawal;
	Account::_totalAmount-= withdrawal;
	Account::_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
	return true;
}