/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitel.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:56:33 by gaetan            #+#    #+#             */
/*   Updated: 2020/10/19 15:41:46 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassName.hpp"

int		check_stoi(std::string check)
{
	try{
		return std::stoi(check);
	}
	catch (...){
		return (9);
	}
	return (0);
}
int		search_contact(int count, contact minitel[], int check)
{
	int		i;
	std::string param;
	
	if (check == 0)
	{
		for (int i = 0 ; i < count ; i++)
			std::cout << "         " << i << "|" << minitel[i].printFirstName() << "|" << minitel[i].printLastName() << "|" << minitel[i].printNickname() << std::endl;
	}
	std::cout << "Which conatct do you want to see ? Enter a valid index." << std::endl;
	std::cin >> param;
	if (std::cin.eof())
		return(-1);
	i = check_stoi(param);
	if (i < count)
	{
		std::cout << minitel[i].affFirstName() << std::endl;
		std::cout << minitel[i].affLastName() << std::endl;
		std::cout << minitel[i].affNickname() << std::endl;
		std::cout << minitel[i].affLogin() << std::endl;
		std::cout << minitel[i].affPostalAddress() << std::endl;
		std::cout << minitel[i].affEmailAddress() << std::endl;
		std::cout << minitel[i].affPhoneNumber() << std::endl;
		std::cout << minitel[i].affBirthdayDate() << std::endl;
		std::cout << minitel[i].affFavoriteMeal() << std::endl;
		std::cout << minitel[i].affUnderwearColor() << std::endl;
		std::cout << minitel[i].affDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "Error, there is no such index" << std::endl;
		search_contact(count, minitel, 1);
	}
	return (0);
}

contact	add_contact(void)
{
	contact 	new_contact;
	
	std::string a;
	
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	std::cout << "What's your first name?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setFirstName(a);
	std::cout << "What's your last name?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setLastName(a);
	std::cout << "What's your nickname?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setNickname(a);
	std::cout << "What's your login?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setLogin(a);
	std::cout << "What's your postal address?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setPostalAddrerss(a);
	std::cout << "What's your email address?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setEmailAddrerss(a);
	std::cout << "What's your phone number?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setPhoneNumber(a);
	std::cout << "What's your birthday date?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setBirthdayDate(a);
	std::cout << "What's your favorite meal?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setFavoriteMeal(a);
	std::cout << "What's your underwear color?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setUnderwearColor(a);
	std::cout << "What's your darkest secret?\n" << std::endl;
	std::getline(std::cin, a);
	if (std::cin.eof())
		exit(0);
	new_contact.setDarkestSecret(a);
	return (new_contact);
}


int		main()
{
	contact	minitel[8];
	int	count;
	std::string		a;
	
	count = 0;
	std::cout << "Usage:\n-Type ADD to add a new contact.\n-Type SEARCH to search for a contact.\n-Type EXIT to exit.\n-Type USAGE if you need help." << std::endl;
	while (1)
	{
		std::cin >> a;
		if (a == "ADD" && count < 8)
		{
			minitel[count] = add_contact();
			count ++;
		}
		else if (a == "ADD" && count == 8)
			std::cout << "Sorry, your repertory is full.\n" << std::endl;
		else if (a == "SEARCH")
		{
			if (count > 0)
			{
				if (search_contact(count, minitel, 0) == -1)
					exit(0);
			}
			else
				std::cout << "Sorry, you have no contact at the moment." << std::endl;
		}
		else if (a == "EXIT")
			break ;
		else if (a == "USAGE")
			std::cout << "Usage:\n-Type ADD to add a new contact.\n-Type SEARCH to search for a contact.\n-Type EXIT to exit.\n-Type USAGE if you need help." << std::endl;
		else if (std::cin.eof())
			break;
		else
		{
			std::cout << "Error, unknown command.\n" << std::endl;
		}
	}
	return(0);
}