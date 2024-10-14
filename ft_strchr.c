/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:16:31 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 16:06:41 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
int main()
{
    const char *i = "peruanos";
    char character = 'l';
    char *resultado = ft_strchr(i, character);
    if (resultado != NULL)
    {
        printf("Carácter '%c' encontrado en: %s\n", character, resultado);
    } 
}
*/
