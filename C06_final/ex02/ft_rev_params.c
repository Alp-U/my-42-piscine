/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:26:15 by autku             #+#    #+#             */
/*   Updated: 2024/01/28 22:27:31 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac == 1)
		return (0);
	else
	{
		while (0 < i)
		{
			ft_print_params(av[i]);
			i--;
		}
	}
	return (0);
}
