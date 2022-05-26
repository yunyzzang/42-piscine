/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:39:43 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 11:39:44 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*int		main(void)
{
	printf("8: %d\n", ft_fibonacci(8));
	printf("3: %d\n", ft_fibonacci(3));
	printf("-1: %d\n", ft_fibonacci(-1));
	printf("0: %d\n", ft_fibonacci(0));
	printf("2: %d\n", ft_fibonacci(2));
}*/
