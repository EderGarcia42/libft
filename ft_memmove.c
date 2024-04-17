/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:25:48 by edegarci          #+#    #+#             */
/*   Updated: 2024/04/17 11:35:11 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	if (src_cpy > dst_cpy)
	{
		while (len--)
			*dst_cpy++ = *src_cpy++;
	}
	if (dst_cpy > src_cpy)
	{
		dst_cpy += len - 1;
		src_cpy += len - 1;
		while (len--)
			*dst_cpy-- = *src_cpy--;
	}
	return (dst);
}
