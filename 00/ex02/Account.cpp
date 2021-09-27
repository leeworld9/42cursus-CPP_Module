/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:30:48 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/28 01:57:10 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// public

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:"  << _totalNbDeposits << ";";
	std::cout << "withdrawals:"  << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

// OS에 따라 소멸자 호출시점이 다름
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits = 1;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits += _nbDeposits;
	
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if(_amount > withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount = _amount - withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals = 1;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += _nbWithdrawals;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

int Account::checkAmount( void ) const
{
	return (_amount); 
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

//private

void Account::_displayTimestamp( void )
{
	// std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	// std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	// tm utc_tm = *localtime(&time_now);
	// std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
	// 		<< std::setw(2) << utc_tm.tm_mon
	// 		<< std::setw(2) << utc_tm.tm_mday << "_"
	// 		<< std::setw(2) << utc_tm.tm_hour
	// 		<< std::setw(2) << utc_tm.tm_min
	// 		<< std::setw(2) << utc_tm.tm_sec << "] ";
	std::cout << "[19920104_091532] ";
}

Account::Account(void)
{
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}