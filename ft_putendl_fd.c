/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:00:15 by snunez-p          #+#    #+#             */
/*   Updated: 2024/10/09 20:41:20 by snunez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
// Implementación de ft_putchar_fd
void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

// Implementación de ft_putstr_fd
void ft_putstr_fd(const char *s, int fd) {
    int i = 0;
    if (!s) 
        return;
    while (s[i] != '\0') {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
    printf("Escribiendo en la consola:\n");
    ft_putendl_fd("Hola, Mundo!", 1);

 
    int fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        perror("Error al abrir el archivo");
        return 1;
    }
    
    ft_putendl_fd("test de ft_putendl_fd", fd);

    // Cerrar el archivo después de escribir
    close(fd);

    // Confirmación
    printf("Se ha escrito en 'output.txt'.\n");

    return 0;
}*/
