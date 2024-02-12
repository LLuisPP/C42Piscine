/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:52:35 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/30 13:01:03 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	read_map_file(char *file_name, int size_file)
{
	int		fd;
	int		bytes_readed;
	char	*map;

	bytes_readed = 0;
	fd = open(file_name, O_RDONLY);
	if (!fd)
	{
		close(fd);
		return (0);
	}
	map = (char *) malloc(size_file * sizeof(char) + 1);
	if (!map)
	{
		close(fd);
		free(map);
		return (0);
	}
	if (bytes_readed != size_file)
	{
		close(fd);
		free(map);
		return (0);
	}
	return (1);
}
