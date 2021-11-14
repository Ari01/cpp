/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:42:19 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/14 12:07:58 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2)
{
	size_t	i;

	i = line.find(s1);
	if (i != line.npos)
	{
		line.erase(i, s1.size());
		line.insert(i, s2);
	}
	return (line);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "error: invalid arguments";
	else
	{
		std::ifstream	ifs(av[1]);
		std::ofstream	ofs(std::string(av[1]) + ".replace");
		std::string		line;
		std::string		s1 = av[2];
		std::string		s2 = av[3];

		if (!ifs.is_open())
			std::cout << "error: could not open file " << av[1] << std::endl;
		else if (!ofs.is_open())
			std::cout << "error: could not open file " << av[2] << std::endl;
		else
		{
			std::getline(ifs, line);
			while (ifs)
			{
				line = replace(line, s1, s2);
				ofs << line;
				if (!ifs.eof())
					ofs << std::endl;
				std::getline(ifs, line);
			}
		}
	}
	return (0);
}
