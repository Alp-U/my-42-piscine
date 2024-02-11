/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:57:21 by autku             #+#    #+#             */
/*   Updated: 2024/02/01 00:35:31 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;

	i = -1;
	total_length = 0;
	if (size == 0)
		return ((char *)malloc(1));
	while (++i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
	}
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	ft_strcpy(result, strs[0]);
	i = 0;
	while (++i < size)
		ft_strcat(ft_strcat(result, sep), strs[i]);
	ft_strcat(result, "\0");
	return (result);
}

int	main(int ac, char **av)
{
	char	**str;
	char	*result;
	int		i;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (ac - 1));
	while (i < ac - 1)
	{
		str[i] = (char *)malloc(sizeof(char) * (ft_strlen(av[i + 1]) + 1));
		ft_strcpy(str[i], av[i + 1]);
		i++;
	}
	result = ft_strjoin(ac - 1, str, "1234");
	printf("%s", result);
	i = 0;
	while (i < ac - 1)
	{
		free (str[i]);
		i++;
	}
	free(str);
	free(result);
	return (0);
}
