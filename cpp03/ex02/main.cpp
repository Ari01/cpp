/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:50:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 19:52:11 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap zeus("Zeus");
	ScavTrap goku = ScavTrap("Goku");

	std::cout << std::endl << "CLAPTRAP WAR EPISODE 2 - EDITION SCAVTRAP" << std::endl;
	std::cout << "Preparing Combat simulation..." << std::endl;
	std::cout << "Opponents found." << std::endl << std::endl;
	std::cout << "Opponent 1 : ";
	zeus.print();
	std::cout << std::endl << "Opponent 2 : ";
	goku.print();
	std::cout << std::endl << "Battle start !" << std::endl << std::endl;

	std::cout << "Zeus throws a series of punches to Goku" << std::endl;
	while (goku.getHp() > 0)
	{
		zeus.attack(goku.getName());
		goku.takeDamage((unsigned int)zeus.getAd());
	}
	std::cout << std::endl;

	goku.beRepaired(1);
	goku.attack(zeus.getName());
	std::cout << goku.getName();
	std::cout << " : Damn he's too strong, I need to recover my strength.";
	std::cout << " Vegeta ! Buy me some time, will you ?" << std::endl;
	std::cout << std::endl;

	ScavTrap vegeta("Vegeta");
	std::cout << "Vegeta comes in the battle but just woke up from a napp so he has 0 energy" << std::endl;
	vegeta.setEnergy(0);
	vegeta.attack(zeus.getName());
	vegeta.beRepaired(10);
	vegeta.guardGate();
	std::cout << std::endl;

	std::cout << "While Vegeta fights zeus, Goku takes a senzu and his attack damage is multiplied by 5" << std::endl;
	goku.setHp(1);
	goku.setAd(goku.getAd() * 5);
	goku.beRepaired(99);
	goku.attack(zeus.getName());
	zeus.takeDamage(goku.getAd());

	std::cout << std::endl << "Ending simulation..." << std::endl;
	return (0);
}
