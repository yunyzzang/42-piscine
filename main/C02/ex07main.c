#include <stdio.h>

char	*ft_strupcase(char *str);

int main (void)
{	
	char str[]="hello world";
	char str1[]="new york city is cool";
	char str2[]="time flies";
	printf("%s: \n",str);
	printf("%s\n\n",ft_strupcase(str));
	printf("%s: \n",str1);
	printf("%s\n\n",ft_strupcase(str1));
	printf("%s: \n",str2);
	printf("%s\n",ft_strupcase(str2));
}
