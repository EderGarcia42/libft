/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:00:47 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/10 14:05:22 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	size_t		l;

	last = NULL;
	l = 0;
	while (s[l] != '\0')
		l++;
	while (l > 0)
	{
		if (s[l - 1] == c)
		{
			last = &s[l - 1];
			break ;
		}
		l--;
	}
	return (last);
}
