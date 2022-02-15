/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:01:09 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 03:24:06 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*inventory[4];
		std::string			_name;

	public:
		Character();
		Character(std::string const& name);
		Character(Character const& c);
		virtual ~Character();

		Character					&operator=(Character const& c);
		virtual std::string const	&getName() const;
		AMateria					*getMateria(int idx);
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

# endif
