/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:08:06 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/11 12:08:04 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

/*
static int	count_char(int num )
{
	int	count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num *(-1);
			count++;
		}
		while (num != 0)
		{
			num =  num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}
*/
char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = count_char(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = ((nbr % 10) + '0');
		nbr /= 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	int		number;
	char	*result;

	printf("Ingresa un número: ");
	scanf("%d", &number);
	result = ft_itoa(number);
	if (result != NULL)
	{
		printf("El número %d como cadena es: %s\n", number, result);
		free(result);
	}
	else
	{
		printf("Error al convertir el número.\n");
	}
	return (0);
}
*/
