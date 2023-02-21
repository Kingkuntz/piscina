/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:39:18 by kumalong          #+#    #+#             */
/*   Updated: 2023/02/16 11:39:18 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str
	int 			i;
	int 			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*La función ft_strjoin() toma dos cadenas como parámetros y devuelve una nueva
cadena que es el resultado de la concatenación de las dos cadenas.
Declaramos un puntero a la variable char str y dos variables enteras i y j.
Inicializamos i a 0 y j a 0.
Comprobamos si s1 o s2 es NULL y si lo es, devolvemos NULL.
Luego asignamos memoria para la nueva cadena y asignamos la dirección del primer byte a str.
byte a str. Si la asignación falla, devolvemos NULL.
Recorremos la cadena s1 y copiamos cada carácter en str.
Recorremos la cadena s2 y copiamos cada carácter en str.
Colocamos un carácter nulo al final de la cadena.
Devolvemos la nueva cadena.*/
