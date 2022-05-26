/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:08:13 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 91 && str[i] < 97) || str[i] > 122)
		{
			rt = 0;
			break ;
		}
		i++;
	}		
	return (rt);
}

/*int main (void)
{	
	char str[]="heowlodjvpeiwADZai";
	char str1[]="ei39vxjsp";
	char str2[]="+$*%#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_alpha(str));
	printf("%s: %d\n",str1,ft_str_is_alpha(str1));
	printf("%s: %d\n",str2,ft_str_is_alpha(str2));
	printf("%s: %d\n",str3,ft_str_is_alpha(str3));}*/
