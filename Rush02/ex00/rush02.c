/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:53:13 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 22:08:48 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "str_funcs.h"
#include "file_parsing.h"

int	atoc_length(char *str)
{
	int	i;
	int	total;
	int	sign;

	i = 0;
	total = 0;
	sign = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (sign > 0)
			return (1);
		total++;
		sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total++;
		i++;
	}
	if (total - sign == 0)
		return (1);
	return (total);
}

char	*atoc(char *str)
{
	char	*str_clean;
	int		str_length;
	int		i;
	int		j;

	str_length = atoc_length(str);
	str_clean = (char *)malloc(str_length + 1);
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str_length == 1 && (str[i] <= '0' || str[i] > '9'))
	{
		str_clean[0] = '0';
		return (str_clean);
	}
	j = 0;
	if (str[i] == '+' || str[i] == '-')
		str_clean[j++] = str[i++];
	while (str[i] >= '0' && str[i] <= '9')
	{
		str_clean[j++] = str[i++];
	}
	str_clean[j] = '\0';
	free(str);
	return (str_clean);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*clean;
	char	*filename;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 3)
		filename = argv[1];
	else
		filename = "numbers.dict";
	str = (char *)malloc(ft_strlen(argv[argc - 1]) + 1);
	str = ft_strcpy(str, argv[argc - 1]);
	clean = atoc(str);
	if (clean[0] == '-')
	{
		write(1, "Error\n", 6);
		free(clean);
		return (1);
	}
	parse_file(filename, clean);
	free(clean);
}
