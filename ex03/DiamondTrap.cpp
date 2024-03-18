/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:32:05 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 10:56:07 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( std::string nm ) : ClapTrap( nm + "_clap_name" ), ScavTrap( nm ), FragTrap( nm )
{
	std::cout << "\e[34m" << "DiamondTrap constructor called" << "\e[0m" << std::endl;

	this->name = ClapTrap::name;
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[34m" << "DiamondTrap destructor called" << "\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	std::cout << "\e[34m" << "DiamondTrap copie constructor called" << "\e[0m" << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
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

void	DiamondTrap::attack( const std::string target )
{
	this->ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\e[93m" << "\nwhoAmI: \n" << "DiamondTrap name: " << this->name << "\e[0m" << std::endl;
	std::cout << "\e[93m" << "ClapTrap name: " << ClapTrap::name << "\e[0m" << std::endl;
}