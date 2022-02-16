/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:44:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/16 13:53:16 by dchheang         ###   ########.fr       */
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

void	print_c(double d, char c)
{
	std::cout << "char: ";
	if (d < 0 || d > 255)
		std::cout << "overflow";
	else if (c < 32 || c > 126)
		std::cout << "Non displayable";
	else
		std::cout << c;
	std::cout << std::endl;
}

void	print_i(double d, int i)
{
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "overflow";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	print_f(double d, float f)
{
	std::cout << "float: ";
	if (d < FLT_MIN || d > FLT_MAX)
		std::cout << "overflow";
	else
		std::cout << f + "f";
	std::cout << std::endl;
}

void	print_d(double d, double castedDouble)
{
	std::cout << "double: ";
	if ((d == HUGE_VAL || d == -HUGE_VAL) && errno == ERANGE)
		std::cout << "overflow";
	else if (!d && errno == ERANGE)
		std::cout << "underflow";
	else
		std::cout << castedDouble << std::endl;
}

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
	double	d;
	char	*endptr;

	d = strtod(s.c_str(), &endptr);
	if (endptr[0])
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (d > INT_MAX || d < INT_MIN)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		i = static_cast <int> (literal);
		print_c(d, static_cast <char> (i));
		print_f(d, static_cast <float> (i));
		print_d(d, static_cast <double> (i));
	}
}

void	convert_f(std::string s)
{
	float	f;
	float	literal;
	char	*endptr;

	literal = strtof(s.c_str(), &endptr);
	
}

void	convert_d(std::string s)
{
	(void)s;
	std::cout << "double: ";
	std::cout << std::endl;
}

void	convert(std::string s)

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
