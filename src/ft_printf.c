/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:38:33 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 13:25:57 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	check_type(va_list args, const char *str)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == '%')
		return (ft_putchar('%'));
	else if (*str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*str == 'i' || *str == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (*str == 'x')
		return (ft_num_to_hex_low(va_arg(args, unsigned int)));
	else if (*str == 'X')
		return (ft_num_to_hex_up(va_arg(args, unsigned int)));
	else if (*str == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (*str == 'p')
	{
		write(1, "0x", 2);
		return (ft_num_to_hex_low(va_arg(args, unsigned long)) + 2);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		strlen;
	int		strpos;
	va_list	args;

	strlen = 0;
	strpos = 0;
	va_start(args, str);
	while (str[strpos] != '\0')
	{
		if (str[strpos] == '%')
		{
			strlen += check_type(args, &str[strpos + 1]);
			strpos ++;
		}
		else
			strlen += ft_putchar(str[strpos]);
		strpos++;
	}
	va_end(args);
	return (strlen);
}
