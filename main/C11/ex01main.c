#include <stdio.h>

void	*ft_map(int *tab, int length, int(*f)(int));

int		sum_one(int x)
{
	return (x + 1);
}
void	display_array(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d\n", arr[i++]);
	}
}
int	main()
{
	int tmp[] = {1, 2, 3, 4, 5, 6 ,7 ,8};
	int *res = ft_map(tmp, 5, &sum_one);
	display_array(res, 5);
}


