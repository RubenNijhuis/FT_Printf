/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_unsigned.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:38:09 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/08 15:15:03 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

// static size_t	nb_len(unsigned int nb)
// {
// 	int	len;

// 	len = 0;
// 	if (nb <= 0)
// 		len++;
// 	while (nb)
// 	{
// 		len++;
// 		nb = nb / 10;
// 	}
// 	return (len);
// }

// static	char	*create_string(unsigned int len, int nb)
// {
// 	char	*str;

// 	str = malloc((len + 1) * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	if (nb == 0)
// 		str[0] = '0';
// 	str[len] = '\0';
// 	len--;
// 	while (nb)
// 	{
// 		str[len] = nb % 10 + '0';
// 		len--;
// 		nb = nb / 10;
// 	}
// 	return (str);
// }

int	ft_putnbr_unsigned(unsigned int n)
{
	char		s;
	long		nb;
	static int	len;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		len++;
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10);
		s = nb % 10 + '0';
		ft_putchar(s);
		len++;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		len++;
	}
	return (len);
}
