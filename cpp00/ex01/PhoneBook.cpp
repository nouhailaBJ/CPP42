/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:04:49 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/09/22 19:38:04 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0)
{
	std::cout << "Start PhoneBook" << std::endl;
	return ;
}
PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook End" << std::endl;
	return ;
}

bool	is_number(std::string str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (std::isdigit(str[i]) == 0)
				return (false);
	}
	return (true);
}

void PhoneBook::display_contact(void)
{
	std::string str;
	int nb;
	std::cout << "Enter the index of the Contact to show more Information: ";
	getline(std::cin, str);
	nb = 0;
	if (!str.empty() && is_number(str))
	{
		nb = std::stoi(str);
		if (nb > 0 && nb < 8 && nb <= this->_count)
		{
			this->_contacts[nb - 1].more_info(); 
		}
		else
			std::cout << "The entry not correct !" << std::endl;
	}

}
void PhoneBook::search(void)
{
	int i;
	i = 0;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while (i < this->_count)
	{
		this->_contacts[i].get_info();
		i++;
	}
	this->display_contact();
}

void PhoneBook::add(void)
{
	std::cout << "-------- ADD A CONTACT -------- " << std::endl;
	if (this->_count < 8)
	{
		this->_contacts[this->_count].add_contact(this->_count);
		this->_count++;
	}
	else
	{
		this->_contacts[0].add_contact(0);
		this->_count = 1;
	}
}
int	main(void)
{
	std::string cmd;
	PhoneBook   phone_book;

	int i = 0;
	int stop = 1;
	while (stop)
	{
		std::cout << "Chose your Command(ADD, SEARCH, EXIT): ";
		getline(std::cin, cmd);
		if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		else if (cmd == "ADD")
			phone_book.add();
		else if (cmd == "SEARCH")
			phone_book.search();
		else if (cmd.size() == 0)
			stop = 0;
	}
	return (0);
}
