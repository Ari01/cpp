/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:30:34 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/19 12:19:08 by dchheang         ###   ########.fr       */
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
		const unsigned int	size;

	public:
		Span(unsigned int N);
		Span(Span const& s);
		~Span();

		Span	&operator=(Span const& s);
		void	addNumber();
		int		shortestSpan() const;
		int		longestSpan() const;

		class arrayFullException : std::exception
		{
			public:
				virtual char const *what() const throw();
		}
		class noShortestException : std::exception
		{
			public:
				virtual char const *what() const throw();
		}
		class noLongestException : std::exception
		{
			public:
				virtual char const *what() const throw();
		}
};

#endif
