/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:36:00 by autku             #+#    #+#             */
/*   Updated: 2024/01/16 16:49:51 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	indexplus;
	int	indexminus;

	indexplus = 0;
	indexminus = size -1;
	while (indexplus < indexminus)
	{
		temp = tab[indexplus];
		tab[indexplus] = tab[indexminus];
		tab[indexminus] = temp;
		indexplus++;
		indexminus--;
	}
}
/*int   main(void)
{
    int array[] = {2,4};
    int size = 2;
    int i = 0;

    ft_rev_int_tab(array, size);

    while (i < size)
    {
        printf("%d", array[i]);
        i++;
    }
}*/
