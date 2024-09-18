/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:31:12 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/09 10:54:59 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		s_len;

	s_len = ft_strlen(s);
	result = (char *)malloc(s_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s, s_len);
	return (result);
}
