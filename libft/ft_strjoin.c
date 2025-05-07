/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:05:02 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:05:03 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, len1 + 1);
	ft_strlcpy(newstr + len1, s2, len2 + 1);
	return (newstr);
}
