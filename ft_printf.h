/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:38:27 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 13:25:24 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	check_type(va_list args, const char *str);
int	ft_num_to_hex_low(unsigned long n);
int	ft_num_to_hex_up(unsigned long n);
int	ft_putchar(int s);
int	ft_putstr(char *s);
int	ft_putnbr(long nb);
int	ft_putnbr_unsigned(unsigned int nb);

#endif
