#include <stdio.h>

int	ft_str_is_printable(char *str);

int		main(void)
{
	char *str1;
	char *str2;

	str1 = "Hell0";
	str2 = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str1));
	printf("should be 0: %d\n", ft_str_is_printable(str2));
}
