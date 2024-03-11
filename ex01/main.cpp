/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:30:47 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 11:56:49 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Alice( "Alice" );
	ClapTrap	Helene( "Helene" );

	Helene.beRepaired( 5 );
	Alice.attack( "Helene" );
	Helene.takeDamage( Alice.getAttackDamage() );
	Alice.attack( "Helene" );
	
	return 0;
}