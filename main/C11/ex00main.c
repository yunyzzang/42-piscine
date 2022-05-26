#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		main(void)
{
	int		tab[1337];
	int		i;

	i = 0;
	while (i <= 1337)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);
}


