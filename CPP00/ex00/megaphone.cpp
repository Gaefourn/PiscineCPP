/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaetan <gaetan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 14:19:37 by gaetan            #+#    #+#             */
/*   Updated: 2020/10/12 15:59:25 by gaetan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char *av[])
{
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i += 1)
			for (int j = 0; j < (int)strlen(av[i]); j += 1)
				std::cout << (char)toupper(av[i][j]);
		std::cout << std::endl;
	}
	return (0);
}