/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:44:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/15 18:36:55 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <float.h>

#define CHAR 	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3
#define STRING	4

void	convert_c(std::string s)
{
	char	c;

	c = s[0];
	std::cout << "char: ";
	if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int: " << static_cast <int> (c) << std::endl;
	std::cout << "float: " << static_cast <float> (c) << std::endl;
	std::cout << "double: " << static_cast <double> (c) << std::endl;
}

void	convert_i(std::string s)
{
	int		i;
	long	literal;
	char	*endptr;

	std::cout << "int: ";
	literal = strtol(s.c_str(), &endptr, 10);
	if (endptr[0])
		std::cout << "impossible" << std::endl;
	else if (literal > INT_MAX)
		std::cout << "overflow" << std::endl;
	else if (literal < INT_MIN)
		std::cout << "underflow" << std::endl;
	else
	{
		i = static_cast <int>(literal);
		std::cout << i << std::endl;
		std::cout << "char: " << static_cast <char>(i) << std::endl;
		std::cout << "float: " << static_cast <float> (i) << std::endl;
		std::cout << "double: " << static_cast <double> (i) << std::endl;
	}
}

void	convert_f(std::string s)
{
	(void)s;
	std::cout << "float: ";
	std::cout << std::endl;
}

void	convert_d(std::string s)
{
	(void)s;
	std::cout << "double: ";
	std::cout << std::endl;
}

void	convert(std::string s)
{
	size_t	len;

	len = s.size();
	if (!len || (len == 1 && !isdigit(s[0])))
		convert_c(s);
	else if (s.find('.') != std::string::npos)
	{
		if (s[len - 1] == 'f')
			convert_f(s);
		else
			convert_d(s);
	}
	else
		convert_i(s);
}

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
