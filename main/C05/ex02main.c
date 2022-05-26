#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("2 power 10 = %d\n", ft_iterative_power(2,10));
	printf("3 power 0 = %d\n", ft_iterative_power(3,0));
	printf("0 power 5 = %d\n", ft_iterative_power(0,5));
	printf("7 power 2 = %d\n", ft_iterative_power(7,2));
	printf("0 power 0 = %d\n", ft_iterative_power(0,0));
}
