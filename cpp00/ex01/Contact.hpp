/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:07:20 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/13 04:31:04 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define MAX_ATTR 5

void	print_spaces(int i);

class Contact
{
	private:
		std::string	attr[MAX_ATTR];
		void		print_attr(int i);
	public:
		Contact();
		~Contact();
		void	set_attr(int i, std::string value);
		void	print_names();
		void	print_attr();
};

#endif
