/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:42:36 by sum               #+#    #+#             */
/*   Updated: 2022/05/17 13:42:38 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	dest[50] = "Hello world?";
	char	dest1[50] = "Hello world?";
	char		*src;
	int	size;

	size = 5;
	src = " Here i am!";
	printf("expected: %s\n", strncat(dest, src, size));
	printf("yours: %s\n", ft_strncat(dest1, src, size));
}*/
