/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:26:21 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:04 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}

/* int main()
{
	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");

	node1 -> next = node2;
	node2 -> next = node3;

	ft_lstdelone(node1, free);

	while (node1)
	{
		printf("%s\n", (char *)node1 -> content);
		node1 = node1 -> next;
	}
} */