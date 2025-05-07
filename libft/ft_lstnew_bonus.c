/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvcampo <alvcampo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:30:43 by alvcampo          #+#    #+#             */
/*   Updated: 2025/04/25 18:30:46 by alvcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *) malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
