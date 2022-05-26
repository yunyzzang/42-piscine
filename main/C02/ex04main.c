#include <stdio.h>

int     ft_str_is_lowercase(char *str);

int main (void)
{	
	char str[]="heADZai";
	char str1[]="asdklzoeib";
	char str2[]="+$*wew#=!";
	char str3[]="";
	printf("heADZai: %d\n",ft_str_is_lowercase(str));
	printf("asdklzoeib: %d\n",ft_str_is_lowercase(str1));
	printf("+$*wew#=!: %d\n",ft_str_is_lowercase(str2));
	printf(" : %d\n",ft_str_is_lowercase(str3));}
