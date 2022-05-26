/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:53:14 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 11:53:16 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	printf("-44 = %d\n",ft_sqrt (-44));
	printf("1023 = %d\n",ft_sqrt (1023));
	printf("2147395600 = %d\n",ft_sqrt (2147395600));
	printf("1 = %d\n",ft_sqrt (1));
	printf("5625 = %d\n",ft_sqrt (5625));
}*/