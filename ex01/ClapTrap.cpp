/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:21:54 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 12:08:19 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string nm ) : name(nm), hitPoints( 10 ), energyPoints( 10 ), attackDamage( 0 )
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		std::cout << this->name << " is not alive or not have enough energy to attack ." << std::endl;
	else
	{ 
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage !" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is already dead ." << std::endl;
	else
	{
		std::cout << this->name << " lost " << amount << " hit points ." << std::endl;
		this->hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->hitPoints == 0)
		std::cout << "To late to be repaired " << this->name << " is already dead ." << std::endl;
	else if (this->energyPoints == 0)
		std::cout << "There are not enough energy points to repaire " << this->name << std::endl;
	else
	{
		std::cout << this->name << " is repaired, and get " << amount << " hit points back ." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

unsigned int	ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}