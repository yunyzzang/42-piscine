/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:32:56 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 11:32:58 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("2 power 10 = %d\n", ft_recursive_power(2,10));
	printf("3 power 4 = %d\n", ft_recursive_power(3,4));
	printf("0 power 0 = %d\n", ft_recursive_power(0,0));
	printf("0 power 2 = %d\n", ft_recursive_power(0,2));
	printf("4 power 0 = %d\n", ft_recursive_power(4,0));
}*/
