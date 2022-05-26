/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:32:35 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}		
	return (str);
}

/*int main (void)
{	
	char str[]="hello world";
	char str1[]="new york city is cool";
	char str2[]="time flies";
	printf("%s: \n",str);
	printf("%s\n\n",ft_strupcase(str));
	printf("%s: \n",str1);
	printf("%s\n\n",ft_strupcase(str1));
	printf("%s: \n",str2);
	printf("%s\n",ft_strupcase(str2));
}*/
