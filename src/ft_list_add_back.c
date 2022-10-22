/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:31:46 by synicole          #+#    #+#             */
/*   Updated: 2022/10/22 15:31:48 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_list_add_back(t_print_list **lst, t_print_list *new)
{
	t_print_list	*current_el;

	if (!*lst)
		*lst = new;
	else
	{
		current_el = *lst;
		while (current_el->next)
			current_el = current_el->next;
		current_el->next = new;
	}
}
