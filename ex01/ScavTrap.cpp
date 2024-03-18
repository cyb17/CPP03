/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:47:50 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 13:00:52 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string nm ) : ClapTrap( nm )
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "\e[34m" << "ScavTrap constructor called" << "\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[34m" << "ScavTrap destructor called" << "\e[0m" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other )
{
	std::cout << "\e[34m" << "ScavTrap copie constructor called" << "\e[0m" << std::endl;
	*this = other;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other)
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

void	ScavTrap::attack( const std::string& target )
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		std::cout << "\e[91m" << this->name << " is not alive or not have enough energy to attack ." << "\e[0m" << std::endl;
	else
	{ 
		std::cout << "\e[31;1m" << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << "\e[0m" << std::endl;
		this->energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "\e[95m" << this->name << " is now in Gate keeper mode ." << "\e[0m" << std::endl;
}
