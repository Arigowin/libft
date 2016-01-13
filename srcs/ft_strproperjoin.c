/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strproperjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 11:59:58 by dolewski          #+#    #+#             */
/*   Updated: 2016/01/13 12:00:17 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strproperjoin(char *s1, char *s2)
{
	char *tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		tmp = ft_strdup(s2);
		ft_strdel(&s1);
	}
	else if (!s2)
	{
		tmp = ft_stdup(s1);
		ft_strdel(&s2);
	}
	else
	{
		tmp = ft_strjoin(s1, s2);
		ft_strdel(&s1);
		ft_strdel(&s2);
	}
	return (tmp);
}
