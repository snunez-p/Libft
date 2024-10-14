/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:06:03 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 19:37:44 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
size_t ft_strlen(const char *s) {
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

// ft_strchr: Busca el carácter c en la cadena s.
char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (*s == (char)c)
        return (char *)s;
    return NULL;
}

// ft_strlcpy: Copia hasta size-1 caracteres de src a dst y termina con '\0'.
size_t ft_strlcpy(char *dst, const char *src, size_t size) {
    size_t i = 0;
    while (src[i] && i + 1 < size) {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = '\0';
    while (src[i])
        i++;
    return i;
}
*/
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	strat;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		strat = 0;
		end = ft_strlen(s1);
		while (s1[strat] && ft_strchr(set, s1[strat]))
			strat++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > strat)
			end--;
		str = (char *)malloc(sizeof(char) * (end - strat + 1));
		if (str)
			ft_strlcpy(str, &s1[strat], end - strat + 1);
	}
	return (str);
}
/*
int main(void) {
    const char *str1 = "  Hello, World!  ";
    const char *set1 = " ";
    const char *str2 = "xy42xy42xy";
    const char *set2 = "xy";
    const char *str3 = "42 is awesome!";
    const char *set3 = "0123456789";
    
    // Pruebas con distintas combinaciones de cadenas y sets
    char *trimmed1 = ft_strtrim(str1, set1);
    char *trimmed2 = ft_strtrim(str2, set2);
    char *trimmed3 = ft_strtrim(str3, set3);

    // Imprimir los resultados
    if (trimmed1)
        printf("Original: '%s', Trimmed: '%s'\n", str1, trimmed1);
    if (trimmed2)
        printf("Original: '%s', Trimmed: '%s'\n", str2, trimmed2);
    if (trimmed3)
        printf("Original: '%s', Trimmed: '%s'\n", str3, trimmed3);

    // Liberar la memoria asignada
    free(trimmed1);
    free(trimmed2);
    free(trimmed3);

    return 0;
}
*/
