#include <stdio.h>

int     ft_str_is_alpha(char *str);

int main (void)
{	
	char str[]="heowlodjvpeiwADZai";
	char str1[]="ei39vxjsp";
	char str2[]="+$*%#=!";
	char str3[]="";
	printf("%s: %d\n",str,ft_str_is_alpha(str));
	printf("%s: %d\n",str1,ft_str_is_alpha(str1));
	printf("%s: %d\n",str2,ft_str_is_alpha(str2));
	printf("%s: %d\n",str3,ft_str_is_alpha(str3));}
