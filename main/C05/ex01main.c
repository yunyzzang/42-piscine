#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void){	
	printf("-44! = %d\n",ft_recursive_factorial (-44));
	printf("0! = %d\n",ft_recursive_factorial (0));
	printf("5! = %d\n",ft_recursive_factorial (5));
	printf("8! = %d\n",ft_recursive_factorial (8));
	printf("10! = %d",ft_recursive_factorial (10));
}
