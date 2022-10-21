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

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		num_args;
	int		i;

	num_args = ft_strlen(s);
	va_start(args, s);
	i = 0;
	while (i < num_args)
	{
		if (s[i] == 'd')
			printf("%d\n", va_arg(args, int));
		else if (s[i] == 'c')
			printf("%c\n", va_arg(args, int));
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	int	i;
//
//	i = 10;
//	ft_printf("dcdc", i, 'c', 1000, 'q');
//	return (0);
//}
