/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:50:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 23:00:21 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	dt("dt");

	std::cout << std::endl;
	dt.print();
	std::cout << std::endl;
	dt.attack(dt.getName());
	dt.takeDamage(dt.getAd());
	dt.beRepaired(1);
	
	std::cout << std::endl << "setting dt hp to 0" << std::endl;
	dt.setHp(0);
	dt.attack(dt.getName());
	dt.beRepaired(1);

	std::cout << std::endl << "restauring dt hp and setting dt energy to 0" << std::endl;
	dt.setHp(100);
	dt.setEnergy(0);
	dt.attack(dt.getName());
	dt.beRepaired(1);

	std::cout << std::endl;
	dt.highFivesGuys();
	dt.guardGate();
	dt.whoAmI();
	std::cout << std::endl;

	return (0);
}
