/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:59:15 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/14 11:59:15 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*aquí la explicación del código anterior:
Declaramos una variable size_t llamada i y la ponemos a 0.
Recorremos la cadena mientras el carácter actual
no sea el carácter nulo.
Incrementamos i en 1 cada vez que recorremos la cadena.
Finalmente, devolvemos la longitud de la cadena.*/
