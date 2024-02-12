/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 07:35:39 by lprieto-          #+#    #+#             */
/*   Updated: 2023/09/12 08:20:15 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arrint;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arrint = (int *)malloc(sizeof(*arrint) * (max - min));
	i = 0;
	while (min < max)
	{
		arrint[i] = min;
		i++;
		min++;
	}
	return (arrint);
}
