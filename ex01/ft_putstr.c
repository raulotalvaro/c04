/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clear;norminette;gcc -Wall -Wextra -Werror .\ft_putstr.c;
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int n, char *args[])
{
	if (n != 2)
		return (0);
	ft_putstr((args[1]));
	return (0);
}
