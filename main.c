/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 12:37:56 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/08 14:09:45 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*string;
	int		num_i;
	float	num_f;
	char	ch;

	ch = 'c';
	// void *ptr;
	string = "a string";
	num_i = 123456789;
	num_f = -42;
	ft_printf("%i\n" ,ft_printf("String: %s %i %c %x %X\n", string, num_i, ch, num_i, num_i));
	printf("%i\n" ,printf("String: %s %i %c %x %X\n", string, num_i, ch, num_i, num_i));
	return (0);
}
