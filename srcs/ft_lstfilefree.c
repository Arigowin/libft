
#include "libft.h"
#include <stdlib.h>

void	ft_lstfilefree(t_file **file)
{
	free((*file)->data);
	(*file)->fd = 0;
	free(*file);
	file = NULL;
}
