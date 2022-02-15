/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:02:20 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 02:18:14 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const& ms);
		virtual ~MateriaSource();

		MateriaSource		&operator=(MateriaSource const& ms);
		virtual void		learnMateria(AMateria *);
		virtual AMateria	*createMateria(std::string const& type);
};

#endif
