#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void){
        char dest[] = "Hello World";
	char scr[] = "kiwi";
	char scr1[] = "pineapple";
	unsigned int a = 4;
	unsigned int b=7;
        printf("expect: %d\n",ft_strlcpy (dest, scr,a));
        printf("yours: %ld\n",strlcpy (dest, scr,a));
	printf("copied result: %s\n", dest);
	printf("expect: %ld\n",strlcpy (dest, scr1,b));
	printf("yours: %d\n",ft_strlcpy (dest, scr1,b));
	printf("copied result: %s\n", dest);
	}

