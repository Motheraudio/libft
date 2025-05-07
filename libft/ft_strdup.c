/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:04:56 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:04:57 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy (copy, s, len + 1);
	return (copy);
}
