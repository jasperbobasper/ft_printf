/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:50:00 by jpfannku          #+#    #+#             */
/*   Updated: 2021/08/23 16:55:32 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_write(va_list list, char arg)
{
	unsigned long int	i;
	unsigned int		n;
	int					count;
	char				*number;

	if (arg == 'i' || arg == 'd')
	{
		i = va_arg(list, int);
		number = ft_itoa(i);
		count = str_write(number);
		free(number);
		return (count);
	}
	else if (arg == 'u')
	{
		n = va_arg(list, unsigned int);
		return (uns_dec(n, arg));
	}
	return (0);
}

int	hex_write(va_list list, char arg)
{
	int					n;
	unsigned long int	i;

	if (arg == 'X' || arg == 'x')
	{
		n = va_arg(list, int);
		return (hex_con(n, arg));
	}
	else if (arg == 'p')
	{
		i = (unsigned long int)va_arg(list, long int);
		return (p_con(i));
	}
	return (0);
}

int	write_arg(va_list list, char arg)
{
	char			*str;
	unsigned char	c;

	if (arg == '%')
		return (char_write('%'));
	else if (arg == 'c')
	{
		c = (unsigned char)va_arg(list, int);
		return (char_write(c));
	}
	else if (arg == 's')
	{
		str = va_arg(list, char *);
		return (str_write(str));
	}
	else if (arg == 'd' || arg == 'i' || arg == 'u')
		return (num_write(list, arg));
	else if (arg == 'x' || arg == 'p' || arg == 'X')
		return (hex_write(list, arg));
	return (0);
}
