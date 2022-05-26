/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:10:06 by sum               #+#    #+#             */
/*   Updated: 2022/05/25 12:36:37 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	operator(int a, char *o, int b)
{
	int		result;
	int		(*oper[5])(int, int);

	result = 0;
	oper[0] = &add;
	oper[1] = &sub;
	oper[2] = &mul;
	oper[3] = &div;
	oper[4] = &mod;
	if (*o == '+')
		result = oper[0](a, b);
	else if (*o == '-')
		result = oper[1](a, b);
	else if (*o == '*')
		result = oper[2](a, b);
	else if (*o == '/')
		result = oper[3](a, b);
	else if (*o == '%')
		result = oper[4](a, b);
	return (result);
}

void	do_op(char *a, char *c, char *b)
{
	int	n;
	int	m;
	int	result;

	result = 0;
	n = ft_atoi(a);
	m = ft_atoi(b);
	if (!(*c == '+' || *c == '-' || *c == '*' || *c == '/' || *c == '%' ))
		ft_putchar('0');
	else if (*c == '/' && m == 0)
		ft_putstr("Stop : division by zero");
	else if (*c == '%' && m == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		result = operator(n, c, m);
		ft_putnbr(result);
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
