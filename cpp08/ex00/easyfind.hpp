/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:33:35 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/21 14:41:04 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
bool	easyfind(T container, int const &i)
{
	typename T::iterator	ite;
	typename T::iterator	end;

	end = container.end();
	ite = std::find(container.begin(), end, i);
	if (ite != end)
		return (true);
	return (false);
}

#endif
