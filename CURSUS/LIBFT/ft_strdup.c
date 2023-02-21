/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:28:39 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/15 12:28:39 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*s2
	int 		i;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
			return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*Primero definimos una función que toma una cadena
como argumento.
A continuación, declaramos una variable de tipo int que se utilizará para iterar
a través de la cadena.
Creamos una variable de tipo char* y utilizamos la función malloc
para asignar memoria suficiente para almacenar la cadena.
A continuación comprobamos si la función malloc ha fallado.
Si es así, devolvemos NULL.
Iniciamos un bucle while para recorrer la cadena hasta que
llegue al carácter nulo.
A continuación, asignamos cada carácter de la cadena a una posición en la memoria recién asignada.
en la memoria recién asignada.
Finalmente añadimos un carácter nulo al final de la cadena
y devolvemos la cadena.*/
