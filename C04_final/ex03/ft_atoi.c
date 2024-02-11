/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:58:40 by autku             #+#    #+#             */
/*   Updated: 2024/01/23 16:59:17 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 1;
	result = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str [i] == 32)
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] != '\0' && 48 <= str[i] && str[i] <= 57 && str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * count);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
		printf("%d", ft_atoi(av[1]));
	return (0);
}*/
