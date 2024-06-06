/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:47:33 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 16:04:46 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}

/* int	main(void)
{
	const char	*s1 = "   PRueba de cadena  ";
	const char	*set = " ";
	char		*trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str == NULL)
	{
		printf("Error: no se pudo recortar la cadena\n");
		return (1);
	}
	printf("Cadena original: \"%s\"\n", s1);
	printf("Cadena recortada: \"%s\"\n", trimmed_str);
	free(trimmed_str);
	return (0);
} */