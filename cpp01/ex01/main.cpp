/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:11:09 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 09:07:35 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		i;
	int		N = 10;
	Zombie	*horde = zombieHorde(N, "zombie");

	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
