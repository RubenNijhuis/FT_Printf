/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rubennijhuis@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:05:20 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/11/02 16:39:12 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int check_type(va_list args, const char *str)
{
    int p;
    char *s;

    if (*str == 'c' || *str == 'u' || *str == 'i' || *str == 'd' || *str == 'x' || *str == 'X')
        p = va_arg(args, int);
    else if (*str == 's' || *str == 'p')
        s = va_arg(args, char *);

    if (*str == 'c')
        return (ft_putchar((char)p));
    else if (*str == '%')
        return (ft_putchar('%'));
    else if (*str == 'i' || *str == 'd')
        return (ft_putnbr(p));
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
            strpos++;
        }
        else
            ft_putchar(str[strpos]);
        strlen++;
        strpos++;
    }
    va_end(args);
    return (strlen);
}
