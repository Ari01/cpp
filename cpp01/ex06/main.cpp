/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:06:32 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 16:27:12 by dchheang         ###   ########.fr       */
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

void	complain()

int	main(int ac, char **av)
{
	Karen	karen;
	int		lvl;

	lvl = get_lvl(av[1]);
	switch(lvl)
	{
		case 0:
			karen.complain()
	}
	return (0);
}
