/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:14:51 by sum               #+#    #+#             */
/*   Updated: 2022/05/18 17:14:53 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	valid_check(char *base)
{
	int	rt;
	int	i;

	rt = 1;
	if (*base == 0 || ft_strlen (base) <= 1)
	{
		rt = 0;
	}
	while (*base)
	{
		if (*base < 32 || *base == 127 || *base == '+' || *base == '-')
		{	
			rt = 0;
		}
		base++;
	}
	i = 1;
	while (base[i] != '\0')
	{
		if (base[i - 1] == base[i])
			rt = 0;
		i++;
	}
	return (rt);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = ft_strlen (base);
	nb = nbr;
	if (valid_check(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
/*int		main(void)
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
}*/
