/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:05:35 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:05:37 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char chars1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (chars1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	char	*newstring;

	if (!s1 || !set)
		return (NULL);
	s1len = ft_strlen(s1);
	if (s1len == 0)
		return (ft_strdup(""));
	i = 0;
	j = s1len - 1;
	while (s1[i] && isset(s1[i], set))
		i++;
	while (j > 0 && isset(s1[j], set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	newstring = (char *)malloc((j - i + 2) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	ft_strlcpy(newstring, s1 + i, j - i + 2);
	return (newstring);
}
