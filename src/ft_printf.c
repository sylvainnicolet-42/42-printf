/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:20:32 by synicole          #+#    #+#             */
/*   Updated: 2022/10/20 20:20:33 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *s, ...)
{
	t_print_list	*list;
	t_print_list	*new_elem;
	int				i;

	list = NULL;
	i = 0;
	while (s[i])
	{
		i++;
	}
	new_elem = ft_list_new((char *) s);
	ft_list_add_back(&list, new_elem);
	ft_list_print(list);
	return (0);
}

int	main(void)
{
	ft_printf("caca%d", 0);
	return (0);
}
