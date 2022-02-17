/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:44:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 13:41:04 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int ac, char **av)
{
	std::string s;

	if (ac != 2)
		std::cout << "error number arguments" << std::endl;
	else
	{
		s = av[1];
		convert(s);	
	}
	return (0);
}
