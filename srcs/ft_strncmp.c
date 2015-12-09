/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:22:23 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/09 18:30:28 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char *ps1;
	const unsigned char *ps2;

	if (n == 0)
		return (0);
	i = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (ps1[i] && ps1[i] == ps2[i] && i < n)
		i++;
	if (i >= n)
		return (0);
	return (ps1[i] - ps2[i]);
}
