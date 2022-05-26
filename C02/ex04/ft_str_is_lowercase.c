/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:14:58 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char str[]="heADZai";
	char str1[]="asdklzoeib";
	char str2[]="+$*wew#=!";
	char str3[]="";
	printf("heADZai: %d\n",ft_str_is_lowercase(str));
	printf("asdklzoeib: %d\n",ft_str_is_lowercase(str1));
	printf("+$*wew#=!: %d\n",ft_str_is_lowercase(str2));
	printf(" : %d\n",ft_str_is_lowercase(str3));}*/
