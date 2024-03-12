/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:47:16 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 10:15:32 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string nm ) : ClapTrap( nm )
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other.name )
{
	std::cout << "FragTrap constructor copie called" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=( const FragTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << this->name << " Asked: Give me five !" << std::endl;
}