/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:29:38 by snunez-p          #+#    #+#             */
/*   Updated: 2024/09/30 15:00:27 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + (97 - 65));
	}
	return (c);
}
/*
int main()
{
    char i = 'H'; 

    char res = ft_tolower((unsigned char) i);
    printf("%c\n", res);

    return (0);
}
*/
