/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//clear;norminette;gcc -Wall -Wextra -Werror ft_atoi.c

int	buscarsigno(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	r;
	int	i;

	r = 0;
	sign = buscarsigno(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	r = r * sign;
	return (r);
}

/*int	main(void)
{
	char	*s;

	s = "   ---+--+01234506789ab567";
	printf("%d\n", ft_atoi(s));
	s = "01234506789ab567";
	printf("%d", atoi(s));
}*/
