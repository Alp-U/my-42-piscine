/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:53:39 by autku             #+#    #+#             */
/*   Updated: 2024/01/30 22:26:29 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *)malloc(size * sizeof(int));
		if (*range == NULL)
			return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	if (ac != 3)
		return (1);
	i = 0;
	min = atoi(av[1]);
	max = atoi(av[2]);
	size = ft_ultimate_range(&tab, min, max);
	printf("Size: %d\n", size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
}*/
