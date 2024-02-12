/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_search.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernani <mhernani@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:16:24 by mhernani          #+#    #+#             */
/*   Updated: 2023/08/29 17:40:19 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		compare_value(int position, char *input, char *dict);
void	print_name(int position, char *dict);
int		array_length(char *input);
int		reverse_str_int(char *str_int);
int		lucky_search(char *input, char *dict, int size);

int	get_pow_as_str(int power, char *dict, int size)
{
	char	*pow_str;
	int		length;
	int		i;
	int		control;

	length = power + 1 + 1;
	pow_str = malloc(length);
	if (!pow_str)
	{
		free(pow_str);
		return (0);
	}
	pow_str[length - 1] = '\0';
	pow_str[0] = 1;
	i = 1;
	while (i < length - 1)
	{
		pow_str[i] = 0;
		i++;
	}
	control = lucky_search(pow_str, dict, size);
	return (control);
}

int	default_search(char *input, char *dict, int size_str)
{
	int	length;
	int	i;
//	int	control;

	reverse_str_int(input);
	length = array_length(input);
	i = length - 1;
	while (i >= 0)
	{
		if (input[i] != '0')
		{
			lucky_search(&input[i], dict, size_str);
			get_pow_as_str(i, dict, size_str);
		}
		i--;
	}
	return (1);
}
