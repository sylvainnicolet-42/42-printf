/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:10:10 by synicole          #+#    #+#             */
/*   Updated: 2022/10/24 17:10:12 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

static char	*ft_strtoupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

static int	ft_getlength(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n > 0)
	{
		n /= 16;
		length++;
	}
	return (length);
}

static char	*ft_putnbr(int n, char *ptr)
{
	int		temp;
	int		i;

	i = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		temp = n % 16;
		if (temp < 10)
			ptr[i] = temp + 48;
		else
			ptr[i] = temp + 55;
		n /= 16;
		i++;
	}
	return (ptr);
}

static char	*ft_dec_to_hexa(int n)
{
	int		length;
	char	*ptr;

	if (n == -2147483648)
	{
		ptr = ft_substr("-80000000", 0, 9);
		if (!ptr)
			return (0);
		return (ptr);
	}
	length = ft_getlength(n);
	ptr = ft_calloc(sizeof(char), length + 1);
	if (!ptr)
		return (0);
	return (ft_putnbr(n, ptr));
}

int	ft_print_hex(int n, const char format)
{
	char	*nbr;
	int		len;

	nbr = ft_dec_to_hexa(n);
	if (!nbr)
		return (0);
	if (format == 'X')
		nbr = ft_strtoupper(nbr);
	len = ft_print_str(nbr);
	free(nbr);
	return (len);
}
