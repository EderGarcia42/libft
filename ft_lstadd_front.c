/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:19:15 by edegarci          #+#    #+#             */
/*   Updated: 2024/05/21 17:24:21 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int main()
{
	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");
	t_list *new = ft_lstnew("0");

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;

	ft_lstadd_front(&node1, new);

	printf("%s\n", (char *)node1 -> content);
} */