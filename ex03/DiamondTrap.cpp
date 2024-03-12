/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:32:05 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 11:02:01 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string nm ) : ClapTrap( nm + "_clap_name" ), ScavTrap( nm ), FragTrap( nm )
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	
	this->name = ClapTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	std::cout << "DiamondTrap constructor copie called" << std::endl;
	*this = other;
}

DiamondTrap&	operator=( const DiamondTrap& other )
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;	
	return *this;
}

void	DiamondTrap::attack( const std::string target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI()
{
	
}