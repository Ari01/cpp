/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:06:32 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/15 04:33:41 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	get_lvl(std::string lvl)
{
	if (lvl == "DEBUG")
		return (1);
	if (lvl == "INFO")
		return (2);
	if (lvl == "WARNING")
		return (3);
	if (lvl == "ERROR")
		return (4);
	return (0);
}

void	filter(Karen & karen, int lvl)
{
	switch(lvl)
	{
		case 1:
			karen.complain("debug");
			karen.complain("info");
			karen.complain("warning");
			karen.complain("error");
			break;
		case 2:
			karen.complain("info");
			karen.complain("warning");
			karen.complain("error");
			break;
		case 3:
			karen.complain("warning");
			karen.complain("error");
			break;
		case 4:
			karen.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
			break;
	}
}

int	main(int ac, char **av)
{
	Karen	karen;
	int		lvl;

	if (ac != 2)
	{
		std::cout << "error: invalid arguments" << std::endl;
		return (0);
	}
	lvl = get_lvl(av[1]);
	filter(karen, lvl);
	return (0);
}
