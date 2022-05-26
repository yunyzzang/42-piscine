#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main (void)
{	
	char str[]="salut, comment tu vas ? 42mots quarante-duex; cinquante+et+un";
	char str1[]="hello? is there skin-friendly cream?";
	char str2[]="this is how to work [first, choose your 'favorit' color]";
	printf("%s\n\n",ft_strcapitalize(str));
	printf("%s\n\n",ft_strcapitalize(str1));
	printf("%s\n",ft_strcapitalize(str2));
}
