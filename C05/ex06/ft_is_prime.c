/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:52:05 by sum               #+#    #+#             */
/*   Updated: 2022/05/19 17:52:07 by sum              ###   ########.fr       */
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

/*int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d: %d\n", i, ft_is_prime(i));
		i++;
	}
	printf("2147483647 :%d\n", ft_is_prime(2147483647));
	printf("46: %d\n", ft_is_prime(46));
	printf("97: %d\n", ft_is_prime(97));
	printf("1151: %d\n", ft_is_prime(1151));
}*/
