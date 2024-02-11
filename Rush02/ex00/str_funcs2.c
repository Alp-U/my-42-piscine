/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:29:10 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:33:30 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "str_funcs.h"
#include <stdlib.h>

char	*ft_str_trim(char *str)
{
	int		i;
	int		j;
	int		total;
	char	*trimmed;

	i = 0;
	j = 0;
	total = count_trim(str);
	trimmed = (char *)malloc(total + 1);
	while (j < total)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			if (j > 0 && i > 0 && str[i - 1] == ' ')
				trimmed[j++] = str[i - 1];
			trimmed[j++] = str[i];
		}
		i++;
	}
	trimmed[total] = '\0';
	free(str);
	return (trimmed);
}

void	skip_colon_and_spaces(char *str, int *i)
{
	while (str[*i] != ':')
		*i = *i + 1;
	*i = *i + 1;
	while (str[*i] == ' ')
		*i = *i + 1;
}

t_number	*split_str(char *str)
{
	int			i;
	int			j;
	char		*key;
	char		*value;
	t_number	*result;

	i = 0;
	while (str[i] != ':' && str[i] != ' ')
		i++;
	key = (char *)malloc(i + 1);
	ft_strncpy(key, str, i);
	key[i] = '\0';
	skip_colon_and_spaces(str, &i);
	j = 0;
	while (str[i + j] != '\n')
		j++;
	value = (char *)malloc(j + 1);
	ft_strncpy(value, str + i, j);
	value[j] = '\0';
	result = (t_number *)malloc(sizeof(t_number));
	result->key = key;
	result->key_length = ft_strlen(key);
	result->value = value;
	return (result);
}
