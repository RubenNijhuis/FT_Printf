/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:06:04 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/11/02 11:01:56 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *str, ...);
int check_type(va_list args, const char *str, int strpos);
int ft_putchar(char s);

#endif
