/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 07:57:35 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 08:29:00 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name) {
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
