/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:49:53 by jpfannku          #+#    #+#             */
/*   Updated: 2021/08/24 12:23:48 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	char_write(unsigned char c)
{
	write(1, &c, 1);
	return (1);
}

int	str_write(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (str_write("(null)"));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

void	reverse_puts(char *str, char arg, int i)
{
	if (i > 0)
	{
		i--;
		while (i >= 0)
		{
			if (arg == 'x' || arg == 'p')
				str[i] = ft_tolower((int)str[i]);
			write(1, &str[i], 1);
			i--;
		}
	}
}
