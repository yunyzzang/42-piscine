/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:40:48 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 13:41:27 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

/*int		main(void)
{
	char	dest[80] = "hello world?";
	char	dest1[80] = "hello world?";
	char	*src;

	src = " here i am!";
	printf("expected: %s\n", strcat(dest, src));
	printf("yours: %s\n", ft_strcat(dest1, src));
}*/
