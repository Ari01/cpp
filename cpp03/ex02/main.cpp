/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:50:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 20:53:01 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap t1("t1");
	FragTrap t2("t2");

	std::cout << std::endl;
	t1.print();
	t2.print();
	std::cout << std::endl;
	t1.attack(t2.getName());
	t2.takeDamage(t1.getAd());
	t2.beRepaired(1);

	std::cout << std::endl << "Setting t2 hp to 0" << std::endl;
	t2.setHp(0);
	t2.attack(t1.getName());
	t2.beRepaired(1);
	t2.setHp(100);

	std::cout << std::endl << "Setting t1 energy to 0" << std::endl;
	t1.setEnergy(0);
	t1.attack(t2.getName());
	t1.beRepaired(1);
	std::cout << std::endl;

	t1.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
