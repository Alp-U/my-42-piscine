/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:54:57 by autku             #+#    #+#             */
/*   Updated: 2024/01/28 23:26:18 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "str_funcs.h"
#include "str_funcs2.h"
#include "structs.h"
#include "print.h"
#include "file_parsing2.h"

// char	*atoc(char *str);
// void	print(char *input, t_number **array);
/*
char	*check_line(const char *str)
{
	int	i;
	char	*temp;

	i = 0;
	temp = (char *)malloc(50 * sizeof(char));
	if (temp == NULL) {
		write(1, "Allocation error", 16);
		return (1);
	}
	while (str[i] != ':' && str[i] >= '0' && str[i] <= '9' && str[i] != '\n') {
		temp[i] = str[i];
		i++;
    }
	temp[i] = '\0';
	return (temp);
}
*/

int	check_line_valid(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\n')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i++] != ':')
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] < 32 || str[i] > 126)
		return (0);
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] != '\n')
		return (0);
	return (1);
}

char	*read_line(int fd)
{
	char	c;
	int		i;
	char	*str;
	char	*temp;

	i = 0;
	str = (char *)malloc(1);
	str[0] = '\0';
	while (read(fd, &c, 1) > 0)
	{
		temp = (char *)malloc(i + 2);
		ft_strcpy(temp, str);
		temp[i] = c;
		temp[i + 1] = '\0';
		free(str);
		str = temp;
		i++;
		if (c == '\n')
		{
			if (check_line_valid(str))
				return (str);
		}
	}
	free(str);
	return (0);
}

t_number	**add_struct_to_array(t_number **array, t_number *s)
{
	t_number	**temp;
	int			i;

	i = 0;
	while (array[i] != 0)
		i++;
	temp = (t_number **)malloc(sizeof(t_number *) * (i + 2));
	i = 0;
	while (array[i] != 0)
	{
		temp[i] = array[i];
		i++;
	}
	temp[i] = s;
	temp[i + 1] = 0;
	free(array);
	array = temp;
	return (array);
}

int	check_key(char *key)
{
	int	i;
	int	len;

	i = 0;
	while (key[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	if (len < 3)
		return (1);
	while (i < len)
	{
		if ((i == 0 && key[i] != '1') || (i > 0 && key[i] != '0'))
			return (0);
		i++;
	}
	return (1);
}

int	parse_file(char *filename, char *input)
{
	int			fd;
	char		*str;
	t_number	**array;

	array = (t_number **)malloc(sizeof(t_number *));
	array[0] = 0;
	fd = open_file(filename);
	if (fd == -1)
		return (1);
	while (1)
	{
		str = read_line(fd);
		if (str == 0)
			break ;
		if (str[0] == '\n')
		{
			free(str);
			continue ;
		}
		array = add_line_to_array(str, array);
	}
	print(input, array);
	close(fd);
	return (0);
}
