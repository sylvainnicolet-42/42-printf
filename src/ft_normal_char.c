/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normal_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:09:49 by synicole          #+#    #+#             */
/*   Updated: 2022/10/22 16:09:50 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_normal_char(t_print_list **list, char c)
{
	t_print_list	*new_elem;
	char			*s;

	s = malloc(sizeof(char) * 2);
	if (!s)
		return (0);
	s[0] = c;
	s[1] = 0;
	new_elem = ft_list_new(s);
	if (!new_elem)
		return (0);
	ft_list_add_back(list, new_elem);
	return (1);
}
