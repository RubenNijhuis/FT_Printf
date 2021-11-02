/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rubennijhuis@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:05:20 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/11/02 15:04:20 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_type(va_list args, const char *str, int i)
{
    int p;
    char *s;
    
    if (str[i] == 'c' || str[i] == 'u' || str[i] == 'i' ||
        str[i] == 'd' || str[i] == 'x' || str[i] == 'X')
        p = va_arg(args, int);
    if (str[i] == 's' || str[i] == 'p')
        s = va_arg(args, char *);

    if (str + 1 == 'c')
        return (ft_putchar(str + 1));
    else if (str + 1 == '%')
        return (ft_putchar(str + 1));
    else if (str + 1 == 's')
        return (ft_putstr(str + 1));
    else if (str + 1 == 'p')
        return (ft_putpointer(str + 1));
    else if (str + 1 == 'd')
        return (ft_putnbr(str + 1));
    else if (str + 1 == 'i')
        return (ft_putnbr(str + 1));
    else if (str + 1 == 'u')
        return (ft_putnbr(str + 1));
    else if (str + 1 == 'x')
        return (ft_putchar(str + 1));
    else if (str + 1 == 'X')
        return (ft_putchar(str + 1));
}

int	ft_printf(const char *str, ...)
{
    int *strlen;
    int strpos;
    int argpos;

    strlen = 0;
    strpos = 0;
    va_list args;
    va_start(args, str);
    while (str[strpos] != '\0')
    {
        if (str[strpos] == '%')
            check_type(args, str, strpos);
        else
            ft_putchar(str[strpos]);
        strpos++;
    }
    va_end(args);
    return ((int)strlen);
}
