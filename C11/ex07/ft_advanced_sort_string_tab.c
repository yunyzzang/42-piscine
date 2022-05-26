/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:24:01 by sum               #+#    #+#             */
/*   Updated: 2022/05/24 18:25:05 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[j]) > 0)
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int		main(void)
{
	int		index;
	char	**tab;

	tab = malloc(18 * sizeof(char *));
	tab[0]= "i";
	tab[1]= "oP";
	tab[2]= "ba9";
	tab[3]= "PQR";
	tab[4]= "lwX";
	tab[5]= "81Rk";
	tab[6]= "62TUF";
	tab[7]= "Pl13Kgw";
	tab[8]= "OZxpSYN";
	tab[9]= "j1nMdra";
	tab[10]= "DKP1epd5";
	tab[11]= "3feshSWvb";
	tab[12]= "IWtJkLjcZ";
	tab[13]= "Nor3gMbJId";
	tab[14]= "23TaX17Q65";
	tab[15]= "LUhA1aMBp3s";
	tab[16]= "RMiT4DEPxFj";
	tab[17] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
}
*/
