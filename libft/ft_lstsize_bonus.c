/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:32:47 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/28 17:32:49 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	len = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
