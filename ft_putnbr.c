/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:38:09 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/08 14:12:22 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static size_t	nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static	char	*create_string(int len, int nb)
{
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len] = '\0';
	len--;
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

int	ft_putnbr(int n)
{
	int		len;
	long	nb;
	char	*str;

	len = nb_len(n);
	nb = n;
	str = create_string(len, nb);
	if (!str)
		return (0);
	ft_putstr(str);
	free(str);
	return (len);
}
