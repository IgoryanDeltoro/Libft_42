/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:31:10 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/06 12:37:09 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*re;

	re = 0;
	if (c == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			re = (char *)s;
		s++;
	}
	if (re)
		return (re);
	return (0);
}
