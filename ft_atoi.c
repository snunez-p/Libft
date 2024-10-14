/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:39:40 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/07 14:30:46 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}
/*int main(void)
{
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "   +42";
    const char *str4 = "   -2147483648";
    const char *str5 = "4193 with words";
    const char *str6 = "words and 987";
    
    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);
    int num5 = ft_atoi(str5);
    int num6 = ft_atoi(str6);
    
    printf("ft_atoi(\"%s\") = %d\n", str1, num1);
    printf("ft_atoi(\"%s\") = %d\n", str2, num2);
    printf("ft_atoi(\"%s\") = %d\n", str3, num3);
    printf("ft_atoi(\"%s\") = %d\n", str4, num4);
    printf("ft_atoi(\"%s\") = %d\n", str5, num5);
    printf("ft_atoi(\"%s\") = %d\n", str6, num6);

    return 0;
}
*/
