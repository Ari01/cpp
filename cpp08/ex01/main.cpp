/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:14:09 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/19 12:17:59 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	print(int n)
{
	std::cout << n << std::endl;
}

int	main()
{
	Span	sp(10);

	sp.addNumber(0);
	sp.addNumber(10);
	sp.addNumber(5);
	std::for_each(sp.span.begin(), sp.span.end(), print(*sp));
	return (0);
}
