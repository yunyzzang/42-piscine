/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:58:36 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 17:07:28 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*

int	ft_function(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "O";
	array[1] = "O";
	array[2] = "O";
	array[3] = "X";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_count_if(array, 5, &ft_function));
}
*/
