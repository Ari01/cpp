/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:11:09 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 08:40:50 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie main_stack =	Zombie("main stack");
	Zombie *heap = newZombie("heap");

	randomChump("randomChump stack");
	main_stack.announce();
	heap->announce();
	delete(heap);
	return (0);
}
