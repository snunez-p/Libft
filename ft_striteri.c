/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:58:50 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 20:22:01 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void example_func(unsigned int i, char *c) {
    // Convierte los caracteres en posiciones pares a mayúsculas
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;  // Convierte a mayúscula
}

int main(void) {
    // Cadenas de prueba
    char str1[] = "hello world";
    char str2[] = "ft_striteri";
    char str3[] = "example text";
    
    // Aplicar ft_striteri con la función example_func
    ft_striteri(str1, example_func);
    ft_striteri(str2, example_func);
    ft_striteri(str3, example_func);

    // Imprimir los resultados
    printf("Transformed str1: %s\n", str1);
    printf("Transformed str2: %s\n", str2);
    printf("Transformed str3: %s\n", str3);

    return 0;
}*/
