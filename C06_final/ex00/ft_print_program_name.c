/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:05:34 by autku             #+#    #+#             */
/*   Updated: 2024/01/28 22:08:27 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print_program_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 1)
		write(1, "Wrong input", 11);
	else
	{
		ft_print_program_name(av[0]);
		write(1, "\n", 1);
	}
	return (0);
}
