/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:06:04 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/10/28 13:06:05 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>

int ft_printf(const char *str, ...);
void checkType(const char *str, int *strlen);
void ft_putchar(char s, int *strlen);

#endif
