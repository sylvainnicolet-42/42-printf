/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:37:41 by synicole          #+#    #+#             */
/*   Updated: 2022/10/22 15:37:42 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_print_list	*ft_list_new(char *s)
{
	t_print_list	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (0);
	list->s = s;
	list->next = 0;
	return (list);
}
