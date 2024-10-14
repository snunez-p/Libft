/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:14:58 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/01 15:39:12 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*p;
	size_t			i;

	total_size = num * size;
	ptr = malloc(total_size);
	p = ptr;
	i = 0;
	if (!ptr)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main() {
    size_t num = 5;
    size_t size = sizeof(int);

   
    int *array = (int *)ft_calloc(num, size);

  
    if (array != NULL) {
       
        for (size_t i = 0; i < num; i++) {
            printf("array[%zu] = %d\n", i, array[i]);
        }
        free(array); 
    } else {
        printf("Error al asignar memoria.\n");
    }

    return 0;
}
*/
