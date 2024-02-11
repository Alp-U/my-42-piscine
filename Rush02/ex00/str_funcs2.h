/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:23:20 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 22:36:05 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_FUNCS2_H
# define STR_FUNCS2_H

int			ft_strcmp(char *s1, char *s2);
void		skip_colon_and_spaces(char *str, int *i);
t_number	*split_str(char *str);
#endif
