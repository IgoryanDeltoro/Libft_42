/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibondarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:26:46 by ibondarc          #+#    #+#             */
/*   Updated: 2024/09/09 10:32:05 by ibondarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_len;

	total_len = nmemb * size;
	if (nmemb == 0 && size == 0)
		return (NULL);
	result = malloc(total_len);
	if (!result)
		return (NULL);
	ft_memset(result, 0, total_len);
	return (result);
}
