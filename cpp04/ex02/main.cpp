/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:08:46 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 12:08:37 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal	*animal[5];
	Cat		cat;
	Dog		dog;
	int		i;

	for (i = 0; i < 5; i++)
		i % 2 ? animal[i] = new Dog() : animal[i] = new Cat();
	for (i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal " << i << " is a " << animal[i]->getType() << std::endl;
		if (animal[i]->getType() == "Cat")
		{
			delete(cat.getBrain());
			cat = *(Cat *)animal[i];
		}
		else
		{
			delete(dog.getBrain());
			dog = *(Dog *)animal[i];
		}
		std::cout << "Its primary thought is : ";
		if (animal[i]->getType() == "Cat")
			std::cout << cat.getBrain()->getIdea(0) << std::endl;
		else
			std::cout << dog.getBrain()->getIdea(0) << std::endl;
	}
	std::cout << std::endl;

	for (i = 0; i < 5; i++)
		delete (animal[i]);
	return (0);
}
