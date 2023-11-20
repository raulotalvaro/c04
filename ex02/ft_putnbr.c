/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clear;norminette;gcc -Wall -Wextra -Werror ft_putnbr.c
//#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

/*int	main(int n, char *args[])
{
	if (n != 2)
		return (0);
	ft_putnbr(atoi(args[1]));
	return (0);
}*/
