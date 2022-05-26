/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:43:29 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 13:46:40 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str != 0)
	{
		p1 = str;
		p2 = to_find;
		while (*p1 == *p2 && *p1 != 0 && *p2 != 0)
		{
			p1++;
			p2++;
		}
		if (*p2 == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
int		main(void)
{
	char	*str;
	char	*to_find;

	str = "Find this letter";
	to_find = "tthi";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "ette";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "t";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "r";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
}
*/
