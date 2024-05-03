/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:05:51 by edegarci          #+#    #+#             */
/*   Updated: 2024/05/03 15:27:47 by edegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/****************************************************************************/
/*                              FT_ISALPHA.C                                */
/****************************************************************************/
/* con argumentos */
int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 2)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = ft_isalpha(c);
	printf("ft_isalpha %c %d\n", c, i);
	i = isalpha(c);
	printf("isalpha %c %d\n", c, i);
	return (0);
}

/****************************************************************************/
/*                              FT_ISDIGIT.C                                */
/****************************************************************************/
/* con argumentos */
int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 2)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = ft_isdigit(c);
	printf("ft_isdigit %c %d\n", c, i);
	i = isdigit(c);
	printf("isdigit %c %d\n", c, i);
	return (0);
}

/****************************************************************************/
/*                              FT_ISALNUM.C                                */
/****************************************************************************/
/* con argumentos */
int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 2)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = ft_isalnum(c);
	printf("ft_isalnum %c %d\n", c, i);
	i = isalnum(c);
	printf("isalnum %c %d\n", c, i);
	return (0);
}

/****************************************************************************/
/*                              FT_ISPRINT.C                                */
/****************************************************************************/
/* con argumentos */
int	main(int argc, char **argv)
{
	char	c;
	int		i;

	if (argc != 2)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	c = argv[1][0];
	i = ft_isprint(c);
	printf("ft_isprint %c %d\n", c, i);
	i = isprint(c);
	printf("isprint %c %d\n", c, i);
	return (0);
}

/****************************************************************************/
/*                              FT_TOUPPER.C                                */
/****************************************************************************/
/* Una letra */
int	main(void)
{
	int		c;
	char	letra;

	letra = 'a';
	c = ft_toupper(letra);
	printf("En mayúscula es: %c\n", c);
	return (0);
}

/* Una palabra */
void convertir(char *word)
{
	while (*word)
	{
		*word = ft_toupper(*word);
		word++;
	}
}

/* con argumentos */
int main(void)
{
	char	word[] = "hola"; // Si no se declara en la misma linea no va.

	convertir(word);
	printf("En mayúsculas es: %s\n", word);
	return (0);
}

/****************************************************************************/
/*                              FT_TOLOWER.C                                */
/****************************************************************************/
/* Una letra */
int	main(void)
{
	int		c;
	char	letra;

	letra = 'a';
	c = ft_toupper(letra);
	printf("En minúscula es: %c\n", c);
	return (0);
}

/* Una palabra */
void convertir(char *word)
{
	while (*word)
	{
		*word = ft_tolower(*word);
		word++;
	}
}

/* con argumentos */
int main(void)
{
	char	word[] = "HOLA"; // Si no se declara en la misma linea no va.

	convertir(word);
	printf("En minúsculas es: %s\n", word);
	return (0);
}

/****************************************************************************/
/*                              FT_STRLEN.C                                 */
/****************************************************************************/
int	main(void)
{
	char	*str;

	str = "Let's go!";
	printf("El número de carácteres es: %zu\n", ft_strlen(str));
	return (0);
}

/****** con argumentos *******/
int	main(int argc, char **argv)
{
	char	*s;
	size_t	len;

	if (argc != 2)
	{
		printf("Error en número de argumentos");
		return (0);
	}
	s = argv[1];
	len = ft_strlen(s);
	printf("%zu\n", len);
	len = strlen(s);
	printf("%zu\n", len);
	return (0);
}

/****************************************************************************/
/*                              FT_STRNCMP.C                                */
/****************************************************************************/

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "ABCDE";
	s2 = "ABCDEF";
	n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
/* con argumentos */
int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	len;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	len = ft_strlen(s1);
	i = ft_strncmp(s1, s2, len);
	printf("ft_strncmp %s %s %zu\n", s1, s2, i);
	i = strncmp(s1, s2, len);
	printf("strncmp %s %s %zu\n", s1, s2, i);
	return (0);
}


/****************************************************************************/
/*                              FT_STRLCPY.C                                */
/****************************************************************************/
int	main(void)
{
	const char	*original = "EJERCICIO STRLCPY";
	char		copia[10];

	ft_strlcpy(copia, original, sizeof(copia));
	printf("Original: %s\n", original);
	printf("Copiado: %s\n", copia);
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	char	*dst1;
	size_t	dstsize;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dst = argv[1];
	dst1 = argv[1];
	src = argv[2];
	dstsize = ft_strlen(dst);
	i = ft_strlcpy(dst, src, dstsize);
	printf("ft_strlcpy %s %zu\n", dst, i);
	i = strlcpy(dst, src, dstsize);
	printf("strlcpy %s %zu\n", dst1, i);
	return (0);
}

/****************************************************************************/
/*                              FT_STRLCAT.C                                */
/****************************************************************************/
int	main(void)
{
	char src[] = " CAT";
	char dst[20] = "STRL";

	printf("Cadena original: %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("Cadena concatenada: %s\n", dst);
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	char	*dst1;
	size_t	dstsize;
	size_t	i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dst = argv[1];
	dst1 = argv[1];
	src = argv[2];
	dstsize = ft_strlen(dst);
	i = ft_strlcat(dst, src, dstsize);
	printf("ft_strlcat %s %s %zu %zu\n", dst, src, dstsize, i);
	i = strlcat(dst1, src, dstsize);
	printf("strlcat %s %s %zu %zu\n", dst1, src, dstsize, i);
	return (0);
}

/****************************************************************************/
/*                               FT_BZERO.C                                 */
/****************************************************************************/
int	main(void)
{
	char	str[] = "B ZERO!";
	size_t	n;

	n = 5;
	ft_bzero(str, n);
	printf("Después de bzero: %s\n", str);
	return (0);
}
/* con argumentos */
int	main(int argc, char **argv)
{
	void	*s;
	void	*s1;
	size_t	n;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s = argv[1];
	s1 = argv[1];
	n = atoi(argv[2]);
	ft_bzero(s, n);
	printf("ft_bzero%s %zu\n", s, n);
	bzero(s, n);
	printf("bzero%s %zu\n", s1, n);
	return (0);
}

/****************************************************************************/
/*                               FT_MEMSET.C                                */
/****************************************************************************/
int	main(void)
{
	char	str[] = "MEMSET";
	int		c;
	size_t	len;

	c = 'A';
	len = 5;
	ft_memset(str, c, len);
	printf("Después de memset: %s\n", str);
	return (0);
}
/* con argumentos */
int	main(int argc, char **argv)
{
	char	*b;
	char	*c;
	int		i;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	b = argv[1];
	c = argv[2];
	i = atoi(c);
	len = strlen(b);
	ft_memset(b, i, len);
	printf("ft_memset %s %zu\n", b, len);
	memset(b, i, len);
	printf("memset %s %zu\n", b, len);
	return (0);
}

/****************************************************************************/
/*                               FT_MEMCPY.C                                */
/****************************************************************************/
int	main(void)
{
	char	dest[] = "MEMCPY";
	char	src[] = "FT";
	size_t	len;

	len = 2;
	ft_memcpy(dest, src, len);
	printf("Después de memcpy: %s\n", dest);
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int		i;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dest = argv[1];
	src = argv[2];
	i = atoi(src);
	len = strlen(dest);
	ft_memcpy(dest, src, len);
	printf("ft_memcpy %s %zu\n", dest, len);
	memcpy(dest, src, len);
	printf("memcpy %s %zu\n", dest, len);
	return (0);
}

/****************************************************************************/
/*                              FT_MEMMOVE.C                                */
/****************************************************************************/
int main(void)
{
	char	src[] = "Origen";
	char	dst[] = "Destino";
	size_t	len;

	len = sizeof(src);
	printf("Antes\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Despues\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	dst = argv[1];
	src = argv[2];
	len = ft_strlen(src);
	printf("Antes\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	ft_memmove(dst, src, len);
	printf("Después\n");
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	return (0);
}

/****************************************************************************/
/*                              FT_MEMCMP.C                                 */
/****************************************************************************/
int	main(void)
{
	char	s1[] = "ABC";
	char	s2[] = "ABC";
	size_t	len;

	len = 3;
	printf("%d\n", ft_memcmp(s1, s2, len));
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	len;
	int		i;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	len = ft_strlen(s1);
	i = ft_memcmp(s1, s2, len);
	printf("ft_memcmp %s %s %zu %d\n", s1, s2, len, i);
	i = memcmp(s1, s2, len);
	printf("memcmp %s %s %zu %d\n", s1, s2, len, i);
	return (0);
}

/****************************************************************************/
/*                              FT_MEMCHR.C                                 */
/****************************************************************************/
int	main(void)
{
	char	*str;
	int		c;
	size_t	len;

	str = "MEMCHR";
	c = 'C';
	len = 6;
	printf("%s\n", ft_memchr(str, c, len));
	return (0);
}

/* con argumentos */
int	main(int argc, char **argv)
{
	char	*s;
	char	*c;
	size_t	len;

	if (argc != 3)
	{
		printf("Error de argumentos\n");
		return (0);
	}
	s = argv[1];
	c = argv[2];
	len = ft_strlen(s);
	printf("ft_memchr %s %s %zu\n", s, c, len);
	printf("%s\n", ft_memchr(s, *c, len));
	printf("memchr %s %s %zu\n", s, c, len);
	printf("%s\n", memchr(s, *c, len));
	return (0);
}
