/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:34:22 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/08 15:00:14 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
/*size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i = 0;
    if (!dest && !src)
        return NULL;
    while (i < n) {
        d[i] = s[i];
        i++;
    }
    return dest;
}*/
char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size +1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
int main(void)
{
    const char *str1 = "Hello, world!";
    const char *str2 = "42 is awesome!";
    const char *str3 = "";
    
    // Duplicar las cadenas
    char *dup1 = ft_strdup(str1);
    char *dup2 = ft_strdup(str2);
    char *dup3 = ft_strdup(str3);

    // Imprimir los resultados
    printf("Original: '%s', Duplicated: '%s'\n", str1, dup1);
    printf("Original: '%s', Duplicated: '%s'\n", str2, dup2);
    printf("Original: '%s', Duplicated: '%s'\n", str3, dup3);

    // Liberar la memoria asignada
    free(dup1);
    free(dup2);
    free(dup3);

    return 0;
}
*/
