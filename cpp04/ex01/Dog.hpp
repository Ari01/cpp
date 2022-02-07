/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:24:10 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 11:48:56 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(Dog const& a);
		virtual ~Dog();

		Brain			*getBrain();
		Dog				&operator=(Dog const& d);
		virtual void	makeSound() const;
};

# endif
