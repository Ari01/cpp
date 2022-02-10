/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:20:09 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 01:51:21 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& m);
		virtual ~AMateria();

		AMateria			&operator=(AMateria const& m);
		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;
};

#endif
