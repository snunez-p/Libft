/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:40:19 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 14:33:34 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	int					i;

	d = (unsigned char *)dest;
	i = 0;
	if (!(d == NULL && s == NULL))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
    char str[10] = "viviana";
    char    dest[10];
    ft_memcpy(dest, str, 4);
    printf("%s",dest);
    return(0);
}
*/
