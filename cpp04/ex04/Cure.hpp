/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:54:02 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/09 23:56:17 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const& c);
		virtual ~Cure();

		Cure				&operator=(Cure const& c);
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
