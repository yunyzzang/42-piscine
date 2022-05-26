/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:23:19 by sum               #+#    #+#             */
/*   Updated: 2022/05/16 12:14:21 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void){
        char dest[] = "Hello World";
	char scr[] = "kiwi";
	unsigned int a,b;
	a=4;
	b=7;
	printf("expected: %s\n",strncpy (dest, scr,a));
        printf("yours: %s\n\n",ft_strncpy (dest, scr,a));
        printf("expected: %s\n",strncpy (dest, scr,b));
	printf("yours: %s",ft_strncpy (dest, scr,b));
}*/
