/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:35:57 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/22 11:23:40 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include "Span.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(Span const& s)
{
	*this = s;
}

Span::~Span(){}

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

	//std::cout << "span.size = " << span.size() << " , size = " << size << std::endl;
	if (span.size() == size)
		throw arrayFullException();
	else
		span.push_back(n);
}

int	Span::shortestSpan()
{
	int							shortest;
	int							tmp;
	std::vector<int>::iterator	begin;
	std::vector<int>::iterator	end;

	shortest = -1;
	if (span.size() <= 1)
		throw (noShortestException());
	begin = span.begin();
	end = span.end();
	std::sort(begin, end);
	shortest = *(begin + 1) - *begin;
	begin++;
	while (begin != end - 1)
	{
		tmp = *(begin + 1) - *begin;
		if (tmp < shortest)
			shortest = tmp;
		begin++;
	}
	return (shortest);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator	begin;
	std::vector<int>::iterator	end;

	if (span.size() <= 1)
		throw (noLongestException());
	begin = span.begin();
	end = span.end();
	std::sort(begin, end);
	return (*(end - 1) - *begin);
}

std::vector<int>	Span::getSpan() const
{
	return (span);
}


unsigned int Span::getSize() const
{
	return (size);
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
