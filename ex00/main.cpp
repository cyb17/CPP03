/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:30:47 by yachen            #+#    #+#             */
/*   Updated: 2024/03/18 10:40:27 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Alice( "Alice" );
	ClapTrap	Helene( "Helene" );
	ClapTrap	copie( Helene );

	copie.printTrapInfo();
	Helene.beRepaired( 5 );
	Alice.attack( "Helene" );
	Helene.takeDamage( Alice.getAttackDamage() );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.beRepaired( 5 );
	Helene.attack( "Alice" );
	Alice.printTrapInfo();
	Helene.printTrapInfo();	
	return 0;
}