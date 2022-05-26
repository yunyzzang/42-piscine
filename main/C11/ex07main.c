#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

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

	tab = malloc(8 * sizeof(char *));
	tab[0] = strdup("Hello");
	tab[1] = strdup("it");
	tab[2] = strdup("is");
	tab[3] = strdup("gonna");
	tab[4] = strdup("be");
	tab[5] = strdup("your");
	tab[6] = strdup("turn");
	tab[7] = 0;
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
