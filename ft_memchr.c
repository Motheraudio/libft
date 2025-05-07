/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:04:04 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:04:06 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scopy;
	size_t			i;

	scopy = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*scopy == (unsigned char) c)
			return ((void *) scopy);
		scopy++;
		i++;
	}
	return (NULL);
}
