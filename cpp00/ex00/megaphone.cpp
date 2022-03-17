/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:25:51 by seyun             #+#    #+#             */
/*   Updated: 2022/03/16 21:28:23 by seyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEAREABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 0;
		while (av[++i])
		{
			int j = -1;
			while (av[i][++j])
				std::cout << static_cast<char>(std::toupper(av[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
