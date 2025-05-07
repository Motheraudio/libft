/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:55:37 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 16:55:46 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	total;
	int	sign;

	i = 0;
	total = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	return (total * sign);
}
