/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:30:47 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 10:59:19 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	Eric( "Eric" );
	DiamondTrap	Alex( "Alex" );
	DiamondTrap	copie( Eric );

	Eric.whoAmI();
	Eric.printTrapInfo();
	copie.printTrapInfo();
	Eric.attack( "Alex" );
	Alex.takeDamage( Eric.getAttackDamage() );
	Alex.beRepaired( 5 );
	return 0;
}