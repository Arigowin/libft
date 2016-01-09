/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_properstrjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 13:12:36 by dolewski          #+#    #+#             */
/*   Updated: 2016/01/06 13:12:38 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strproperjoin(char **dest, char *src)
{
	char			*tmp;

	if (*dest == NULL)
	{
		ft_strdel(dest);
		if (!(*dest = ft_strdup(src)))
			return (-1);
	}
	else
	{
		if (!(tmp = ft_strjoin(*dest, src)))
			return (-1);
		ft_strdel(dest);
		if ((*dest = ft_strdup(tmp)) == NULL)
			return (-1);
		ft_strdel(&tmp);
	}
	return (0);
}
