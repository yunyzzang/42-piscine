#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d: %d\n", i, ft_is_prime(i));
		i++;
	}
	printf("2147483647 :%d\n", ft_is_prime(2147483647));
	printf("46: %d\n", ft_is_prime(46));
	printf("97: %d\n", ft_is_prime(97));
	printf("1151: %d\n", ft_is_prime(1151));
}
