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
#include "../libft/libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count_print;

	va_start(args, s);
	count_print = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count_print += ft_formats(&args, s[i]);
		}
		else
			count_print += ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (count_print);
}

//int	main(void)
//{
////	int	test = 0;
////	printf("original = %x\n", test);
////	ft_printf("mine = %x\n", test);
//	ft_putchar_fd((10 - 10) + 97, 1);
//	return (0);
//}
