#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);


	char *add[7] = {
		"abc",
		"123",
		"def",
		"456",
		"ghi",
		"789",
		"AABBCCDDAABBCCDD"
	};
	char sep[] = "=-=";
	char *resul = ft_strjoin(3, add, sep);	
	printf("%p\n%s\n", resul, resul);
	return (0);
}
