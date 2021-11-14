/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:20:39 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/13 04:33:24 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	wait_cmd()
{
	std::string	ret;

	std::cout << "Enter command : ";
	std::cin >> ret;
	return (ret);
}

int	main()
{
	Phonebook	phonebook;
	std::string	cmd;

	cmd = wait_cmd();
	while (cmd.compare("EXIT"))
	{
		if (!cmd.compare("ADD"))
			phonebook.add_contact();
		else if (!cmd.compare("SEARCH"))
			phonebook.search();
		cmd = wait_cmd();
	}
	return (0);
}
