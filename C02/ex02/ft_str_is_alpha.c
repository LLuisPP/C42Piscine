/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:48:25 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/22 13:32:30 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (((str[i] >= 'a') && (str[i] <= 'z')) || 
		((str[i] >= 'A') && (str[i] <= 'Z')))
	{
		i++;
	}
	if (str[i] != '\0')
	{
		return (0);
	}
	return (1);
}