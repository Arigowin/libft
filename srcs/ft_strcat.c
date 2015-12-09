/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:02:36 by dolewski          #+#    #+#             */
/*   Updated: 2015/12/09 18:18:28 by dolewski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	lens1;
	int	i;

	i = 0;
	lens1 = 0;
	if (s1 && s2)
	{
		while (s1[lens1])
			lens1++;
		while (s2[i] != '\0')
		{
			s1[lens1] = s2[i];
			i++;
			lens1++;
		}
		s1[lens1] = '\0';
	}
	return (s1);
}
