/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfileadd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:17:38 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/19 14:03:06 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void				ft_lstfileadd(t_file **lstfile, t_file *new)
{
	if (lstfile)
	{
		if (*lstfile && new)
		{
			new->next = (*lstfile);
			*lstfile = new;
		}
	}
}
