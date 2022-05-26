#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char			dest[15] = "Do you want ";
	char			src[20] = "add your letter?";
	size_t	size, size1, size2;
	
	size=0;
	size1 = 10;
	size2 = 20;
	printf("\ndest size: %d, dest len: %d, src len: %d\n\n" , 15, 12, 16);
	
	
	printf("size: %ld\n",size);
	printf("expected : %ld\n", strlcat(dest, src, size));
	//printf("yours %d\n\n", ft_strlcat(dest, src, size));
	
	printf("size: %ld\n",size1);
	printf("expected: %ld\n", strlcat(dest, src, size1));
	//printf("yours: %d\n\n", ft_strlcat(dest, src, size1));
	
	printf("size: %ld\n",size2);
	printf("expected: %ld\n", strlcat(dest, src, size2));
	//printf("yours: %d\n", ft_strlcat(dest, src, size2));

}

