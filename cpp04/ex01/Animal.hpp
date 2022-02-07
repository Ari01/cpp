/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:16:29 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 01:15:59 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const& a);
		virtual ~Animal();

		std::string		getType() const;
		Animal			&operator=(Animal const& a);
		virtual void	makeSound() const;
};

# endif
