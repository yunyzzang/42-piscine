#include <stdio.h>

int     ft_str_is_numeric(char *str);

int main (void)
{	
	char str[]="heoa2352wADZai";
	char str1[]="12334454367";
	char str2[]="+$*%#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_numeric(str));
	printf("%s: %d\n",str1,ft_str_is_numeric(str1));
	printf("%s: %d\n",str2,ft_str_is_numeric(str2));
	printf("%s: %d\n",str3,ft_str_is_numeric(str3));}
