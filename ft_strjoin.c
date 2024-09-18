/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:47:21 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/09 12:45:12 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		s1_len;
	int		s2_len;
	int		total_len;

	if (!*s1 && !*s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	result = (char *)malloc(total_len);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len);
	ft_strlcat(result, s2, total_len);
	return (result);
}
