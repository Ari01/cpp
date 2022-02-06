/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:55:11 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 21:37:50 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string newname);
		DiamondTrap(DiamondTrap const& dt);
		virtual ~DiamondTrap();

		DiamondTrap		&operator=(DiamondTrap const& dt);
		virtual void	attack(std::string target);
		void			whoAmI();
};

# endif
