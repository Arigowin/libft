#include "libft.h"
#include <unistd.h>

void	ft_putchar_color(char *color, char c)
{
	write(1, color, 1);
	write(1, &c, 1);
	write(1, DEFAULT_COLOR, 1);
}
