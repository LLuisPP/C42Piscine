/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:44:10 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/30 12:00:54 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char firstline)
{
	int	i;
	int	columns;

	i = 0;
	columns = 0;
	while (map[i] != '\0')
	{
		new_int = columns + (map[i] - '0');
		if (map[i + 1] != '\0')
			columns = columns * 10;
		++i;
	}
	return (columns);
}
