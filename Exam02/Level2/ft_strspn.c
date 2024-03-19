/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:07:44 by anadal-g          #+#    #+#             */
/*   Updated: 2024/03/19 17:10:14 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Necesitaremos crear la funcion strchr para comprobar que el caracter de 
accept esta en la cadena en la cadena *s */
char	*ft_strchr(const char *accept, int s)
{
	while (*accept != '\0')
	{
		if (*accept == s) // Si encuentra el mismo caracter devuelve un puntero a su pos;
			return ((char *)accept);
		++accept;
	}
	return (0); // Si no encuentra ninguna coincidencia devuelve 0;
}
/* Va recorrer la cadena principal, mandandole a strchr la posicion de i,
para que este la busque en la cadena de *accept, si no la encuentra
la funcion devolverá 0 y se romperá el bucle, devolviendo la posicion en la 
que ha encontrado la primera ocurrencia del carácter que no estaba en accept */
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0') 
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}
