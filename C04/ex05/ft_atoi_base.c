/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:13:00 by sum               #+#    #+#             */
/*   Updated: 2022/05/20 12:13:03 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

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
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (ft_strlen(base) <= 1)
			return (0);
		if (base[i] < 33 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

int	nub_check(char check, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == check)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	if (valid_check(base) != 1)
		return (0);
	while (*str < 33 || *str == 127)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (nub_check(*str, base) != -1)
	{
		value *= ft_strlen(base);
		value += nub_check(*str, base);
		str++;
	}					
	return (sign * value);
}
/*int		main(void)
{
	char *p1 = "-123456";
	char *p2 = "11110001001000000";
	char *p3 = "-1e240";
	char *s = "--+-- -+0015 20";
	char *s1 = " 	+	-  FE";
	char *s2 = "---+-120t00";
	char *s3 = "FFFFFFFF";
	printf("%d\n", ft_atoi_base(p1, "01"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(p2, "0123456789"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(p3, "0123456789abcdef"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s,"0123456789"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s1,"01234567089ABCDEF"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s2,"0123456789ABCDEF"));
	fflush(stdin);
	printf("%d\n", ft_atoi_base(s3,"01234567089ABCDEF"));

	return 0;
}*/
