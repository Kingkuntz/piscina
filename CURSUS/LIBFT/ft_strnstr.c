/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:25:32 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 16:25:32 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			if (n[i + 1] == '\0')
				return ((char *)h + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*Si la n es una cadena vacía, podemos devolver h.
Si h también está vacío, podemos devolver NULL.
Utilizamos un bucle while para recorrer h.
También tenemos una sentencia if para comprobar si h está
vacío o si i es mayor o igual que len.
Utilizamos otro bucle while para recorrer la n.
También tenemos una sentencia if para comprobar si h está vacío o si i + j es mayor o igual que len.
vacío o si i + j es mayor o igual que len.
Tenemos otra sentencia if para comprobar si el siguiente carácter
en la n es el terminador nulo.
Si lo es, devolvemos la dirección de h + i.
Incrementamos j.
Si el bucle while termina, incrementamos i.
Si el bucle while termina, devolvemos NULL.*/
