/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:47:50 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 17:50:39 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string nm ) : ClapTrap( nm )
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called" << std::endl; }

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other )
{
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other)
{
	ClapTrap::operator=( other );
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is now in Gate keeper mode ." << std::endl;
}