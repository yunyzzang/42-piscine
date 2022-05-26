#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{	
	printf("-2147483648: \n\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "dsfiea");
	printf("\n");
	ft_putnbr_base(-2147483648, "poneyvif");
}
