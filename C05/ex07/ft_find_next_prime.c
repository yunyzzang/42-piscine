/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:55:29 by sum               #+#    #+#             */
/*   Updated: 2022/05/19 17:55:31 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	trial;

	trial = 0;
	i = 2;
	if (nb == 2 || nb == 3)
	{
		trial = 1;
	}
	while (i <= nb / 2)
	{
		if (nb % i != 0)
		{	
			trial = 1;
		}
		else
		{	
			trial = 0;
			break ;
		}
		i++;
	}
	return (trial);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d: %d\n", i, ft_find_next_prime(i));
		i++;
	}
	printf("21474565 :%d\n", ft_find_next_prime(21474565));
	printf("-1: %d\n", ft_find_next_prime(-1));
	printf("97: %d\n", ft_find_next_prime(97));
	printf("1124: %d\n", ft_find_next_prime(1124));
	printf("156: %d\n", ft_find_next_prime(156));
}*/
