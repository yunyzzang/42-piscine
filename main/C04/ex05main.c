#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int		main(void)
{
	char *p1 = "-123456";
	char *p2 = "11110001001000000";
	char *p3 = "-1e240";
	char *s = "--+-- -+0015 20";
	char *s1 = " 	+	-  FE";
	char *s2 = "---+-120t00";
	char *s3 = "FFFFFFFF";
	printf("%d\n", ft_atoi_base(p2, "01"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(p1, "0123456789"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(p3, "0123456789abcdef"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s,"0123456789"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s1,"01234567089ABCDEF"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s2,"0123456789ABCDEF"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s3,"01234567089ABCDEF"));

	return 0;
}
