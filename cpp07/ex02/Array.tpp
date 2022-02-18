/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:41:49 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/18 12:05:26 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elem(new T[0]), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elem(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const& a)
{
	size_t	i;

	_size = a._size;
	elem = new T[_size];
	for (i = 0; i < _size; i++)
		elem[i] = a[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] elem;
	std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const& a)
{
	size_t	i;

	if (this != &a)
	{
		delete [] elem;
		_size = a._size;
		elem = new T[_size];
		for (i = 0; i < _size; i++)
			elem[i] = a[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int n) const
{
	if (n < 0 || n >= _size)
		throw (std::exception());
	return (elem[n]);
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
std::ostream	&operator<<(std::ostream &os, Array<T> &a)
{
	size_t	i;
	size_t	len;

	len = a.size();
	os << "array size = " << len << std::endl;
	for (i = 0; i < len; i++)
		os << "array[" << i << "] = " << a[i] << std::endl;
	return (os);
}
