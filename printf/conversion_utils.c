/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:10:05 by jpfannku          #+#    #+#             */
/*   Updated: 2021/08/24 12:37:12 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_con(unsigned long int n)
{
	char	*hex;
	int		i;
	int		rem;

	i = 0;
	rem = 0;
	if (n == 0)
		return (str_write("0x0"));
	hex = ft_calloc(20, 1);
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			hex[i] = 48 + rem;
		else
			hex[i] = 55 + rem;
		n = n / 16;
		i++;
	}
	hex[i] = 'x';
	hex[i + 1] = '0';
	i = i + 2;
	reverse_puts(hex, 'p', i);
	free(hex);
	return (i);
}

int	hex_con(int n, char arg)
{
	int					i;
	int					rem;
	char				*hex;
	unsigned int		num;

	i = 0;
	if (n == 0)
		return (char_write('0'));
	num = (unsigned int)n;
	hex = ft_calloc(20, 1);
	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i] = 48 + rem;
		else
			hex[i] = 55 + rem;
		num = num / 16;
		i++;
	}
	reverse_puts(hex, arg, i);
	free(hex);
	return (i);
}

int	uns_dec(unsigned int n, char arg)
{
	unsigned int	rem;
	int				i;
	char			str[10];

	i = 0;
	while (n >= 10)
	{
		rem = n % 10;
		str[i] = '0' + (int)rem;
		n = n / 10;
		i++;
	}
	if (n < 10)
		str[i] = '0' + n;
	reverse_puts(str, arg, i + 1);
	return (i + 1);
}
