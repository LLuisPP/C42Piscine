/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernani <mhernani@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:48:01 by mhernani          #+#    #+#             */
/*   Updated: 2023/08/29 17:39:20 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	decoder(char *input, char *dict_name);

/*INPUT_CONTROL
 * Recieve -> integer con el numero de params iniciales
 * Do ------> comprueba que son la cantidad adecuada *****
 * Output --> si son correctos nada y si no devuelve error por consola
 */
int	input_control(int n_args)
{
	if (n_args == 1)
		return (1);
	if (n_args == 2)
		return (2);
	else
	{
		write(2, "Error: Parameters", 17);
		return (0);
	}
}

/* MAIN
 * Recieve -> los params desde la consola
 * Do ------> comprueba que son del tipo que corresponde
 * Output --> devuelve errores si no cumplen y si no, entra a la fon ppal
 */
int	main(int argc, char **argv)
{
	int	args_case;
//	int	correct;

	args_case = input_control(argc -1);
	if (args_case == 0)
		return (-1);
	if (args_case == 1)
	{
		decoder(argv[1], "numbers.dict");
		return (0);
	}
	if (args_case == 2)
	{
		decoder(argv[2], argv[1]); 
		return (0);
	}
}
