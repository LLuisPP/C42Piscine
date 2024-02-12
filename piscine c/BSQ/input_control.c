/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:57:01 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/30 11:31:30 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	read_map_file(char *file_name, char *dict_name);

/*INPUT_CONTROL
 * Input --> integer con el numero de params validos
 * Do -----> comprueba que son la cantidad adecuada como minimo*****
 * Output -> si son correctos retorna uno y si no,
 *           retorna cero y printa un error por consola
 */
int	input_control(int n_args)
{
	if (n_args == 0)
	{
		write(2, "Reading default map", 19);
		read_map_file(char *file_name, int size_file);
		return (0);
	}
	if (n_args > 1)
	{
		read_map_file(char *file_name, int size_file);
		return (1);
	}
}
