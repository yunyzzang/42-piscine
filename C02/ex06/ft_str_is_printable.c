/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:22:58 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			rt = 0;
			break ;
		}
		i++;
	}		
	return (rt);
}
/*int		main(void)
{
	char *str1;
	char *str2;

	str1 = "Hell0";
	str2 = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str1));
	printf("should be 0: %d\n", ft_str_is_printable(str2));
}*/
