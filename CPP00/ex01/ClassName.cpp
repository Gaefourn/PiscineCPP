/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassName.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:38:41 by gaetan            #+#    #+#             */
/*   Updated: 2020/10/15 13:43:52 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassName.hpp"


contact::contact()
{
		std::string m_first_name, m_last_name, m_nickname, m_phone_number, m_birthday_date,
			m_darkest_secret, m_email_address, m_favorite_meal, m_underwear_color, m_postal_address, m_login;
}

std::string	contact::printFirstName(void)
{
	std::string ret;
	int				i;
	const char *a = this->m_first_name.c_str();
	
	i = strlen(a);
	ret = this->m_first_name;
	if (i > 10)
	{
		ret.replace(9, 1, ".");
		return(ret.substr(0 ,10));
	}
	ret.insert(0, 10-i, ' ');
	return(ret);
}

std::string	contact::printLastName(void)
{
	std::string ret;
	int				i;
	const char *a = this->m_last_name.c_str();
	
	i = strlen(a);
	ret = this->m_last_name;
	if (i > 10)
	{
		ret.replace(9, 1, ".");
		return(ret.substr(0 ,10));
	}
	ret.insert(0, 10-i, ' ');
	return(ret);
}
std::string	contact::printNickname(void)
{
	std::string ret;
	int				i;
	const char *a = this->m_nickname.c_str();
	
	i = strlen(a);
	ret = this->m_nickname;
	if (i > 10)
	{
		ret.replace(9, 1, ".");
		return(ret.substr(0 ,10));
	}
	ret.insert(0, 10-i, ' ');
	return(ret);
}

void	contact::setLastName(std::string a)
{
	this->m_last_name = a;
}

void	contact::setFirstName(std::string a)
{
	this->m_first_name = a;
}

void	contact::setNickname(std::string a)
{
	this->m_nickname = a;
}

void	contact::setPhoneNumber(std::string a)
{
	this->m_phone_number = a;
}

void	contact::setLogin(std::string a)
{
	this->m_login = a;
}

void	contact::setEmailAddrerss(std::string a)
{
	this->m_email_address = a;
}

void	contact::setPostalAddrerss(std::string a)
{
	this->m_postal_address = a;
}

void	contact::setDarkestSecret(std::string a)
{
	this->m_darkest_secret = a;
}

void	contact::setUnderwearColor(std::string a)
{
	this->m_underwear_color = a;
}

void	contact::setFavoriteMeal(std::string a)
{
	this->m_favorite_meal = a;
}

void	contact::setBirthdayDate(std::string a)
{
	this->m_birthday_date = a;
}

std::string	contact::affFirstName(void)
{
	return(this->m_first_name);
}

std::string	contact::affLastName(void)
{
	return(this->m_last_name);
}

std::string	contact::affNickname(void)
{
	return(this->m_nickname);
}

std::string	contact::affPhoneNumber(void)
{
	return(this->m_phone_number);
}

std::string	contact::affBirthdayDate(void)
{
	return(this->m_birthday_date);
}

std::string	contact::affLogin(void)
{
	return(this->m_login);
}

std::string	contact::affEmailAddress(void)
{
	return(this->m_email_address);
}

std::string	contact::affPostalAddress(void)
{
	return(this->m_postal_address);
}

std::string	contact::affFavoriteMeal(void)
{
	return(this->m_favorite_meal);
}

std::string	contact::affDarkestSecret(void)
{
	return(this->m_darkest_secret);
}

std::string	contact::affUnderwearColor(void)
{
	return(this->m_underwear_color);
}
