/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:56:34 by jpfannku          #+#    #+#             */
/*   Updated: 2021/08/24 12:17:18 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h> 
# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *fromage, ...);
int		p_con(unsigned long int n);
int		write_arg(va_list list, char arg);
int		hex_write(va_list list, char arg);
int		char_write(unsigned char c);
int		str_write(char *str);
int		num_write(va_list list, char arg);
int		hex_con(int n, char arg);
int		uns_dec(unsigned int n, char arg);
void	reverse_puts(char *str, char arg, int i);

#endif
