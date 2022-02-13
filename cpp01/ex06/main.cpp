/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:06:32 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 15:02:59 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac != 2)
	{
		std::cout << "error: invalid arguments" << std::endl;
		return (0);
	}
	karen.complain(av[1]);
	return (0);
}
