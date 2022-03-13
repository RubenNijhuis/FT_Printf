/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_to_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 10:53:07 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 12:23:12 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_to_hex_low(unsigned long n)
{
	char			c;
	unsigned long	nbr;
	int				total;

	nbr = n;
	total = 0;
	if (nbr >= 16)
	{
		total += ft_num_to_hex_low((nbr / 16));
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 87;
		total += write(1, &c, 1);
	}
	if (nbr < 16)
	{
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 87;
		total += write(1, &c, 1);
	}
	return (total);
}

int	ft_num_to_hex_up(unsigned long n)
{
	char				c;
	unsigned long int	nbr;
	int					total;

	nbr = n;
	total = 0;
	if (nbr >= 16)
	{
		total += ft_num_to_hex_up((nbr / 16));
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 55;
		total += write(1, &c, 1);
	}
	if (nbr < 16)
	{
		if (nbr % 16 < 10)
			c = (nbr % 16) + '0';
		else
			c = (nbr % 16) + 55;
		total += write(1, &c, 1);
	}
	return (total);
}
