/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:23:59 by edegarci          #+#    #+#             */
/*   Updated: 2024/05/22 15:06:20 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}

/* int main (int)
{
	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");
	t_list *node4 = ft_lstnew("d");
	t_list *node5 = ft_lstnew("e");
	int len;

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = node4;
	node4 -> next = node5;
	node5 -> next = NULL;

	len = ft_lstsize(node1);

	printf("cantidad de nodos: %d\n", len);
	return(0);
} */