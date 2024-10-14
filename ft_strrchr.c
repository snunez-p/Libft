/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:32:00 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 16:15:36 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*ult = NULL;

	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			ult = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)ult);
}
/*
int main()
{
    const char *i = "nico es gay";
    char car = 'o';

    char *res = ft_strrchr(i, car);
    if (res != NULL)
    {
        printf("Última aparición del carácter '%c' en: %s\n", car, res);
    }
    return 0;
}
*/
