/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_loader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antcampo <antcampo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:02:25 by antcampo          #+#    #+#             */
/*   Updated: 2023/08/29 11:34:48 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*read_file(char *file_name)
{
	int		fd; 
	int		size;
	char	*buffer;
	int		bytes_leidos;

	fd = open(map_generator.pl 5 5 1);
	if (fd == -1)
		return (buffer);
	size = 1;
	buffer = (char *) malloc(size * sizeof(char));
	while (read(fd, buffer, size) != 0)
	{
		free(buffer);
		size += size;
		buffer = (char *) malloc(size * sizeof(char));
	}
	close(fd);
	free(buffer);
	buffer = (char *) malloc(size * sizeof(char));
	fd = open (file_name, O_RDONLY);
	bytes_leidos = read(fd, buffer, size);
	printf("%d", bytes_leidos);
	return (buffer);
}
