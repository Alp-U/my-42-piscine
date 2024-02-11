/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:33:29 by autku             #+#    #+#             */
/*   Updated: 2024/01/29 17:34:01 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0)
		return (0);
	return (1);
}
/*
int main(int ac, char **av)
{
    int number;

    number = atoi(av[1]);
    if (ac != 2)
        return (0);
    else
        printf("%d", ft_recursive_factorial(number));
    return (0);
}*/
