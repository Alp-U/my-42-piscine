/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:18:04 by autku             #+#    #+#             */
/*   Updated: 2024/01/29 21:04:52 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (result);
}
/*
int	main(void)
{
	int	nbr;
	int	pwr;

	nbr = 5;
	pwr = 0;
	printf("%d", ft_recursive_power(nbr, pwr));
}*/
