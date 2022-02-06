/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:57:32 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 22:04:59 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

# define MAX_CONTACT 8

class PhoneBook
{
	private:
		Contact contact[MAX_CONTACT];
		int		n_contact;
		void	set_contact(int i, std::string s);
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	print_entries();
		int		check_index(std::string s);
		void	search();
};

#endif
