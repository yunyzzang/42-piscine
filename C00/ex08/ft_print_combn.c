/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:29:54 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 18:19:58 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	numbers(char *array, int i, int j, int n)
{
	if (i == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(array[i]);
			i++;
		}
		if (array[0] != 10 - n + '0')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (j < 10)
	{
		array[i] = j + '0';
		numbers (array, i + 1, j + 1, n);
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	array[10];

	array[n] = ',';
	if (n > 0 && n < 10)
	{
		numbers(array, 0, 0, n);
	}
}
