/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:42:00 by jpfannku          #+#    #+#             */
/*   Updated: 2021/08/20 15:53:36 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fromage, ...)
{
	int		i;
	int		count;
	va_list	arg_pointer;

	i = 0;
	count = 0;
	va_start(arg_pointer, fromage);
	while (fromage[i] != 0)
	{
		if (fromage[i] != '%')
		{
			write(1, &fromage[i], 1);
			count++;
		}
		else
		{
			count = count + write_arg(arg_pointer, fromage[i + 1]);
			i++;
		}
		i++;
	}
	va_end(arg_pointer);
	return (count);
}
