/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilenew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:17:33 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/19 14:10:24 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

t_file				*ft_lstfilenew(char *data, int fd)
{
	t_file *new;

	new = (t_file *)malloc(sizeof(t_file));
	if (new != NULL)
	{
		printf("ddd\n");
		printf("%s\n", data);
		if (data == NULL)
			new->data = NULL;
		else
			ft_memcpy(new->data, data, ft_strlen(data));
		printf("ddd\n");
		printf("%s\n", new->data);
		new->fd = fd;
	}
	return (new);
}
