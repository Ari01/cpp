/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:10:43 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 00:33:58 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hp;
		int			energy;
		int			ad;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& ct);
		~ClapTrap();

		void		print(void);
		std::string	getName(void);
		int			getHp(void);
		int			getEnergy(void);
		int			getAd(void);
		void		setHp(int);
		void		setAd(int);
		void		setEnergy(int);
		void		setAttributes(int hp, int energy, int ad);
		ClapTrap	&operator=(ClapTrap const& ct);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	};

#endif
