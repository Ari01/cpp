/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:37:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 14:06:25 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	fractionnal_part(double d)
{
	return (std::abs(d - round(d)) != 0.0f);
}

bool	is_special_value(std::string s)
{
	return (s == "nan"|| s == "nanf" ||
			s == "inf" || s == "+inf" || s == "-inf" || s == "+inff" || s == "-inff");
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
	std::cout << "float: " << static_cast <float> (c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (c) << ".0" << std::endl;
}

void	convert_i(std::string s)
{
	int		i;
	double	d;
	char	*endptr;

	d = strtod(s.c_str(), &endptr);
	if (endptr[0])
		print_bad_string();
	else if (d > INT_MAX || d < INT_MIN)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		// std::cout << "float: " << static_cast <float> (d) << std::endl;
		// std::cout << "double: " << d << std::endl;"
	}
	else
	{
		i = static_cast <int> (d);
		if (printable_c(d))
			std::cout << static_cast <char> (i) << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast <float> (i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (i) << ".0" << std::endl;
	}
}

void	convert_f(std::string s)
{
	float		f;
	double		d;
	char		*endptr;
	std::string	fractional = "";

	d = strtod(s.c_str(), &endptr);
	if (round(d) < 999999 && !fractionnal_part(d))
		fractional = ".0";
	if (d > FLT_MAX || -d > FLT_MAX)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (!d && errno == ERANGE)
	{
		std::cout << "char: underflow" << std::endl;
		std::cout << "int: underflow" << std::endl;
		std::cout << "float: underflow" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (endptr[0] == 'f' && !endptr[1])
	{
		f = static_cast <float> (d);
		if (printable_c(d))
			std::cout << static_cast <char> (f) << std::endl;
		if (printable_i(d))
			std::cout << static_cast <int> (f) << std::endl;
		std::cout << "float: " << f << fractional << "f" << std::endl;
		std::cout << "double: " << static_cast <double> (f) << fractional << std::endl;
	}
	else
		print_bad_string();
}

void	convert_d(std::string s)
{
	double		d;
	char		*nptr;
	std::string	fractional;

	d = strtod(s.c_str(), &nptr);
	if (round(d) < 999999 && !fractionnal_part(d))
		fractional = ".0";
	if (nptr[0])
		print_bad_string();
	else if ((d == HUGE_VAL || d == -HUGE_VAL) && errno == ERANGE)
	{
		std::cout << "char: overflow" << std::endl;
		std::cout << "int: overflow" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: overflow" << std::endl;
	}
	else if (!d && errno == ERANGE)
	{
		std::cout << "char: underflow" << std::endl;
		std::cout << "int: underflow" << std::endl;
		std::cout << "float: underflow" << std::endl;
		std::cout << "double: underflow" << std::endl;
	}
	else
	{
		if (printable_c(d))
			std::cout << static_cast <char> (d) << std::endl;
		if (printable_i(d))
			std::cout << static_cast <int> (d) << std::endl;
		if (printable_f(d))
			std::cout << static_cast <float> (d) << fractional << "f" << std::endl;
		std::cout << "double: " << d << fractional << std::endl;
	}
}

void	convert(std::string s)
{
	size_t	len;

	len = s.size();
	if (is_special_value(s))
		print_special_value(s);
	else
	{
		if (!len || (len == 1 && !isdigit(s[0])))
			convert_c(s);
		else if (s.find('.') != std::string::npos || s.find('e') != std::string::npos)
		{
			if (s[len - 1] == 'f')
				convert_f(s);
			else
				convert_d(s);
		}
		else
			convert_i(s);
	}
}
