/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:30:03 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/27 18:38:15 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*ARRAY_LENGTH
 * Recieve -> el array de entrada de la consola 
 * Do ------> recorre el bucle por completo
 * Output --> int con la longitud del array
 */
int	array_length(char *input)
{
	int	size;

	size = 0;
	while (input[size] != '\0')
	{
		++size;
	}
	return (size);
}

/*ARRAY_REVERSE
 * Recieve -> el array de entrada de la consola y su longitud 
 * Do ------> le da la vuelta al array
 * Output --> array de origen invertido
 */
void	array_reverse(char *input)
{
	int		i;
	char	aux;
	int		size;

	size = array_length(input);
	i = 0;
	while (i < size)
	{
		aux = input[i];
		input[i] = input[size - 1];
		input[size - 1] = aux;
		++i;
		--size;
	}
}

int	reverse_str_int(char *str_int)
{
	int	i;

	array_reverse(str_int);
	i = array_length(str_int) - 1;
	while (i >= 0)
	{
		if (str_int[i] == '0')
			str_int[i] = '\0';
		else
			return (0);
		i--;
	}
	return (1);
}
