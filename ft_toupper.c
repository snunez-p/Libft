/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:12:53 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 14:58:17 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - (97 - 65));
	}
	return (c);
}
/*
int main()
{
    char i = 'j';
    char res = ft_toupper((unsigned char) i);
    printf("%c\n", res);

    return (0);
}
*/
