/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:27:22 by autku             #+#    #+#             */
/*   Updated: 2024/01/30 17:48:31 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	i = 0;
	nbr = nb;
	if (nbr == 0)
		return (0);
	if (nbr == 1)
		return (1);
	if (nbr > 1)
	{
		while (i + i <= nbr)
		{
			if (i * i == nbr)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
}*/
