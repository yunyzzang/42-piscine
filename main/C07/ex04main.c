#include <stdio.h>

int	nub_count (int	nb, char *base);
char	*convert_array(int nb, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	ft_strlen(char *str);
int	valid_check(char *base);
int	nub_check(char check, char *base);
int	ft_atoi_base(char *str, char *base);


int	main(void)
{
	char *p = "-12345";
	char *p1 = "+---+2560ab";
	char *p2 = "11110001001000000";
	char *p3 = "-1e240";

	printf("-12345 from 10-base to 16-base: \n");
	printf("%s\n\n", ft_convert_base(p, "0123456789","0123456789abcdef"));
	fflush(stdout);
	
	printf("11110001001000000 from 2-base to 10-base: \n");
	printf("%s\n\n", ft_convert_base(p2, "01","0123456789"));
	fflush(stdout);
	
	printf("+---+2560ab from 10-base to 16-base: \n");
	printf("%s\n\n", ft_convert_base(p1, "0123456789","0123456789abcdef"));
	fflush(stdout);
	
	printf("-1e240 from 16-base to 10-base: \n");
	printf("%s\n\n", ft_convert_base(p3, "0123456789abcdef", "0123456789"));
	fflush(stdout);
}
