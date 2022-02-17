/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:08:15 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 15:31:02 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	switch(rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast <A*> (p))
		std::cout << "A" << std::endl;
	else if ((dynamic_cast <B*> (p)))
		std::cout << "B" << std::endl;
	else if ((dynamic_cast <C*> (p)))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

void	identify(Base& p)
{
	Base	b;
	try
	{
		b = dynamic_cast <A&> (p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception e)
	{
		try
		{
			b = dynamic_cast <B&> (p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception e)
		{
			try
			{
				b = dynamic_cast <C&> (p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception e)
			{
				std::cout << "unknown type" << std::endl;
			}
		}
	}
}

int	main()
{
	Base	*b;

	srand(time(0));
	b = generate();
	identify(b);
	identify(*b);
	
	delete(b);
	return (0);
}
