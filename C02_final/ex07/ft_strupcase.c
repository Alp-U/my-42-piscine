/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:26:16 by autku             #+#    #+#             */
/*   Updated: 2024/01/17 13:02:58 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] -= 32;
			i = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "ha32Llo";
	printf("%s", ft_strupcase(string));
}*/
