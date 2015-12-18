/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilenew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:17:33 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/18 15:16:18 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_file				*ft_lstfilenew(char *data, int fd)
{
	t_file *new;

	new = (t_file *)malloc(sizeof(t_file));
	if (new != NULL)
	{
		if (data == NULL)
			new->data = NULL;
		else
			ft_memcpy(new->data, data, ft_strlen(data));
		new->fd = fd;
	}
	return (new);
}
