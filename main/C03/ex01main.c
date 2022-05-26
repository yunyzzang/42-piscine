#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	*str1, *str2, *str3;
	int	a,b;

	str1 = "Hefefefefe";
	
	str2 = "Hefefwetter";
	str3 = "Hefeaefe";
	a=3;
	b=6;
	printf("expected: %d\n", strncmp(str1, str2,a));
	printf("yourse: %d\n\n", ft_strncmp(str1, str2,a));
	
	printf("expected: %d\n", strncmp(str1, str2,b));
        printf("yours: %d\n\n", ft_strncmp(str1, str2,b));
        
        printf("expected: %d\n", strncmp(str1, str3,b));
        printf("yours: %d\n", ft_strncmp(str1, str3,b));
}
