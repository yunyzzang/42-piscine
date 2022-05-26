/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sum <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:40:16 by sum               #+#    #+#             */
/*   Updated: 2022/05/18 11:42:13 by sum              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	i;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	if (lend >= size || size == 0)
	{
		return (lens + size);
	}
	else
	{
		while (lend + i < size - 1 && src [i] != '\0')
		{
			dest[lend + i] = src[i];
			i++;
		}
		dest[lend + i] = '\0';
		return (lend + lens);
	}
}

/*int				main(void)
{
	char			dest[15] = "Do you want ";
	char			src[20] = "add your letter?";
	size_t	size, size1, size2;
	
	size=0;
	size1 = 10;
	size2 = 20;
	printf("\ndest size: %d, dest len: %d, src len: %d\n\n" , 15, 12, 16);
	
	
	printf("size: %ld\n",size);
	printf("expected : %d\n", 16);
	printf("yours %d\n\n", ft_strlcat(dest, src, size));
	
	printf("size: %ld\n",size1);
	printf("expected: %d\n", 26);
	printf("yours: %d\n\n", ft_strlcat(dest, src, size1));
	
	printf("size: %ld\n",size2);
	printf("expected: %d\n", 28);
	printf("yours: %d\n", ft_strlcat(dest, src, size2));

}*/
