/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:35:57 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/19 12:13:59 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(Span const& s)
{
	*this = s;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span	&Span::operator=(Span const& s)
{
	if (this != &s)
	{
		span = s.span;
		size = s.size;
	}
	return (*this);
}

void	addNumber(int n)
{
	vector<int>::iterator	ite;
	if (span.size() == N - 1)
		throw arrayFullException();
	for (ite = span.begin(); ite != span.end() && n > *ite; ite++) ;
	*ite = n;
}
