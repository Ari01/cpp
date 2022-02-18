/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:29:57 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/18 12:49:01 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T		*elem;
		size_t	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const& a);
		~Array();

		Array	&operator=(Array const& a);
		T		&operator[](unsigned int n) const;
		size_t	size(void) const;
};

template <typename T>
std::ostream	&operator<<(std::ostream& os, Array <T> const& a);

#include "Array.tpp"

#endif
