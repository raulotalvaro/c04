/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include <stdio.h>
//clear;norminette;gcc -Wall -Wextra -Werror ft_putnbr_base.c

char	*abinario(int n, char bits[])
{
	int		i;

	i = 31;
	while (n > 0)
	{
		bits[i] = n % 2 + '0';
		i--;
		n = n / 2;
	}
	return (bits);
}

int	main(void)
{
	char	bits[32];
	int		p;
	int		i;

	i = 0;
	while (i < 32)
	{
		bits[i] = '0';
		i++;
	}
	p = 475;
	printf("%s\n", abinario(p, bits));
}
