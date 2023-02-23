/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:18 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/21 16:09:18 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i+=;
		}
	}
}

/*Creamos una variable unsigned int llamada "i" y la ponemos a 0. Hacemos esto porque la vamos a usar para iterar sobre el array.
Hacemos esto porque la vamos a utilizar para iterar sobre el array.
Comprobamos si el array es nulo y si la función es nula.
Iteramos sobre el array hasta llegar al final del array.
Llamamos a la función y le pasamos el índice del array y la dirección
del índice del array. La razón por la que pasamos la dirección es porque
necesitamos poder cambiar el valor del arreglo.
Incrementamos i para poder pasar al siguiente índice del array.
No devolvemos nada*/
