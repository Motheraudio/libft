/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:04:26 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/24 18:04:28 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	charc;

	ptr = (unsigned char *) b;
	charc = (unsigned char) c;
	while (len > 0)
	{
		*ptr = charc;
		ptr++;
		len--;
	}
	return (b);
}
