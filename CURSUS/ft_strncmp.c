/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:57:17 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 14:57:17 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*He aquí la explicación del código anterior:
La función ft_strncmp() compara las dos cadenas s1 y s2.
Compara sólo los primeros (como máximo) n bytes de s1 y s2.
La función ft_strncmp() devuelve un número entero menor que, igual a o mayor que cero si s1 y s2 son iguales.
o mayor que cero si se encuentra s1, respectivamente,
es menor, igual o mayor que s2.
La comparación se realiza utilizando caracteres sin signo, de modo que '\200'
es mayor que '\0'.
La función ft_strncmp() devuelve 0 si las dos cadenas son idénticas
en caso contrario devuelve la diferencia entre los dos primeros bytes que difieren
(tratados como valores unsigned char, de modo que `\200' es
mayor que `\0', por ejemplo). 
Las cadenas de longitud cero son siempre idénticas.
Este comportamiento no es requerido por C y el código portable debería
depender únicamente del signo del valor devuelto*/
