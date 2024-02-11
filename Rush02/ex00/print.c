/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:20:56 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:33:51 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "structs.h"
#include "str_funcs.h"
#include <stdlib.h>
#include "print2.h"

void	print_base(int key_length, t_number **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		if (array[i]->key_length == key_length)
			ft_putstr(array[i]->value);
		++i;
	}
}

void	print_rest_zero(char *num, t_number **array, int *i)
{
	char	*c;

	if (num[*i] != '0')
	{
		c = (char *)malloc(2);
		c[0] = num[*i];
		c[1] = '\0';
		print_digit(c, array);
		free(c);
		ft_putstr(" ");
	}
	if (num[*i] != '0')
	{
		print_digit("100", array);
		ft_putstr(" ");
	}
}

void	print_rest_one(char *num, t_number **array, int *i, int len)
{
	char	*c;

	c = (char *)malloc(2);
	c[0] = num[*i];
	c[1] = '\0';
	print_digit(c, array);
	free(c);
	if (*i != len -1)
	{
		ft_putstr(" ");
		print_base(len - *i, array);
		ft_putstr(" ");
	}
}

void	print_rest_two(char *num, t_number **array, int *i, int len)
{
	char	*c;

	c = (char *)malloc(3);
	c[0] = num[*i];
	if (num[*i] >= '2')
	{
		c[1] = '0';
		c[2] = '\0';
		print_digit(c, array);
		ft_putstr(" ");
	}
	else
	{
		c[1] = num[*i + 1];
		c[2] = '\0';
		print_digit(c, array);
		*i = *i + 1;
		if (*i != len - 1)
		{
			ft_putstr(" ");
			print_base(len - *i, array);
			ft_putstr(" ");
		}
	}
	free(c);
}

void	print(char *num, t_number **array)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(num);
	while (num[i] != '\0')
	{
		if ((len - i) % 3 == 0)
		{
			print_rest_zero(num, array, &i);
		}
		else if ((len - i) % 3 == 2)
		{
			print_rest_two(num, array, &i, len);
		}
		else
		{
			print_rest_one(num, array, &i, len);
		}
		i++;
	}
}
