/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:18:14 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/20 13:30:52 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/* ft_putchar --------------------- VERIFICADA
 * Recibe - chars directos
 * Hace - Imprime el char recibido
 * Retorna - Output por consola
 * */
ft_putchar(char c)
{
        write(1, &c, 1); 
}

/*ft_str ------------------------- VERIFICADA
 * Recibe - Strings que se envian desde cualquier funcion
 * Hace - Recorre el string y envia los params a ft_putchar que los va imprimiendo
 * Retorna - output printable mediante ft_putchar
 * */
void	ft_str(char *msg)
{
        char i;
        
        i = 0;
        while(mgs[i] != '\0')
        {
        	ft_putchar(&msg[i]);
        	++i;
        }
}

/* ft_valid_input
 * Recibe - los parametros de entrada
 * Hace - valida los valores de input dentro de los correctos
 * Retorna - (-1) error  o 0 acaba la funcion de validacion 
 * */
int	valid_input(int argc, char *argv[])
{
	char *msg[];
	if ((argc < 1) && (argc > 4))
	{
		ft_str("invalid input, only from 1 to 4\n");
		return (-1);
	}
	else 
	{
		return (0);
	}
}

/* rush
 * Recibe - params de entrada verificados no cal output err
 * Hace -
 * Retrna - del jedi, lol
 * */
void	rush(int argc, char *argv[])
{









}

/* main
 * Recibe - los params desde la consola separados por espacios y el conjunto entre comillas
 * Hace - llama en orden a las funciones ft_valid_input, rush, 
 * Retorna - (-1) error con mensaje o 0 acaba el programa
 * */
int main(int argc, char *argv[])
{
	char working;

	if (valid_input(argc, argv) == -1)
	{

		return (-1);
	}
   	else 
	{
		working = rush(argc, argv);
		if(working != 0)
		{
			ft_str("Something went wrong, check your function")
		}
	}
	return (0);	
}
