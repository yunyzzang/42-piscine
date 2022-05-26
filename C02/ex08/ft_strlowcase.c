/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:34:44 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}		
	return (str);
}
/*int main (void)
{	
	char str[]="THIS IS TEST";
	char str1[]="PYTHON IS MUCH EASIER";
	char str2[]="HELLO NEW WORLD";
	printf("%s: \n",str);
	printf("%s\n\n",ft_strlowcase(str));
	printf("%s: \n",str1);
	printf("%s\n\n",ft_strlowcase(str1));
	printf("%s: \n",str2);
	printf("%s\n",ft_strlowcase(str2));
}*/
