/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:58:29 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/08 15:28:13 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = 0;
		while (s2[i])
			str[len1] = s2[i];
		len1++;
		i++;
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
/*
int main(void)
{
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    const char *str3 = "";
    const char *str4 = "42";
    char *joined1 = ft_strjoin(str1, str2);
    char *joined2 = ft_strjoin(str1, str3);
    char *joined3 = ft_strjoin(str4, str4);
    free(joined1);
    free(joined2);
    free(joined3);

    return 0;
}
*/
