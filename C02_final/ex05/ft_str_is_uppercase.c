/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:01:16 by autku             #+#    #+#             */
/*   Updated: 2024/01/17 12:04:00 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_uppercase("HELLO"));
	printf("%d", ft_str_is_uppercase("hello"));
    printf("%d", ft_str_is_uppercase("He2llo"));
	printf("%d", ft_str_is_uppercase("3422141"));
	printf("%d", ft_str_is_uppercase(""));
}*/
