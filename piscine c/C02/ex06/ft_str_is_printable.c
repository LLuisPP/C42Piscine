/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str_is_printable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:48:46 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/18 12:56:00 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 32) && (str[i] <= 126))
	{
		i++;
	}
	if (str[i] != '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
