/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassName.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 17:03:34 by gaetan            #+#    #+#             */
/*   Updated: 2020/10/15 13:25:54 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>

class		contact
{
	public :
	
	contact();
	void	setLastName(std::string a);
	void	setFirstName(std::string a);
	void	setNickname(std::string a);
	void	setLogin(std::string a);
	void	setBirthdayDate(std::string a);
	void	setEmailAddrerss(std::string a);
	void	setPostalAddrerss(std::string a);
	void	setFavoriteMeal(std::string a);
	void	setDarkestSecret(std::string a);
	void	setUnderwearColor(std::string a);
	void	setPhoneNumber(std::string a);


	std::string printLastName(void);
	std::string printFirstName(void);
	std::string printNickname(void);
	
	
	std::string affFirstName(void);
	std::string affLastName(void);
	std::string affNickname(void);
	std::string affLogin(void);
	std::string affPhoneNumber(void);
	std::string affPostalAddress(void);
	std::string affEmailAddress(void);
	std::string affFavoriteMeal(void);
	std::string affDarkestSecret(void);
	std::string affUnderwearColor(void);
	std::string affBirthdayDate(void);
	
	private :
	
	std::string		m_first_name, m_last_name, m_nickname, m_login, m_postal_address, m_email_address, m_phone_number,
	m_birthday_date, m_favorite_meal, m_underwear_color, m_darkest_secret;
};