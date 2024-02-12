/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:47:46 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/30 11:35:27 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		input_control(int n_args);
int		get_file_size(char *file_name);
int		read_map_file(char *file_name, int size_file);
int		sqr_creator(char *map, struct square bsq);
int		sqr_point_generator(char *map);
struct	s_square
{
	int	x;
	int	y;
	int	length;
}

int	main(int argc, char **argv)
{
	input_control(argc - 1);
}
