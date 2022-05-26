#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void){
        char dest[] = "Hello World";
	char scr[] = "kiwi";
	unsigned int a,b;
	a=4;
	b=7;
	printf("expected: %s\n",strncpy (dest, scr,a));
        printf("yours: %s\n\n",ft_strncpy (dest, scr,a));
        printf("expected: %s\n",strncpy (dest, scr,b));
	printf("yours: %s",ft_strncpy (dest, scr,b));
}

