/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parsing2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:25:18 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:32:15 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PARSING2_H
# define FILE_PARSING2_H

int			open_file(char *filename);
t_number	**add_line_to_array(char *str, t_number **array);
#endif	
