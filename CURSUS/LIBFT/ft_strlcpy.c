/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:36:14 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 13:36:14 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize -1))
		{
			dst[i] = src[i];
			i++;
		}
		(dst[i] = 0);
	}
	while (src[i])
		i++;
	return (i);
}

/*La función toma tres argumentos;
Inicializa una variable entera i a 0
Comprueba si el tamaño de la cadena de destino es mayor que 0.
Si el tamaño de la cadena de destino es mayor que 0, copia la cadena de origen en la cadena de destino, pero se detiene una vez que la cadena de destino es mayor que 0.
origen a la cadena de destino, pero se detiene cuando la cadena de destino está llena.
llena. También coloca un terminador nulo al final de la cadena de destino;
Si el tamaño de la cadena de destino es 0, copia la cadena de origen en la cadena de destino, pero no se detiene cuando la cadena de destino está llena.
destino, pero no coloca un terminador nulo al final de la cadena de destino.
cadena de destino;
Devuelve la longitud de la cadena de origen.*/
