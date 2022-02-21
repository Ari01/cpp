/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:35:57 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/21 18:04:23 by dchheang         ###   ########.fr       */
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

void	Span::addNumber(int n)
{
	std::vector<int>::iterator	ite;

	if (span.size() == size)
		throw arrayFullException();
	else
	{
		for (ite = span.begin(); ite != span.end() && n > *ite; ite++) ;
		span.insert(ite, n);
	}
}

int	Span::shortestSpan()
{
	int							shortest;
	int							tmp;
	std::vector<int>::iterator	ite;

	if (span.size() <= 1)
		throw (noShortestException());
	ite = span.begin();
	shortest = *(ite + 1) - *ite;
	while (ite != span.end() - 1)
	{
		tmp = *(ite + 1) - *ite;
		if (tmp < shortest)
			shortest = tmp;
		ite++;
	}
	return (shortest);
}

int	Span::longestSpan()
{
	if (span.size() <= 1)
		throw (noLongestException());
	return (*(span.end() - 1) - *span.begin());
}

std::vector<int>	Span::getSpan() const
{
	return (span);
}

std::ostream&	operator<<(std::ostream& os, Span const &s)
{
	std::vector<int>			vtmp;
	std::vector<int>::iterator	ite;

	vtmp = s.getSpan();
	for (ite = vtmp.begin(); ite != vtmp.end(); ite++)
		os << *ite << std::endl;
	return (os);
}

char const	*Span::arrayFullException::what() const throw()
{
	return ("array full exception\n");
}

char const	*Span::noShortestException::what() const throw()
{
	return ("cannot find shortest span exception\n");
}

char const	*Span::noLongestException::what() const throw()
{
	return ("cannot find longest span exception\n");
}
