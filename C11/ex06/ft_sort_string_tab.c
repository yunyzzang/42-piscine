/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:00:01 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 18:00:02 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	char **arr = (char **)malloc(sizeof(char *) * 7);
	arr[0] = "abc";
	arr[1] = "b";
	arr[2] = "aa";
	arr[3] = "fde";
	arr[4] = "ccc";
	arr[5] = "abcd";
	arr[6] = 0;
	
	ft_sort_string_tab(arr);

	for (int i = 0; arr[i]; i++)
		printf("%s\n", arr[i]);
}
*/
