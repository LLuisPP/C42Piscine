/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:52:00 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/22 08:18:17 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A') && (str[i] <= 'Z'))
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
