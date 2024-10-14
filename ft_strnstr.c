/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:49:17 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/01 15:22:52 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			while (little[j] != '\0')
			{
				i + j < len && big[i + j] == little[j];
			}
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
	}
	return (NULL);
	i++;
}
/*
int main ()
{
    const char *big = "dia cal mio";
    const char *little = "dia";
    char *res;
    res = ft_strnstr(big, little, 54);
    if (res != NULL)
        printf("Subcadena encontrada: %s\n", res);
    else
        printf("Subcadena no encontrada\n");
    return (0)
}
*/
