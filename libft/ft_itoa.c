/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:57:30 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 16:57:33 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	decimalcounter(long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	int		decimals;
	char	*s;

	num = (long) n;
	decimals = decimalcounter(num);
	s = (char *)malloc((decimals + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		s[0] = '-';
	}
	if (num == 0)
		s[0] = '0';
	s[decimals] = '\0';
	decimals--;
	while (num > 0)
	{
		s[decimals] = (num % 10) + '0';
		num = num / 10;
		decimals--;
	}
	return (s);
}
