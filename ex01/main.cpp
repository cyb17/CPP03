/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:30:47 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 10:46:07 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	Alice( "Alice" );
	ScavTrap	Helene( "Helene" );
	ScavTrap	copie( Alice );

	copie.printTrapInfo();
	Helene.beRepaired( 5 );
	Alice.attack( "Helene" );
	Alice.attack( "Helene" );
	Alice.attack( "Helene" );
	Helene.takeDamage( Alice.getAttackDamage() );
	Helene.takeDamage( Alice.getAttackDamage() );
	Helene.takeDamage( Alice.getAttackDamage() );
	Alice.printTrapInfo();
	Helene.printTrapInfo();
	Alice.guardGate();
	Helene.guardGate();
	
	return 0;
}