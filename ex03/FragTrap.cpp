/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:47:16 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 10:49:36 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string nm ) : ClapTrap( nm )
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "\e[34m" << "FragTrap constructor called" << "\e[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[34m" << "FragTrap destructor called" << "\e[0m" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other )
{
	std::cout << "\e[34m" << "FragTrap copie constructor called" << "\e[0m" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=( const FragTrap& other)
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << "\e[35;1m" << this->name << " Asked: Give me five !" << "\e[0m" << std::endl;
}