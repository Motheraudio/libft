/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:04:52 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:04:53 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((char)s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
