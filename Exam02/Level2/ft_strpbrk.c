/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:56:42 by anadal-g          #+#    #+#             */
/*   Updated: 2024/03/19 12:04:15 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (0);
}

int main() {
    const char *str1 = "hola";
    const char *str2 = "o";
    
    char *result = ft_strpbrk(str1, str2);
    if (result != NULL) 
	{
        printf("Se encontró el caracter '%c' en str1 en la posición %ld.\n", *result, result - str1);
    } else 
	{
        printf("No se encontró ningún caracter de str2 en str1.\n");
    }
    return 0;
}