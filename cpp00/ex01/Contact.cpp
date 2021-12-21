/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:58:55 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/09/23 19:00:18 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

std::string Contact::read_input(std::string str)
{
   std::string tmp;
   
   std::cout << str;
   getline(std::cin, tmp);
   return (tmp);
}
void Contact::print_column(std::string str, int _index)
{
	int i;
	int size;

	size = str.size();
	i = 0;
	while (size < 10)
	{
		std::cout << " ";
		size++;
	}
	while(str[i] && i < 10)
	{
		if (i == 9 && str.size() > 10)
			std::cout << ".";
		else
			std::cout << str[i];
		i++;
	}
}

void Contact::get_info(void)
{
	std::cout << "|";
	std::cout<<"         " << this->_index;
	std::cout << "|";
	this->print_column(this->_first_name, -1);
	std::cout << "|";
	this->print_column(this->_last_name, -1);
	std::cout << "|";
	this->print_column(this->_nickname, -1);
	std::cout << "|";
	std::cout << "\n";
}

void Contact::more_info(void)
{
	std::cout << "Index: " << _index << std::endl;
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "NickName: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}

void Contact::add_contact(int count)
{
	this->_index = count + 1;
	this->_first_name = this->read_input("First Name: ");
	this->_last_name = this->read_input("Last Name: ");
	this->_nickname = this->read_input("Nickname: ");
	this->_phone_number = this->read_input("Phone Number: ");
	this->_darkest_secret = this->read_input("Darkest Secret: ");
}


