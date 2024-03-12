/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:30:47 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 10:17:08 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	Alice( "Alice" );
	FragTrap	Helene( "Helene" );
	ScavTrap	Alex( "ALex" );
	ScavTrap	Marc( "Marc" );
	FragTrap	copie( Alice );

	copie.printTrapInfo();
	Helene.beRepaired( 5 );
	Alice.attack( "Helene" );
	Helene.takeDamage( Alice.getAttackDamage() );
	Alice.printTrapInfo();
	Helene.printTrapInfo();
	Alice.highFivesGuys();
	Helene.highFivesGuys();
	
	Alex.printTrapInfo();
	Marc.printTrapInfo();
	Alex.attack( "Marc" );
	Marc.takeDamage( Marc.getAttackDamage() );
	
	return 0;
}