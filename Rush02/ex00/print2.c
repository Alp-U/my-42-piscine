/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:57:45 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 22:02:52 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "str_funcs.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_digit(char *num, t_number **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		if (ft_strcmp(array[i]->key, num) == 0)
			ft_putstr(array[i]->value);
		i++;
	}
}
