/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:25:47 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:01 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}

/* int main()
{
	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");
	t_list *new = ft_lstnew("0");

	node1 -> next = node2;
	node2 -> next = node3;

	ft_lstadd_back(&node1, new);

	while (node1)
	{
		printf("%s\n", (char *)node1 -> content);
		node1 = node1 -> next;
	}
} */