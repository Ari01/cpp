/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:02:00 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/22 13:39:10 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : std::stack<T, Container>() {}
		MutantStack(MutantStack const& m) { *this = m; }
		virtual ~MutantStack() {}

		MutantStack	&operator=(MutantStack const& m)
		{
			std::stack<T, Container>::operator=(m);
			return (*this);
		}

		// iterator
		typedef typename Container::iterator	iterator;
		iterator								begin()
		{
			return (std::stack<T, Container>::c.begin());
		}
		iterator								end()
		{
			return (std::stack<T, Container>::c.end());
		}
};

#endif
