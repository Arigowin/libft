#include "libft.h"

static void		ft_putunbr(char *color, unsigned int n)
{
	if (n >= 10)
		ft_putunbr(color, n / 10);
	ft_putchar_color(color, (n % 10) + '0');
}

void			ft_putnbr_color(char *color, int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putunbr(color, -n);
	}
	else
		ft_putunbr(color, n);
}
