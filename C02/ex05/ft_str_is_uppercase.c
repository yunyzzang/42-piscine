/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:16:45 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char str[]="AOELZZEI";
	char str1[]="asdklzDeib";
	char str2[]="+$*wew#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_uppercase(str));
	printf("%s: %d\n",str1,ft_str_is_uppercase(str1));
	printf("%s: %d\n",str2,ft_str_is_uppercase(str2));
	printf("%s: %d\n",str3,ft_str_is_uppercase(str3));}*/
