#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int main (void)
{	
	char str[]="AOELZZEI";
	char str1[]="asdklzDeib";
	char str2[]="+$*wew#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_uppercase(str));
	printf("%s: %d\n",str1,ft_str_is_uppercase(str1));
	printf("%s: %d\n",str2,ft_str_is_uppercase(str2));
	printf("%s: %d\n",str3,ft_str_is_uppercase(str3));}
