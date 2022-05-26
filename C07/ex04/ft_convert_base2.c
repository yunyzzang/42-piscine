/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:03:19 by sum               #+#    #+#             */
/*   Updated: 2022/05/22 15:03:20 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	valid_check(char *base);
int	nub_check(char check, char *base);
int	valid_check2(char *base);
int	ft_atoi_base(char *str, char *base);

int	nub_count(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb >= ft_strlen(base))
	{
		nb /= ft_strlen(base);
		i++;
	}
	++i;
	return (i);
}	

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		i;
	int		len;
	char	*array;

	i = 0;
	if (ft_atoi_base(nbr, base_from) < 0)
	{
		nb = -ft_atoi_base(nbr, base_from);
		i = 1;
	}
	else
		nb = ft_atoi_base(nbr, base_from);
	len = nub_count(nb, base_to) + i;
	array = malloc(sizeof(char) * (1 + len));
	if (valid_check(base_to) != 1)
		return (0);
	while (len--)
	{
		array[len] = base_to[nb % ft_strlen(base_to)];
		nb /= ft_strlen(base_to);
	}
	if (ft_atoi_base(nbr, base_from) < 0)
		array[0] = '-';
	return (array);
}

/*int	main(void)
{
	char *p = "-12345";
	char *p1 = "+---+2560ab";
	char *p2 = "11110001001000000";
	char *p3 = "-1e240";

	printf("-12345 from 10-base to 16-base: \n");
	printf("%s\n\n", ft_convert_base(p, "0123456789","0123456789abcdef"));
	fflush(stdout);
	
	printf("11110001001000000 from 2-base to 10-base: \n");
	printf("%s\n\n", ft_convert_base(p2, "01","0123456789"));
	fflush(stdout);
	
	printf("+---+2560ab from 10-base to 16-base: \n");
	printf("%s\n\n", ft_convert_base(p1, "0123456789","0123456789abcdef"));
	fflush(stdout);
	
	printf("-1e240 from 16-base to 10-base: \n");
	printf("%s\n\n", ft_convert_base(p3, "0123456789abcdef", "0123456789"));
	fflush(stdout);
}*/
