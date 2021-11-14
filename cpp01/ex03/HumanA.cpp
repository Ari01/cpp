/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:42:46 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 10:22:00 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon) :
	name(_name), weapon(_weapon)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name + " attacks with his " + weapon.getType() << std::endl;
}
