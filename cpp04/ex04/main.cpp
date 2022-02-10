/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:53:33 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 10:40:10 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main()
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");
	ICharacter		*bob = new Character("bob");
	AMateria		*tmp;

	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	tmp = new Cure();
	src->learnMateria(tmp);
	delete(tmp);

	std::cout << std::endl;
	tmp = src->createMateria("fire");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << std::endl;
	Character *ctmp;
	ctmp = (Character *)me;
	delete(tmp);
	tmp = ctmp->getMateria(0);
	me->unequip(0);
	me->unequip(0);
	me->use(0, *bob);

	*me = *bob;

	std::cout << std::endl;
	delete(tmp);
	delete(bob);
	delete(me);
	delete(src);
	return (0);
}
