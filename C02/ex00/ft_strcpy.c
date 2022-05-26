/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:23:19 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 18:46:29 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int main(void){
        char dest[20] = "banana";
        char scr[5] = "kiwi";
	char scr2[10] = "pineapple";
	printf("expected: %s\n",strcpy (dest, scr));
        printf("yours: %s\n\n",ft_strcpy (dest, scr));
        printf("expected: %s\n",strcpy (dest, scr2));
	printf("yours: %s",ft_strcpy (dest, scr2));
}*/
