#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *));

int	ft_function(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "O";
	array[1] = "O";
	array[2] = "O";
	array[3] = "X";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
}

