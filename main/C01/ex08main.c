#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{

	int j;
	int	arry [11] = {7, 8, 3, 5, 4, 2, 1, 5, 2, 9, 1};
	int	size;

	size = 11;
	j = 0;
	ft_sort_int_tab(arry, size);
	
	while (j < size)
	{
		printf("%d", arry[j]);
		j++;
	}
}


