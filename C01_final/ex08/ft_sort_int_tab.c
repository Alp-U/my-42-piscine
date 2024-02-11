/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:49:21 by autku             #+#    #+#             */
/*   Updated: 2024/01/16 11:52:57 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *one, int *scn)
{
	int	temp;

	temp = *one;
	*one = *scn;
	*scn = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*int   main(void)
{
    int arr[] = {9, 5, 2, 3};
    int i = 0;
    int n;

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");

    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }

	i = 0;

    ft_sort_int_tab(arr, n);

    printf("\nAfter: ");

    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }
}*/
