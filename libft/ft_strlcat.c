/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:05:08 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:05:10 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	dstsize;
	size_t	totalsize;
	size_t	i;

	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dst);
	totalsize = srcsize + dstsize;
	i = 0;
	if (size <= dstsize)
		return (srcsize + size);
	while (src[i] && dstsize < size - 1)
	{
		dst[dstsize] = src[i];
		i++;
		dstsize++;
	}
	dst[dstsize] = '\0';
	return (totalsize);
}
