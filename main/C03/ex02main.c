#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	dest[80] = "hello world?";
	char	dest1[80] = "hello world?";
	char	*src;

	src = " here i am!";
	printf("expected: %s\n", strcat(dest, src));
	printf("yours: %s\n", ft_strcat(dest1, src));
}

