/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:06:20 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 15:06:20 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s[i] == (unsigned char)c))
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*Declaramos una variable "i" y le asignamos 0.
A continuación creamos un bucle while que se ejecutará mientras "i" sea menor que "n".
A continuación comprobamos si el índice actual de la cadena "s" es igual
al carácter que estamos buscando "c".
Si lo es, devolvemos la dirección de ese índice.
Si no, incrementamos "i".
Si llegamos al final del bucle while, significa que no hemos encontrado
el carácter "c" en la cadena "s", así que devolvemos NULL*/
