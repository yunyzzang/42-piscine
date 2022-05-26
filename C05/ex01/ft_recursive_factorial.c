/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:21:56 by sum               #+#    #+#             */
/*   Updated: 2022/05/23 18:21:57 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{	
	printf("-44! = %d\n",ft_recursive_factorial (-44));
	printf("0! = %d\n",ft_recursive_factorial (0));
	printf("5! = %d\n",ft_recursive_factorial (5));
	printf("8! = %d\n",ft_recursive_factorial (8));
	printf("10! = %d",ft_recursive_factorial (10));
}*/
