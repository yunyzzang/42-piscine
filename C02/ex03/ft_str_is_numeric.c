/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:08:11 by sum               #+#    #+#             */
/*   Updated: 2022/05/15 16:11:58 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	rt;

	i = 0;
	rt = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 47 || str[i] > 57)
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
	char str[]="heoa2352wADZai";
	char str1[]="12334454367";
	char str2[]="+$*%#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_numeric(str));
	printf("%s: %d\n",str1,ft_str_is_numeric(str1));
	printf("%s: %d\n",str2,ft_str_is_numeric(str2));
	printf("%s: %d\n",str3,ft_str_is_numeric(str3));}*/
