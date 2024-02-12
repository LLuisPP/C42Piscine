/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernani <mhernani@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 08:36:20 by mhernani          #+#    #+#             */
/*   Updated: 2023/08/27 18:42:19 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_atoi(char *input);
int	lucky_search(char *input, char *dict, int size);
int	default_search(char *input, char *dict, int size_str);

int	read_file_size(char *file_name)
{
	int		fd;
	int		size_file;
	int		control;
	char	c;

	control = 1;
	size_file = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}
	while (control != 0)
	{
		control = read(fd, &c, 1);
		size_file++;
	}
	close(fd);
	return (size_file);
}

/*MAIN
 * Recieve -> los params de entrada
 * Do ------> aplasta el dicc y con la lenght creas el malloc
 * Output --> asigna una memoria exacata al malloc
 */
int	read_file(char *str, int size_file, char *file_name)
{
	int	fd;
	int	control;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		close(0);
		return (0);
	}
	control = read(fd, str, size_file);
	if (control != size_file)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	decoder(char *input, char *dict_name)
{
	char	*dict_str;
	int		size_str;
	int		control;

	size_str = read_file_size(dict_name);
	dict_str = malloc(size_str * sizeof(char));
	if (!dict_str)
	{
		free(dict_str);
		return (0);
	}
	read_file(dict_str, size_str, dict_name);
	control = 0;
	if (ft_atoi(input) < 100)
		control = lucky_search(input, dict_str, size_str);
	if (control == 0)
		control = default_search(input, dict_str, size_str);
	free(dict_str);
	return (control);
}
