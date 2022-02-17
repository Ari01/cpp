/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:15:25 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 15:03:11 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	s_data
{
	int				value;
	struct s_data	*next;
}	Data;

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}

int	main()
{
	Data	d;
	Data	*dd;

	d.value = 2147483647;
	d.next = NULL;
	std::cout << "adress of d : " << &d << std::endl;
	std::cout << "d.value = " << d.value << std::endl;
	std::cout << "d.next = " << d.next << std::endl;

	std::cout << std::endl << "DESERIALIZE" << std::endl;
	dd = deserialize(serialize(&d));
	std::cout << "adress of d : " << &d << std::endl;
	std::cout << "d.value = " << d.value << std::endl;
	std::cout << "d.next = " << d.next << std::endl;
	std::cout << "adress of dd : " << dd << std::endl;
	std::cout << "d == dd ? : " << (&d == dd) << std::endl;
	std::cout << "dd.value = " << dd->value << std::endl;
	std::cout << "dd.next = " << dd->next << std::endl;

	std::cout << std::endl << "CHANGING VALUE OF DD" << std::endl;
	dd->value = -2147483648;
	dd->next = &d;
	std::cout << "d.value = " << d.value << std::endl;
	std::cout << "d.next = " << d.next << std::endl;
	return (0);
}
