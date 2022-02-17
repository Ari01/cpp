/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:52:09 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 18:26:34 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *p, size_t len, void (*f)(T))
{
	size_t	i;

	for (i = 0; i < len; i++)
		f(p[i]);
}

// test funcs
template <typename T>
void	print_tab(T const &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	swap(T & a, T & b)
{
	
}

#endif
