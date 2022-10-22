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
	int				i;
	int				nb_char;
	int				nb_normal_char;

	list = NULL;
	nb_char = 0;
	i = 0;
	while (s[i])
	{
		nb_normal_char = ft_normal_char(&list, s[i]);
		if (!nb_normal_char)
			return (0);
		nb_char += nb_normal_char;
		i++;
	}
	ft_list_print(list);
	ft_list_free(list);
	return (nb_char);
}

//int	main(void)
//{
//	ft_printf("123\n");
//	printf("%d\n", ft_printf("123"));
//	printf("%d\n", printf("123"));
//	return (0);
//}
