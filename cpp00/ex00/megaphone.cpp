/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:50:29 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/07/24 17:50:32 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		   str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			argv[i] = ft_uppercase(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}