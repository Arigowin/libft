/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:30:01 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/09 18:11:42 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst && src)
	{
		pdst = (unsigned char *)dst;
		psrc = (unsigned char *)src;
		while (n > 0)
		{
			*pdst = *psrc;
			if (*psrc == (unsigned char)c)
				return ((void *)(pdst + 1));
			pdst++;
			psrc++;
			n--;
		}
	}
	return (NULL);
}
