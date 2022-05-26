#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void){
        char dest[20] = "banana";
        char scr[5] = "kiwi";
	char scr2[10] = "pineapple";
	printf("expected: %s\n",strcpy (dest, scr));
        printf("yours: %s\n\n",ft_strcpy (dest, scr));
        printf("expected: %s\n",strcpy (dest, scr2));
	printf("yours: %s",ft_strcpy (dest, scr2));
}

