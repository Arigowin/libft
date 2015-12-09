/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:15:05 by dolewski          #+#    #+#             */
/*   Updated: 2015/11/30 16:37:19 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ps1;

	ps1 = s1;
	while (*s1)
		s1++;
	while (n > 0 && *s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
		n--;
	}
	*s1 = '\0';
	return (ps1);
}
