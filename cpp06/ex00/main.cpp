/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:44:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/16 15:35:17 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>
#include <cerrno>

#define CHAR 	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3
#define STRING	4

void	print_bad_string()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

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
		std::cout << f << "f";
	std::cout << std::endl;
}

/*void	print_d(double d, double castedDouble)
{
	std::cout << "double: ";
	if ((d == HUGE_VAL || d == -HUGE_VAL) && errno == ERANGE)
		std::cout << "overflow";
	else if (!d && errno == ERANGE)
		std::cout << "underflow";
	else
		std::cout << castedDouble << std::endl;
}*/

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
		print_bad_string();
	else if (d == NAN || d > INT_MAX || d < INT_MIN)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		i = static_cast <int> (d);
		print_c(d, static_cast <char> (i));
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast <float> (i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (i) << ".0" << std::endl;
	}
}

void	convert_f(std::string s)
{
	float	f;
	double	d;
	char	*endptr;

	d = strtod(s.c_str(), &endptr);
	if (endptr[0] == 'f' && !endptr[1])
	{
		f = static_cast <float> (d);
		print_c(d, static_cast <char> (f));
		print_i(d, static_cast <int> (f));
		std::cout << f << "f" << std::endl;
		std::cout << static_cast <double> (f) << std::endl;
	}
	else
		print_bad_string();
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
