/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:47:50 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 10:51:10 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string nm ) : ClapTrap( nm )
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other.name )
{
	std::cout << "ScavTrap constructor copie called" << std::endl;
	*this = other;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		std::cout << this->name << " is not alive or not have enough energy to attack ." << std::endl;
	else
	{ 
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage !" << std::endl;
		this->energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is now in Gate keeper mode ." << std::endl;
}
