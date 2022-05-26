#include <stdio.h>

char    *ft_strlowcase(char *str);

int main (void)
{	
	char str[]="THIS IS TEST";
	char str1[]="PYTHON IS MUCH EASIER";
	char str2[]="HELLO NEW WORLD";
	printf("%s: \n",str);
	printf("%s\n\n",ft_strlowcase(str));
	printf("%s: \n",str1);
	printf("%s\n\n",ft_strlowcase(str1));
	printf("%s: \n",str2);
	printf("%s\n",ft_strlowcase(str2));
}
