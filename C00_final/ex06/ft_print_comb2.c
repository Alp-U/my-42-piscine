/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:43:34 by autku             #+#    #+#             */
/*   Updated: 2024/01/31 23:32:32 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	write(1, " ", 1);
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_write_comb(n1, n2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
