/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:47:16 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 17:50:21 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string nm ) : ClapTrap( nm )
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {	std::cout << "FragTrap destructor called" << std::endl; }

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other ) {}

FragTrap&	FragTrap::operator=( const FragTrap& other)
{
	ClapTrap::operator=( other );
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << this->name << " Asked: Give me five !" << std::endl;
}