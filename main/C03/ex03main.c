#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	dest[50] = "Hello world?";
	char	dest1[50] = "Hello world?";
	char		*src;
	int	size;

	size = 5;
	src = " Here i am!";
	printf("expected: %s\n", strncat(dest, src, size));
	printf("yours: %s\n", ft_strncat(dest1, src, size));
}
