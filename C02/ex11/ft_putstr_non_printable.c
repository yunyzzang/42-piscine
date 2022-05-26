/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:36:12 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 14:36:37 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output_hexa(unsigned char word)
{
	char	tab[3];
	char	*hexa;

	hexa = "0123456789abcdef";
	tab[0] = '\\';
	tab[1] = hexa[word / 16];
	tab[2] = hexa[word % 16];
	write(1, tab, 3);
}

void	ft_putstr_non_printable(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] > 31 && str[i] < 127)
		{
			write (1, &str[i], 1);
		}
		else
		{
			output_hexa((unsigned char)str[i]);
		}
		i++;
	}
}
/*int		main(void)
{
	char	*str;
	char	*str1;

	str = "^@\rhe\tllo	/8w\norl\vd\e";
	str1 = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_putstr_non_printable(str1);
	}*/
