/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:08:40 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 15:02:01 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*f[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			(this->*f[i++])();
		case 1 :
			(this->*f[i++])();
		case 2 :
			(this->*f[i++])();
		case 3 :
			(this->*f[i])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;	
	}
}
