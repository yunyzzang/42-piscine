#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	*str;
	char	*str1;

	str = "^@\rhe\tllo	w\norl\vd\e";
	str1 = "   Coucou\ntu v	as bien ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	ft_putstr_non_printable(str1);
	}


