/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:45:33 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/18 12:41:47 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a') && (str[i] <= 'z'))
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
