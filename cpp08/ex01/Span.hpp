/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:30:34 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/22 11:01:58 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>	span;
		unsigned int		size;

	public:
		Span(unsigned int N);
		Span(Span const& s);
		~Span();

		Span				&operator=(Span const& s);
		void				addNumber(int n);
		int					shortestSpan();
		int					longestSpan();
		std::vector<int>	getSpan() const;
		unsigned int		getSize() const;

		// template
		template <typename T>
		void				insert(T begin, T end);

		// exception
		class arrayFullException : std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class noShortestException : std::exception
		{
			public:
				virtual char const *what() const throw();
		};
		class noLongestException : std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, Span const &s);

#include "Span.tpp"

#endif
