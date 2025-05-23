/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:04:46 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:04:48 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcounter(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	char	*splitword(const char *s, char c)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	void	freetable(char **strarray, int words)
{
	while (words >= 0)
	{
		free(strarray[words]);
		words--;
	}
	free(strarray);
}

static	int	setwords(const char *s, char **strarray, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strarray[j] = splitword(&s[i], c);
			if (!strarray[j])
			{
				freetable(strarray, j);
				return (0);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	strarray[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**strarray;

	if (!s)
		return (NULL);
	strarray = (char **)malloc((wordcounter(s, c) + 1) * sizeof(char *));
	if (!strarray)
		return (NULL);
	if (!setwords(s, strarray, c))
		return (NULL);
	return (strarray);
}
