#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 841;
	b = 74;
	printf("Divide %d into %d; \n", a, b);
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);

	printf("the answer is: %d\n", a);
	printf("remainder is: %d\n", b); 
}

