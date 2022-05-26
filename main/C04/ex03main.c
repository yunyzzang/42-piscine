#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str);

int		main(void)
{
	char *str, *str2;

	str = " ---+--+1234abggg";
	printf("%d: %d\n", -1234,ft_atoi(str));
	str2= "      ----+---+++2300fesfss65+2";
	printf("%d: %d\n", -2300,ft_atoi(str2));

}

