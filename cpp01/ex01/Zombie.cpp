/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 07:57:35 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 09:04:48 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

}

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

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
