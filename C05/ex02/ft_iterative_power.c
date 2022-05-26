/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:30:04 by sum               #+#    #+#             */
/*   Updated: 2022/05/23 18:30:05 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{	
		nb *= n;
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("2 power 10 = %d\n", ft_iterative_power(2,10));
	printf("3 power 4 = %d\n", ft_iterative_power(3,4));
	printf("0 power 5 = %d\n", ft_iterative_power(0,5));
	printf("7 power 2 = %d\n", ft_iterative_power(7,2));
	printf("0 power 0 = %d\n", ft_iterative_power(0,0));
}*/
