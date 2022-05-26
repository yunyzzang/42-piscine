/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:06:08 by sum               #+#    #+#             */
/*   Updated: 2022/05/21 18:06:10 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output_hexa(char *addr, unsigned int temp)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	while (i < 16 && addr[i + temp] != '\0')
	{
		write(1, &hexa[temp / 16], 1);
		write(1, &hexa[temp % 16], 1);
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	add_hexa(unsigned long long nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[nb / 16], 1);
	write(1, &hexa[nb % 16], 1);
}

void	output_data(char *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i++ < 16 && addr[size + i])
	{
		if (addr[size + i] <= 31 || addr[size + i] == 127)
		{
			write(1, ".", 1);
			i++;
		}
		else
		{
			write(1, "addr + i", 1);
			i++;
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		j = 8;
		while (--j >= 0)
			add_hexa((unsigned long long)(addr + i) >> j * 0xff);
		write(1, ": ", 2);
		if (i % 16 == 0)
		{
			output_hexa((char *)addr, i);
			output_data((char *)addr, i);
		}
		i += 16;
	}
	return (addr);
}
