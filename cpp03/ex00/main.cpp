/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:50:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/05 01:43:27 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap thor("Thor");
	ClapTrap peach("Princess Peach");

	std::cout << std::endl << "CLAPTRAP WAR EPISODE 1" << std::endl;
	std::cout << "Preparing Combat simulation..." << std::endl;
	std::cout << "Opponents found." << std::endl << std::endl;
	std::cout << "Opponent 1 : ";
	thor.print();
	std::cout << std::endl << "Opponent 2 : ";
	peach.print();
	std::cout << std::endl << "Battle start !" << std::endl << std::endl;

	thor.attack(peach.getName());
	peach.takeDamage((unsigned int)thor.getAd());
	std::cout << std::endl;

	peach.beRepaired(1);
	peach.attack(thor.getName());
	thor.takeDamage((unsigned int)peach.getAd());
	std::cout << peach.getName() << " : Woops, he looks angry." << std::endl;
	std::cout << std::endl;

	thor.beRepaired(9989);
	std::cout << "Thor enrages and gains infinite amount of ad. Current ad : NaN" << std::endl;
	thor.setAd(9999);
	thor.attack(peach.getName());
	peach.takeDamage((unsigned int)thor.getAd());
	std::cout << std::endl;

	peach.beRepaired(1);
	peach.beRepaired(1);
	peach.attack(thor.getName());
	std::cout << std::endl;

	std::cout << "After his powerful attack, Thor's energy slowly drops down and he feels ill";
	std::cout << std::endl;
	thor.setEnergy(0);
	thor.beRepaired(1);
	thor.attack(peach.getName());
	std::cout << "Thor : time to go hammer fishing." << std::endl;

	std::cout << std::endl << "Ending simulation..." << std::endl;
	return (0);
}
