/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rubennijhuis@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:05:20 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/10/28 13:05:52 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
    int *strlen;
    int strpos;
    int argpos;

    strlen = 0;
    argpos = 0;
    strpos = 0;
    va_list args;
    va_start(args, str);
    while (str[strpos] != '\0')
    {
        if (str[strpos] == '%')
            checkType(str + strpos, strlen);
        ft_putchar(str[strpos], strlen);
        strpos++;
    }
    va_end(args);
    return ((int)strlen);
}