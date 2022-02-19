/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:58:42 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/19 11:29:01 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include "easyfind.hpp"

int	main()
{
	std::list<int>	l1;
	size_t			i;

	std::cout << "LIST (0-9)" << std::endl;
	for (i = 0; i < 10; i++)
		l1.push_back(i);
	std::cout << "find 0 ? " << easyfind(l1, 0) << std::endl;
	std::cout << "find 9 ? " << easyfind(l1, 9) << std::endl;
	std::cout << "find -1 ? " << easyfind(l1, -1) << std::endl;
	std::cout << "find 10 ? " << easyfind(l1, 10) << std::endl;

	std::cout << std::endl << "VECTOR (0-9)" << std::endl;
	std::vector<int>	l2;
	for (i = 0; i < 10; i++)
		l2.push_back(i);
	std::cout << "find 0 ? " << easyfind(l2, 0) << std::endl;
	std::cout << "find 9 ? " << easyfind(l2, 9) << std::endl;
	std::cout << "find -1 ? " << easyfind(l2, -1) << std::endl;
	std::cout << "find 10 ? " << easyfind(l2, 10) << std::endl;

}
