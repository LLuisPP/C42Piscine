/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:22:54 by lprieto-          #+#    #+#             */
/*   Updated: 2023/08/15 13:33:50 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	ini;
	int	fin;

	ini = 0;
	fin = size;
	while (ini < fin)
	{
		t = tab[ini];
		tab[ini] = tab[fin - 1];
		tab[fin - 1] = t;
		ini++;
		fin--;
	}
}
