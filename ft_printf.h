/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:15:09 by synicole          #+#    #+#             */
/*   Updated: 2022/10/20 20:15:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct print_list
{
	char				*s;
	struct print_list	*next;
}	t_print_list;

int				ft_printf(const char *s, ...);
int				ft_normal_char(t_print_list **list, char c);

t_print_list	*ft_list_new(char *s);
void			ft_list_add_back(t_print_list **lst, t_print_list *new);
void			ft_list_free(t_print_list *lst);
void			ft_list_print(t_print_list *list);

#endif
