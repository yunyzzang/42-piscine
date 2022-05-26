/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:39:08 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 13:40:06 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*int		main(void)
{
	char	*str1, *str2, *str3;
	int	a,b;

	str1 = "christmas";
	
	str2 = "chriszmswoth";
	str3 = "cheershlel";
	a=3;
	b=6;
	printf("expected: %d\n", strncmp(str1, str2,a));
	printf("yourse: %d\n\n", ft_strncmp(str1, str2,a));
	
	printf("expected: %d\n", strncmp(str1, str2,b));
        printf("yours: %d\n\n", ft_strncmp(str1, str2,b));
        
        printf("expected: %d\n", strncmp(str1, str3,b));
        printf("yours: %d\n", ft_strncmp(str1, str3,b));
}*/
