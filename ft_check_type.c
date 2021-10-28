/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_type.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:05:28 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/10/28 13:11:27 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void checkType(const char *str, int *strlen)
{
    if (str + 1 == 'c')
        ft_putchar(str + 1, strlen);
    else if (str + 1 == '%')
        ft_putchar(str + 1, strlen);
    else if (str + 1 == 's')
        ft_putstr(str + 1, strlen);
    else if (str + 1 == 'p')
        ft_putpointer(str + 1, strlen);
    else if (str + 1 == 'd')
        ft_putnbr(str + 1, strlen);
    else if (str + 1 == 'i')
        ft_putnbr(str + 1, strlen);
    else if (str + 1 == 'u')
        ft_putnbr(str + 1, strlen);
    else if (str + 1 == 'x')
        ft_putchar(str + 1, strlen);
    else if (str + 1 == 'X')
        ft_putchar(str + 1, strlen);
}