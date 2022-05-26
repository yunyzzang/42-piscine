/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 17:37:13 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	valid_word(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ') || (i == 0) || !(valid_word(str, i - 1)))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else
				str[i] = str[i];
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int main (void)
{	
	char str[]="O{D7l8	Y%~Y:L$Bvmp#F";
	char str1[]="  salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[]="   v,iknddDDnb.k<*gvdy}6e]ecx#cm9;j1g+";
	printf("%s\n\n",ft_strcapitalize(str));
	printf("%s\n\n",ft_strcapitalize(str1));
	printf("%s\n",ft_strcapitalize(str2));
}*/
