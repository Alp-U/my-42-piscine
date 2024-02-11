/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parsing.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:06:42 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:32:37 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PARSING_H
# define FILE_PARSING_H
# include "structs.h"

int			parse_file(char *filename, char *input);
int			check_key(char *key);
t_number	**add_struct_to_array(t_number **array, t_number *s);

#endif
