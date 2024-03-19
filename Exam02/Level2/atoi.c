/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:42:32 by anadal-g          #+#    #+#             */
/*   Updated: 2024/03/18 17:48:55 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result = 0;
	int sign = 0;
	
	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str ==  '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main ()
{
	char *str = "---12345";

    // Convertir la cadena a un entero usando la función atoi
	ft_atoi(str);

    // Imprimir el resultado
    printf("La cadena convertida a entero es: %s\n", str);

    return 0;
}