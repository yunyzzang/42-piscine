/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:36:14 by sum               #+#    #+#             */
/*   Updated: 2022/05/21 19:36:17 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	ran;

	ran = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (ran));
	if (*range == 0)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (ran);
}

/*int main()
 {
	 int **temp;
	 temp = (int **)malloc(sizeof(int*)*4);
	 int b = ft_ultimate_range(temp, -5, -1);
	 printf("range from -5 to -1\n");
	 printf("return : %d\n", b);
	 for (int i = 0; i < 4; i++)
	 	printf("%d, ", (*temp)[i]);
 }*/
