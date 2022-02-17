/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:39:20 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 14:02:29 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

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

void	print_bad_string();
void	print_special_value(std::string s);
bool	printable_c(double d);
bool	printable_i(double d);
bool	printable_f(double d);
void	convert(std::string s);

#endif
