/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:42:55 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 17:50:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		
		ScavTrap( std::string nm );
		~ScavTrap();
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap& other );

		void	guardGate();
};

#endif