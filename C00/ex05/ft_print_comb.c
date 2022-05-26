/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:00:43 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 18:27:02 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output(char i, char j, char h)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &h, 1);
	if (i != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	h;

	i = 48;
	while (i < 56)
	{	
		j = i + 1 ;
		while (j < 57)
		{
			h = j + 1;
			while (h < 58)
			{
				ft_output(i, j, h);
				h++;
			}
			j++;
		}
		i++;
	}
}
