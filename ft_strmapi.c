/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:03:41 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 20:07:47 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
size_t ft_strlen(const char *s) {
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}*/
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char example_func(unsigned int i, char c) {
    // Cambia los caracteres en posiciones pares a mayúsculas
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return c - 32;  // Convierte a mayúscula
    return c;
}
int main(void) {
    const char *str1 = "hello world";
    const char *str2 = "ft_strmapi";
    const char *str3 = "abcdefghijklmnopqrstuvwxyz";

    // Aplicar ft_strmapi con la función example_func
    char *result1 = ft_strmapi(str1, example_func);
    char *result2 = ft_strmapi(str2, example_func);
    char *result3 = ft_strmapi(str3, example_func);

    // Imprimir los resultados
    if (result1)
        printf("Original: '%s', Transformed: '%s'\n", str1, result1);
    if (result2)
        printf("Original: '%s', Transformed: '%s'\n", str2, result2);
    if (result3)
        printf("Original: '%s', Transformed: '%s'\n", str3, result3);

    // Liberar memoria asignada
    free(result1);
    free(result2);
    free(result3);

    return 0;
}*/
