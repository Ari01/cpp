/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:14:09 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/21 18:22:23 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

void	addTests(unsigned int n)
{
	unsigned int	i;
	Span			s(n);

	std::cout << "span of size " << n << std::endl;
	for (i = 0; i <= n; i++)
	{
		try
		{
			s.addNumber(i);
			std::cout << i << " added to span" << std::endl;
		}
		catch (Span::arrayFullException &e)
		{
			std::cout << e.what() << std::endl;
			break;
		}
	}
}

void	shortestSpanTest(Span s, std::string expected)
{
	std::cout << std::endl << "span of size " << s.getSpan().size() << std::endl;
	std::cout << "s = " << std::endl << s;
	std::cout << "expected shortest = " << expected << std::endl;

	try
	{
		std::cout << "shortestSpan = " << s.shortestSpan() << std::endl;
	}
	catch (Span::noShortestException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	longestSpanTest(Span s, std::string expected)
{
	std::cout << std::endl << "span of size " << s.getSpan().size() << std::endl;
	std::cout << "s = " << std::endl << s;
	std::cout << "expected longest = " << expected << std::endl;

	try
	{
		std::cout << "longestSpan = " << s.longestSpan() << std::endl;
	}
	catch (Span::noLongestException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	print(int n)
{
	std::cout << n << std::endl;
}

int	main()
{
	{
		std::cout << "********* MAIN PROVIDED **********" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span	sp(10);

		std::cout << std::endl << "*********BAD ADD TESTS*********" << std::endl;
		addTests(1);
		addTests(10);

		std::cout << std::endl << "***********OK ADD span of size 10*********" << std::endl;
		sp.addNumber(0);
		sp.addNumber(10);
		sp.addNumber(5);
		sp.addNumber(-1);
		std::cout << sp;

		std::cout << std::endl << "***********BAD SHORTEST LONGEST SPAN**********" << std::endl;
		Span s1(1);
		shortestSpanTest(s1, "exception");
		longestSpanTest(s1, "exception");
		s1.addNumber(0);
		shortestSpanTest(s1, "exception");
		longestSpanTest(s1, "exception");

		std::cout << std::endl << "***********GOOD SHORTEST LONGEST SPAN**********" << std::endl;
		Span s2(5);
		s2.addNumber(-5);
		s2.addNumber(10);
		s2.addNumber(26);
		s2.addNumber(100);

		shortestSpanTest(s2, "15");
		shortestSpanTest(sp, "1");
		longestSpanTest(s2, "105");
		longestSpanTest(sp, "11");

		std::cout << std::endl << "*****************INSERT RANGE*********************" << std::endl;
		Span s3(10000);
		for (int i = 0; i < 10000; i++)
			s3.addNumber(i);

		Span s4(10000);
		std::list<int> l;
		for (int i = 0; i < 10000; i++)
			l.push_back(i);
		s4.insert(l.begin(), l.end());
		std::cout << "shortest = " << s4.shortestSpan() << std::endl;
		std::cout << "longest = " << s4.longestSpan() << std::endl;

		Span s5(10000);
		s5.insert(s3.getSpan().begin(), s3.getSpan().begin() + 1);
		std::cout << "shortest = " << s4.shortestSpan() << std::endl;
		std::cout << "longest = " << s4.longestSpan() << std::endl;
	}
	return (0);
}
