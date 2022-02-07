/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:48:24 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 02:05:55 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& a);
		virtual ~WrongAnimal();

		std::string		getType() const;
		WrongAnimal		&operator=(WrongAnimal const& a);
		void			makeSound() const;
};

# endif
