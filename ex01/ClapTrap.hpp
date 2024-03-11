/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:14:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 11:43:42 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>

class	ClapTrap
{
	private:
	
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
	
		ClapTrap( std::string name );
		~ClapTrap();
		ClapTrap( const ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );
		
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		unsigned int	getAttackDamage();

};

#endif

