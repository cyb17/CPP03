/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:42:55 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 15:43:20 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		
		ScavTrap( std::string nm );
		~ScavTrap();
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap& other );

		void	attack( const std::string& target );
		void	guardGate();
};

#endif