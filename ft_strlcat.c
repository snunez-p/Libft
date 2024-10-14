/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:49:46 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/01 15:13:34 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = strlen(dst);
	lonsrc = strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}

/*int main(void)
{
    char dest[20] = "Hello";
    const char *src = " World!";
    size_t dstsize = 20;
    size_t result;

    printf("Before ft_strlcat:\n");
    printf("Destination: '%s'\n", dest);
    printf("Source: '%s'\n", src);

    result = ft_strlcat(dest, src, dstsize);

    printf("\nAfter ft_strlcat:\n");
    printf("Destination: '%s'\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}*/
