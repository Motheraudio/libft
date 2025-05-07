/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:05:32 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:05:33 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*cpos;

	cpos = NULL;
	i = 0;
	while (s[i])
	{
		if ((char)s[i] == c)
			cpos = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (cpos);
}
