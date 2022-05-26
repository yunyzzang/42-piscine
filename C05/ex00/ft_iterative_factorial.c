/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:17:31 by sum               #+#    #+#             */
/*   Updated: 2022/05/23 18:17:32 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

/*int	main(void)
{	
	printf("-44! = %d\n",ft_iterative_factorial (-44));
	printf("1! = %d\n",ft_iterative_factorial (1));
	printf("5! = %d\n",ft_iterative_factorial (5));
	printf("8! = %d\n",ft_iterative_factorial (8));
	printf("10! = %d",ft_iterative_factorial (10));
}*/
