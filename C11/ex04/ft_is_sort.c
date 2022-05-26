/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:22:17 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 17:35:36 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	if (length < 2)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			up++;
		if (f(tab[i], tab[i + 1]) <= 0)
			down++;
		i++;
	}
	if (up == length - 1 || down == length - 1)
		return (1);
	return (0);
}
/*
int my_func(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
	int length = 10;
	int tab[] = {1, 1, 1, 1, 2, 3, 4};
	printf("%d\n", ft_is_sort(tab, length, &my_func));
	int tab1[] = {-1, -1, -2, -3, -4, -5, -6, -7, -8, -8};
	printf("%d\n", ft_is_sort(tab1, length, &my_func));
	int tab2[] = {0,0,0,0,0,0,0,0,0,0};
	printf("%d\n", ft_is_sort(tab2, length, &my_func));
  	int tab3[] = {0,-1,2};
	printf("%d\n", ft_is_sort(tab3, 3, &my_func));
 
	return 0;
}*/
