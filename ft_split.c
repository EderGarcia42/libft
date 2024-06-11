/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:37:58 by edegarci          #+#    #+#             */
/*   Updated: 2024/06/10 15:40:17 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	
Divide una cadena en subcadenas basadas en un delimitador específico, 
manejando la memoria adecuadamente y liberándola en caso de errores. 
*/

/* 
Contar cuántas palabras hay en s separadas por c.
1)	Recorre la cadena s carácter por carácter usando un puntero.
2)	Cada vez que encuentra un carácter que no es c, incrementa el contador 
	de palabras count y avanza hasta encontrar c o el final de la cadena. 
*/
static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

/* 
Obtener la longitud de una palabra desde un punto específico en s.
1)	Cuenta cuántos caracteres hay hasta encontrar c o el final de la cadena. 
*/
static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

/* 
Liberar la memoria de un array de cadenas en caso de error.
1) Libera cada subcadena y luego libera el array. 
*/
static void	free_array(char **array, size_t count)
{
	while (count > 0)
	{
		count--;
		free(array[count]);
	}
	free(array);
}

/*     
Dividir s en subcadenas y almacenarlas en array.
1)	Recorre s y cuando encuentra una palabra, la copia en array usando ft_substr.
2)	Si falla la asignación de memoria, libera todo el array y retorna NULL.
3)	Al final, asegura que el último elemento del array sea NULL.
*/
static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < words_count)
	{
		while (*s && *s == c)
			s++;
		word_len = get_word_len(s, c);
		array[i] = ft_substr(s, 0, word_len);
		if (!array[i])
		{
			free_array(array, i);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

/* 
Función principal que coordina todo el proceso.
1)	Verifica si s es NULL.
2)	Cuenta las palabras en s usando count_words.
3)	Reserva memoria para array con malloc.
4)	Llama a split para llenar array con las subcadenas.
5)	Retorna array. */
char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!split(s, c, array, words))
		return (NULL);
	return (array);
}

/* int	main(void)
{
	char	**res;
	char	*str = "Prueba con espacios";
	char	delimiter = ' ';
	size_t	i;

	res = ft_split(str, delimiter);
	if (res == NULL)
	{
		printf("Error: Falló la asignación de memoria\n");
		return 1;
	}

	i = 0;
	while (res[i])
	{
		printf("Resultado %zu: %s\n", i, res[i]);
		i++;
	}
	free_array(res, i);

	return (0);
} */
/* COMPILAR */
/* gcc -o ft_split_test ft_split.c -L. -lft */
/* ./ft_split_test */
