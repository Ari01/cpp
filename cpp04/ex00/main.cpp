/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:08:46 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 02:10:08 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Cat*		c = new Cat();
	const Dog*		d = new Dog();

	std::cout << std::endl << "j is a " << j->getType() << " " << std::endl;
	std::cout << "it makes the sound : ";
	j->makeSound();
	std::cout << std::endl;

	std::cout << "i is a " << i->getType() << " " << std::endl;
	std::cout << "it makes the sound : ";
	i->makeSound();

	std::cout << std::endl << "the animal meta makes the sound : ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "c is a " << c->getType() << " " << std::endl;
	std::cout << "it makes the sound : ";
	c->makeSound();
	std::cout << std::endl;

	std::cout << "d is a " << d->getType() << " " << std::endl;
	std::cout << "it makes the sound : ";
	d->makeSound();
	std::cout << std::endl;

	const WrongAnimal*	k = new WrongAnimal();
	const WrongAnimal*	l = new WrongCat();

	std::cout << std::endl << "a wrong animal makes the sound : ";
	k->makeSound();
	std::cout << std::endl;

	std::cout << "l is a " << l->getType() << " " << std::endl;
	std::cout << "it makes the sound : ";
	l->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	delete(c);
	delete(d);
	delete(k);
	delete(l);

	return (0);
}
