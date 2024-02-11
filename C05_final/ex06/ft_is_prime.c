/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:44:43 by autku             #+#    #+#             */
/*   Updated: 2024/01/28 17:37:49 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(97));
	printf("%d", ft_is_prime(53));
	printf("%d", ft_is_prime(43));
	printf("%d", ft_is_prime(19));
	printf("%d", ft_is_prime(8));
	printf("%d", ft_is_prime(2147483647));
}*/
