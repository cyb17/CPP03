/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:20:33 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 11:37:04 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class	DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
	private:
		std::string	name;

	public:

		DiamondTrap( std::string nm );
		~DiamondTrap();
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap&	operator=( const DiamondTrap& other );

		void	attack( const std::string target );
		void	whoAmI();
};

#endif