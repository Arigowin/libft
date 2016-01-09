#include "libft.h"
#include <unistd.h>

void	ft_putstr_color(char *color, char *s)
{
	write(1, color, 1);
	write(1, s, ft_strlen(s));
	write(1, DEFAULT_COLOR, 1);
}
