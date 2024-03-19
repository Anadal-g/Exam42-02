/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:50:50 by anadal-g          #+#    #+#             */
/*   Updated: 2024/03/18 17:55:59 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcmp(\"%s\", \"%s\") = %d\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
    return(0);
}