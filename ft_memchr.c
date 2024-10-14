/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:44:34 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 16:38:29 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	i++;
	return (NULL);
}
/*
int main()
{
    char l[] = "murcielago";
    char c = 'i';
    char *res = (char *)ft_memchr(l, c, sizeof(l));
    if (res != NULL)
    {
        printf("Se encontró '%c' en la posición: %ld\n", c, res - l);
    }
    else
    {
        printf("No se encontró el carácter '%c'.\n", c);
    }

    return 0;
}
*/
