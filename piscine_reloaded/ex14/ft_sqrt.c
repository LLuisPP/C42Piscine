/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:53:18 by lprieto-          #+#    #+#             */
/*   Updated: 2023/09/07 07:18:50 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	raiz;

	raiz = 1;
	while (raiz * raiz < nb)
		raiz ++;
	if (raiz * raiz == nb)
	{
		return (raiz);
	}
	else
	{
		return (0);
	}
}
