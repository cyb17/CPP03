/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:43:54 by yachen            #+#    #+#             */
/*   Updated: 2024/03/11 17:50:10 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class	FragTrap : public ClapTrap
{
	public:
		
		FragTrap( std::string nm );
		~FragTrap();
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap& other );

		void	highFivesGuys( void );
};

#endif