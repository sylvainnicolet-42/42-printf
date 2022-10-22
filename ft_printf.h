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
# include <unistd.h>
# include <stdarg.h>

typedef struct print_list
{
	char				*s;
	struct print_list	*next;
}	t_print_list;

int	ft_printf(const char *s, ...);
int	ft_formats(va_list args, char format);

int	ft_print_char(int c);

#endif
