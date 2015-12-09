/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:58:26 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/09 18:17:14 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;
	size_t			i;

	i = 0;
	pb = (unsigned char *)b;
	while (i < len && b != NULL)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (pb);
}
