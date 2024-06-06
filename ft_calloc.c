/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:28:11 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/06 15:39:48 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, count * size);
	return (ptr);
}

/* int	main(void)
{
	size_t	count;
	size_t	size;
	int		*array;
	size_t	i;

	count = 5;
	size = sizeof(int);
	array = ft_calloc(count, size);
	if (array == NULL)
	{
		printf("Error al asignar memoria\n");
		return (1);
	}
	printf("Array asignado con ft_calloc:\n");
	i = 0;
	while (i < count)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
} */
/* int	main(int argc, char **argv)
{
	size_t	count;
	size_t	size;
	int		*array;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	count = atoi(argv[1]);
	size = sizeof(int);
	array = ft_calloc(count, size);
	if (array == NULL)
	{
		printf("Error al asignar memoria\n");
		return (1);
	}
	printf("Array asignado con ft_calloc:\n");
	i = 0;
	while (i < count)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
} */