/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:06:14 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 16:10:49 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*map;

	i = 0;
	map = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
/*
int		sum_one(int x)
{
	return (x + 1);
}
void	display_array(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d\n", arr[i++]);
	}
}
int	main()
{
	int tmp[] = {1, 2, 3, 4, 5, 6 ,7 ,8};
	int *res = ft_map(tmp, 5, &sum_one);
	display_array(res, 5);
}
*/
