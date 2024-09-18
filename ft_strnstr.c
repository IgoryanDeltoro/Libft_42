/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:26:41 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/06 14:52:21 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s;
	char	*s_end;
	size_t	litt_len;

	s = (char *)big;
	s_end = (char *)big + len - 1;
	litt_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (s < s_end)
	{
		if (0 == ft_strncmp(s, little, litt_len))
			return (s);
		s++;
	}
	return (0);
}
