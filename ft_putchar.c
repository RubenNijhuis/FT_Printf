/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:06:00 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/11/01 16:30:31 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char s)
{
    write(1, &s, 1);
    return (1);
}
