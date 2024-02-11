/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parsing2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:25:07 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:33:10 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file_parsing.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "structs.h"
#include "str_funcs2.h"
#include "str_funcs.h"

int	open_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening the file", 22);
		return (-1);
	}
	return (fd);
}

t_number	**add_line_to_array(char *str, t_number **array)
{
	t_number	*a;

	a = split_str(ft_str_trim(str));
	if (check_key(a->key))
		array = add_struct_to_array(array, a);
	else
		free(a);
	return (array);
}
