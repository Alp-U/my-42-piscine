/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebetsb <bgebetsb@students.42vienna.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:41:49 by bgebetsb          #+#    #+#             */
/*   Updated: 2024/01/28 23:28:57 by bgebetsb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_FUNCS_H
# define STR_FUNCS_H
# include "structs.h"

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
int			ft_strlen(char *str);
char		*ft_str_trim(char *str);
int			ft_strcmp(char *s1, char *s2);
int			count_trim(char *str);
#endif
