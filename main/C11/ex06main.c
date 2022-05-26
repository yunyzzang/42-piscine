#include <stdio.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab);;
int main()
{
	char **arr = (char **)malloc(sizeof(char *) * 7);
	arr[0] = "abc";
	arr[1] = "b";
	arr[2] = "aa";
	arr[3] = "fde";
	arr[4] = "ccc";
	arr[5] = "abcd";
	arr[6] = 0;
	
	ft_sort_string_tab(arr);

	for (int i = 0; arr[i]; i++)
		printf("%s\n", arr[i]);
}
