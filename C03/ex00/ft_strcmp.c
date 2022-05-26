/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:36:49 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 13:38:08 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int		main(void)
{
	char	*str1, *str2, *str3, *str4, *str5, *str6;

	str1 = "Hello A world";
	str2 = "Hello Z world";
	printf("Hello A world / Hello Z world\n");
	printf("expected: %d\n", strcmp(str1, str2));
	printf("yours: %d\n\n", ft_strcmp(str1, str2));
	str3 = "Hello a world";
        str4 = "Hello Z world";
        printf("Hello a world / Hello Z world\n");
        printf("expected: %d\n", strcmp(str3, str4));
        printf("yours: %d\n\n", ft_strcmp(str3, str4));
	str5 = "Hello world";
        str6 = "Hello world";
        printf("Hello world / Hello world\n");
        printf("expected: %d\n", strcmp(str5, str6));
        printf("yours: %d\n", ft_strcmp(str5, str6));

}*/
