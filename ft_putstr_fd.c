/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:53:15 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 20:34:04 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}*/
void	ft_putstr_fd(const char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] && fd >= 0)
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
/*
int main(void) {
    // Prueba escribiendo en la consola (stdout, file descriptor 1)
    printf("Escribiendo en la consola:\n");
    ft_putstr_fd("Hola, Mundo!\n", 1);

    // Prueba escribiendo en un archivo
    int fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        perror("Error al abrir el archivo");
        return 1;    }
    
    ft_putstr_fd("Esto es un test de ft_putstr_f.\n", fd);

    // Cerrar el archivo después de escribir
    close(fd);

    // Confirmación
    printf("Se ha escrito en 'output.txt'.\n");

    return 0;
}*/
