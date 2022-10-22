/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:46:04 by synicole          #+#    #+#             */
/*   Updated: 2022/10/22 19:46:07 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_formats(va_list *args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(*args, int));
	else if (format == '%')
		count += ft_print_percent();
	else if (format == 's')
		count += ft_print_str(va_arg(*args, char *));
	return (count);
}
