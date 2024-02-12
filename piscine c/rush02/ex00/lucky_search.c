/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernani <mhernani@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:22:29 by mhernani          #+#    #+#             */
/*   Updated: 2023/08/27 18:45:39 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	array_length(char *input);

int	ft_atoi(char *input)
{
	int	i;
	int	new_int;

	i = 0;
	new_int = 0;
	while (input[i] != '\0')
	{
		new_int = new_int + (input[i] - '0');
		if (input[i + 1] != '\0')
			new_int = new_int * 10;
		i++;
	}
	return (new_int);
}

int	compare_value(int position, char *input, char *dict)
{
	int	i;
	int	size_input;

	i = 0;
	size_input = array_length(input);
	while ((dict[position + i] != ':') && (dict[position + i] != '\n'))
	{
		if (input[i] != dict[position + i])
		{
			return (0);
		}
		i++;
	}
	if (size_input != i)
		return (0);
	return (1);
}

void	print_name(int position, char *dict)
{
	while (dict[position] != ':')
		position++;
	position += 2;
	while (dict[position] != '\n')
	{
		write(1, &dict[position], 1);
		position++;
	}
}

int	lucky_search(char *input, char *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (compare_value(i, input, dict) == 1)
		{
			print_name(i, dict);
			return (1);
		}
		while ((dict[i] != '\n') && (i < size))
		{
			i++;
		}
		i++;
	}
	return (0);
}
