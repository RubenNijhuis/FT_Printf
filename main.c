/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 13:05:57 by rubennijhui   #+#    #+#                 */
/*   Updated: 2021/11/02 16:24:41 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*string;
	// void *ptr;
	int num_i;
	float num_f;
	// unsigned long int uli;
	string = "a string";
	num_i = 42;
	num_f = -42;
	// uli = 4.2424242;

	// ft_printf("Char: %c\n", letter);
	// printf("Char: %c\n", letter);

	// ft_printf("\n");

	ft_printf("String: %s %i\n", string, num_i);
    printf("String: %s %i\n", string, num_i);

    // ft_printf("\n");

	// ft_printf("Void pointer in hex: %p\n", ptr);
	// printf("Void pointer in hex: %p\n", ptr);

	// ft_printf("\n");


	// ft_printf("Number dec:  %d\n", num_f);
	// printf("Number dec:  %d\n", num_f);

	// ft_printf("\n");

	// ft_printf("Number int:  %i\n", num_i);
	// printf("Number int:  %i\n", num_i);

	// ft_printf("\n");

	// ft_printf("Number unsigned dec:  %u\n", uli);
	// printf("Number unsinged dec:  %u\n", uli);

	// ft_printf("\n");

	// ft_printf("Number unsigned dec in hex:  %x\n", num_i);
	// printf("Number unsinged dec in hex:  %x\n", num_i);

	// ft_printf("\n");

	// ft_printf("Number unsigned dec:  %X\n", num_i);
	// printf("Number unsinged dec:  %X\n", num_i);

	// ft_printf("\n");

	// ft_printf("Nothing: String one is simple and only has a newline\n");
	// printf("Nothing: String one is simple and only has a newline\n");

	// ft_printf("\n");

	// ft_printf("Percent: %%\n");
	// printf("Percent: %%\n");

	return (0);
}
