/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:32:05 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 16:43:04 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( std::string nm ) : ClapTrap( nm + "_clap_name" ), ScavTrap( nm ), FragTrap( nm )
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->name = ClapTrap::name;
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	std::cout << "DiamondTrap copie constructor called" << std::endl;
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;	
	return *this;
}

void	DiamondTrap::attack( const std::string target )
{
	this->ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\nwhoAmI: \n" << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}