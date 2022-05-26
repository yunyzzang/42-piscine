#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str);

int	main(void)
{
	char *str, *str2;

	str = "Hello ";
	str2 = "Pineapple";
	printf("expected: %lu\n", strlen(str));
	printf("yours: %d\n\n", ft_strlen(str));
        printf("expected: %lu\n", strlen(str2));
        printf("yours: %d\n", ft_strlen(str2));
}
