/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:09:17 by sum               #+#    #+#             */
/*   Updated: 2022/05/23 17:09:18 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_size(char **strs, int size, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		count += ft_strlen(sep);
		i++;
	}
	count -= ft_strlen(sep);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		i;
	int		j;	
	int		s;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	array = (char *)malloc(sizeof(char) * (ft_size(strs, size, sep) + 1));
	if (array == 0)
		return (0);
	s = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			array[s++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			array[s++] = sep[j++];
		i++;
	}
	array[s] = '\0';
	return (array);
}

/*int	main(void)
{
	char *strs[7] = {
		"abc",
		"123",
		"def",
		"456",
		"ghi",
		"789",
		"AABBCCDDAABBCCDD"
	};
	char sep[] = "=-=";
	char *result = ft_strjoin(3, strs, sep);	
	printf("%p\n%s\n", result, result);
	return (0);
}*/
