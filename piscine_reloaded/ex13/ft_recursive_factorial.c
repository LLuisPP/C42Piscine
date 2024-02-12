/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:01:07 by lprieto-          #+#    #+#             */
/*   Updated: 2023/09/07 08:31:23 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb < 13)
	{
		if (nb == 0 || nb == 1)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		return (0);
	}
	return (0);
}
