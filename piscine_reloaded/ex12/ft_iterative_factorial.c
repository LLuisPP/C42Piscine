/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:14:45 by lprieto-          #+#    #+#             */
/*   Updated: 2023/09/07 11:55:29 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = 1;
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb > 0 && nb <= 12)
		{
			if (nb != 1)
				temp = temp * nb;
			else
				return (temp);
			--nb;
		}
		return (0);
	}
	return (0);
}
