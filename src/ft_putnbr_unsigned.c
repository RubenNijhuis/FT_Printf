/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:38:09 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 13:25:33 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	char			s;
	unsigned long	nb;
	int				len;

	len = 0;
	nb = n;
	if (nb >= 10)
	{
		len += ft_putnbr_unsigned(nb / 10);
		s = nb % 10 + '0';
		len += ft_putchar(s);
	}
	if (nb < 10)
		len += ft_putchar(nb % 10 + '0');
	return (len);
}
