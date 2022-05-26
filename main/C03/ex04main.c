#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	*str;
	char	*to_find;

	str = "Find this letter";
	to_find = "tthi";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "ette";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "t";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n\n", ft_strstr(str, to_find));
	to_find = "r";
	printf("expected: %s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
}

