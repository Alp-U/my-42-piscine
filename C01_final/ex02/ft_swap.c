/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:24:19 by autku             #+#    #+#             */
/*   Updated: 2024/01/16 19:28:22 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main(void)
{
	int a = 4;
	int b = 2;
	
	ft_swap(&a, &b);
	a = a + '\0';
	b = b + '\0';

	write(1, &a, 1);
	write(1, &b, 1);
}*/
