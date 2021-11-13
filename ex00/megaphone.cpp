/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:24:57 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/13 01:48:58 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_islowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*to_upcase(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_islowcase(s[i]))
			s[i] -= 32;
		i++;
	}
	return (s);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[i])
	{
		std::cout << to_upcase(av[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
