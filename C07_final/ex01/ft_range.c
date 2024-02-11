/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:53:39 by autku             #+#    #+#             */
/*   Updated: 2024/02/01 13:55:31 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	else
	{
		ptr = (int *)malloc(size * sizeof(int));
		if (ptr == NULL)
			return (NULL);
	}
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	*result;
	int	i;

	if (ac != 3)
		return (1);
	i = 0;
	min = atoi(av[1]);
	max = atoi(av[2]);
	result = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", result[i]);
		i++;
	}
	free(result);
}*/
