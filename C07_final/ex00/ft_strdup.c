/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:41:46 by autku             #+#    #+#             */
/*   Updated: 2024/01/28 22:52:04 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!newstr)
		return (NULL);
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(void)
{
	char	*mine;
	char	*theirs;
	char	str[] = "Hello          ";
    
	mine = ft_strdup(str);
	theirs = strdup(str);
	printf("mine  :%s:\ntheirs:%s:\n", mine, theirs);
	free(mine);
	free(theirs);
	return (0);
}*/
