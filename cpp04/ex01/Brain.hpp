/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:24:25 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 11:07:53 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstdlib>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(Brain const& b);
		~Brain();

		std::string	getIdea(int i);
		Brain		&operator=(Brain const& b);
		void		print();
};

#endif
