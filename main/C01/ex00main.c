#include <stdio.h>

void	ft_ft(int *nbr);

int main (void){
	int *nbr;
	int a=415;
	nbr=&a;
	ft_ft(nbr);
	printf("%d",a);}

