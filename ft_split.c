/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:10:34 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 21:15:22 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char *ft_strtrim(const char *s1, const char *set)
{
    size_t start = 0;
    size_t end = strlen(s1);
    
    while (s1[start] && strchr(set, s1[start]))
        start++;
    while (end > start && strchr(set, s1[end - 1]))
        end--;
    char *trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
    if (trimmed)
    {
        strncpy(trimmed, &s1[start], end - start);
        trimmed[end - start] = '\0';
    }
    return trimmed;
}

static int  count_words(char const *s, char c)
{
    int cwords;
    
    cwords = 0;
    if (!*s)
        return (0);
    while (*s)
    {
        if (*s == c)
        {
            cwords++;
            while (*s == c)
                s++;
        }
        else
            s++;
    }
    cwords++;
    return (cwords);
}
static void *ft_free(char **memry, size_t aux)
{
    size_t i;
    
    i = 0;
    while (i < aux)
    {
        free(memry[i]);
        i++;
    }
    free(memry);
    return (NULL);
}

static void split_str(char **ptr, char *str, char c, int nwords)
{
    int i;
    char *aux;
    
    i = 0;
    if ((nwords > 0) && *str)
    {
        while (i < (nwords - 1))
        {
            aux = ft_strchr(str, c);
            ptr[i++] = ft_substr(str, 0, aux - str);
            if (ptr == 0)
            {
                ft_free(ptr, i);
                return ;
            }
            while (*aux == c)
                aux++;
            str = aux;
        }
        ptr[i++] = ft_strdup(str);
        ptr[i] = 0;
    }
}
*/
char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = count_words(str, c);
			ptr = ft_calloc((nwords + 1), sizeof(char *));
			if (ptr)
				split_str(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (0);
}
/*
void print_split_result(char **result) {
    int i = 0;

    if (!result) {
        printf("Error: El resultado es NULL.\n");
        return;
    }

    while (result[i]) {
        printf("Subcadena %d: %s\n", i + 1, result[i]);
        i++;
    }
}

int main(void) {
    // Ejemplos de cadenas a dividir
    char *str1 = "Hola esto es una prueba";
    char *str2 = "    Palabras   separadas   por    espacios    ";
    char *str3 = "split#por#el#caracter#de#almohadilla";
    char *str4 = ";;;;;split;by;semicolon;;;;;";
    char **result;

    // Prueba con la cadena str1
    printf("Dividiendo '%s' por el espacio:\n", str1);
    result = ft_split(str1, ' ');
    print_split_result(result);
    ft_free(result, 5); // Liberar memoria

    // Prueba con la cadena str2
    printf("\nDividiendo '%s' por el espacio:\n", str2);
    result = ft_split(str2, ' ');
    print_split_result(result);
    ft_free(result, 5);

    // Prueba con la cadena str3
    printf("\nDividiendo '%s' por el carácter '#':\n", str3);
    result = ft_split(str3, '#');
    print_split_result(result);
    ft_free(result, 6);

    // Prueba con la cadena str4
    printf("\nDividiendo '%s' por el carácter ';':\n", str4);
    result = ft_split(str4, ';');
    print_split_result(result);
    ft_free(result, 5);

    return 0;
}*/
