/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:21:54 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 13:05:48 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( std::string nm ) : name( nm ), hitPoints( 10 ), energyPoints( 10 ), attackDamage( 0 )
{
	std::cout << "\e[34m" << "ClapTrap constructor called" << "\e[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[34m" << "ClapTrap destructor called" << "\e[0m" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "\e[34m" << "ClapTrap copie constructor called" << "\e[0m" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		std::cout << "\e[91m" << this->name << " is not alive or not have enough energy to attack ." << "\e[0m" << std::endl;
	else
	{ 
		std::cout << "\e[31;1m" << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << "\e[0m" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->hitPoints == 0)
		std::cout << "\e[91m" << this->name << " is already dead ." << "\e[0m" << std::endl;
	else
	{
		std::cout << "\e[31;1m" << this->name << " lost " << amount << " hit points ." << "\e[0m" << std::endl;
		if (this->hitPoints > amount)
			this->hitPoints -= amount;
		else
			this->hitPoints = 0;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->hitPoints == 0)
		std::cout << "\e[91m" << "To late to be repaired " << this->name << " is already dead ." << "\e[0m" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << "\e[91m" << "There are not enough energy points to repaire " << this->name << "\e[0m" << std::endl;
	else
	{
		std::cout << "\e[32;1m" << this->name << " is repaired, and get " << amount << " hit points back ." << "\e[0m" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

unsigned int	ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}

void	ClapTrap::printTrapInfo()
{
	std::cout << "\n";
	std::cout << "\e[36m" << "Name : " << this->name << "\e[0m" << std::endl;
	std::cout << "\e[36m" << "Hit points : " << this->hitPoints << "\e[0m" << std::endl;
	std::cout << "\e[36m" << "Energy points : " << this->energyPoints << "\e[0m" << std::endl;
	std::cout << "\e[36m" << "Attack damage : " << this->attackDamage << "\e[0m" << std::endl;
	std::cout << "\n";
}